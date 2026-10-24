#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00388E98
// Address: 0x388e98 - 0x389208
void sub_00388E98_0x388e98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00388E98_0x388e98");
#endif

    switch (ctx->pc) {
        case 0x388e98u: goto label_388e98;
        case 0x388e9cu: goto label_388e9c;
        case 0x388ea0u: goto label_388ea0;
        case 0x388ea4u: goto label_388ea4;
        case 0x388ea8u: goto label_388ea8;
        case 0x388eacu: goto label_388eac;
        case 0x388eb0u: goto label_388eb0;
        case 0x388eb4u: goto label_388eb4;
        case 0x388eb8u: goto label_388eb8;
        case 0x388ebcu: goto label_388ebc;
        case 0x388ec0u: goto label_388ec0;
        case 0x388ec4u: goto label_388ec4;
        case 0x388ec8u: goto label_388ec8;
        case 0x388eccu: goto label_388ecc;
        case 0x388ed0u: goto label_388ed0;
        case 0x388ed4u: goto label_388ed4;
        case 0x388ed8u: goto label_388ed8;
        case 0x388edcu: goto label_388edc;
        case 0x388ee0u: goto label_388ee0;
        case 0x388ee4u: goto label_388ee4;
        case 0x388ee8u: goto label_388ee8;
        case 0x388eecu: goto label_388eec;
        case 0x388ef0u: goto label_388ef0;
        case 0x388ef4u: goto label_388ef4;
        case 0x388ef8u: goto label_388ef8;
        case 0x388efcu: goto label_388efc;
        case 0x388f00u: goto label_388f00;
        case 0x388f04u: goto label_388f04;
        case 0x388f08u: goto label_388f08;
        case 0x388f0cu: goto label_388f0c;
        case 0x388f10u: goto label_388f10;
        case 0x388f14u: goto label_388f14;
        case 0x388f18u: goto label_388f18;
        case 0x388f1cu: goto label_388f1c;
        case 0x388f20u: goto label_388f20;
        case 0x388f24u: goto label_388f24;
        case 0x388f28u: goto label_388f28;
        case 0x388f2cu: goto label_388f2c;
        case 0x388f30u: goto label_388f30;
        case 0x388f34u: goto label_388f34;
        case 0x388f38u: goto label_388f38;
        case 0x388f3cu: goto label_388f3c;
        case 0x388f40u: goto label_388f40;
        case 0x388f44u: goto label_388f44;
        case 0x388f48u: goto label_388f48;
        case 0x388f4cu: goto label_388f4c;
        case 0x388f50u: goto label_388f50;
        case 0x388f54u: goto label_388f54;
        case 0x388f58u: goto label_388f58;
        case 0x388f5cu: goto label_388f5c;
        case 0x388f60u: goto label_388f60;
        case 0x388f64u: goto label_388f64;
        case 0x388f68u: goto label_388f68;
        case 0x388f6cu: goto label_388f6c;
        case 0x388f70u: goto label_388f70;
        case 0x388f74u: goto label_388f74;
        case 0x388f78u: goto label_388f78;
        case 0x388f7cu: goto label_388f7c;
        case 0x388f80u: goto label_388f80;
        case 0x388f84u: goto label_388f84;
        case 0x388f88u: goto label_388f88;
        case 0x388f8cu: goto label_388f8c;
        case 0x388f90u: goto label_388f90;
        case 0x388f94u: goto label_388f94;
        case 0x388f98u: goto label_388f98;
        case 0x388f9cu: goto label_388f9c;
        case 0x388fa0u: goto label_388fa0;
        case 0x388fa4u: goto label_388fa4;
        case 0x388fa8u: goto label_388fa8;
        case 0x388facu: goto label_388fac;
        case 0x388fb0u: goto label_388fb0;
        case 0x388fb4u: goto label_388fb4;
        case 0x388fb8u: goto label_388fb8;
        case 0x388fbcu: goto label_388fbc;
        case 0x388fc0u: goto label_388fc0;
        case 0x388fc4u: goto label_388fc4;
        case 0x388fc8u: goto label_388fc8;
        case 0x388fccu: goto label_388fcc;
        case 0x388fd0u: goto label_388fd0;
        case 0x388fd4u: goto label_388fd4;
        case 0x388fd8u: goto label_388fd8;
        case 0x388fdcu: goto label_388fdc;
        case 0x388fe0u: goto label_388fe0;
        case 0x388fe4u: goto label_388fe4;
        case 0x388fe8u: goto label_388fe8;
        case 0x388fecu: goto label_388fec;
        case 0x388ff0u: goto label_388ff0;
        case 0x388ff4u: goto label_388ff4;
        case 0x388ff8u: goto label_388ff8;
        case 0x388ffcu: goto label_388ffc;
        case 0x389000u: goto label_389000;
        case 0x389004u: goto label_389004;
        case 0x389008u: goto label_389008;
        case 0x38900cu: goto label_38900c;
        case 0x389010u: goto label_389010;
        case 0x389014u: goto label_389014;
        case 0x389018u: goto label_389018;
        case 0x38901cu: goto label_38901c;
        case 0x389020u: goto label_389020;
        case 0x389024u: goto label_389024;
        case 0x389028u: goto label_389028;
        case 0x38902cu: goto label_38902c;
        case 0x389030u: goto label_389030;
        case 0x389034u: goto label_389034;
        case 0x389038u: goto label_389038;
        case 0x38903cu: goto label_38903c;
        case 0x389040u: goto label_389040;
        case 0x389044u: goto label_389044;
        case 0x389048u: goto label_389048;
        case 0x38904cu: goto label_38904c;
        case 0x389050u: goto label_389050;
        case 0x389054u: goto label_389054;
        case 0x389058u: goto label_389058;
        case 0x38905cu: goto label_38905c;
        case 0x389060u: goto label_389060;
        case 0x389064u: goto label_389064;
        case 0x389068u: goto label_389068;
        case 0x38906cu: goto label_38906c;
        case 0x389070u: goto label_389070;
        case 0x389074u: goto label_389074;
        case 0x389078u: goto label_389078;
        case 0x38907cu: goto label_38907c;
        case 0x389080u: goto label_389080;
        case 0x389084u: goto label_389084;
        case 0x389088u: goto label_389088;
        case 0x38908cu: goto label_38908c;
        case 0x389090u: goto label_389090;
        case 0x389094u: goto label_389094;
        case 0x389098u: goto label_389098;
        case 0x38909cu: goto label_38909c;
        case 0x3890a0u: goto label_3890a0;
        case 0x3890a4u: goto label_3890a4;
        case 0x3890a8u: goto label_3890a8;
        case 0x3890acu: goto label_3890ac;
        case 0x3890b0u: goto label_3890b0;
        case 0x3890b4u: goto label_3890b4;
        case 0x3890b8u: goto label_3890b8;
        case 0x3890bcu: goto label_3890bc;
        case 0x3890c0u: goto label_3890c0;
        case 0x3890c4u: goto label_3890c4;
        case 0x3890c8u: goto label_3890c8;
        case 0x3890ccu: goto label_3890cc;
        case 0x3890d0u: goto label_3890d0;
        case 0x3890d4u: goto label_3890d4;
        case 0x3890d8u: goto label_3890d8;
        case 0x3890dcu: goto label_3890dc;
        case 0x3890e0u: goto label_3890e0;
        case 0x3890e4u: goto label_3890e4;
        case 0x3890e8u: goto label_3890e8;
        case 0x3890ecu: goto label_3890ec;
        case 0x3890f0u: goto label_3890f0;
        case 0x3890f4u: goto label_3890f4;
        case 0x3890f8u: goto label_3890f8;
        case 0x3890fcu: goto label_3890fc;
        case 0x389100u: goto label_389100;
        case 0x389104u: goto label_389104;
        case 0x389108u: goto label_389108;
        case 0x38910cu: goto label_38910c;
        case 0x389110u: goto label_389110;
        case 0x389114u: goto label_389114;
        case 0x389118u: goto label_389118;
        case 0x38911cu: goto label_38911c;
        case 0x389120u: goto label_389120;
        case 0x389124u: goto label_389124;
        case 0x389128u: goto label_389128;
        case 0x38912cu: goto label_38912c;
        case 0x389130u: goto label_389130;
        case 0x389134u: goto label_389134;
        case 0x389138u: goto label_389138;
        case 0x38913cu: goto label_38913c;
        case 0x389140u: goto label_389140;
        case 0x389144u: goto label_389144;
        case 0x389148u: goto label_389148;
        case 0x38914cu: goto label_38914c;
        case 0x389150u: goto label_389150;
        case 0x389154u: goto label_389154;
        case 0x389158u: goto label_389158;
        case 0x38915cu: goto label_38915c;
        case 0x389160u: goto label_389160;
        case 0x389164u: goto label_389164;
        case 0x389168u: goto label_389168;
        case 0x38916cu: goto label_38916c;
        case 0x389170u: goto label_389170;
        case 0x389174u: goto label_389174;
        case 0x389178u: goto label_389178;
        case 0x38917cu: goto label_38917c;
        case 0x389180u: goto label_389180;
        case 0x389184u: goto label_389184;
        case 0x389188u: goto label_389188;
        case 0x38918cu: goto label_38918c;
        case 0x389190u: goto label_389190;
        case 0x389194u: goto label_389194;
        case 0x389198u: goto label_389198;
        case 0x38919cu: goto label_38919c;
        case 0x3891a0u: goto label_3891a0;
        case 0x3891a4u: goto label_3891a4;
        case 0x3891a8u: goto label_3891a8;
        case 0x3891acu: goto label_3891ac;
        case 0x3891b0u: goto label_3891b0;
        case 0x3891b4u: goto label_3891b4;
        case 0x3891b8u: goto label_3891b8;
        case 0x3891bcu: goto label_3891bc;
        case 0x3891c0u: goto label_3891c0;
        case 0x3891c4u: goto label_3891c4;
        case 0x3891c8u: goto label_3891c8;
        case 0x3891ccu: goto label_3891cc;
        case 0x3891d0u: goto label_3891d0;
        case 0x3891d4u: goto label_3891d4;
        case 0x3891d8u: goto label_3891d8;
        case 0x3891dcu: goto label_3891dc;
        case 0x3891e0u: goto label_3891e0;
        case 0x3891e4u: goto label_3891e4;
        case 0x3891e8u: goto label_3891e8;
        case 0x3891ecu: goto label_3891ec;
        case 0x3891f0u: goto label_3891f0;
        case 0x3891f4u: goto label_3891f4;
        case 0x3891f8u: goto label_3891f8;
        case 0x3891fcu: goto label_3891fc;
        case 0x389200u: goto label_389200;
        case 0x389204u: goto label_389204;
        default: break;
    }

    ctx->pc = 0x388e98u;

