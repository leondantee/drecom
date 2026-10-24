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

// Function: entry_001c1e70
// Address: 0x1c1e70 - 0x1c1e9c
void entry_001c1e70_0x1c1e70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c1e70_0x1c1e70");
#endif

    ctx->pc = 0x1c1e70u;

    // 0x1c1e70: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c1e70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c1e74: 0x8c6313e8  lw          $v1, 0x13E8($v1)
    ctx->pc = 0x1c1e74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 5096)));
    // 0x1c1e78: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x1C1E78u;
    {
        const bool branch_taken_0x1c1e78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c1e78) {
            ctx->pc = 0x1C1EB4u;
            return;
        }
    }
    ctx->pc = 0x1C1E80u;
    // 0x1c1e80: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1c1e80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c1e84: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c1e84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c1e88: 0xa064156d  sb          $a0, 0x156D($v1)
    ctx->pc = 0x1c1e88u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5485), (uint8_t)GPR_U32(ctx, 4));
    // 0x1c1e8c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c1e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c1e90: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1c1e90u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c1e94: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1C1E94u;
    {
        const bool branch_taken_0x1c1e94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c1e94) {
            ctx->pc = 0x1C1EB4u;
            return;
        }
    }
    ctx->pc = 0x1C1E9Cu;
}
