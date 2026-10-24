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

// Function: entry_0012691c
// Address: 0x12691c - 0x126950
void entry_0012691c_0x12691c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012691c_0x12691c");
#endif

    ctx->pc = 0x12691cu;

    // 0x12691c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x12691cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x126920: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x126920u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x126924: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x126924u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x126928: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x126928u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x12692c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12692cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x126930: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x126930u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x126934: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x126934u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x126938: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x126938u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x12693c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12693cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x126940: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x126940u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x126944: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x126944u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x126948: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x126948u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12694c: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x12694cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    ctx->pc = 0x126950u;
}
