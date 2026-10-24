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

// Function: sub_00398880
// Address: 0x398880 - 0x398b50
void sub_00398880_0x398880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00398880_0x398880");
#endif

    switch (ctx->pc) {
        case 0x398880u: goto label_398880;
        case 0x398884u: goto label_398884;
        case 0x398888u: goto label_398888;
        case 0x39888cu: goto label_39888c;
        case 0x398890u: goto label_398890;
        case 0x398894u: goto label_398894;
        case 0x398898u: goto label_398898;
        case 0x39889cu: goto label_39889c;
        case 0x3988a0u: goto label_3988a0;
        case 0x3988a4u: goto label_3988a4;
        case 0x3988a8u: goto label_3988a8;
        case 0x3988acu: goto label_3988ac;
        case 0x3988b0u: goto label_3988b0;
        case 0x3988b4u: goto label_3988b4;
        case 0x3988b8u: goto label_3988b8;
        case 0x3988bcu: goto label_3988bc;
        case 0x3988c0u: goto label_3988c0;
        case 0x3988c4u: goto label_3988c4;
        case 0x3988c8u: goto label_3988c8;
        case 0x3988ccu: goto label_3988cc;
        case 0x3988d0u: goto label_3988d0;
        case 0x3988d4u: goto label_3988d4;
        case 0x3988d8u: goto label_3988d8;
        case 0x3988dcu: goto label_3988dc;
        case 0x3988e0u: goto label_3988e0;
        case 0x3988e4u: goto label_3988e4;
        case 0x3988e8u: goto label_3988e8;
        case 0x3988ecu: goto label_3988ec;
        case 0x3988f0u: goto label_3988f0;
        case 0x3988f4u: goto label_3988f4;
        case 0x3988f8u: goto label_3988f8;
        case 0x3988fcu: goto label_3988fc;
        case 0x398900u: goto label_398900;
        case 0x398904u: goto label_398904;
        case 0x398908u: goto label_398908;
        case 0x39890cu: goto label_39890c;
        case 0x398910u: goto label_398910;
        case 0x398914u: goto label_398914;
        case 0x398918u: goto label_398918;
        case 0x39891cu: goto label_39891c;
        case 0x398920u: goto label_398920;
        case 0x398924u: goto label_398924;
        case 0x398928u: goto label_398928;
        case 0x39892cu: goto label_39892c;
        case 0x398930u: goto label_398930;
        case 0x398934u: goto label_398934;
        case 0x398938u: goto label_398938;
        case 0x39893cu: goto label_39893c;
        case 0x398940u: goto label_398940;
        case 0x398944u: goto label_398944;
        case 0x398948u: goto label_398948;
        case 0x39894cu: goto label_39894c;
        case 0x398950u: goto label_398950;
        case 0x398954u: goto label_398954;
        case 0x398958u: goto label_398958;
        case 0x39895cu: goto label_39895c;
        case 0x398960u: goto label_398960;
        case 0x398964u: goto label_398964;
        case 0x398968u: goto label_398968;
        case 0x39896cu: goto label_39896c;
        case 0x398970u: goto label_398970;
        case 0x398974u: goto label_398974;
        case 0x398978u: goto label_398978;
        case 0x39897cu: goto label_39897c;
        case 0x398980u: goto label_398980;
        case 0x398984u: goto label_398984;
        case 0x398988u: goto label_398988;
        case 0x39898cu: goto label_39898c;
        case 0x398990u: goto label_398990;
        case 0x398994u: goto label_398994;
        case 0x398998u: goto label_398998;
        case 0x39899cu: goto label_39899c;
        case 0x3989a0u: goto label_3989a0;
        case 0x3989a4u: goto label_3989a4;
        case 0x3989a8u: goto label_3989a8;
        case 0x3989acu: goto label_3989ac;
        case 0x3989b0u: goto label_3989b0;
        case 0x3989b4u: goto label_3989b4;
        case 0x3989b8u: goto label_3989b8;
        case 0x3989bcu: goto label_3989bc;
        case 0x3989c0u: goto label_3989c0;
        case 0x3989c4u: goto label_3989c4;
        case 0x3989c8u: goto label_3989c8;
        case 0x3989ccu: goto label_3989cc;
        case 0x3989d0u: goto label_3989d0;
        case 0x3989d4u: goto label_3989d4;
        case 0x3989d8u: goto label_3989d8;
        case 0x3989dcu: goto label_3989dc;
        case 0x3989e0u: goto label_3989e0;
        case 0x3989e4u: goto label_3989e4;
        case 0x3989e8u: goto label_3989e8;
        case 0x3989ecu: goto label_3989ec;
        case 0x3989f0u: goto label_3989f0;
        case 0x3989f4u: goto label_3989f4;
        case 0x3989f8u: goto label_3989f8;
        case 0x3989fcu: goto label_3989fc;
        case 0x398a00u: goto label_398a00;
        case 0x398a04u: goto label_398a04;
        case 0x398a08u: goto label_398a08;
        case 0x398a0cu: goto label_398a0c;
        case 0x398a10u: goto label_398a10;
        case 0x398a14u: goto label_398a14;
        case 0x398a18u: goto label_398a18;
        case 0x398a1cu: goto label_398a1c;
        case 0x398a20u: goto label_398a20;
        case 0x398a24u: goto label_398a24;
        case 0x398a28u: goto label_398a28;
        case 0x398a2cu: goto label_398a2c;
        case 0x398a30u: goto label_398a30;
        case 0x398a34u: goto label_398a34;
        case 0x398a38u: goto label_398a38;
        case 0x398a3cu: goto label_398a3c;
        case 0x398a40u: goto label_398a40;
        case 0x398a44u: goto label_398a44;
        case 0x398a48u: goto label_398a48;
        case 0x398a4cu: goto label_398a4c;
        case 0x398a50u: goto label_398a50;
        case 0x398a54u: goto label_398a54;
        case 0x398a58u: goto label_398a58;
        case 0x398a5cu: goto label_398a5c;
        case 0x398a60u: goto label_398a60;
        case 0x398a64u: goto label_398a64;
        case 0x398a68u: goto label_398a68;
        case 0x398a6cu: goto label_398a6c;
        case 0x398a70u: goto label_398a70;
        case 0x398a74u: goto label_398a74;
        case 0x398a78u: goto label_398a78;
        case 0x398a7cu: goto label_398a7c;
        case 0x398a80u: goto label_398a80;
        case 0x398a84u: goto label_398a84;
        case 0x398a88u: goto label_398a88;
        case 0x398a8cu: goto label_398a8c;
        case 0x398a90u: goto label_398a90;
        case 0x398a94u: goto label_398a94;
        case 0x398a98u: goto label_398a98;
        case 0x398a9cu: goto label_398a9c;
        case 0x398aa0u: goto label_398aa0;
        case 0x398aa4u: goto label_398aa4;
        case 0x398aa8u: goto label_398aa8;
        case 0x398aacu: goto label_398aac;
        case 0x398ab0u: goto label_398ab0;
        case 0x398ab4u: goto label_398ab4;
        case 0x398ab8u: goto label_398ab8;
        case 0x398abcu: goto label_398abc;
        case 0x398ac0u: goto label_398ac0;
        case 0x398ac4u: goto label_398ac4;
        case 0x398ac8u: goto label_398ac8;
        case 0x398accu: goto label_398acc;
        case 0x398ad0u: goto label_398ad0;
        case 0x398ad4u: goto label_398ad4;
        case 0x398ad8u: goto label_398ad8;
        case 0x398adcu: goto label_398adc;
        case 0x398ae0u: goto label_398ae0;
        case 0x398ae4u: goto label_398ae4;
        case 0x398ae8u: goto label_398ae8;
        case 0x398aecu: goto label_398aec;
        case 0x398af0u: goto label_398af0;
        case 0x398af4u: goto label_398af4;
        case 0x398af8u: goto label_398af8;
        case 0x398afcu: goto label_398afc;
        case 0x398b00u: goto label_398b00;
        case 0x398b04u: goto label_398b04;
        case 0x398b08u: goto label_398b08;
        case 0x398b0cu: goto label_398b0c;
        case 0x398b10u: goto label_398b10;
        case 0x398b14u: goto label_398b14;
        case 0x398b18u: goto label_398b18;
        case 0x398b1cu: goto label_398b1c;
        case 0x398b20u: goto label_398b20;
        case 0x398b24u: goto label_398b24;
        case 0x398b28u: goto label_398b28;
        case 0x398b2cu: goto label_398b2c;
        case 0x398b30u: goto label_398b30;
        case 0x398b34u: goto label_398b34;
        case 0x398b38u: goto label_398b38;
        case 0x398b3cu: goto label_398b3c;
        case 0x398b40u: goto label_398b40;
        case 0x398b44u: goto label_398b44;
        case 0x398b48u: goto label_398b48;
        case 0x398b4cu: goto label_398b4c;
        default: break;
    }

    ctx->pc = 0x398880u;

