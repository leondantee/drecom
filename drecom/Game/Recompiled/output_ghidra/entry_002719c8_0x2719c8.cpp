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

// Function: entry_002719c8
// Address: 0x2719c8 - 0x271a50
void entry_002719c8_0x2719c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002719c8_0x2719c8");
#endif

    switch (ctx->pc) {
        case 0x2719d0u: goto label_2719d0;
        case 0x271a0cu: goto label_271a0c;
        case 0x271a18u: goto label_271a18;
        default: break;
    }

    ctx->pc = 0x2719c8u;

    // 0x2719c8: 0xc0a1244  jal         func_284910
    ctx->pc = 0x2719C8u;
    SET_GPR_U32(ctx, 31, 0x2719D0u);
    ctx->pc = 0x284910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x284910u, 0x2719C8u, 0x2719D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2719D0u;
label_2719d0:
    // 0x2719d0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2719d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2719d4: 0x8c231a48  lw          $v1, 0x1A48($at)
    ctx->pc = 0x2719d4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A48u));
    // 0x2719d8: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x2719d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x2719dc: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x2719dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2719e0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2719e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2719e4: 0xac221a48  sw          $v0, 0x1A48($at)
    ctx->pc = 0x2719e4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A48u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A48u, _value); } while (0);
    // 0x2719e8: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2719e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2719ec: 0x8c23dbc8  lw          $v1, -0x2438($at)
    ctx->pc = 0x2719ecu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3EDBC8u));
    // 0x2719f0: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x2719f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x2719f4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2719f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2719f8: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2719f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2719fc: 0xac22dbc8  sw          $v0, -0x2438($at)
    ctx->pc = 0x2719fcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3EDBC8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EDBC8u, _value); } while (0);
    // 0x271a00: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x271a00u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x271a04: 0xc0a1120  jal         func_284480
    ctx->pc = 0x271A04u;
    SET_GPR_U32(ctx, 31, 0x271A0Cu);
    ctx->pc = 0x284480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x284480u, 0x271A04u, 0x271A0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271A0Cu;
label_271a0c:
    // 0x271a0c: 0x240400b4  addiu       $a0, $zero, 0xB4
    ctx->pc = 0x271a0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
    // 0x271a10: 0xc084964  jal         func_212590
    ctx->pc = 0x271A10u;
    SET_GPR_U32(ctx, 31, 0x271A18u);
    ctx->pc = 0x212590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212590u, 0x271A10u, 0x271A18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271A18u;
label_271a18:
    // 0x271a18: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x271a18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x271a1c: 0x245095a0  addiu       $s0, $v0, -0x6A60
    ctx->pc = 0x271a1cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940064));
    // 0x271a20: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x271a20u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x6195A0u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x6195A0u, _value); } while (0);
    // 0x271a24: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x271a24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x271a28: 0x8c22dbc8  lw          $v0, -0x2438($at)
    ctx->pc = 0x271a28u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3EDBC8u));
    // 0x271a2c: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x271a2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x271a30: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x271a30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x271a34: 0xac22dbc8  sw          $v0, -0x2438($at)
    ctx->pc = 0x271a34u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3EDBC8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EDBC8u, _value); } while (0);
    // 0x271a38: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x271a38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x271a3c: 0x8c221a48  lw          $v0, 0x1A48($at)
    ctx->pc = 0x271a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D1A48u));
    // 0x271a40: 0x2107c  dsll32      $v0, $v0, 1
    ctx->pc = 0x271a40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 1));
    // 0x271a44: 0x2107e  dsrl32      $v0, $v0, 1
    ctx->pc = 0x271a44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 1));
    // 0x271a48: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x271a48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x271a4c: 0xac221a48  sw          $v0, 0x1A48($at)
    ctx->pc = 0x271a4cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A48u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A48u, _value); } while (0);
    ctx->pc = 0x271a50u;
}
