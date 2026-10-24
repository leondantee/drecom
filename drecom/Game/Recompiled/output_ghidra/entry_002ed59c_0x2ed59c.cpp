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

// Function: entry_002ed59c
// Address: 0x2ed59c - 0x2ed5b8
void entry_002ed59c_0x2ed59c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002ed59c_0x2ed59c");
#endif

    ctx->pc = 0x2ed59cu;

    // 0x2ed59c: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x2ed59cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ed5a0: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x2ed5a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2ed5a4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2ED5A4u;
    {
        const bool branch_taken_0x2ed5a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ed5a4) {
            ctx->pc = 0x2ED5B8u;
            return;
        }
    }
    ctx->pc = 0x2ED5ACu;
    // 0x2ed5ac: 0x24120002  addiu       $s2, $zero, 0x2
    ctx->pc = 0x2ed5acu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2ed5b0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2ED5B0u;
    {
        const bool branch_taken_0x2ed5b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ed5b0) {
            ctx->pc = 0x2ED5C0u;
            return;
        }
    }
    ctx->pc = 0x2ED5B8u;
}
