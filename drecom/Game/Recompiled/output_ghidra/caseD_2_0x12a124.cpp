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

// Function: caseD_2
// Address: 0x12a124 - 0x12a154
void caseD_2_0x12a124(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_2_0x12a124");
#endif

    ctx->pc = 0x12a124u;

    // 0x12a124: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x12a124u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12a128: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12a128u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12a12c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x12a12cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x12a130: 0x24040012  addiu       $a0, $zero, 0x12
    ctx->pc = 0x12a130u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x12a134: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12a134u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12a138: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x12a138u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x12a13c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12a13cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12a140: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x12a140u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x12a144: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12a144u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12a148: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x12a148u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x12a14c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12a14cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12a150: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x12a150u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x12a154u;
}