label_398880:
    // 0x398880: 0x3020100  .word       0x03020100                   # sll         $zero, $v0, 4 # 03000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x398880u;
    
label_398884:
    // 0x398884: 0x7060504  .word       0x07060504                   # INVALID     $t8, $a2, 0x504 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x398884u;
    throw std::runtime_error("Unhandled REGIMM instruction: 0x6 at 0x398884 raw=0x07060504");
label_398888:
    // 0x398888: 0xb0a0908  j           func_C282420
label_39888c:
    if (ctx->pc == 0x39888Cu) {
        ctx->pc = 0x39888Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398888u;
        // 0x39888c: 0xf0e0d0c  jal         func_C383430 (Delay Slot)
        // JAL 0xC383430 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x398890u;
        goto label_398890;
    }
    ctx->pc = 0x398888u;
    ctx->pc = 0x39888Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x398888u;
    // 0x39888c: 0xf0e0d0c  jal         func_C383430 (Delay Slot)
    // JAL 0xC383430 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0xC282420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xC282420u, 0x398888u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x398890u;
label_398890:
    // 0x398890: 0x10  mfhi        $zero
    ctx->pc = 0x398890u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_398894:
    // 0x398894: 0x0  nop
    ctx->pc = 0x398894u;
    // NOP
label_398898:
    // 0x398898: 0x0  nop
    ctx->pc = 0x398898u;
    // NOP
