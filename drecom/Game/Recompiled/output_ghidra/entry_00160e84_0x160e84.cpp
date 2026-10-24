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

// Function: entry_00160e84
// Address: 0x160e84 - 0x160ea8
void entry_00160e84_0x160e84(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00160e84_0x160e84");
#endif

    ctx->pc = 0x160e84u;

    // 0x160e84: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x160e84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x160e88: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x160e88u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x160e8c: 0x24020012  addiu       $v0, $zero, 0x12
    ctx->pc = 0x160e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x160e90: 0xa2020001  sb          $v0, 0x1($s0)
    ctx->pc = 0x160e90u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x160e94: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x160e94u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x160e98: 0xa2000003  sb          $zero, 0x3($s0)
    ctx->pc = 0x160e98u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x160e9c: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x160e9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x160ea0: 0x10000060  b           . + 4 + (0x60 << 2)
    ctx->pc = 0x160EA0u;
    {
        const bool branch_taken_0x160ea0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x160ea0) {
            ctx->pc = 0x161024u;
            return;
        }
    }
    ctx->pc = 0x160EA8u;
}
