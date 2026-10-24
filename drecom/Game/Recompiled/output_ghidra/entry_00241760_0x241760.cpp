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

// Function: entry_00241760
// Address: 0x241760 - 0x241794
void entry_00241760_0x241760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00241760_0x241760");
#endif

    ctx->pc = 0x241760u;

    // 0x241760: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x241760u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x241764: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x241764u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x241768: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x241768u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x24176c: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x24176cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x241770: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x241770u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x241774: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x241774u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x241778: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x241778u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x24177c: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x24177cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x241780: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x241780u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x241784: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x241784u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x241788: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x241788u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x24178c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x24178Cu;
    {
        const bool branch_taken_0x24178c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24178c) {
            ctx->pc = 0x2417C0u;
            return;
        }
    }
    ctx->pc = 0x241794u;
}
