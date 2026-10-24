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

// Function: entry_00141870
// Address: 0x141870 - 0x141918
void entry_00141870_0x141870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00141870_0x141870");
#endif

    switch (ctx->pc) {
        case 0x141908u: goto label_141908;
        default: break;
    }

    ctx->pc = 0x141870u;

    // 0x141870: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x141870u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x141874: 0x8c221a48  lw          $v0, 0x1A48($at)
    ctx->pc = 0x141874u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D1A48u));
    // 0x141878: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x141878u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x14187c: 0xac2291a0  sw          $v0, -0x6E60($at)
    ctx->pc = 0x14187cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3E91A0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3E91A0u, _value); } while (0);
    // 0x141880: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x141880u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x141884: 0x8c231a48  lw          $v1, 0x1A48($at)
    ctx->pc = 0x141884u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A48u));
    // 0x141888: 0x3c02ffc0  lui         $v0, 0xFFC0
    ctx->pc = 0x141888u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65472 << 16));
    // 0x14188c: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x14188cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x141890: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x141890u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x141894: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x141894u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x141898: 0xac221a48  sw          $v0, 0x1A48($at)
    ctx->pc = 0x141898u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A48u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A48u, _value); } while (0);
    // 0x14189c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x14189cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1418a0: 0x8c221a48  lw          $v0, 0x1A48($at)
    ctx->pc = 0x1418a0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D1A48u));
    // 0x1418a4: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x1418a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x1418a8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1418a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1418ac: 0xac221a48  sw          $v0, 0x1A48($at)
    ctx->pc = 0x1418acu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A48u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A48u, _value); } while (0);
    // 0x1418b0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1418b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1418b4: 0x8c231a48  lw          $v1, 0x1A48($at)
    ctx->pc = 0x1418b4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A48u));
    // 0x1418b8: 0x3c02ff7f  lui         $v0, 0xFF7F
    ctx->pc = 0x1418b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65407 << 16));
    // 0x1418bc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1418bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1418c0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1418c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1418c4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1418c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1418c8: 0xac221a48  sw          $v0, 0x1A48($at)
    ctx->pc = 0x1418c8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A48u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A48u, _value); } while (0);
    // 0x1418cc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1418ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1418d0: 0x8c231a3c  lw          $v1, 0x1A3C($at)
    ctx->pc = 0x1418d0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A3Cu));
    // 0x1418d4: 0x3c020080  lui         $v0, 0x80
    ctx->pc = 0x1418d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)128 << 16));
    // 0x1418d8: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1418d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1418dc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1418dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1418e0: 0xac221a3c  sw          $v0, 0x1A3C($at)
    ctx->pc = 0x1418e0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A3Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A3Cu, _value); } while (0);
    // 0x1418e4: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1418e4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1418e8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1418e8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1418ec: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1418ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1418f0: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x1418f0u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1418f4: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x1418f4u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1418f8: 0x3c098000  lui         $t1, 0x8000
    ctx->pc = 0x1418f8u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)32768 << 16));
    // 0x1418fc: 0x240a000c  addiu       $t2, $zero, 0xC
    ctx->pc = 0x1418fcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x141900: 0xc059190  jal         func_164640
    ctx->pc = 0x141900u;
    SET_GPR_U32(ctx, 31, 0x141908u);
    ctx->pc = 0x164640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164640u, 0x141900u, 0x141908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141908u;
label_141908:
    // 0x141908: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x141908u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x14190c: 0x90620003  lbu         $v0, 0x3($v1)
    ctx->pc = 0x14190cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x141910: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x141910u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x141914: 0xa0620003  sb          $v0, 0x3($v1)
    ctx->pc = 0x141914u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x141918u;
}
