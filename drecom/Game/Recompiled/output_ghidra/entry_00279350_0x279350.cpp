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

// Function: entry_00279350
// Address: 0x279350 - 0x279370
void entry_00279350_0x279350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00279350_0x279350");
#endif

    ctx->pc = 0x279350u;

    // 0x279350: 0x2e03000b  sltiu       $v1, $s0, 0xB
    ctx->pc = 0x279350u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
    // 0x279354: 0x1460ffe4  bnez        $v1, . + 4 + (-0x1C << 2)
    ctx->pc = 0x279354u;
    {
        const bool branch_taken_0x279354 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x279354) {
            ctx->pc = 0x2792E8u;
            return;
        }
    }
    ctx->pc = 0x27935Cu;
    // 0x27935c: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x27935cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x279360: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x279360u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x279364: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x279364u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x279368: 0x3e00008  jr          $ra
    ctx->pc = 0x279368u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x279368u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x279370u;
}
