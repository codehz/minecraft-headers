#pragma once

#include "Entity.h"

class Attribute;
class MobEffectInstance;
enum class EquipmentSlot;

class Mob : public Entity {

    // virtual
    virtual void* reloadHardcodedClient(Entity::InitializationMethod, VariantParameterList const&);
    virtual void* initializeComponents(Entity::InitializationMethod, VariantParameterList const&);
    virtual bool hasComponent(Util::HashString const&) const;
    virtual ~Mob();
    virtual void* getInterpolatedBodyRot(float) const;
    virtual void* teleportTo(Vec3 const&, bool, int, int);
    virtual void* lerpTo(Vec3 const&, Vec2 const&, int);
    virtual void* normalTick();
    virtual void* baseTick();
    virtual void* rideTick();
    virtual void* playerTouch(Player&);
    virtual bool isImmobile() const;
    virtual bool isPickable();
    virtual bool isPushable() const;
    virtual bool isShootable();
    virtual bool isSneaking() const;
    virtual bool isAlive() const;
    virtual bool isSurfaceMob() const;
    virtual void setTarget(Entity*);
    virtual bool canPowerJump() const;
    virtual void* animateHurt();
    virtual void* doFireHurt(int);
    virtual void* handleEntityEvent(EntityEvent, int);
    virtual void* getEntityTypeId() const = 0;
    virtual void setOnFire(int);
    virtual void* causeFallDamage(float);
    virtual bool canAddRider(Entity&) const;
    virtual bool canBePulledIntoVehicle() const;
    virtual void* inCaravan() const;
    virtual void* stopRiding(bool, bool);
    virtual void* buildDebugInfo(std::string&) const;
    virtual void* getYHeadRot() const;
    virtual void* outOfWorld();
    virtual void* _hurt(EntityDamageSource const&, int, bool, bool);
    virtual void* readAdditionalSaveData(CompoundTag const&);
    virtual void* addAdditionalSaveData(CompoundTag&);
    virtual void* _playStepSound(BlockPos const&, int);
    virtual void* _removeRider(Entity&, bool);
    virtual void* onSizeUpdated();
    virtual void* knockback(Entity*, int, float, float, float, float, float);
    virtual void* die(EntityDamageSource const&);
    virtual void* resolveDeathLoot(bool, int, EntityDamageSource const&);
    virtual void* spawnAnim();
    virtual bool isSleeping() const;
    virtual void setSneaking(bool);
    virtual bool isSprinting() const;
    virtual void setSprinting(bool);
    virtual void* getVoicePitch();
    virtual void* playAmbientSound();
    virtual void* getAmbientSound();
    virtual void* getAmbientSoundPostponeTicks();
    virtual void* getItemInHandIcon(ItemInstance const&, int);
    virtual void* getSpeed() const;
    virtual void setSpeed(float);
    virtual bool isJumping() const;
    virtual void* getJumpPower() const;
    virtual void* heal(int);
    virtual void* actuallyHeal(int);
    virtual void* hurtEffects(EntityDamageSource const&, int, bool, bool);
    virtual void* getMeleeWeaponDamageBonus(Mob*);
    virtual void* getMeleeKnockbackBonus();
    virtual void* actuallyHurt(int, EntityDamageSource const*, bool);
    virtual bool isInvertedHealAndHarm() const;
    virtual void* travel(float, float);
    virtual void* applyFinalFriction(float, bool);
    virtual void* updateWalkAnim();
    virtual void* aiStep();
    virtual void* pushEntities();
    virtual void* lookAt(Entity*, float, float);
    virtual bool isLookingAtAnEntity();
    virtual void* checkSpawnRules(bool);
    virtual void* checkSpawnObstruction() const;
    virtual void* shouldDespawn() const;
    virtual void* getAttackAnim(float);
    virtual void* performRangedAttack(Entity&, float);
    virtual void* getCarriedItem() const;
    virtual void setCarriedItem(ItemInstance const&);
    virtual void* getItemUseDuration();
    virtual void* getItemUseStartupProgress();
    virtual void* getItemUseIntervalProgress();
    virtual void* swing();
    virtual void* getTimeAlongSwing();
    virtual void* ate();
    virtual void* getMaxHeadXRot();
    virtual void* getLastHurtByMob();
    virtual void setLastHurtByMob(Mob*);
    virtual void* getLastHurtByPlayer();
    virtual void setLastHurtByPlayer(Player*);
    virtual void* getLastHurtMob();
    virtual void setLastHurtMob(Entity*);
    virtual bool canAttack(Entity*, bool);
    virtual bool isAlliedTo(Mob*);
    virtual void* doHurtTarget(Entity*);
    virtual bool canBeControlledByRider();
    virtual void* leaveCaravan();
    virtual void* joinCaravan(Mob*);
    virtual bool hasCaravanTail() const;
    virtual void* getCaravanHead() const;
    virtual void* getMutableAttribute(Attribute const&);
    virtual void* getAttribute(Attribute const&) const;
    virtual void* getEquipmentCount() const;
    virtual void* getArmorValue();
    virtual void* getArmorCoverPercentage() const;
    virtual void* hurtArmor(int);
    virtual void setArmor(ArmorSlot, ItemInstance const&);
    virtual void* getArmor(ArmorSlot) const;
    virtual void* containerChanged(int);
    virtual void* updateEquipment();
    virtual void* clearEquipment();
    virtual void* getAllArmor() const;
    virtual void* getAllArmorID() const;
    virtual void* getAllHand() const;
    virtual void* getAllEquipment() const;
    virtual void* getArmorTypeHash();
    virtual void* sendInventory(bool);
    virtual bool canBeAffected(MobEffectInstance const&);
    virtual bool canBeAffectedByArrow(MobEffectInstance const&);
    virtual void* getDamageAfterMagicAbsorb(EntityDamageSource const&, int);
    virtual void* createAIGoals();
    virtual void* onBorn(Mob&, Mob&);
    virtual void* onLove();
    virtual void setItemSlot(EquipmentSlot, ItemInstance const&);
    virtual void* getWaterSlowDown() const;
    virtual void setOffhandSlot(ItemInstance const&);
    virtual void* getEquippedTotem();
    virtual void* consumeTotem();
    virtual void* attackAnimation(Entity*, float);
    virtual void* getAttackTime();
    virtual void* _getWalkTargetValue(BlockPos const&);
    virtual bool canExistWhenDisallowMob() const;
    virtual void* _removeWhenFarAway();
    virtual void* jumpFromGround();
    virtual void* updateAi();
    virtual void* newServerAiStep();
    virtual void* _serverAiMobStep();
    virtual void* getDamageAfterArmorAbsorb(EntityDamageSource const&, int);
    virtual void* getExperienceReward() const;
    virtual void* dropEquipment(EntityDamageSource const&, int);
    virtual void* dropBags();
    virtual void* dropContainer();
    virtual void* useNewAi() const;
    virtual void* tickDeath();
    virtual void* onEffectAdded(MobEffectInstance&);
    virtual void* onEffectUpdated(MobEffectInstance const&);
    virtual void* onEffectRemoved(MobEffectInstance&);
    virtual void* _endJump();
    virtual void* updateGliding();

};