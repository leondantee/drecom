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

// Function: entry_001be674
// Address: 0x1be674 - 0x1be6a4
void entry_001be674_0x1be674(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001be674_0x1be674");
#endif

    ctx->pc = 0x1be674u;

    // 0x1be674: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1be674u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1be678: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1be678u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1be67c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1be67cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x1be680: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1be680u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1be684: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x1be684u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x1be688: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1be688u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1be68c: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x1be68cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1be690: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1be690u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1be694: 0xa0a00003  sb          $zero, 0x3($a1)
    ctx->pc = 0x1be694u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1be698: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x1be698u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x1be69c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1be69cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1be6a0: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x1be6a0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    ctx->pc = 0x1be6a4u;
}
