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

// Function: entry_00323390
// Address: 0x323390 - 0x3233ac
void entry_00323390_0x323390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00323390_0x323390");
#endif

    ctx->pc = 0x323390u;

    // 0x323390: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x323390u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x323394: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x323394u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x323398: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x323398u;
    {
        const bool branch_taken_0x323398 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x323398) {
            ctx->pc = 0x3233ACu;
            return;
        }
    }
    ctx->pc = 0x3233A0u;
    // 0x3233a0: 0x24120002  addiu       $s2, $zero, 0x2
    ctx->pc = 0x3233a0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3233a4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3233A4u;
    {
        const bool branch_taken_0x3233a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3233a4) {
            ctx->pc = 0x3233B4u;
            return;
        }
    }
    ctx->pc = 0x3233ACu;
}
