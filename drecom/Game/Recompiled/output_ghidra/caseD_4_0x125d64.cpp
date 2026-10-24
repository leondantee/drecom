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

// Function: caseD_4
// Address: 0x125d64 - 0x125d9c
void caseD_4_0x125d64(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_4_0x125d64");
#endif

    ctx->pc = 0x125d64u;

    // 0x125d64: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x125d64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x125d68: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x125d68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x125d6c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x125d6cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x125d70: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x125d70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x125d74: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x125d74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x125d78: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x125d78u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x125d7c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x125d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x125d80: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x125d80u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x125d84: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x125d84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x125d88: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x125d88u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x125d8c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x125d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x125d90: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x125d90u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x125d94: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x125D94u;
    {
        const bool branch_taken_0x125d94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x125d94) {
            ctx->pc = 0x125D9Cu;
            return;
        }
    }
    ctx->pc = 0x125D9Cu;
}
