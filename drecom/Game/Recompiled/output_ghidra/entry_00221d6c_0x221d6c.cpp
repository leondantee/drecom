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

// Function: entry_00221d6c
// Address: 0x221d6c - 0x221da0
void entry_00221d6c_0x221d6c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00221d6c_0x221d6c");
#endif

    ctx->pc = 0x221d6cu;

    // 0x221d6c: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x221d6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x221d70: 0x8fa401a8  lw          $a0, 0x1A8($sp)
    ctx->pc = 0x221d70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x221d74: 0xa0860000  sb          $a2, 0x0($a0)
    ctx->pc = 0x221d74u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 6));
    // 0x221d78: 0x8fa301a8  lw          $v1, 0x1A8($sp)
    ctx->pc = 0x221d78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x221d7c: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x221d7cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x221d80: 0x8fa301a8  lw          $v1, 0x1A8($sp)
    ctx->pc = 0x221d80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x221d84: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x221d84u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x221d88: 0x8fa401a8  lw          $a0, 0x1A8($sp)
    ctx->pc = 0x221d88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x221d8c: 0xa0800003  sb          $zero, 0x3($a0)
    ctx->pc = 0x221d8cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x221d90: 0x8fa601a8  lw          $a2, 0x1A8($sp)
    ctx->pc = 0x221d90u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x221d94: 0xacc00004  sw          $zero, 0x4($a2)
    ctx->pc = 0x221d94u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
    // 0x221d98: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x221D98u;
    {
        const bool branch_taken_0x221d98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x221d98) {
            ctx->pc = 0x221DCCu;
            return;
        }
    }
    ctx->pc = 0x221DA0u;
}
