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

// Function: entry_0023cd60
// Address: 0x23cd60 - 0x23cda0
void entry_0023cd60_0x23cd60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0023cd60_0x23cd60");
#endif

    ctx->pc = 0x23cd60u;

    // 0x23cd60: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x23cd60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23cd64: 0x84631278  lh          $v1, 0x1278($v1)
    ctx->pc = 0x23cd64u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x23cd68: 0x1460000d  bnez        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x23CD68u;
    {
        const bool branch_taken_0x23cd68 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x23cd68) {
            ctx->pc = 0x23CDA0u;
            return;
        }
    }
    ctx->pc = 0x23CD70u;
    // 0x23cd70: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x23cd70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23cd74: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x23cd74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23cd78: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x23cd78u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x23cd7c: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x23cd7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x23cd80: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x23cd80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23cd84: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x23cd84u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x23cd88: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x23cd88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23cd8c: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x23cd8cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x23cd90: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x23cd90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23cd94: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x23cd94u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x23cd98: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x23cd98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23cd9c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x23cd9cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x23cda0u;
}
