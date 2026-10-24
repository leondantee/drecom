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

// Function: entry_0015648c
// Address: 0x15648c - 0x156594
void entry_0015648c_0x15648c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015648c_0x15648c");
#endif

    switch (ctx->pc) {
        case 0x1564e4u: goto label_1564e4;
        case 0x15657cu: goto label_15657c;
        default: break;
    }

    ctx->pc = 0x15648cu;

    // 0x15648c: 0x92655524  lbu         $a1, 0x5524($s3)
    ctx->pc = 0x15648cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 21796)));
    // 0x156490: 0x30030001  andi        $v1, $zero, 0x1
    ctx->pc = 0x156490u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)1);
    // 0x156494: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x156494u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x156498: 0x2402fffb  addiu       $v0, $zero, -0x5
    ctx->pc = 0x156498u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x15649c: 0xa21824  and         $v1, $a1, $v0
    ctx->pc = 0x15649cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x1564a0: 0x641025  or          $v0, $v1, $a0
    ctx->pc = 0x1564a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1564a4: 0xa2625524  sb          $v0, 0x5524($s3)
    ctx->pc = 0x1564a4u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 21796), (uint8_t)GPR_U32(ctx, 2));
    // 0x1564a8: 0x92645524  lbu         $a0, 0x5524($s3)
    ctx->pc = 0x1564a8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 21796)));
    // 0x1564ac: 0x30020003  andi        $v0, $zero, 0x3
    ctx->pc = 0x1564acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)3);
    // 0x1564b0: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x1564b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1564b4: 0x2402ffe7  addiu       $v0, $zero, -0x19
    ctx->pc = 0x1564b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967271));
    // 0x1564b8: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x1564b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x1564bc: 0x832825  or          $a1, $a0, $v1
    ctx->pc = 0x1564bcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1564c0: 0xa2655524  sb          $a1, 0x5524($s3)
    ctx->pc = 0x1564c0u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 21796), (uint8_t)GPR_U32(ctx, 5));
    // 0x1564c4: 0x26625508  addiu       $v0, $s3, 0x5508
    ctx->pc = 0x1564c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 21768));
    // 0x1564c8: 0xaea20008  sw          $v0, 0x8($s5)
    ctx->pc = 0x1564c8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 8), GPR_U32(ctx, 2));
    // 0x1564cc: 0x3c04005d  lui         $a0, 0x5D
    ctx->pc = 0x1564ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)93 << 16));
    // 0x1564d0: 0x24851614  addiu       $a1, $a0, 0x1614
    ctx->pc = 0x1564d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 5652));
    // 0x1564d4: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x1564d4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1564d8: 0x72a02e28  paddub      $a1, $s5, $zero
    ctx->pc = 0x1564d8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
    // 0x1564dc: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x1564DCu;
    SET_GPR_U32(ctx, 31, 0x1564E4u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x1564DCu, 0x1564E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1564E4u;
label_1564e4:
    // 0x1564e4: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x1564e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x1564e8: 0x2447ecd0  addiu       $a3, $v0, -0x1330
    ctx->pc = 0x1564e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962384));
    // 0x1564ec: 0x266654e0  addiu       $a2, $s3, 0x54E0
    ctx->pc = 0x1564ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 21728));
    // 0x1564f0: 0xdce50000  ld          $a1, 0x0($a3)
    ctx->pc = 0x1564f0u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x47ECD0u));
    // 0x1564f4: 0xdce40008  ld          $a0, 0x8($a3)
    ctx->pc = 0x1564f4u;
    SET_GPR_U64(ctx, 4, FAST_READ64(0x47ECD8u));
    // 0x1564f8: 0xdce30010  ld          $v1, 0x10($a3)
    ctx->pc = 0x1564f8u;
    SET_GPR_U64(ctx, 3, FAST_READ64(0x47ECE0u));
    // 0x1564fc: 0xdce20018  ld          $v0, 0x18($a3)
    ctx->pc = 0x1564fcu;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x47ECE8u));
    // 0x156500: 0xfcc50000  sd          $a1, 0x0($a2)
    ctx->pc = 0x156500u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 5));
    // 0x156504: 0xfcc40008  sd          $a0, 0x8($a2)
    ctx->pc = 0x156504u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 4));
    // 0x156508: 0xfcc30010  sd          $v1, 0x10($a2)
    ctx->pc = 0x156508u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 3));
    // 0x15650c: 0xfcc20018  sd          $v0, 0x18($a2)
    ctx->pc = 0x15650cu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 24), GPR_U64(ctx, 2));
    // 0x156510: 0xdce20020  ld          $v0, 0x20($a3)
    ctx->pc = 0x156510u;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x47ECF0u));
    // 0x156514: 0xfcc20020  sd          $v0, 0x20($a2)
    ctx->pc = 0x156514u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 32), GPR_U64(ctx, 2));
    // 0x156518: 0x926454fc  lbu         $a0, 0x54FC($s3)
    ctx->pc = 0x156518u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 21756)));
    // 0x15651c: 0x30020001  andi        $v0, $zero, 0x1
    ctx->pc = 0x15651cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)1);
    // 0x156520: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x156520u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x156524: 0x2402fffb  addiu       $v0, $zero, -0x5
    ctx->pc = 0x156524u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x156528: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x156528u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x15652c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x15652cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x156530: 0xa26254fc  sb          $v0, 0x54FC($s3)
    ctx->pc = 0x156530u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 21756), (uint8_t)GPR_U32(ctx, 2));
    // 0x156534: 0x926454fc  lbu         $a0, 0x54FC($s3)
    ctx->pc = 0x156534u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 21756)));
    // 0x156538: 0x30020003  andi        $v0, $zero, 0x3
    ctx->pc = 0x156538u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)3);
    // 0x15653c: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x15653cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x156540: 0x2402ffe7  addiu       $v0, $zero, -0x19
    ctx->pc = 0x156540u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967271));
    // 0x156544: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x156544u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x156548: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x156548u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x15654c: 0xa26254fc  sb          $v0, 0x54FC($s3)
    ctx->pc = 0x15654cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 21756), (uint8_t)GPR_U32(ctx, 2));
    // 0x156550: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x156550u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x156554: 0x8c22f740  lw          $v0, -0x8C0($at)
    ctx->pc = 0x156554u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3EF740u));
    // 0x156558: 0x441000e  bgez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x156558u;
    {
        const bool branch_taken_0x156558 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x156558) {
            ctx->pc = 0x156594u;
            return;
        }
    }
    ctx->pc = 0x156560u;
    // 0x156560: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x156560u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x156564: 0x8c22f748  lw          $v0, -0x8B8($at)
    ctx->pc = 0x156564u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3EF748u));
    // 0x156568: 0x38440001  xori        $a0, $v0, 0x1
    ctx->pc = 0x156568u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x15656c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x15656cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x156570: 0xac24f748  sw          $a0, -0x8B8($at)
    ctx->pc = 0x156570u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x3EF748u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EF748u, _value); } while (0);
    // 0x156574: 0xc067694  jal         func_19DA50
    ctx->pc = 0x156574u;
    SET_GPR_U32(ctx, 31, 0x15657Cu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x156574u, 0x15657Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15657Cu;
label_15657c:
    // 0x15657c: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x15657cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x156580: 0x109043  sra         $s2, $s0, 1
    ctx->pc = 0x156580u;
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 16), 1));
    // 0x156584: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x156584u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x156588: 0xac32f740  sw          $s2, -0x8C0($at)
    ctx->pc = 0x156588u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 18)); ps2TraceGuestWrite(rdram, 0x3EF740u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EF740u, _value); } while (0);
    // 0x15658c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x15658Cu;
    {
        const bool branch_taken_0x15658c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15658c) {
            ctx->pc = 0x1565B4u;
            return;
        }
    }
    ctx->pc = 0x156594u;
}
