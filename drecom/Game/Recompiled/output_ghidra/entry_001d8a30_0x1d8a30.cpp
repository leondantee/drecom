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

// Function: entry_001d8a30
// Address: 0x1d8a30 - 0x1d8a7c
void entry_001d8a30_0x1d8a30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d8a30_0x1d8a30");
#endif

    switch (ctx->pc) {
        case 0x1d8a3cu: goto label_1d8a3c;
        case 0x1d8a68u: goto label_1d8a68;
        case 0x1d8a74u: goto label_1d8a74;
        default: break;
    }

    ctx->pc = 0x1d8a30u;

    // 0x1d8a30: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1d8a30u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1d8a34: 0xc0674fc  jal         func_19D3F0
    ctx->pc = 0x1D8A34u;
    SET_GPR_U32(ctx, 31, 0x1D8A3Cu);
    ctx->pc = 0x19D3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D3F0u, 0x1D8A34u, 0x1D8A3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8A3Cu;
label_1d8a3c:
    // 0x1d8a3c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1d8a3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1d8a40: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x1d8a40u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x1d8a44: 0x3c02feff  lui         $v0, 0xFEFF
    ctx->pc = 0x1d8a44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65279 << 16));
    // 0x1d8a48: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1d8a48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1d8a4c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1d8a4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1d8a50: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1d8a50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1d8a54: 0xac221a98  sw          $v0, 0x1A98($at)
    ctx->pc = 0x1d8a54u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A98u, _value); } while (0);
    // 0x1d8a58: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1d8a58u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1d8a5c: 0x3c050002  lui         $a1, 0x2
    ctx->pc = 0x1d8a5cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2 << 16));
    // 0x1d8a60: 0xc0ce754  jal         func_339D50
    ctx->pc = 0x1D8A60u;
    SET_GPR_U32(ctx, 31, 0x1D8A68u);
    ctx->pc = 0x339D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x339D50u, 0x1D8A60u, 0x1D8A68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8A68u;
label_1d8a68:
    // 0x1d8a68: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x1d8a68u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1d8a6c: 0xc0d7184  jal         func_35C610
    ctx->pc = 0x1D8A6Cu;
    SET_GPR_U32(ctx, 31, 0x1D8A74u);
    ctx->pc = 0x35C610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35C610u, 0x1D8A6Cu, 0x1D8A74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8A74u;
label_1d8a74:
    // 0x1d8a74: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d8a74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d8a78: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x1d8a78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    ctx->pc = 0x1d8a7cu;
}