label_388e98:
    // 0x388e98: 0x43960000  .word       0x43960000                   # INVALID     $gp, $s6, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x388e98u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x1C at 0x388E98 raw=0x43960000");
label_388e9c:
    // 0x388e9c: 0x8000005  j           func_000014
label_388ea0:
    if (ctx->pc == 0x388EA0u) {
        ctx->pc = 0x388EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388E9Cu;
        // 0x388ea0: 0xa  movz        $zero, $zero, $zero (Delay Slot)
        if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x388EA4u;
        goto label_388ea4;
    }
    ctx->pc = 0x388E9Cu;
    ctx->pc = 0x388EA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x388E9Cu;
    // 0x388ea0: 0xa  movz        $zero, $zero, $zero (Delay Slot)
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14u, 0x388E9Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x388EA4u;
label_388ea4:
    // 0x388ea4: 0x0  nop
    ctx->pc = 0x388ea4u;
    // NOP
label_388ea8:
    // 0x388ea8: 0x0  nop
    ctx->pc = 0x388ea8u;
    // NOP
label_388eac:
    // 0x388eac: 0x0  nop
    ctx->pc = 0x388eacu;
    // NOP
label_388eb0:
    // 0x388eb0: 0x40032  tlt         $zero, $a0, 0
    ctx->pc = 0x388eb0u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 4)) { runtime->handleTrap(rdram, ctx); }
label_388eb4:
    // 0x388eb4: 0x10096  .word       0x00010096                   # dsrlv       $zero, $at, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x388eb4u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 1) >> (GPR_U32(ctx, 0) & 0x3F));
label_388eb8:
    // 0x388eb8: 0x20064  .word       0x00020064                   # and         $zero, $zero, $v0 # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x388eb8u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) & GPR_U64(ctx, 2));
label_388ebc:
    // 0x388ebc: 0x500fa  dsrl        $zero, $a1, 3
    ctx->pc = 0x388ebcu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 5) >> 3);
