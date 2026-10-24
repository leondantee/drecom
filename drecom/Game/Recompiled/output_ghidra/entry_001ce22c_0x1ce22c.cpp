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

// Function: entry_001ce22c
// Address: 0x1ce22c - 0x1ce25c
void entry_001ce22c_0x1ce22c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ce22c_0x1ce22c");
#endif

    ctx->pc = 0x1ce22cu;

    // 0x1ce22c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1ce22cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ce230: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ce230u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ce234: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1ce234u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x1ce238: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ce238u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ce23c: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x1ce23cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ce240: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ce240u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ce244: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x1ce244u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ce248: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ce248u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ce24c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1ce24cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ce250: 0x24030028  addiu       $v1, $zero, 0x28
    ctx->pc = 0x1ce250u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x1ce254: 0x8fb00048  lw          $s0, 0x48($sp)
    ctx->pc = 0x1ce254u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ce258: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x1ce258u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    ctx->pc = 0x1ce25cu;
}
