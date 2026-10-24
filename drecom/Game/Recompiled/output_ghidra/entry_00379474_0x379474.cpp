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

// Function: entry_00379474
// Address: 0x379474 - 0x379498
void entry_00379474_0x379474(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00379474_0x379474");
#endif

    switch (ctx->pc) {
        case 0x379488u: goto label_379488;
        default: break;
    }

    ctx->pc = 0x379474u;

label_379474:
    // 0x379474: 0x2442b798  addiu       $v0, $v0, -0x4868
    ctx->pc = 0x379474u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948760));
label_379478:
    // 0x379478: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x379478u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_37947c:
    // 0x37947c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x37947cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_379480:
    // 0x379480: 0x40f809  jalr        $v0
label_379484:
    if (ctx->pc == 0x379484u) {
        ctx->pc = 0x379488u;
        goto label_379488;
    }
    ctx->pc = 0x379480u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x379488u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x379480u, 0x379488u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x379488u;
label_379488:
    // 0x379488: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x379488u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_37948c:
    // 0x37948c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x37948cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_379490:
    // 0x379490: 0x3e00008  jr          $ra
label_379494:
    if (ctx->pc == 0x379494u) {
        ctx->pc = 0x379498u;
        goto label_fallthrough_0x379490;
    }
    ctx->pc = 0x379490u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x379490u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x379490:
    ctx->pc = 0x379498u;
}
