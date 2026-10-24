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

// Function: entry_001b5764
// Address: 0x1b5764 - 0x1b5794
void entry_001b5764_0x1b5764(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b5764_0x1b5764");
#endif

    ctx->pc = 0x1b5764u;

    // 0x1b5764: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1b5764u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b5768: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1b5768u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1b576c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1b576cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x1b5770: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1b5770u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1b5774: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x1b5774u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x1b5778: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1b5778u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1b577c: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x1b577cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1b5780: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1b5780u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1b5784: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1b5784u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1b5788: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x1b5788u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x1b578c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1b578cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1b5790: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x1b5790u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    ctx->pc = 0x1b5794u;
}
