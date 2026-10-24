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

// Function: entry_00212030
// Address: 0x212030 - 0x212058
void entry_00212030_0x212030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00212030_0x212030");
#endif

    ctx->pc = 0x212030u;

    // 0x212030: 0x2e430040  sltiu       $v1, $s2, 0x40
    ctx->pc = 0x212030u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)64) ? 1 : 0);
    // 0x212034: 0x1460ff70  bnez        $v1, . + 4 + (-0x90 << 2)
    ctx->pc = 0x212034u;
    {
        const bool branch_taken_0x212034 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x212034) {
            ctx->pc = 0x211DF8u;
            return;
        }
    }
    ctx->pc = 0x21203Cu;
    // 0x21203c: 0x7bbf0030  lq          $ra, 0x30($sp)
    ctx->pc = 0x21203cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x212040: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x212040u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x212044: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x212044u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x212048: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x212048u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21204c: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x21204cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x212050: 0x3e00008  jr          $ra
    ctx->pc = 0x212050u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x212050u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x212058u;
}
