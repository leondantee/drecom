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

// Function: entry_001e9c04
// Address: 0x1e9c04 - 0x1e9c30
void entry_001e9c04_0x1e9c04(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e9c04_0x1e9c04");
#endif

    ctx->pc = 0x1e9c04u;

    // 0x1e9c04: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x1e9c04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1e9c08: 0x8fa40198  lw          $a0, 0x198($sp)
    ctx->pc = 0x1e9c08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
    // 0x1e9c0c: 0xa0860000  sb          $a2, 0x0($a0)
    ctx->pc = 0x1e9c0cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 6));
    // 0x1e9c10: 0x8fa60198  lw          $a2, 0x198($sp)
    ctx->pc = 0x1e9c10u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
    // 0x1e9c14: 0xa0c00001  sb          $zero, 0x1($a2)
    ctx->pc = 0x1e9c14u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x1e9c18: 0x8fa50198  lw          $a1, 0x198($sp)
    ctx->pc = 0x1e9c18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
    // 0x1e9c1c: 0xa0a00002  sb          $zero, 0x2($a1)
    ctx->pc = 0x1e9c1cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1e9c20: 0x8fa30198  lw          $v1, 0x198($sp)
    ctx->pc = 0x1e9c20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
    // 0x1e9c24: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1e9c24u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1e9c28: 0x8fa40198  lw          $a0, 0x198($sp)
    ctx->pc = 0x1e9c28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
    // 0x1e9c2c: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x1e9c2cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x1e9c30u;
}
