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

// Function: entry_0029e228
// Address: 0x29e228 - 0x29e258
void entry_0029e228_0x29e228(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0029e228_0x29e228");
#endif

    ctx->pc = 0x29e228u;

    // 0x29e228: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x29e228u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29e22c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x29e22cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29e230: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x29e230u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x29e234: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x29e234u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x29e238: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x29e238u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29e23c: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x29e23cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x29e240: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x29e240u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29e244: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x29e244u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x29e248: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x29e248u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29e24c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x29e24cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x29e250: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x29e250u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29e254: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x29e254u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x29e258u;
}
