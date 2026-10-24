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

// Function: caseD_1
// Address: 0x337d34 - 0x337d5c
void caseD_1_0x337d34(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_1_0x337d34");
#endif

    ctx->pc = 0x337d34u;

    // 0x337d34: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x337d34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x337d38: 0x8c234e40  lw          $v1, 0x4E40($at)
    ctx->pc = 0x337d38u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x894E40u));
    // 0x337d3c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x337d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x337d40: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x337D40u;
    {
        const bool branch_taken_0x337d40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x337d40) {
            ctx->pc = 0x337D5Cu;
            return;
        }
    }
    ctx->pc = 0x337D48u;
    // 0x337d48: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x337d48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x337d4c: 0x8c234e48  lw          $v1, 0x4E48($at)
    ctx->pc = 0x337d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x894E48u));
    // 0x337d50: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x337d50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x337d54: 0x10620026  beq         $v1, $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x337D54u;
    {
        const bool branch_taken_0x337d54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x337d54) {
            ctx->pc = 0x337DF0u;
            return;
        }
    }
    ctx->pc = 0x337D5Cu;
}
