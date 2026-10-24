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

// Function: entry_001e9b3c
// Address: 0x1e9b3c - 0x1e9b70
void entry_001e9b3c_0x1e9b3c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e9b3c_0x1e9b3c");
#endif

    ctx->pc = 0x1e9b3cu;

    // 0x1e9b3c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1e9b3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1e9b40: 0x8fa30198  lw          $v1, 0x198($sp)
    ctx->pc = 0x1e9b40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
    // 0x1e9b44: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1e9b44u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x1e9b48: 0x8fa30198  lw          $v1, 0x198($sp)
    ctx->pc = 0x1e9b48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
    // 0x1e9b4c: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x1e9b4cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x1e9b50: 0x8fa50198  lw          $a1, 0x198($sp)
    ctx->pc = 0x1e9b50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
    // 0x1e9b54: 0xa0a00002  sb          $zero, 0x2($a1)
    ctx->pc = 0x1e9b54u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1e9b58: 0x8fa30198  lw          $v1, 0x198($sp)
    ctx->pc = 0x1e9b58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
    // 0x1e9b5c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1e9b5cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1e9b60: 0x8fa40198  lw          $a0, 0x198($sp)
    ctx->pc = 0x1e9b60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
    // 0x1e9b64: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x1e9b64u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x1e9b68: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x1E9B68u;
    {
        const bool branch_taken_0x1e9b68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e9b68) {
            ctx->pc = 0x1E9C30u;
            return;
        }
    }
    ctx->pc = 0x1E9B70u;
}