label_39889c:
    // 0x39889c: 0x0  nop
    ctx->pc = 0x39889cu;
    // NOP
label_3988a0:
    // 0x3988a0: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x3988a0u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_3988a4:
    // 0x3988a4: 0x41a00000  .word       0x41A00000                   # INVALID     $t5, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x3988a4u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0xD at 0x3988A4 raw=0x41A00000");
label_3988a8:
    // 0x3988a8: 0x7  srav        $zero, $zero, $zero
    ctx->pc = 0x3988a8u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_3988ac:
    // 0x3988ac: 0x41a00000  .word       0x41A00000                   # INVALID     $t5, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x3988acu;
    throw std::runtime_error("Unhandled COP0 instruction format: 0xD at 0x3988AC raw=0x41A00000");
label_3988b0:
    // 0x3988b0: 0xa  movz        $zero, $zero, $zero
    ctx->pc = 0x3988b0u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_3988b4:
    // 0x3988b4: 0x41a00000  .word       0x41A00000                   # INVALID     $t5, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x3988b4u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0xD at 0x3988B4 raw=0x41A00000");
label_3988b8:
    // 0x3988b8: 0xd  break       0
    ctx->pc = 0x3988b8u;
    runtime->handleBreak(rdram, ctx);
label_3988bc:
    // 0x3988bc: 0x41a00000  .word       0x41A00000                   # INVALID     $t5, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x3988bcu;
    throw std::runtime_error("Unhandled COP0 instruction format: 0xD at 0x3988BC raw=0x41A00000");
label_3988c0:
    // 0x3988c0: 0x2d5bd0  .word       0x002D5BD0                   # mfhi        $t3 # 002D03C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3988c0u;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_3988c4:
    // 0x3988c4: 0x2d5d70  tge         $at, $t5, 373
    ctx->pc = 0x3988c4u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 13)) { runtime->handleTrap(rdram, ctx); }
label_3988c8:
    // 0x3988c8: 0x2d7e20  .word       0x002D7E20                   # add         $t7, $at, $t5 # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3988c8u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 13);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 15, (int32_t)result);     } }
label_3988cc:
    // 0x3988cc: 0x2d7e70  tge         $at, $t5, 505
    ctx->pc = 0x3988ccu;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 13)) { runtime->handleTrap(rdram, ctx); }
label_3988d0:
    // 0x3988d0: 0x2d5e50  .word       0x002D5E50                   # mfhi        $t3 # 002D0640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3988d0u;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_3988d4:
    // 0x3988d4: 0x2d6000  .word       0x002D6000                   # sll         $t4, $t5, 0 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3988d4u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 13), 0));
label_3988d8:
    // 0x3988d8: 0x2d6020  add         $t4, $at, $t5
    ctx->pc = 0x3988d8u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 13);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
label_3988dc:
    // 0x3988dc: 0x2d6200  .word       0x002D6200                   # sll         $t4, $t5, 8 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3988dcu;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 13), 8));
label_3988e0:
    // 0x3988e0: 0x2d64d0  .word       0x002D64D0                   # mfhi        $t4 # 002D04C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3988e0u;
    SET_GPR_U64(ctx, 12, ctx->hi);
label_3988e4:
    // 0x3988e4: 0x2d6a70  tge         $at, $t5, 425
    ctx->pc = 0x3988e4u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 13)) { runtime->handleTrap(rdram, ctx); }
label_3988e8:
    // 0x3988e8: 0x2d73d0  .word       0x002D73D0                   # mfhi        $t6 # 002D03C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3988e8u;
    SET_GPR_U64(ctx, 14, ctx->hi);
label_3988ec:
    // 0x3988ec: 0x2d7680  .word       0x002D7680                   # sll         $t6, $t5, 26 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3988ecu;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 13), 26));
label_3988f0:
    // 0x3988f0: 0x2d7af0  tge         $at, $t5, 491
    ctx->pc = 0x3988f0u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 13)) { runtime->handleTrap(rdram, ctx); }
label_3988f4:
    // 0x3988f4: 0x2d6940  .word       0x002D6940                   # sll         $t5, $t5, 5 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3988f4u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 13), 5));
label_3988f8:
    // 0x3988f8: 0x2d7030  tge         $at, $t5, 448
    ctx->pc = 0x3988f8u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 13)) { runtime->handleTrap(rdram, ctx); }
label_3988fc:
    // 0x3988fc: 0x0  nop
    ctx->pc = 0x3988fcu;
    // NOP
label_398900:
    // 0x398900: 0x2d5ef0  tge         $at, $t5, 379
    ctx->pc = 0x398900u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 13)) { runtime->handleTrap(rdram, ctx); }
