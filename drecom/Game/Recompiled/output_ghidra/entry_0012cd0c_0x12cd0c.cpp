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

// Function: entry_0012cd0c
// Address: 0x12cd0c - 0x12cd20
void entry_0012cd0c_0x12cd0c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012cd0c_0x12cd0c");
#endif

    ctx->pc = 0x12cd0cu;

    // 0x12cd0c: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x12cd0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x12cd10: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x12cd10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12cd14: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x12cd14u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x12cd18: 0x1000016c  b           . + 4 + (0x16C << 2)
    ctx->pc = 0x12CD18u;
    {
        const bool branch_taken_0x12cd18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12cd18) {
            ctx->pc = 0x12D2CCu;
            return;
        }
    }
    ctx->pc = 0x12CD20u;
}
