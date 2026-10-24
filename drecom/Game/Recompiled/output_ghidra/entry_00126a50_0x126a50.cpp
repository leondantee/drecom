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

// Function: entry_00126a50
// Address: 0x126a50 - 0x126a80
void entry_00126a50_0x126a50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00126a50_0x126a50");
#endif

    ctx->pc = 0x126a50u;

    // 0x126a50: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x126a50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x126a54: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x126a54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x126a58: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x126a58u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x126a5c: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x126a5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x126a60: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x126a60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x126a64: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x126a64u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x126a68: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x126a68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x126a6c: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x126a6cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x126a70: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x126a70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x126a74: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x126a74u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x126a78: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x126a78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x126a7c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x126a7cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x126a80u;
}
