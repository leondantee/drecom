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

// Function: Em09_R0_reset
// Address: 0x351cd0 - 0x351d20
void Em09_R0_reset_0x351cd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em09_R0_reset_0x351cd0");
#endif

    switch (ctx->pc) {
        case 0x351cd0u: goto label_351cd0;
        case 0x351cd4u: goto label_351cd4;
        case 0x351cd8u: goto label_351cd8;
        case 0x351cdcu: goto label_351cdc;
        case 0x351ce0u: goto label_351ce0;
        case 0x351ce4u: goto label_351ce4;
        case 0x351ce8u: goto label_351ce8;
        case 0x351cecu: goto label_351cec;
        case 0x351cf0u: goto label_351cf0;
        case 0x351cf4u: goto label_351cf4;
        case 0x351cf8u: goto label_351cf8;
        case 0x351cfcu: goto label_351cfc;
        case 0x351d00u: goto label_351d00;
        case 0x351d04u: goto label_351d04;
        case 0x351d08u: goto label_351d08;
        case 0x351d0cu: goto label_351d0c;
        case 0x351d10u: goto label_351d10;
        case 0x351d14u: goto label_351d14;
        case 0x351d18u: goto label_351d18;
        case 0x351d1cu: goto label_351d1c;
        default: break;
    }

    ctx->pc = 0x351cd0u;

label_351cd0:
    // 0x351cd0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x351cd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_351cd4:
    // 0x351cd4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x351cd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
label_351cd8:
    // 0x351cd8: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x351cd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
label_351cdc:
    // 0x351cdc: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x351cdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_351ce0:
    // 0x351ce0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x351ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_351ce4:
    // 0x351ce4: 0x90421308  lbu         $v0, 0x1308($v0)
    ctx->pc = 0x351ce4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4872)));
label_351ce8:
    // 0x351ce8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x351ce8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_351cec:
    // 0x351cec: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x351cecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
label_351cf0:
    // 0x351cf0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x351cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_351cf4:
    // 0x351cf4: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x351cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_351cf8:
    // 0x351cf8: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x351cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_351cfc:
    // 0x351cfc: 0x2442a5c0  addiu       $v0, $v0, -0x5A40
    ctx->pc = 0x351cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944192));
label_351d00:
    // 0x351d00: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x351d00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_351d04:
    // 0x351d04: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x351d04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_351d08:
    // 0x351d08: 0x40f809  jalr        $v0
label_351d0c:
    if (ctx->pc == 0x351D0Cu) {
        ctx->pc = 0x351D10u;
        goto label_351d10;
    }
    ctx->pc = 0x351D08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x351D10u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x351D08u, 0x351D10u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x351D10u;
label_351d10:
    // 0x351d10: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x351d10u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_351d14:
    // 0x351d14: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x351d14u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_351d18:
    // 0x351d18: 0x3e00008  jr          $ra
label_351d1c:
    if (ctx->pc == 0x351D1Cu) {
        ctx->pc = 0x351D20u;
        goto label_fallthrough_0x351d18;
    }
    ctx->pc = 0x351D18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x351D18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x351d18:
    ctx->pc = 0x351D20u;
}
