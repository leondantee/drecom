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

// Function: entry_0015c990
// Address: 0x15c990 - 0x15c9c4
void entry_0015c990_0x15c990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015c990_0x15c990");
#endif

    ctx->pc = 0x15c990u;

    // 0x15c990: 0x2a030014  slti        $v1, $s0, 0x14
    ctx->pc = 0x15c990u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x15c994: 0x1460ffd4  bnez        $v1, . + 4 + (-0x2C << 2)
    ctx->pc = 0x15C994u;
    {
        const bool branch_taken_0x15c994 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x15c994) {
            ctx->pc = 0x15C8E8u;
            return;
        }
    }
    ctx->pc = 0x15C99Cu;
    // 0x15c99c: 0x8fa30118  lw          $v1, 0x118($sp)
    ctx->pc = 0x15c99cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x15c9a0: 0xa0601560  sb          $zero, 0x1560($v1)
    ctx->pc = 0x15c9a0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5472), (uint8_t)GPR_U32(ctx, 0));
    // 0x15c9a4: 0x24040013  addiu       $a0, $zero, 0x13
    ctx->pc = 0x15c9a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x15c9a8: 0x8fa30118  lw          $v1, 0x118($sp)
    ctx->pc = 0x15c9a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x15c9ac: 0xa0641561  sb          $a0, 0x1561($v1)
    ctx->pc = 0x15c9acu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5473), (uint8_t)GPR_U32(ctx, 4));
    // 0x15c9b0: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x15c9b0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15c9b4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15c9b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15c9b8: 0x27bd0120  addiu       $sp, $sp, 0x120
    ctx->pc = 0x15c9b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x15c9bc: 0x3e00008  jr          $ra
    ctx->pc = 0x15C9BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15C9BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15C9C4u;
}
