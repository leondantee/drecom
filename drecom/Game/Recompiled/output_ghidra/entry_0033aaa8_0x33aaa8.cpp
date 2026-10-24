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

// Function: entry_0033aaa8
// Address: 0x33aaa8 - 0x33aad0
void entry_0033aaa8_0x33aaa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0033aaa8_0x33aaa8");
#endif

    ctx->pc = 0x33aaa8u;

    // 0x33aaa8: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x33aaa8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x33aaac: 0x8c235440  lw          $v1, 0x5440($at)
    ctx->pc = 0x33aaacu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x895440u));
    // 0x33aab0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x33aab0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x33aab4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x33aab4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x33aab8: 0x28420200  slti        $v0, $v0, 0x200
    ctx->pc = 0x33aab8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)512) ? 1 : 0);
    // 0x33aabc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x33AABCu;
    {
        const bool branch_taken_0x33aabc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x33aabc) {
            ctx->pc = 0x33AAD0u;
            return;
        }
    }
    ctx->pc = 0x33AAC4u;
    // 0x33aac4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x33aac4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x33aac8: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x33AAC8u;
    {
        const bool branch_taken_0x33aac8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33aac8) {
            ctx->pc = 0x33AB30u;
            return;
        }
    }
    ctx->pc = 0x33AAD0u;
}
