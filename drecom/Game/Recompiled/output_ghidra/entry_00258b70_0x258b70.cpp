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

// Function: entry_00258b70
// Address: 0x258b70 - 0x258b90
void entry_00258b70_0x258b70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00258b70_0x258b70");
#endif

    ctx->pc = 0x258b70u;

    // 0x258b70: 0x2e030002  sltiu       $v1, $s0, 0x2
    ctx->pc = 0x258b70u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x258b74: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x258B74u;
    {
        const bool branch_taken_0x258b74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x258b74) {
            ctx->pc = 0x258B54u;
            return;
        }
    }
    ctx->pc = 0x258B7Cu;
    // 0x258b7c: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x258b7cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x258b80: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x258b80u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x258b84: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x258b84u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x258b88: 0x3e00008  jr          $ra
    ctx->pc = 0x258B88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x258B88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x258B90u;
}
