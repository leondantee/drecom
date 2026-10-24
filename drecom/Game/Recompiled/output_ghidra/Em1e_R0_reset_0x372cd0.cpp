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

// Function: Em1e_R0_reset
// Address: 0x372cd0 - 0x372d20
void Em1e_R0_reset_0x372cd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em1e_R0_reset_0x372cd0");
#endif

    switch (ctx->pc) {
        case 0x372cd0u: goto label_372cd0;
        case 0x372cd4u: goto label_372cd4;
        case 0x372cd8u: goto label_372cd8;
        case 0x372cdcu: goto label_372cdc;
        case 0x372ce0u: goto label_372ce0;
        case 0x372ce4u: goto label_372ce4;
        case 0x372ce8u: goto label_372ce8;
        case 0x372cecu: goto label_372cec;
        case 0x372cf0u: goto label_372cf0;
        case 0x372cf4u: goto label_372cf4;
        case 0x372cf8u: goto label_372cf8;
        case 0x372cfcu: goto label_372cfc;
        case 0x372d00u: goto label_372d00;
        case 0x372d04u: goto label_372d04;
        case 0x372d08u: goto label_372d08;
        case 0x372d0cu: goto label_372d0c;
        case 0x372d10u: goto label_372d10;
        case 0x372d14u: goto label_372d14;
        case 0x372d18u: goto label_372d18;
        case 0x372d1cu: goto label_372d1c;
        default: break;
    }

    ctx->pc = 0x372cd0u;

label_372cd0:
    // 0x372cd0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x372cd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_372cd4:
    // 0x372cd4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x372cd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
label_372cd8:
    // 0x372cd8: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x372cd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
label_372cdc:
    // 0x372cdc: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x372cdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_372ce0:
    // 0x372ce0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x372ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_372ce4:
    // 0x372ce4: 0x90421308  lbu         $v0, 0x1308($v0)
    ctx->pc = 0x372ce4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4872)));
label_372ce8:
    // 0x372ce8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x372ce8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_372cec:
    // 0x372cec: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x372cecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
label_372cf0:
    // 0x372cf0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x372cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_372cf4:
    // 0x372cf4: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x372cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_372cf8:
    // 0x372cf8: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x372cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_372cfc:
    // 0x372cfc: 0x2442b5e0  addiu       $v0, $v0, -0x4A20
    ctx->pc = 0x372cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948320));
label_372d00:
    // 0x372d00: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x372d00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_372d04:
    // 0x372d04: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x372d04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_372d08:
    // 0x372d08: 0x40f809  jalr        $v0
label_372d0c:
    if (ctx->pc == 0x372D0Cu) {
        ctx->pc = 0x372D10u;
        goto label_372d10;
    }
    ctx->pc = 0x372D08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x372D10u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x372D08u, 0x372D10u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x372D10u;
label_372d10:
    // 0x372d10: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x372d10u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_372d14:
    // 0x372d14: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x372d14u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_372d18:
    // 0x372d18: 0x3e00008  jr          $ra
label_372d1c:
    if (ctx->pc == 0x372D1Cu) {
        ctx->pc = 0x372D20u;
        goto label_fallthrough_0x372d18;
    }
    ctx->pc = 0x372D18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x372D18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x372d18:
    ctx->pc = 0x372D20u;
}