label_388ec0:
    // 0x388ec0: 0x2012c  .word       0x0002012C                   # dadd        $zero, $zero, $v0 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x388ec0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 2); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_388ec4:
    // 0x388ec4: 0x60000  sll         $zero, $a2, 0
    ctx->pc = 0x388ec4u;
    
label_388ec8:
    // 0x388ec8: 0x70032  tlt         $zero, $a3, 0
    ctx->pc = 0x388ec8u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 7)) { runtime->handleTrap(rdram, ctx); }
label_388ecc:
    // 0x388ecc: 0x0  nop
    ctx->pc = 0x388eccu;
    // NOP
label_388ed0:
    // 0x388ed0: 0x10064  .word       0x00010064                   # and         $zero, $zero, $at # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x388ed0u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) & GPR_U64(ctx, 1));
label_388ed4:
    // 0x388ed4: 0x100c8  .word       0x000100C8                   # jr          $zero # 000100C0 <InstrIdType: CPU_SPECIAL>
label_388ed8:
    if (ctx->pc == 0x388ED8u) {
        ctx->pc = 0x388ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388ED4u;
        // 0x388ed8: 0x200fa  dsrl        $zero, $v0, 3 (Delay Slot)
        SET_GPR_U64(ctx, 0, GPR_U64(ctx, 2) >> 3);
        ctx->in_delay_slot = false;
        ctx->pc = 0x388EDCu;
        goto label_388edc;
    }
    ctx->pc = 0x388ED4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x388ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388ED4u;
        // 0x388ed8: 0x200fa  dsrl        $zero, $v0, 3 (Delay Slot)
        SET_GPR_U64(ctx, 0, GPR_U64(ctx, 2) >> 3);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x388ED4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x388EDCu;
label_388edc:
    // 0x388edc: 0x10190  .word       0x00010190                   # mfhi        $zero # 00010180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x388edcu;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_388ee0:
    // 0x388ee0: 0x1000a  movz        $zero, $zero, $at
    ctx->pc = 0x388ee0u;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_388ee4:
    // 0x388ee4: 0x10032  tlt         $zero, $at, 0
    ctx->pc = 0x388ee4u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_388ee8:
    // 0x388ee8: 0x20064  .word       0x00020064                   # and         $zero, $zero, $v0 # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x388ee8u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) & GPR_U64(ctx, 2));
label_388eec:
    // 0x388eec: 0x100c8  .word       0x000100C8                   # jr          $zero # 000100C0 <InstrIdType: CPU_SPECIAL>
label_388ef0:
    if (ctx->pc == 0x388EF0u) {
        ctx->pc = 0x388EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388EECu;
        // 0x388ef0: 0x10032  tlt         $zero, $at, 0 (Delay Slot)
        if (GPR_S64(ctx, 0) < GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x388EF4u;
        goto label_388ef4;
    }
    ctx->pc = 0x388EECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x388EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388EECu;
        // 0x388ef0: 0x10032  tlt         $zero, $at, 0 (Delay Slot)
        if (GPR_S64(ctx, 0) < GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x388EECu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x388EF4u;
label_388ef4:
    // 0x388ef4: 0x10032  tlt         $zero, $at, 0
    ctx->pc = 0x388ef4u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_388ef8:
    // 0x388ef8: 0x14  dsllv       $zero, $zero, $zero
    ctx->pc = 0x388ef8u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_388efc:
    // 0x388efc: 0x0  nop
    ctx->pc = 0x388efcu;
    // NOP
label_388f00:
    // 0x388f00: 0x10000  sll         $zero, $at, 0
    ctx->pc = 0x388f00u;
    
label_388f04:
    // 0x388f04: 0x20064  .word       0x00020064                   # and         $zero, $zero, $v0 # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x388f04u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) & GPR_U64(ctx, 2));
label_388f08:
    // 0x388f08: 0x20064  .word       0x00020064                   # and         $zero, $zero, $v0 # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x388f08u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) & GPR_U64(ctx, 2));
label_388f0c:
    // 0x388f0c: 0x60064  .word       0x00060064                   # and         $zero, $zero, $a2 # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x388f0cu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) & GPR_U64(ctx, 6));
label_388f10:
    // 0x388f10: 0x20064  .word       0x00020064                   # and         $zero, $zero, $v0 # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x388f10u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) & GPR_U64(ctx, 2));
label_388f14:
    // 0x388f14: 0x60064  .word       0x00060064                   # and         $zero, $zero, $a2 # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x388f14u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) & GPR_U64(ctx, 6));
label_388f18:
    // 0x388f18: 0x0  nop
    ctx->pc = 0x388f18u;
    // NOP
label_388f1c:
    // 0x388f1c: 0x0  nop
    ctx->pc = 0x388f1cu;
    // NOP
label_388f20:
    // 0x388f20: 0x40096  .word       0x00040096                   # dsrlv       $zero, $a0, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x388f20u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 4) >> (GPR_U32(ctx, 0) & 0x3F));
label_388f24:
    // 0x388f24: 0x10032  tlt         $zero, $at, 0
    ctx->pc = 0x388f24u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_388f28:
    // 0x388f28: 0x20064  .word       0x00020064                   # and         $zero, $zero, $v0 # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x388f28u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) & GPR_U64(ctx, 2));
label_388f2c:
    // 0x388f2c: 0x32  tlt         $zero, $zero, 0
    ctx->pc = 0x388f2cu;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_388f30:
    // 0x388f30: 0x64  .word       0x00000064                   # and         $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x388f30u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_388f34:
    // 0x388f34: 0x64  .word       0x00000064                   # and         $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x388f34u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_388f38:
    // 0x388f38: 0x0  nop
    ctx->pc = 0x388f38u;
    // NOP
label_388f3c:
    // 0x388f3c: 0x0  nop
    ctx->pc = 0x388f3cu;
    // NOP
label_388f40:
    // 0x388f40: 0x10064  .word       0x00010064                   # and         $zero, $zero, $at # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x388f40u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) & GPR_U64(ctx, 1));
label_388f44:
    // 0x388f44: 0x78  dsll        $zero, $zero, 1
    ctx->pc = 0x388f44u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << 1);
label_388f48:
    // 0x388f48: 0x32  tlt         $zero, $zero, 0
    ctx->pc = 0x388f48u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_388f4c:
    // 0x388f4c: 0x2012c  .word       0x0002012C                   # dadd        $zero, $zero, $v0 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x388f4cu;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 2); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_388f50:
    // 0x388f50: 0x64  .word       0x00000064                   # and         $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x388f50u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_388f54:
    // 0x388f54: 0x100c8  .word       0x000100C8                   # jr          $zero # 000100C0 <InstrIdType: CPU_SPECIAL>
label_388f58:
    if (ctx->pc == 0x388F58u) {
        ctx->pc = 0x388F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388F54u;
        // 0x388f58: 0x2012c  .word       0x0002012C                   # dadd        $zero, $zero, $v0 # 00000100 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 2); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x388F5Cu;
        goto label_388f5c;
    }
    ctx->pc = 0x388F54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x388F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388F54u;
        // 0x388f58: 0x2012c  .word       0x0002012C                   # dadd        $zero, $zero, $v0 # 00000100 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 2); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x388F54u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x388F5Cu;
label_388f5c:
    // 0x388f5c: 0x60000  sll         $zero, $a2, 0
    ctx->pc = 0x388f5cu;
    
label_388f60:
    // 0x388f60: 0x32  tlt         $zero, $zero, 0
    ctx->pc = 0x388f60u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_388f64:
    // 0x388f64: 0x10050  .word       0x00010050                   # mfhi        $zero # 00010040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x388f64u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_388f68:
    // 0x388f68: 0x10064  .word       0x00010064                   # and         $zero, $zero, $at # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x388f68u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) & GPR_U64(ctx, 1));
label_388f6c:
    // 0x388f6c: 0x1e  ddiv        $zero, $zero, $zero
    ctx->pc = 0x388f6cu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x388F6C raw=0x0000001E");
label_388f70:
    // 0x388f70: 0x3c  dsll32      $zero, $zero, 0
    ctx->pc = 0x388f70u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (32 + 0));
