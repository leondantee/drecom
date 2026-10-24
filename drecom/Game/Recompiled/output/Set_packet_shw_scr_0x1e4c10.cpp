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

// Function: Set_packet_shw_scr
// Address: 0x1e4c10 - 0x1e4cb0
void Set_packet_shw_scr_0x1e4c10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Set_packet_shw_scr_0x1e4c10");
#endif

    switch (ctx->pc) {
        case 0x1e4c2cu: goto label_1e4c2c;
        case 0x1e4c6cu: goto label_1e4c6c;
        default: break;
    }

    ctx->pc = 0x1e4c10u;

    // 0x1e4c10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e4c10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e4c14: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x1e4c14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x1e4c18: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x1e4c18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x1e4c1c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1e4c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1e4c20: 0x8c4401ec  lw          $a0, 0x1EC($v0)
    ctx->pc = 0x1e4c20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 492)));
    // 0x1e4c24: 0xc0794b0  jal         func_1E52C0
    ctx->pc = 0x1E4C24u;
    SET_GPR_U32(ctx, 31, 0x1E4C2Cu);
    ctx->pc = 0x1E52C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E52C0u, 0x1E4C24u, 0x1E4C2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4C2Cu;
label_1e4c2c:
    // 0x1e4c2c: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x1e4c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x1e4c30: 0x24430ae8  addiu       $v1, $v0, 0xAE8
    ctx->pc = 0x1e4c30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 2792));
    // 0x1e4c34: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1e4c34u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0AE8u));
    // 0x1e4c38: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x1e4c38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x1e4c3c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1e4c3cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D0AE8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D0AE8u, _value); } while (0);
    // 0x1e4c40: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x1e4c40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x1e4c44: 0x24440ae8  addiu       $a0, $v0, 0xAE8
    ctx->pc = 0x1e4c44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 2792));
    // 0x1e4c48: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1e4c48u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0AE8u));
    // 0x1e4c4c: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x1e4c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x1e4c50: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1e4c50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1e4c54: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1e4c54u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x1e4c58: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1e4c58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1e4c5c: 0x8c250ae8  lw          $a1, 0xAE8($at)
    ctx->pc = 0x1e4c5cu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x5D0AE8u));
    // 0x1e4c60: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x1e4c60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1e4c64: 0xc0795a8  jal         func_1E56A0
    ctx->pc = 0x1E4C64u;
    SET_GPR_U32(ctx, 31, 0x1E4C6Cu);
    ctx->pc = 0x1E56A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E56A0u, 0x1E4C64u, 0x1E4C6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4C6Cu;
label_1e4c6c:
    // 0x1e4c6c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1e4c6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1e4c70: 0xac220ae8  sw          $v0, 0xAE8($at)
    ctx->pc = 0x1e4c70u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D0AE8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D0AE8u, _value); } while (0);
    // 0x1e4c74: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x1e4c74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x1e4c78: 0x24640ae8  addiu       $a0, $v1, 0xAE8
    ctx->pc = 0x1e4c78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 2792));
    // 0x1e4c7c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1e4c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0AE8u));
    // 0x1e4c80: 0x2463000f  addiu       $v1, $v1, 0xF
    ctx->pc = 0x1e4c80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x1e4c84: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1e4c84u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D0AE8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D0AE8u, _value); } while (0);
    // 0x1e4c88: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x1e4c88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x1e4c8c: 0x24650ae8  addiu       $a1, $v1, 0xAE8
    ctx->pc = 0x1e4c8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 2792));
    // 0x1e4c90: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x1e4c90u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D0AE8u));
    // 0x1e4c94: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x1e4c94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x1e4c98: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1e4c98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1e4c9c: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x1e4c9cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x1e4ca0: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x1e4ca0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e4ca4: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1e4ca4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1e4ca8: 0x3e00008  jr          $ra
    ctx->pc = 0x1E4CA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E4CA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E4CB0u;
}
