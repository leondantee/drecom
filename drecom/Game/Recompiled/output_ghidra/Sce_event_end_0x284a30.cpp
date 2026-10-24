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

// Function: Sce_event_end
// Address: 0x284a30 - 0x284aa0
void Sce_event_end_0x284a30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Sce_event_end_0x284a30");
#endif

    ctx->pc = 0x284a30u;

    // 0x284a30: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x284a30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x284a34: 0x8c241a98  lw          $a0, 0x1A98($at)
    ctx->pc = 0x284a34u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x284a38: 0x2403ffbf  addiu       $v1, $zero, -0x41
    ctx->pc = 0x284a38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
    // 0x284a3c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x284a3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x284a40: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x284a40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x284a44: 0xac231a98  sw          $v1, 0x1A98($at)
    ctx->pc = 0x284a44u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D1A98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A98u, _value); } while (0);
    // 0x284a48: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x284a48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x284a4c: 0x8c241a48  lw          $a0, 0x1A48($at)
    ctx->pc = 0x284a4cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1A48u));
    // 0x284a50: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x284a50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x284a54: 0x34637fff  ori         $v1, $v1, 0x7FFF
    ctx->pc = 0x284a54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32767);
    // 0x284a58: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x284a58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x284a5c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x284a5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x284a60: 0xac231a48  sw          $v1, 0x1A48($at)
    ctx->pc = 0x284a60u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D1A48u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A48u, _value); } while (0);
    // 0x284a64: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x284a64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x284a68: 0x8c241a48  lw          $a0, 0x1A48($at)
    ctx->pc = 0x284a68u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1A48u));
    // 0x284a6c: 0x3c03ff7f  lui         $v1, 0xFF7F
    ctx->pc = 0x284a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65407 << 16));
    // 0x284a70: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x284a70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x284a74: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x284a74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x284a78: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x284a78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x284a7c: 0xac231a48  sw          $v1, 0x1A48($at)
    ctx->pc = 0x284a7cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D1A48u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A48u, _value); } while (0);
    // 0x284a80: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x284a80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x284a84: 0x8c241a48  lw          $a0, 0x1A48($at)
    ctx->pc = 0x284a84u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1A48u));
    // 0x284a88: 0x2403ff7f  addiu       $v1, $zero, -0x81
    ctx->pc = 0x284a88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967167));
    // 0x284a8c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x284a8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x284a90: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x284a90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x284a94: 0xac231a48  sw          $v1, 0x1A48($at)
    ctx->pc = 0x284a94u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D1A48u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A48u, _value); } while (0);
    // 0x284a98: 0x3e00008  jr          $ra
    ctx->pc = 0x284A98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x284A98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x284AA0u;
}
