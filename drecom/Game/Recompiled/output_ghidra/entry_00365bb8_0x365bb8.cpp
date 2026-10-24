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

// Function: entry_00365bb8
// Address: 0x365bb8 - 0x365be8
void entry_00365bb8_0x365bb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00365bb8_0x365bb8");
#endif

    ctx->pc = 0x365bb8u;

    // 0x365bb8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x365bb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x365bbc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x365bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x365bc0: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x365bc0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x365bc4: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x365bc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x365bc8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x365bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x365bcc: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x365bccu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x365bd0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x365bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x365bd4: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x365bd4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x365bd8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x365bd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x365bdc: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x365bdcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x365be0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x365be0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x365be4: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x365be4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x365be8u;
}
