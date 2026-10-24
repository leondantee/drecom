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

// Function: entry_001cf51c
// Address: 0x1cf51c - 0x1cf54c
void entry_001cf51c_0x1cf51c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cf51c_0x1cf51c");
#endif

    ctx->pc = 0x1cf51cu;

    // 0x1cf51c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1cf51cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cf520: 0x8fa60038  lw          $a2, 0x38($sp)
    ctx->pc = 0x1cf520u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1cf524: 0xa0c50000  sb          $a1, 0x0($a2)
    ctx->pc = 0x1cf524u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x1cf528: 0x8fa70038  lw          $a3, 0x38($sp)
    ctx->pc = 0x1cf528u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1cf52c: 0xa0e00001  sb          $zero, 0x1($a3)
    ctx->pc = 0x1cf52cu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x1cf530: 0x8fa80038  lw          $t0, 0x38($sp)
    ctx->pc = 0x1cf530u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1cf534: 0xa1000002  sb          $zero, 0x2($t0)
    ctx->pc = 0x1cf534u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1cf538: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1cf538u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1cf53c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1cf53cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1cf540: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x1cf540u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x1cf544: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1cf544u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1cf548: 0xac650004  sw          $a1, 0x4($v1)
    ctx->pc = 0x1cf548u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 5));
    ctx->pc = 0x1cf54cu;
}
