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

// Function: entry_00309130
// Address: 0x309130 - 0x309174
void entry_00309130_0x309130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00309130_0x309130");
#endif

    ctx->pc = 0x309130u;

    // 0x309130: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x309130u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x309134: 0x8c631338  lw          $v1, 0x1338($v1)
    ctx->pc = 0x309134u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4920)));
    // 0x309138: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x309138u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x30913c: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x30913Cu;
    {
        const bool branch_taken_0x30913c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x30913c) {
            ctx->pc = 0x309174u;
            return;
        }
    }
    ctx->pc = 0x309144u;
    // 0x309144: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x309144u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x309148: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x309148u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30914c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x30914cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x309150: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x309150u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x309154: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x309154u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x309158: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x309158u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x30915c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x30915cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x309160: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x309160u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x309164: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x309164u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x309168: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x309168u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x30916c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x30916cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x309170: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x309170u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x309174u;
}