label_398904:
    // 0x398904: 0x2d6010  .word       0x002D6010                   # mfhi        $t4 # 002D0000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x398904u;
    SET_GPR_U64(ctx, 12, ctx->hi);
label_398908:
    // 0x398908: 0x2d6030  tge         $at, $t5, 384
    ctx->pc = 0x398908u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 13)) { runtime->handleTrap(rdram, ctx); }
label_39890c:
    // 0x39890c: 0x2d6450  .word       0x002D6450                   # mfhi        $t4 # 002D0440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x39890cu;
    SET_GPR_U64(ctx, 12, ctx->hi);
label_398910:
    // 0x398910: 0x2d6500  .word       0x002D6500                   # sll         $t4, $t5, 20 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x398910u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 13), 20));
label_398914:
    // 0x398914: 0x2d6aa0  .word       0x002D6AA0                   # add         $t5, $at, $t5 # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x398914u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 13);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 13, (int32_t)result);     } }
label_398918:
    // 0x398918: 0x2d7400  .word       0x002D7400                   # sll         $t6, $t5, 16 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x398918u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 13), 16));
label_39891c:
    // 0x39891c: 0x2d76b0  tge         $at, $t5, 474
    ctx->pc = 0x39891cu;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 13)) { runtime->handleTrap(rdram, ctx); }
label_398920:
    // 0x398920: 0x2d7b20  .word       0x002D7B20                   # add         $t7, $at, $t5 # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x398920u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 13);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 15, (int32_t)result);     } }
label_398924:
    // 0x398924: 0x2d6970  tge         $at, $t5, 421
    ctx->pc = 0x398924u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 13)) { runtime->handleTrap(rdram, ctx); }
label_398928:
    // 0x398928: 0x2d7060  .word       0x002D7060                   # add         $t6, $at, $t5 # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x398928u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 13);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_39892c:
    // 0x39892c: 0x0  nop
    ctx->pc = 0x39892cu;
    // NOP
label_398930:
    // 0x398930: 0xbfbc28f6  cache       0x1C, 0x28F6($sp)
    ctx->pc = 0x398930u;
    // CACHE instruction (ignored)
label_398934:
    // 0x398934: 0x0  nop
    ctx->pc = 0x398934u;
    // NOP
label_398938:
    // 0x398938: 0x0  nop
    ctx->pc = 0x398938u;
    // NOP
label_39893c:
    // 0x39893c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x39893cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_398940:
    // 0x398940: 0x0  nop
    ctx->pc = 0x398940u;
    // NOP
label_398944:
    // 0x398944: 0x0  nop
    ctx->pc = 0x398944u;
    // NOP
label_398948:
    // 0x398948: 0x0  nop
    ctx->pc = 0x398948u;
    // NOP
label_39894c:
    // 0x39894c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x39894cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_398950:
    // 0x398950: 0x0  nop
    ctx->pc = 0x398950u;
    // NOP
label_398954:
    // 0x398954: 0x42c80000  .word       0x42C80000                   # INVALID     $s6, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x398954u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x16 at 0x398954 raw=0x42C80000");