label_388f74:
    // 0x388f74: 0x1005a  .word       0x0001005A                   # div         $zero, $zero, $at # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x388f74u;
    { int32_t divisor = GPR_S32(ctx, 1);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_388f78:
    // 0x388f78: 0x1e  ddiv        $zero, $zero, $zero
    ctx->pc = 0x388f78u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x388F78 raw=0x0000001E");
label_388f7c:
    // 0x388f7c: 0x28  mfsa        $zero
    ctx->pc = 0x388f7cu;
    SET_GPR_U32(ctx, 0, ctx->sa);
label_388f80:
    // 0x388f80: 0x78  dsll        $zero, $zero, 1
    ctx->pc = 0x388f80u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << 1);
label_388f84:
    // 0x388f84: 0x100b4  teq         $zero, $at, 2
    ctx->pc = 0x388f84u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_388f88:
    // 0x388f88: 0x3c  dsll32      $zero, $zero, 0
    ctx->pc = 0x388f88u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (32 + 0));
label_388f8c:
    // 0x388f8c: 0x50  .word       0x00000050                   # mfhi        $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x388f8cu;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_388f90:
    // 0x388f90: 0x64  .word       0x00000064                   # and         $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x388f90u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_388f94:
    // 0x388f94: 0x100c8  .word       0x000100C8                   # jr          $zero # 000100C0 <InstrIdType: CPU_SPECIAL>
label_388f98:
    if (ctx->pc == 0x388F98u) {
        ctx->pc = 0x388F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388F94u;
        // 0x388f98: 0x64  .word       0x00000064                   # and         $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x388F9Cu;
        goto label_388f9c;
    }
    ctx->pc = 0x388F94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x388F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388F94u;
        // 0x388f98: 0x64  .word       0x00000064                   # and         $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x388F94u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x388F9Cu;
label_388f9c:
    // 0x388f9c: 0x100c8  .word       0x000100C8                   # jr          $zero # 000100C0 <InstrIdType: CPU_SPECIAL>
label_388fa0:
    if (ctx->pc == 0x388FA0u) {
        ctx->pc = 0x388FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388F9Cu;
        // 0x388fa0: 0xa  movz        $zero, $zero, $zero (Delay Slot)
        if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x388FA4u;
        goto label_388fa4;
    }
    ctx->pc = 0x388F9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x388FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388F9Cu;
        // 0x388fa0: 0xa  movz        $zero, $zero, $zero (Delay Slot)
        if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x388F9Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x388FA4u;
label_388fa4:
    // 0x388fa4: 0x0  nop
    ctx->pc = 0x388fa4u;
    // NOP
label_388fa8:
    // 0x388fa8: 0x64  .word       0x00000064                   # and         $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x388fa8u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_388fac:
    // 0x388fac: 0x10064  .word       0x00010064                   # and         $zero, $zero, $at # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x388facu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) & GPR_U64(ctx, 1));
label_388fb0:
    // 0x388fb0: 0x20064  .word       0x00020064                   # and         $zero, $zero, $v0 # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x388fb0u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) & GPR_U64(ctx, 2));
label_388fb4:
    // 0x388fb4: 0x0  nop
    ctx->pc = 0x388fb4u;
    // NOP
label_388fb8:
    // 0x388fb8: 0x0  nop
    ctx->pc = 0x388fb8u;
    // NOP
label_388fbc:
    // 0x388fbc: 0x0  nop
    ctx->pc = 0x388fbcu;
    // NOP
label_388fc0:
    // 0x388fc0: 0x388eb0  tge         $at, $t8, 570
    ctx->pc = 0x388fc0u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 24)) { runtime->handleTrap(rdram, ctx); }
label_388fc4:
    // 0x388fc4: 0x388ed0  .word       0x00388ED0                   # mfhi        $s1 # 003806C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x388fc4u;
    SET_GPR_U64(ctx, 17, ctx->hi);
label_388fc8:
    // 0x388fc8: 0x388ee0  .word       0x00388EE0                   # add         $s1, $at, $t8 # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x388fc8u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 24);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 17, (int32_t)result);     } }
label_388fcc:
    // 0x388fcc: 0x388ef0  tge         $at, $t8, 571
    ctx->pc = 0x388fccu;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 24)) { runtime->handleTrap(rdram, ctx); }
label_388fd0:
    // 0x388fd0: 0x388ef8  .word       0x00388EF8                   # dsll        $s1, $t8, 27 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x388fd0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 24) << 27);
label_388fd4:
    // 0x388fd4: 0x388f00  .word       0x00388F00                   # sll         $s1, $t8, 28 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x388fd4u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 24), 28));
label_388fd8:
    // 0x388fd8: 0x388f10  .word       0x00388F10                   # mfhi        $s1 # 00380700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x388fd8u;
    SET_GPR_U64(ctx, 17, ctx->hi);
