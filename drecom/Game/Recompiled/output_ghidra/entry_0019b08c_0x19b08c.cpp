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

// Function: entry_0019b08c
// Address: 0x19b08c - 0x19b0c4
void entry_0019b08c_0x19b08c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019b08c_0x19b08c");
#endif

    ctx->pc = 0x19b08cu;

    // 0x19b08c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x19b08cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x19b090: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x19b090u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x19b094: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x19b094u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x19b098: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x19b098u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19b09c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x19b09cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x19b0a0: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x19b0a0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x19b0a4: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x19b0a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x19b0a8: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x19b0a8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x19b0ac: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x19b0acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x19b0b0: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x19b0b0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x19b0b4: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x19b0b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x19b0b8: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x19b0b8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x19b0bc: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x19B0BCu;
    {
        const bool branch_taken_0x19b0bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19b0bc) {
            ctx->pc = 0x19B110u;
            return;
        }
    }
    ctx->pc = 0x19B0C4u;
}
