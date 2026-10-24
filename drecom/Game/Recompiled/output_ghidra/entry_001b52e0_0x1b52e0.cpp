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

// Function: entry_001b52e0
// Address: 0x1b52e0 - 0x1b532c
void entry_001b52e0_0x1b52e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b52e0_0x1b52e0");
#endif

    switch (ctx->pc) {
        case 0x1b5318u: goto label_1b5318;
        default: break;
    }

    ctx->pc = 0x1b52e0u;

label_1b52e0:
    // 0x1b52e0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b52e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b52e4:
    // 0x1b52e4: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1b52e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
label_1b52e8:
    // 0x1b52e8: 0xac22b970  sw          $v0, -0x4690($at)
    ctx->pc = 0x1b52e8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294949232), GPR_U32(ctx, 2));
label_1b52ec:
    // 0x1b52ec: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1b52ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1b52f0:
    // 0x1b52f0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1b52f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1b52f4:
    // 0x1b52f4: 0x90420002  lbu         $v0, 0x2($v0)
    ctx->pc = 0x1b52f4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
label_1b52f8:
    // 0x1b52f8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1b52f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1b52fc:
    // 0x1b52fc: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1b52fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1b5300:
    // 0x1b5300: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1b5300u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_1b5304:
    // 0x1b5304: 0x24429090  addiu       $v0, $v0, -0x6F70
    ctx->pc = 0x1b5304u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938768));
label_1b5308:
    // 0x1b5308: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1b5308u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1b530c:
    // 0x1b530c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1b530cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1b5310:
    // 0x1b5310: 0x40f809  jalr        $v0
label_1b5314:
    if (ctx->pc == 0x1B5314u) {
        ctx->pc = 0x1B5318u;
        goto label_1b5318;
    }
    ctx->pc = 0x1B5310u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B5318u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B5310u, 0x1B5318u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B5318u;
label_1b5318:
    // 0x1b5318: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x1b5318u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1b531c:
    // 0x1b531c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1b531cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1b5320:
    // 0x1b5320: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1b5320u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1b5324:
    // 0x1b5324: 0x3e00008  jr          $ra
label_1b5328:
    if (ctx->pc == 0x1B5328u) {
        ctx->pc = 0x1B532Cu;
        goto label_fallthrough_0x1b5324;
    }
    ctx->pc = 0x1B5324u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B5324u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1b5324:
    ctx->pc = 0x1B532Cu;
}