label_388fdc:
    // 0x388fdc: 0x388f20  .word       0x00388F20                   # add         $s1, $at, $t8 # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x388fdcu;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 24);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 17, (int32_t)result);     } }
label_388fe0:
    // 0x388fe0: 0x388f30  tge         $at, $t8, 572
    ctx->pc = 0x388fe0u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 24)) { runtime->handleTrap(rdram, ctx); }
label_388fe4:
    // 0x388fe4: 0x388f40  .word       0x00388F40                   # sll         $s1, $t8, 29 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x388fe4u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 24), 29));
label_388fe8:
    // 0x388fe8: 0x388fb0  tge         $at, $t8, 574
    ctx->pc = 0x388fe8u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 24)) { runtime->handleTrap(rdram, ctx); }
label_388fec:
    // 0x388fec: 0x388f60  .word       0x00388F60                   # add         $s1, $at, $t8 # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x388fecu;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 24);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 17, (int32_t)result);     } }
label_388ff0:
    // 0x388ff0: 0x388f70  tge         $at, $t8, 573
    ctx->pc = 0x388ff0u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 24)) { runtime->handleTrap(rdram, ctx); }
label_388ff4:
    // 0x388ff4: 0x388f90  .word       0x00388F90                   # mfhi        $s1 # 00380780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x388ff4u;
    SET_GPR_U64(ctx, 17, ctx->hi);
label_388ff8:
    // 0x388ff8: 0x388f98  .word       0x00388F98                   # mult        $s1, $at, $t8 # 00000780 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x388ff8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 24); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
label_388ffc:
    // 0x388ffc: 0x388fb0  tge         $at, $t8, 574
    ctx->pc = 0x388ffcu;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 24)) { runtime->handleTrap(rdram, ctx); }
label_389000:
    // 0x389000: 0x388f50  .word       0x00388F50                   # mfhi        $s1 # 00380740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x389000u;
    SET_GPR_U64(ctx, 17, ctx->hi);
label_389004:
    // 0x389004: 0x388fb0  tge         $at, $t8, 574
    ctx->pc = 0x389004u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 24)) { runtime->handleTrap(rdram, ctx); }
label_389008:
    // 0x389008: 0x388fb0  tge         $at, $t8, 574
    ctx->pc = 0x389008u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 24)) { runtime->handleTrap(rdram, ctx); }
label_38900c:
    // 0x38900c: 0x388fb0  tge         $at, $t8, 574
    ctx->pc = 0x38900cu;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 24)) { runtime->handleTrap(rdram, ctx); }
label_389010:
    // 0x389010: 0x388fb0  tge         $at, $t8, 574
    ctx->pc = 0x389010u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 24)) { runtime->handleTrap(rdram, ctx); }
label_389014:
    // 0x389014: 0x388fb0  tge         $at, $t8, 574
    ctx->pc = 0x389014u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 24)) { runtime->handleTrap(rdram, ctx); }
label_389018:
    // 0x389018: 0x388fb0  tge         $at, $t8, 574
    ctx->pc = 0x389018u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 24)) { runtime->handleTrap(rdram, ctx); }
label_38901c:
    // 0x38901c: 0x388fb0  tge         $at, $t8, 574
    ctx->pc = 0x38901cu;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 24)) { runtime->handleTrap(rdram, ctx); }
label_389020:
    // 0x389020: 0x388fb0  tge         $at, $t8, 574
    ctx->pc = 0x389020u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 24)) { runtime->handleTrap(rdram, ctx); }
label_389024:
    // 0x389024: 0x388fb0  tge         $at, $t8, 574
    ctx->pc = 0x389024u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 24)) { runtime->handleTrap(rdram, ctx); }
label_389028:
    // 0x389028: 0x388fb0  tge         $at, $t8, 574
    ctx->pc = 0x389028u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 24)) { runtime->handleTrap(rdram, ctx); }
label_38902c:
    // 0x38902c: 0x388fb0  tge         $at, $t8, 574
    ctx->pc = 0x38902cu;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 24)) { runtime->handleTrap(rdram, ctx); }
label_389030:
    // 0x389030: 0x388fb0  tge         $at, $t8, 574
    ctx->pc = 0x389030u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 24)) { runtime->handleTrap(rdram, ctx); }
label_389034:
    // 0x389034: 0x388fa8  .word       0x00388FA8                   # mfsa        $s1 # 00380780 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x389034u;
    SET_GPR_U32(ctx, 17, ctx->sa);
label_389038:
    // 0x389038: 0x388fb0  tge         $at, $t8, 574
    ctx->pc = 0x389038u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 24)) { runtime->handleTrap(rdram, ctx); }
label_38903c:
    // 0x38903c: 0x388fa0  .word       0x00388FA0                   # add         $s1, $at, $t8 # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x38903cu;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 24);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 17, (int32_t)result);     } }
label_389040:
    // 0x389040: 0x1be7c0  sll         $gp, $k1, 31
    ctx->pc = 0x389040u;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 27), 31));
label_389044:
    // 0x389044: 0x1be9d0  .word       0x001BE9D0                   # mfhi        $sp # 001B01C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x389044u;
    SET_GPR_U64(ctx, 29, ctx->hi);
label_389048:
    // 0x389048: 0x1bed10  .word       0x001BED10                   # mfhi        $sp # 001B0500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x389048u;
    SET_GPR_U64(ctx, 29, ctx->hi);
label_38904c:
    // 0x38904c: 0x1bef80  sll         $sp, $k1, 30
    ctx->pc = 0x38904cu;
    SET_GPR_S32(ctx, 29, (int32_t)SLL32(GPR_U32(ctx, 27), 30));
label_389050:
    // 0x389050: 0x1bf200  sll         $fp, $k1, 8
    ctx->pc = 0x389050u;
    SET_GPR_S32(ctx, 30, (int32_t)SLL32(GPR_U32(ctx, 27), 8));
label_389054:
    // 0x389054: 0x1bf4d0  .word       0x001BF4D0                   # mfhi        $fp # 001B04C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x389054u;
    SET_GPR_U64(ctx, 30, ctx->hi);
label_389058:
    // 0x389058: 0x1bf750  .word       0x001BF750                   # mfhi        $fp # 001B0740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x389058u;
    SET_GPR_U64(ctx, 30, ctx->hi);