label_398958:
    // 0x398958: 0xc3960000  ll          $s6, 0x0($gp)
    ctx->pc = 0x398958u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 28), 0); SET_GPR_S32(ctx, 22, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_39895c:
    // 0x39895c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x39895cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_398960:
    // 0x398960: 0x0  nop
    ctx->pc = 0x398960u;
    // NOP
label_398964:
    // 0x398964: 0x0  nop
    ctx->pc = 0x398964u;
    // NOP
label_398968:
    // 0x398968: 0x0  nop
    ctx->pc = 0x398968u;
    // NOP
label_39896c:
    // 0x39896c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x39896cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_398970:
    // 0x398970: 0x0  nop
    ctx->pc = 0x398970u;
    // NOP
label_398974:
    // 0x398974: 0x0  nop
    ctx->pc = 0x398974u;
    // NOP
label_398978:
    // 0x398978: 0x0  nop
    ctx->pc = 0x398978u;
    // NOP
label_39897c:
    // 0x39897c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x39897cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_398980:
    // 0x398980: 0x0  nop
    ctx->pc = 0x398980u;
    // NOP
label_398984:
    // 0x398984: 0x42c80000  .word       0x42C80000                   # INVALID     $s6, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x398984u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x16 at 0x398984 raw=0x42C80000");
label_398988:
    // 0x398988: 0xc3960000  ll          $s6, 0x0($gp)
    ctx->pc = 0x398988u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 28), 0); SET_GPR_S32(ctx, 22, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_39898c:
    // 0x39898c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x39898cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_398990:
    // 0x398990: 0x0  nop
    ctx->pc = 0x398990u;
    // NOP
label_398994:
    // 0x398994: 0x42c80000  .word       0x42C80000                   # INVALID     $s6, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x398994u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x16 at 0x398994 raw=0x42C80000");
label_398998:
    // 0x398998: 0xc3960000  ll          $s6, 0x0($gp)
    ctx->pc = 0x398998u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 28), 0); SET_GPR_S32(ctx, 22, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_39899c:
    // 0x39899c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x39899cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_3989a0:
    // 0x3989a0: 0x0  nop
    ctx->pc = 0x3989a0u;
    // NOP
label_3989a4:
    // 0x3989a4: 0x0  nop
    ctx->pc = 0x3989a4u;
    // NOP
label_3989a8:
    // 0x3989a8: 0x0  nop
    ctx->pc = 0x3989a8u;
    // NOP
label_3989ac:
    // 0x3989ac: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3989acu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_3989b0:
    // 0x3989b0: 0xbfc8f5c3  cache       0x08, -0xA3D($fp)
    ctx->pc = 0x3989b0u;
    // CACHE instruction (ignored)
label_3989b4:
    // 0x3989b4: 0x0  nop
    ctx->pc = 0x3989b4u;
    // NOP
label_3989b8:
    // 0x3989b8: 0x0  nop
    ctx->pc = 0x3989b8u;
    // NOP
label_3989bc:
    // 0x3989bc: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3989bcu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_3989c0:
    // 0x3989c0: 0x3e803e8  .word       0x03E803E8                   # mfsa        $zero # 03E803C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x3989c0u;
    SET_GPR_U32(ctx, 0, ctx->sa);
label_3989c4:
    // 0x3989c4: 0x3e803e8  .word       0x03E803E8                   # mfsa        $zero # 03E803C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x3989c4u;
    SET_GPR_U32(ctx, 0, ctx->sa);
label_3989c8:
    // 0x3989c8: 0x3e803e8  .word       0x03E803E8                   # mfsa        $zero # 03E803C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x3989c8u;
    SET_GPR_U32(ctx, 0, ctx->sa);
label_3989cc:
    // 0x3989cc: 0x3e803e8  .word       0x03E803E8                   # mfsa        $zero # 03E803C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x3989ccu;
    SET_GPR_U32(ctx, 0, ctx->sa);
label_3989d0:
    // 0x3989d0: 0x3e803e8  .word       0x03E803E8                   # mfsa        $zero # 03E803C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x3989d0u;
    SET_GPR_U32(ctx, 0, ctx->sa);
label_3989d4:
    // 0x3989d4: 0x3e803e8  .word       0x03E803E8                   # mfsa        $zero # 03E803C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x3989d4u;
    SET_GPR_U32(ctx, 0, ctx->sa);
label_3989d8:
    // 0x3989d8: 0x3e803e8  .word       0x03E803E8                   # mfsa        $zero # 03E803C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x3989d8u;
    SET_GPR_U32(ctx, 0, ctx->sa);
label_3989dc:
    // 0x3989dc: 0x3e803e8  .word       0x03E803E8                   # mfsa        $zero # 03E803C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x3989dcu;
    SET_GPR_U32(ctx, 0, ctx->sa);
label_3989e0:
    // 0x3989e0: 0x1000  sll         $v0, $zero, 0
    ctx->pc = 0x3989e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_3989e4:
    // 0x3989e4: 0x437a0000  .word       0x437A0000                   # INVALID     $k1, $k0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x3989e4u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x1B at 0x3989E4 raw=0x437A0000");
label_3989e8:
    // 0x3989e8: 0xc3fa0000  ll          $k0, 0x0($ra)
    ctx->pc = 0x3989e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 31), 0); SET_GPR_S32(ctx, 26, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_3989ec:
    // 0x3989ec: 0x42f00000  .word       0x42F00000                   # INVALID     $s7, $s0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x3989ecu;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x17 at 0x3989EC raw=0x42F00000");
label_3989f0:
    // 0x3989f0: 0x0  nop
    ctx->pc = 0x3989f0u;
    // NOP
label_3989f4:
    // 0x3989f4: 0x0  nop
    ctx->pc = 0x3989f4u;
    // NOP
label_3989f8:
    // 0x3989f8: 0x0  nop
    ctx->pc = 0x3989f8u;
    // NOP
label_3989fc:
    // 0x3989fc: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3989fcu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_398a00:
    // 0x398a00: 0x2d96d0  .word       0x002D96D0                   # mfhi        $s2 # 002D06C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x398a00u;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_398a04:
    // 0x398a04: 0x2d9df0  tge         $at, $t5, 631
    ctx->pc = 0x398a04u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 13)) { runtime->handleTrap(rdram, ctx); }
label_398a08:
    // 0x398a08: 0x2e0220  .word       0x002E0220                   # add         $zero, $at, $t6 # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x398a08u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 14);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_398a0c:
    // 0x398a0c: 0x2e0e30  tge         $at, $t6, 56
    ctx->pc = 0x398a0cu;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 14)) { runtime->handleTrap(rdram, ctx); }
label_398a10:
    // 0x398a10: 0x2daff0  tge         $at, $t5, 703
    ctx->pc = 0x398a10u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 13)) { runtime->handleTrap(rdram, ctx); }
label_398a14:
    // 0x398a14: 0x2db3b0  tge         $at, $t5, 718
    ctx->pc = 0x398a14u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 13)) { runtime->handleTrap(rdram, ctx); }
