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

// Function: entry_00126240
// Address: 0x126240 - 0x126270
void entry_00126240_0x126240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00126240_0x126240");
#endif

    ctx->pc = 0x126240u;

    // 0x126240: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x126240u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x126244: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x126244u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x126248: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x126248u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x12624c: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x12624cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x126250: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x126250u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x126254: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x126254u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x126258: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x126258u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12625c: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x12625cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x126260: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x126260u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x126264: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x126264u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x126268: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x126268u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12626c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x12626cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x126270u;
}
