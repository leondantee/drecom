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

// Function: entry_001c832c
// Address: 0x1c832c - 0x1c835c
void entry_001c832c_0x1c832c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c832c_0x1c832c");
#endif

    ctx->pc = 0x1c832cu;

    // 0x1c832c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1c832cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c8330: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1c8330u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c8334: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1c8334u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x1c8338: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1c8338u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c833c: 0xa0800001  sb          $zero, 0x1($a0)
    ctx->pc = 0x1c833cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c8340: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1c8340u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c8344: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x1c8344u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c8348: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1c8348u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c834c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1c834cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c8350: 0x24040028  addiu       $a0, $zero, 0x28
    ctx->pc = 0x1c8350u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x1c8354: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1c8354u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c8358: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x1c8358u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    ctx->pc = 0x1c835cu;
}
