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

// Function: entry_0031af70
// Address: 0x31af70 - 0x31af8c
void entry_0031af70_0x31af70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0031af70_0x31af70");
#endif

    ctx->pc = 0x31af70u;

    // 0x31af70: 0x2e02001d  sltiu       $v0, $s0, 0x1D
    ctx->pc = 0x31af70u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)29) ? 1 : 0);
    // 0x31af74: 0x1440ffde  bnez        $v0, . + 4 + (-0x22 << 2)
    ctx->pc = 0x31AF74u;
    {
        const bool branch_taken_0x31af74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31af74) {
            ctx->pc = 0x31AEF0u;
            return;
        }
    }
    ctx->pc = 0x31AF7Cu;
    // 0x31af7c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x31af7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31af80: 0xac4012a0  sw          $zero, 0x12A0($v0)
    ctx->pc = 0x31af80u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4768), GPR_U32(ctx, 0));
    // 0x31af84: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x31AF84u;
    {
        const bool branch_taken_0x31af84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31af84) {
            ctx->pc = 0x31B030u;
            return;
        }
    }
    ctx->pc = 0x31AF8Cu;
}