label_398a18:
    // 0x398a18: 0x2db730  tge         $at, $t5, 732
    ctx->pc = 0x398a18u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 13)) { runtime->handleTrap(rdram, ctx); }
label_398a1c:
    // 0x398a1c: 0x2dbb10  .word       0x002DBB10                   # mfhi        $s7 # 002D0300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x398a1cu;
    SET_GPR_U64(ctx, 23, ctx->hi);
label_398a20:
    // 0x398a20: 0x2dd200  .word       0x002DD200                   # sll         $k0, $t5, 8 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x398a20u;
    SET_GPR_S32(ctx, 26, (int32_t)SLL32(GPR_U32(ctx, 13), 8));
label_398a24:
    // 0x398a24: 0x2ddde0  .word       0x002DDDE0                   # add         $k1, $at, $t5 # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x398a24u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 13);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 27, (int32_t)result);     } }
label_398a28:
    // 0x398a28: 0x2dc0e0  .word       0x002DC0E0                   # add         $t8, $at, $t5 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x398a28u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 13);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 24, (int32_t)result);     } }
label_398a2c:
    // 0x398a2c: 0x2dc610  .word       0x002DC610                   # mfhi        $t8 # 002D0600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x398a2cu;
    SET_GPR_U64(ctx, 24, ctx->hi);
label_398a30:
    // 0x398a30: 0x2de480  .word       0x002DE480                   # sll         $gp, $t5, 18 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x398a30u;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 13), 18));
label_398a34:
    // 0x398a34: 0x2deb10  .word       0x002DEB10                   # mfhi        $sp # 002D0300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x398a34u;
    SET_GPR_U64(ctx, 29, ctx->hi);
label_398a38:
    // 0x398a38: 0x2df200  .word       0x002DF200                   # sll         $fp, $t5, 8 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x398a38u;
    SET_GPR_S32(ctx, 30, (int32_t)SLL32(GPR_U32(ctx, 13), 8));
label_398a3c:
    // 0x398a3c: 0x2df3b0  tge         $at, $t5, 974
    ctx->pc = 0x398a3cu;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 13)) { runtime->handleTrap(rdram, ctx); }
label_398a40:
    // 0x398a40: 0x2df590  .word       0x002DF590                   # mfhi        $fp # 002D0580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x398a40u;
    SET_GPR_U64(ctx, 30, ctx->hi);
label_398a44:
    // 0x398a44: 0x2df740  .word       0x002DF740                   # sll         $fp, $t5, 29 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x398a44u;
    SET_GPR_S32(ctx, 30, (int32_t)SLL32(GPR_U32(ctx, 13), 29));
label_398a48:
    // 0x398a48: 0x2df9e0  .word       0x002DF9E0                   # add         $ra, $at, $t5 # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x398a48u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 13);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 31, (int32_t)result);     } }
label_398a4c:
    // 0x398a4c: 0x2dffd0  .word       0x002DFFD0                   # mfhi        $ra # 002D07C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x398a4cu;
    SET_GPR_U64(ctx, 31, ctx->hi);
label_398a50:
    // 0x398a50: 0x2db2b0  tge         $at, $t5, 714
    ctx->pc = 0x398a50u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 13)) { runtime->handleTrap(rdram, ctx); }
label_398a54:
    // 0x398a54: 0x2db620  .word       0x002DB620                   # add         $s6, $at, $t5 # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x398a54u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 13);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 22, (int32_t)result);     } }
label_398a58:
    // 0x398a58: 0x2db8f0  tge         $at, $t5, 739
    ctx->pc = 0x398a58u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 13)) { runtime->handleTrap(rdram, ctx); }
label_398a5c:
    // 0x398a5c: 0x2dbb30  tge         $at, $t5, 748
    ctx->pc = 0x398a5cu;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 13)) { runtime->handleTrap(rdram, ctx); }
label_398a60:
    // 0x398a60: 0x2dd220  .word       0x002DD220                   # add         $k0, $at, $t5 # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x398a60u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 13);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 26, (int32_t)result);     } }
label_398a64:
    // 0x398a64: 0x2dde00  .word       0x002DDE00                   # sll         $k1, $t5, 24 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x398a64u;
    SET_GPR_S32(ctx, 27, (int32_t)SLL32(GPR_U32(ctx, 13), 24));
label_398a68:
    // 0x398a68: 0x2dc100  .word       0x002DC100                   # sll         $t8, $t5, 4 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x398a68u;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 13), 4));
label_398a6c:
    // 0x398a6c: 0x2dc630  tge         $at, $t5, 792
    ctx->pc = 0x398a6cu;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 13)) { runtime->handleTrap(rdram, ctx); }
label_398a70:
    // 0x398a70: 0x2de4a0  .word       0x002DE4A0                   # add         $gp, $at, $t5 # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x398a70u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 13);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 28, (int32_t)result);     } }
label_398a74:
    // 0x398a74: 0x2deb30  tge         $at, $t5, 940
    ctx->pc = 0x398a74u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 13)) { runtime->handleTrap(rdram, ctx); }
