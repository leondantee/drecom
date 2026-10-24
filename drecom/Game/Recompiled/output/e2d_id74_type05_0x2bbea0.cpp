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

// Function: e2d_id74_type05
// Address: 0x2bbea0 - 0x2bbec8
void e2d_id74_type05_0x2bbea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id74_type05_0x2bbea0");
#endif

    switch (ctx->pc) {
        case 0x2bbeb8u: goto label_2bbeb8;
        default: break;
    }

    ctx->pc = 0x2bbea0u;

    // 0x2bbea0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2bbea0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2bbea4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2bbea4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2bbea8: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2bbea8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2bbeac: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2bbeacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bbeb0: 0xc0aee88  jal         func_2BBA20
    ctx->pc = 0x2BBEB0u;
    SET_GPR_U32(ctx, 31, 0x2BBEB8u);
    ctx->pc = 0x2BBA20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BBA20u, 0x2BBEB0u, 0x2BBEB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BBEB8u;
label_2bbeb8:
    // 0x2bbeb8: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2bbeb8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bbebc: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2bbebcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2bbec0: 0x3e00008  jr          $ra
    ctx->pc = 0x2BBEC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BBEC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BBEC8u;
}
