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

// Function: caseD_4
// Address: 0x25086c - 0x25089c
void caseD_4_0x25086c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_4_0x25086c");
#endif

    switch (ctx->pc) {
        case 0x25086cu: goto label_25086c;
        case 0x250870u: goto label_250870;
        case 0x250874u: goto label_250874;
        case 0x250878u: goto label_250878;
        case 0x25087cu: goto label_25087c;
        case 0x250880u: goto label_250880;
        case 0x250884u: goto label_250884;
        case 0x250888u: goto label_250888;
        case 0x25088cu: goto label_25088c;
        case 0x250890u: goto label_250890;
        case 0x250894u: goto label_250894;
        case 0x250898u: goto label_250898;
        default: break;
    }

    ctx->pc = 0x25086cu;

label_25086c:
    // 0x25086c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x25086cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_250870:
    // 0x250870: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x250870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_250874:
    // 0x250874: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x250874u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_250878:
    // 0x250878: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x250878u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_25087c:
    // 0x25087c: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x25087cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_250880:
    // 0x250880: 0x2442b6d8  addiu       $v0, $v0, -0x4928
    ctx->pc = 0x250880u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948568));
label_250884:
    // 0x250884: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x250884u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_250888:
    // 0x250888: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x250888u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_25088c:
    // 0x25088c: 0x40f809  jalr        $v0
label_250890:
    if (ctx->pc == 0x250890u) {
        ctx->pc = 0x250894u;
        goto label_250894;
    }
    ctx->pc = 0x25088Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x250894u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25088Cu, 0x250894u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x250894u;
label_250894:
    // 0x250894: 0x1000002f  b           . + 4 + (0x2F << 2)
label_250898:
    if (ctx->pc == 0x250898u) {
        ctx->pc = 0x25089Cu;
        goto label_fallthrough_0x250894;
    }
    ctx->pc = 0x250894u;
    {
        const bool branch_taken_0x250894 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x250894) {
            ctx->pc = 0x250954u;
            return;
        }
    }
label_fallthrough_0x250894:
    ctx->pc = 0x25089Cu;
}