label_38905c:
    // 0x38905c: 0x1bf9d0  .word       0x001BF9D0                   # mfhi        $ra # 001B01C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x38905cu;
    SET_GPR_U64(ctx, 31, ctx->hi);
label_389060:
    // 0x389060: 0x1bfca0  .word       0x001BFCA0                   # add         $ra, $zero, $k1 # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x389060u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 27);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 31, (int32_t)result);     } }
label_389064:
    // 0x389064: 0x1bff10  .word       0x001BFF10                   # mfhi        $ra # 001B0700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x389064u;
    SET_GPR_U64(ctx, 31, ctx->hi);
label_389068:
    // 0x389068: 0x1c0190  .word       0x001C0190                   # mfhi        $zero # 001C0180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x389068u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_38906c:
    // 0x38906c: 0x1c0460  .word       0x001C0460                   # add         $zero, $zero, $gp # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x38906cu;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 28);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_389070:
    // 0x389070: 0x1c06d0  .word       0x001C06D0                   # mfhi        $zero # 001C06C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x389070u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_389074:
    // 0x389074: 0x1c0950  .word       0x001C0950                   # mfhi        $at # 001C0140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x389074u;
    SET_GPR_U64(ctx, 1, ctx->hi);
label_389078:
    // 0x389078: 0x1c0c20  .word       0x001C0C20                   # add         $at, $zero, $gp # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x389078u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 28);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 1, (int32_t)result);     } }
label_38907c:
    // 0x38907c: 0x1c0e90  .word       0x001C0E90                   # mfhi        $at # 001C0680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x38907cu;
    SET_GPR_U64(ctx, 1, ctx->hi);
label_389080:
    // 0x389080: 0x1c1110  .word       0x001C1110                   # mfhi        $v0 # 001C0100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x389080u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_389084:
    // 0x389084: 0x1c13e0  .word       0x001C13E0                   # add         $v0, $zero, $gp # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x389084u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 28);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 2, (int32_t)result);     } }
label_389088:
    // 0x389088: 0x0  nop
    ctx->pc = 0x389088u;
    // NOP
label_38908c:
    // 0x38908c: 0x0  nop
    ctx->pc = 0x38908cu;
    // NOP
label_389090:
    // 0x389090: 0x1b5170  tge         $zero, $k1, 325
    ctx->pc = 0x389090u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 27)) { runtime->handleTrap(rdram, ctx); }
label_389094:
    // 0x389094: 0x1b5330  tge         $zero, $k1, 332
    ctx->pc = 0x389094u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 27)) { runtime->handleTrap(rdram, ctx); }
label_389098:
    // 0x389098: 0x1b57b0  tge         $zero, $k1, 350
    ctx->pc = 0x389098u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 27)) { runtime->handleTrap(rdram, ctx); }
label_38909c:
    // 0x38909c: 0x1bbbc0  sll         $s7, $k1, 15
    ctx->pc = 0x38909cu;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 27), 15));
label_3890a0:
    // 0x3890a0: 0x1bd1b0  tge         $zero, $k1, 838
    ctx->pc = 0x3890a0u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 27)) { runtime->handleTrap(rdram, ctx); }
label_3890a4:
    // 0x3890a4: 0x1bd480  sll         $k0, $k1, 18
    ctx->pc = 0x3890a4u;
    SET_GPR_S32(ctx, 26, (int32_t)SLL32(GPR_U32(ctx, 27), 18));
label_3890a8:
    // 0x3890a8: 0x1bd750  .word       0x001BD750                   # mfhi        $k0 # 001B0740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3890a8u;
    SET_GPR_U64(ctx, 26, ctx->hi);
label_3890ac:
    // 0x3890ac: 0x1b6d90  .word       0x001B6D90                   # mfhi        $t5 # 001B0580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3890acu;
    SET_GPR_U64(ctx, 13, ctx->hi);
label_3890b0:
    // 0x3890b0: 0x1b83f0  tge         $zero, $k1, 527
    ctx->pc = 0x3890b0u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 27)) { runtime->handleTrap(rdram, ctx); }
label_3890b4:
    // 0x3890b4: 0x1b9840  sll         $s3, $k1, 1
    ctx->pc = 0x3890b4u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 27), 1));
label_3890b8:
    // 0x3890b8: 0x1bad10  .word       0x001BAD10                   # mfhi        $s5 # 001B0500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3890b8u;
    SET_GPR_U64(ctx, 21, ctx->hi);
label_3890bc:
    // 0x3890bc: 0x0  nop
    ctx->pc = 0x3890bcu;
    // NOP
label_3890c0:
    // 0x3890c0: 0x1c1cc0  sll         $v1, $gp, 19
    ctx->pc = 0x3890c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 28), 19));
label_3890c4:
    // 0x3890c4: 0x1c1ed0  .word       0x001C1ED0                   # mfhi        $v1 # 001C06C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3890c4u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_3890c8:
    // 0x3890c8: 0x1c21f0  tge         $zero, $gp, 135
    ctx->pc = 0x3890c8u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 28)) { runtime->handleTrap(rdram, ctx); }
label_3890cc:
    // 0x3890cc: 0x1c2420  .word       0x001C2420                   # add         $a0, $zero, $gp # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3890ccu;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 28);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 4, (int32_t)result);     } }
label_3890d0:
    // 0x3890d0: 0x1c2690  .word       0x001C2690                   # mfhi        $a0 # 001C0680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3890d0u;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_3890d4:
    // 0x3890d4: 0x1c2950  .word       0x001C2950                   # mfhi        $a1 # 001C0140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3890d4u;
    SET_GPR_U64(ctx, 5, ctx->hi);
label_3890d8:
    // 0x3890d8: 0x1c2b80  sll         $a1, $gp, 14
    ctx->pc = 0x3890d8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 28), 14));
label_3890dc:
    // 0x3890dc: 0x1c2df0  tge         $zero, $gp, 183
    ctx->pc = 0x3890dcu;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 28)) { runtime->handleTrap(rdram, ctx); }
label_3890e0:
    // 0x3890e0: 0x1c30b0  tge         $zero, $gp, 194
    ctx->pc = 0x3890e0u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 28)) { runtime->handleTrap(rdram, ctx); }
label_3890e4:
    // 0x3890e4: 0x1c2b80  sll         $a1, $gp, 14
    ctx->pc = 0x3890e4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 28), 14));
label_3890e8:
    // 0x3890e8: 0x1c2df0  tge         $zero, $gp, 183
    ctx->pc = 0x3890e8u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 28)) { runtime->handleTrap(rdram, ctx); }
