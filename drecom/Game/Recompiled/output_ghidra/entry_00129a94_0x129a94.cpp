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

// Function: entry_00129a94
// Address: 0x129a94 - 0x129ac4
void entry_00129a94_0x129a94(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00129a94_0x129a94");
#endif

    ctx->pc = 0x129a94u;

    // 0x129a94: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x129a94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x129a98: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x129a98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x129a9c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x129a9cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x129aa0: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x129aa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x129aa4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x129aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x129aa8: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x129aa8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x129aac: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x129aacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x129ab0: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x129ab0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x129ab4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x129ab4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x129ab8: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x129ab8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x129abc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x129abcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x129ac0: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x129ac0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x129ac4u;
}