label_398a78:
    // 0x398a78: 0x2df220  .word       0x002DF220                   # add         $fp, $at, $t5 # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x398a78u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 13);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 30, (int32_t)result);     } }
label_398a7c:
    // 0x398a7c: 0x2df3d0  .word       0x002DF3D0                   # mfhi        $fp # 002D03C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x398a7cu;
    SET_GPR_U64(ctx, 30, ctx->hi);
label_398a80:
    // 0x398a80: 0x2df5b0  tge         $at, $t5, 982
    ctx->pc = 0x398a80u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 13)) { runtime->handleTrap(rdram, ctx); }
label_398a84:
    // 0x398a84: 0x2df760  .word       0x002DF760                   # add         $fp, $at, $t5 # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x398a84u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 13);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 30, (int32_t)result);     } }
label_398a88:
    // 0x398a88: 0x2dfa00  .word       0x002DFA00                   # sll         $ra, $t5, 8 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x398a88u;
    SET_GPR_S32(ctx, 31, (int32_t)SLL32(GPR_U32(ctx, 13), 8));
label_398a8c:
    // 0x398a8c: 0x2dfff0  tge         $at, $t5, 1023
    ctx->pc = 0x398a8cu;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 13)) { runtime->handleTrap(rdram, ctx); }
label_398a90:
    // 0x398a90: 0x2e0eb0  tge         $at, $t6, 58
    ctx->pc = 0x398a90u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 14)) { runtime->handleTrap(rdram, ctx); }
label_398a94:
    // 0x398a94: 0x2e1a30  tge         $at, $t6, 104
    ctx->pc = 0x398a94u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 14)) { runtime->handleTrap(rdram, ctx); }
label_398a98:
    // 0x398a98: 0x2e0ed0  .word       0x002E0ED0                   # mfhi        $at # 002E06C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x398a98u;
    SET_GPR_U64(ctx, 1, ctx->hi);
label_398a9c:
    // 0x398a9c: 0x2e1a50  .word       0x002E1A50                   # mfhi        $v1 # 002E0240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x398a9cu;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_398aa0:
    // 0x398aa0: 0x2e02a0  .word       0x002E02A0                   # add         $zero, $at, $t6 # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x398aa0u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 14);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_398aa4:
    // 0x398aa4: 0x2e04c0  .word       0x002E04C0                   # sll         $zero, $t6, 19 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x398aa4u;
    
label_398aa8:
    // 0x398aa8: 0x2e0740  .word       0x002E0740                   # sll         $zero, $t6, 29 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x398aa8u;
    
label_398aac:
    // 0x398aac: 0x2e0ba0  .word       0x002E0BA0                   # add         $at, $at, $t6 # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x398aacu;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 14);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 1, (int32_t)result);     } }
label_398ab0:
    // 0x398ab0: 0x2e02c0  .word       0x002E02C0                   # sll         $zero, $t6, 11 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x398ab0u;
    
label_398ab4:
    // 0x398ab4: 0x2e04e0  .word       0x002E04E0                   # add         $zero, $at, $t6 # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x398ab4u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 14);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_398ab8:
    // 0x398ab8: 0x2e0760  .word       0x002E0760                   # add         $zero, $at, $t6 # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x398ab8u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 14);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_398abc:
    // 0x398abc: 0x2e0bc0  .word       0x002E0BC0                   # sll         $at, $t6, 15 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x398abcu;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 14), 15));
label_398ac0:
    // 0x398ac0: 0x12  mflo        $zero
    ctx->pc = 0x398ac0u;
    SET_GPR_U64(ctx, 0, ctx->lo);
label_398ac4:
    // 0x398ac4: 0x13  mtlo        $zero
    ctx->pc = 0x398ac4u;
    ctx->lo = GPR_U64(ctx, 0);
label_398ac8:
    // 0x398ac8: 0x14  dsllv       $zero, $zero, $zero
    ctx->pc = 0x398ac8u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_398acc:
    // 0x398acc: 0x15  .word       0x00000015                   # INVALID     $zero, $zero, 0x15 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x398accu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x398ACC raw=0x00000015");
label_398ad0:
    // 0x398ad0: 0x16  dsrlv       $zero, $zero, $zero
    ctx->pc = 0x398ad0u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_398ad4:
    // 0x398ad4: 0x17  dsrav       $zero, $zero, $zero
    ctx->pc = 0x398ad4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_398ad8:
    // 0x398ad8: 0x18  mult        $zero, $zero, $zero
    ctx->pc = 0x398ad8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_398adc:
    // 0x398adc: 0x0  nop
    ctx->pc = 0x398adcu;
    // NOP
label_398ae0:
    // 0x398ae0: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x398ae0u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x398AE0 raw=0x00000001");
label_398ae4:
    // 0x398ae4: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x398ae4u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_398ae8:
    // 0x398ae8: 0x3  sra         $zero, $zero, 0
    ctx->pc = 0x398ae8u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 0));