label_3890ec:
    // 0x3890ec: 0x1c30b0  tge         $zero, $gp, 194
    ctx->pc = 0x3890ecu;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 28)) { runtime->handleTrap(rdram, ctx); }
label_3890f0:
    // 0x3890f0: 0x1c32e0  .word       0x001C32E0                   # add         $a2, $zero, $gp # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3890f0u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 28);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 6, (int32_t)result);     } }
label_3890f4:
    // 0x3890f4: 0x1c3550  .word       0x001C3550                   # mfhi        $a2 # 001C0540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3890f4u;
    SET_GPR_U64(ctx, 6, ctx->hi);
label_3890f8:
    // 0x3890f8: 0x1c3810  .word       0x001C3810                   # mfhi        $a3 # 001C0000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3890f8u;
    SET_GPR_U64(ctx, 7, ctx->hi);
label_3890fc:
    // 0x3890fc: 0x1c3a40  sll         $a3, $gp, 9
    ctx->pc = 0x3890fcu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 28), 9));
label_389100:
    // 0x389100: 0x1c3cb0  tge         $zero, $gp, 242
    ctx->pc = 0x389100u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 28)) { runtime->handleTrap(rdram, ctx); }
label_389104:
    // 0x389104: 0x1c3f70  tge         $zero, $gp, 253
    ctx->pc = 0x389104u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 28)) { runtime->handleTrap(rdram, ctx); }
label_389108:
    // 0x389108: 0x0  nop
    ctx->pc = 0x389108u;
    // NOP
label_38910c:
    // 0x38910c: 0x0  nop
    ctx->pc = 0x38910cu;
    // NOP
label_389110:
    // 0x389110: 0x1c16d0  .word       0x001C16D0                   # mfhi        $v0 # 001C06C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x389110u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_389114:
    // 0x389114: 0x1c1890  .word       0x001C1890                   # mfhi        $v1 # 001C0080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x389114u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_389118:
    // 0x389118: 0x1b57b0  tge         $zero, $k1, 350
    ctx->pc = 0x389118u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 27)) { runtime->handleTrap(rdram, ctx); }
label_38911c:
    // 0x38911c: 0x1bbbc0  sll         $s7, $k1, 15
    ctx->pc = 0x38911cu;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 27), 15));
label_389120:
    // 0x389120: 0x1bd1b0  tge         $zero, $k1, 838
    ctx->pc = 0x389120u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 27)) { runtime->handleTrap(rdram, ctx); }
label_389124:
    // 0x389124: 0x1bd480  sll         $k0, $k1, 18
    ctx->pc = 0x389124u;
    SET_GPR_S32(ctx, 26, (int32_t)SLL32(GPR_U32(ctx, 27), 18));
label_389128:
    // 0x389128: 0x1bd750  .word       0x001BD750                   # mfhi        $k0 # 001B0740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x389128u;
    SET_GPR_U64(ctx, 26, ctx->hi);
label_38912c:
    // 0x38912c: 0x1b6d90  .word       0x001B6D90                   # mfhi        $t5 # 001B0580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x38912cu;
    SET_GPR_U64(ctx, 13, ctx->hi);
label_389130:
    // 0x389130: 0x1b83f0  tge         $zero, $k1, 527
    ctx->pc = 0x389130u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 27)) { runtime->handleTrap(rdram, ctx); }
label_389134:
    // 0x389134: 0x1b9840  sll         $s3, $k1, 1
    ctx->pc = 0x389134u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 27), 1));
label_389138:
    // 0x389138: 0x1bad10  .word       0x001BAD10                   # mfhi        $s5 # 001B0500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x389138u;
    SET_GPR_U64(ctx, 21, ctx->hi);
label_38913c:
    // 0x38913c: 0x0  nop
    ctx->pc = 0x38913cu;
    // NOP
label_389140:
    // 0x389140: 0x1c47d0  .word       0x001C47D0                   # mfhi        $t0 # 001C07C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x389140u;
    SET_GPR_U64(ctx, 8, ctx->hi);
label_389144:
    // 0x389144: 0x1c49e0  .word       0x001C49E0                   # add         $t1, $zero, $gp # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x389144u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 28);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
label_389148:
    // 0x389148: 0x1c4d00  sll         $t1, $gp, 20
    ctx->pc = 0x389148u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 28), 20));
label_38914c:
    // 0x38914c: 0x1c4ea0  .word       0x001C4EA0                   # add         $t1, $zero, $gp # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x38914cu;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 28);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
label_389150:
    // 0x389150: 0x1c5110  .word       0x001C5110                   # mfhi        $t2 # 001C0100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x389150u;
    SET_GPR_U64(ctx, 10, ctx->hi);
label_389154:
    // 0x389154: 0x1c53d0  .word       0x001C53D0                   # mfhi        $t2 # 001C03C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x389154u;
    SET_GPR_U64(ctx, 10, ctx->hi);
label_389158:
    // 0x389158: 0x1c5570  tge         $zero, $gp, 341
    ctx->pc = 0x389158u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 28)) { runtime->handleTrap(rdram, ctx); }
label_38915c:
    // 0x38915c: 0x1c57e0  .word       0x001C57E0                   # add         $t2, $zero, $gp # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x38915cu;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 28);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 10, (int32_t)result);     } }
label_389160:
    // 0x389160: 0x1c5aa0  .word       0x001C5AA0                   # add         $t3, $zero, $gp # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x389160u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 28);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
label_389164:
    // 0x389164: 0x1c5570  tge         $zero, $gp, 341
    ctx->pc = 0x389164u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 28)) { runtime->handleTrap(rdram, ctx); }
label_389168:
    // 0x389168: 0x1c57e0  .word       0x001C57E0                   # add         $t2, $zero, $gp # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x389168u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 28);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 10, (int32_t)result);     } }
label_38916c:
    // 0x38916c: 0x1c5aa0  .word       0x001C5AA0                   # add         $t3, $zero, $gp # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x38916cu;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 28);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
label_389170:
    // 0x389170: 0x1c5c40  sll         $t3, $gp, 17
    ctx->pc = 0x389170u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 28), 17));
label_389174:
    // 0x389174: 0x1c5eb0  tge         $zero, $gp, 378
    ctx->pc = 0x389174u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 28)) { runtime->handleTrap(rdram, ctx); }
