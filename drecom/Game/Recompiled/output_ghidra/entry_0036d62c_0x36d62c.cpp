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

// Function: entry_0036d62c
// Address: 0x36d62c - 0x36d688
void entry_0036d62c_0x36d62c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0036d62c_0x36d62c");
#endif

    switch (ctx->pc) {
        case 0x36d63cu: goto label_36d63c;
        case 0x36d658u: goto label_36d658;
        case 0x36d668u: goto label_36d668;
        case 0x36d678u: goto label_36d678;
        default: break;
    }

    ctx->pc = 0x36d62cu;

    // 0x36d62c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x36d62cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36d630: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x36d630u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x36d634: 0xc06c168  jal         func_1B05A0
    ctx->pc = 0x36D634u;
    SET_GPR_U32(ctx, 31, 0x36D63Cu);
    ctx->pc = 0x1B05A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B05A0u, 0x36D634u, 0x36D63Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36D63Cu;
label_36d63c:
    // 0x36d63c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x36d63cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36d640: 0x24631334  addiu       $v1, $v1, 0x1334
    ctx->pc = 0x36d640u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4916));
    // 0x36d644: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x36d644u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x36d648: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x36d648u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36d64c: 0x24050016  addiu       $a1, $zero, 0x16
    ctx->pc = 0x36d64cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x36d650: 0xc06c168  jal         func_1B05A0
    ctx->pc = 0x36D650u;
    SET_GPR_U32(ctx, 31, 0x36D658u);
    ctx->pc = 0x1B05A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B05A0u, 0x36D650u, 0x36D658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36D658u;
label_36d658:
    // 0x36d658: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x36d658u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36d65c: 0x2405001d  addiu       $a1, $zero, 0x1D
    ctx->pc = 0x36d65cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x36d660: 0xc06c168  jal         func_1B05A0
    ctx->pc = 0x36D660u;
    SET_GPR_U32(ctx, 31, 0x36D668u);
    ctx->pc = 0x1B05A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B05A0u, 0x36D660u, 0x36D668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36D668u;
label_36d668:
    // 0x36d668: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x36d668u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36d66c: 0x2405001e  addiu       $a1, $zero, 0x1E
    ctx->pc = 0x36d66cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x36d670: 0xc06c168  jal         func_1B05A0
    ctx->pc = 0x36D670u;
    SET_GPR_U32(ctx, 31, 0x36D678u);
    ctx->pc = 0x1B05A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B05A0u, 0x36D670u, 0x36D678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36D678u;
label_36d678:
    // 0x36d678: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x36d678u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36d67c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x36d67cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x36d680: 0x3e00008  jr          $ra
    ctx->pc = 0x36D680u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36D680u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36D688u;
}