label_398aec:
    // 0x398aec: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x398aecu;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_398af0:
    // 0x398af0: 0x5  .word       0x00000005                   # INVALID     $zero, $zero, 0x5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x398af0u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x398AF0 raw=0x00000005");
label_398af4:
    // 0x398af4: 0x6  srlv        $zero, $zero, $zero
    ctx->pc = 0x398af4u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_398af8:
    // 0x398af8: 0x7  srav        $zero, $zero, $zero
    ctx->pc = 0x398af8u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_398afc:
    // 0x398afc: 0x8  jr          $zero
label_398b00:
    if (ctx->pc == 0x398B00u) {
        ctx->pc = 0x398B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398AFCu;
        // 0x398b00: 0x9  jalr        $zero, $zero (Delay Slot)
        // JALR $0, $0 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x398B04u;
        goto label_398b04;
    }
    ctx->pc = 0x398AFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x398B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398AFCu;
        // 0x398b00: 0x9  jalr        $zero, $zero (Delay Slot)
        // JALR $0, $0 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x398AFCu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x398B04u;
label_398b04:
    // 0x398b04: 0xa  movz        $zero, $zero, $zero
    ctx->pc = 0x398b04u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_398b08:
    // 0x398b08: 0xb  movn        $zero, $zero, $zero
    ctx->pc = 0x398b08u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_398b0c:
    // 0x398b0c: 0xc  syscall     0
    ctx->pc = 0x398b0cu;
    ctx->pc = 0x398B10u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_398b10:
    // 0x398b10: 0xd  break       0
    ctx->pc = 0x398b10u;
    runtime->handleBreak(rdram, ctx);
label_398b14:
    // 0x398b14: 0xe  .word       0x0000000E                   # INVALID     $zero, $zero, 0xE # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x398b14u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x398B14 raw=0x0000000E");
label_398b18:
    // 0x398b18: 0xf  sync
    ctx->pc = 0x398b18u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_398b1c:
    // 0x398b1c: 0x10  mfhi        $zero
    ctx->pc = 0x398b1cu;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_398b20:
    // 0x398b20: 0x804  sllv        $at, $zero, $zero
    ctx->pc = 0x398b20u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_398b24:
    // 0x398b24: 0x0  nop
    ctx->pc = 0x398b24u;
    // NOP
label_398b28:
    // 0x398b28: 0x0  nop
    ctx->pc = 0x398b28u;
    // NOP
label_398b2c:
    // 0x398b2c: 0x0  nop
    ctx->pc = 0x398b2cu;
    // NOP
label_398b30:
    // 0x398b30: 0x0  nop
    ctx->pc = 0x398b30u;
    // NOP
label_398b34:
    // 0x398b34: 0x41700000  .word       0x41700000                   # INVALID     $t3, $s0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x398b34u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0xB at 0x398B34 raw=0x41700000");
label_398b38:
    // 0x398b38: 0xc1700000  ll          $s0, 0x0($t3)
    ctx->pc = 0x398b38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_398b3c:
    // 0x398b3c: 0x41f00000  .word       0x41F00000                   # INVALID     $t7, $s0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x398b3cu;
    throw std::runtime_error("Unhandled COP0 instruction format: 0xF at 0x398B3C raw=0x41F00000");
label_398b40:
    // 0x398b40: 0x4030201  bgezl       $zero, . + 4 + (0x201 << 2)
label_398b44:
    if (ctx->pc == 0x398B44u) {
        ctx->pc = 0x398B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398B40u;
        // 0x398b44: 0xd080706  jal         func_4201C18 (Delay Slot)
        // JAL 0x4201C18 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x398B48u;
        goto label_398b48;
    }
    ctx->pc = 0x398B40u;
    {
        const bool branch_taken_0x398b40 = (GPR_S32(ctx, 0) >= 0);
        if (branch_taken_0x398b40) {
            ctx->pc = 0x398B44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x398B40u;
            // 0x398b44: 0xd080706  jal         func_4201C18 (Delay Slot)
            // JAL 0x4201C18 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x399348u;
            return;
        }
    }
    ctx->pc = 0x398B48u;
label_398b48:
    // 0x398b48: 0x15140f0e  bne         $t0, $s4, . + 4 + (0xF0E << 2)
label_398b4c:
    if (ctx->pc == 0x398B4Cu) {
        ctx->pc = 0x398B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398B48u;
        // 0x398b4c: 0x1a191816  .word       0x1A191816                   # blez        $s0, . + 4 + (0x1816 << 2) # 00190000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x398B4C - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x398B50u;
        goto label_fallthrough_0x398b48;
    }
    ctx->pc = 0x398B48u;
    {
        const bool branch_taken_0x398b48 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 20));
        ctx->pc = 0x398B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398B48u;
        // 0x398b4c: 0x1a191816  .word       0x1A191816                   # blez        $s0, . + 4 + (0x1816 << 2) # 00190000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x398B4C - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x398b48) {
            ctx->pc = 0x39C784u;
            return;
        }
    }
label_fallthrough_0x398b48:
    ctx->pc = 0x398B50u;
}