label_389178:
    // 0x389178: 0x1c6170  tge         $zero, $gp, 389
    ctx->pc = 0x389178u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 28)) { runtime->handleTrap(rdram, ctx); }
label_38917c:
    // 0x38917c: 0x1c6310  .word       0x001C6310                   # mfhi        $t4 # 001C0300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x38917cu;
    SET_GPR_U64(ctx, 12, ctx->hi);
label_389180:
    // 0x389180: 0x1c6580  sll         $t4, $gp, 22
    ctx->pc = 0x389180u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 28), 22));
label_389184:
    // 0x389184: 0x1c6840  sll         $t5, $gp, 1
    ctx->pc = 0x389184u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 28), 1));
label_389188:
    // 0x389188: 0x0  nop
    ctx->pc = 0x389188u;
    // NOP
label_38918c:
    // 0x38918c: 0x0  nop
    ctx->pc = 0x38918cu;
    // NOP
label_389190:
    // 0x389190: 0x1c4220  .word       0x001C4220                   # add         $t0, $zero, $gp # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x389190u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 28);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
label_389194:
    // 0x389194: 0x1c43e0  .word       0x001C43E0                   # add         $t0, $zero, $gp # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x389194u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 28);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
label_389198:
    // 0x389198: 0x1b57b0  tge         $zero, $k1, 350
    ctx->pc = 0x389198u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 27)) { runtime->handleTrap(rdram, ctx); }
label_38919c:
    // 0x38919c: 0x1bbbc0  sll         $s7, $k1, 15
    ctx->pc = 0x38919cu;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 27), 15));
label_3891a0:
    // 0x3891a0: 0x1bd1b0  tge         $zero, $k1, 838
    ctx->pc = 0x3891a0u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 27)) { runtime->handleTrap(rdram, ctx); }
label_3891a4:
    // 0x3891a4: 0x1bd480  sll         $k0, $k1, 18
    ctx->pc = 0x3891a4u;
    SET_GPR_S32(ctx, 26, (int32_t)SLL32(GPR_U32(ctx, 27), 18));
label_3891a8:
    // 0x3891a8: 0x1bd750  .word       0x001BD750                   # mfhi        $k0 # 001B0740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3891a8u;
    SET_GPR_U64(ctx, 26, ctx->hi);
label_3891ac:
    // 0x3891ac: 0x1b6d90  .word       0x001B6D90                   # mfhi        $t5 # 001B0580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3891acu;
    SET_GPR_U64(ctx, 13, ctx->hi);
label_3891b0:
    // 0x3891b0: 0x1b83f0  tge         $zero, $k1, 527
    ctx->pc = 0x3891b0u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 27)) { runtime->handleTrap(rdram, ctx); }
label_3891b4:
    // 0x3891b4: 0x1b9840  sll         $s3, $k1, 1
    ctx->pc = 0x3891b4u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 27), 1));
label_3891b8:
    // 0x3891b8: 0x1bad10  .word       0x001BAD10                   # mfhi        $s5 # 001B0500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3891b8u;
    SET_GPR_U64(ctx, 21, ctx->hi);
label_3891bc:
    // 0x3891bc: 0x0  nop
    ctx->pc = 0x3891bcu;
    // NOP
label_3891c0:
    // 0x3891c0: 0x1b50f0  tge         $zero, $k1, 323
    ctx->pc = 0x3891c0u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 27)) { runtime->handleTrap(rdram, ctx); }
label_3891c4:
    // 0x3891c4: 0x1c1650  .word       0x001C1650                   # mfhi        $v0 # 001C0640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3891c4u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_3891c8:
    // 0x3891c8: 0x1c41a0  .word       0x001C41A0                   # add         $t0, $zero, $gp # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3891c8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 28);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
label_3891cc:
    // 0x3891cc: 0x1b50f0  tge         $zero, $k1, 323
    ctx->pc = 0x3891ccu;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 27)) { runtime->handleTrap(rdram, ctx); }
label_3891d0:
    // 0x3891d0: 0x1b50f0  tge         $zero, $k1, 323
    ctx->pc = 0x3891d0u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 27)) { runtime->handleTrap(rdram, ctx); }
label_3891d4:
    // 0x3891d4: 0x1b50f0  tge         $zero, $k1, 323
    ctx->pc = 0x3891d4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 27)) { runtime->handleTrap(rdram, ctx); }
label_3891d8:
    // 0x3891d8: 0x0  nop
    ctx->pc = 0x3891d8u;
    // NOP
label_3891dc:
    // 0x3891dc: 0x0  nop
    ctx->pc = 0x3891dcu;
    // NOP
label_3891e0:
    // 0x3891e0: 0x1d11e0  .word       0x001D11E0                   # add         $v0, $zero, $sp # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3891e0u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 29);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 2, (int32_t)result);     } }
label_3891e4:
    // 0x3891e4: 0x1d11e0  .word       0x001D11E0                   # add         $v0, $zero, $sp # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3891e4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 29);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 2, (int32_t)result);     } }
label_3891e8:
    // 0x3891e8: 0x1d11e0  .word       0x001D11E0                   # add         $v0, $zero, $sp # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3891e8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 29);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 2, (int32_t)result);     } }
label_3891ec:
    // 0x3891ec: 0x1d11e0  .word       0x001D11E0                   # add         $v0, $zero, $sp # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3891ecu;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 29);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 2, (int32_t)result);     } }
label_3891f0:
    // 0x3891f0: 0x1d11e0  .word       0x001D11E0                   # add         $v0, $zero, $sp # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3891f0u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 29);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 2, (int32_t)result);     } }
label_3891f4:
    // 0x3891f4: 0x1d11e0  .word       0x001D11E0                   # add         $v0, $zero, $sp # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3891f4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 29);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 2, (int32_t)result);     } }
label_3891f8:
    // 0x3891f8: 0x1d11e0  .word       0x001D11E0                   # add         $v0, $zero, $sp # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3891f8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 29);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 2, (int32_t)result);     } }
label_3891fc:
    // 0x3891fc: 0x1d11e0  .word       0x001D11E0                   # add         $v0, $zero, $sp # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3891fcu;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 29);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 2, (int32_t)result);     } }
label_389200:
    // 0x389200: 0x1d11e0  .word       0x001D11E0                   # add         $v0, $zero, $sp # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x389200u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 29);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 2, (int32_t)result);     } }
label_389204:
    // 0x389204: 0x0  nop
    ctx->pc = 0x389204u;
    // NOP
    ctx->pc = 0x389208u;
}
