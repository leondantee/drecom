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

// Function: entry_001be978
// Address: 0x1be978 - 0x1be9a4
void entry_001be978_0x1be978(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001be978_0x1be978");
#endif

    ctx->pc = 0x1be978u;

    // 0x1be978: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1be978u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1be97c: 0x8c6313e8  lw          $v1, 0x13E8($v1)
    ctx->pc = 0x1be97cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 5096)));
    // 0x1be980: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x1BE980u;
    {
        const bool branch_taken_0x1be980 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1be980) {
            ctx->pc = 0x1BE9BCu;
            return;
        }
    }
    ctx->pc = 0x1BE988u;
    // 0x1be988: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1be988u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1be98c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1be98cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1be990: 0xa064156d  sb          $a0, 0x156D($v1)
    ctx->pc = 0x1be990u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5485), (uint8_t)GPR_U32(ctx, 4));
    // 0x1be994: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1be994u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1be998: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1be998u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1be99c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1BE99Cu;
    {
        const bool branch_taken_0x1be99c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1be99c) {
            ctx->pc = 0x1BE9BCu;
            return;
        }
    }
    ctx->pc = 0x1BE9A4u;
}
