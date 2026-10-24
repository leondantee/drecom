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

// Function: entry_001ccdc4
// Address: 0x1ccdc4 - 0x1ccdf4
void entry_001ccdc4_0x1ccdc4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ccdc4_0x1ccdc4");
#endif

    ctx->pc = 0x1ccdc4u;

    // 0x1ccdc4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1ccdc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ccdc8: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1ccdc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ccdcc: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x1ccdccu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1ccdd0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ccdd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ccdd4: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x1ccdd4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ccdd8: 0x8fb00048  lw          $s0, 0x48($sp)
    ctx->pc = 0x1ccdd8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ccddc: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x1ccddcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ccde0: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1ccde0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ccde4: 0xa0800003  sb          $zero, 0x3($a0)
    ctx->pc = 0x1ccde4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ccde8: 0x24030028  addiu       $v1, $zero, 0x28
    ctx->pc = 0x1ccde8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x1ccdec: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1ccdecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ccdf0: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x1ccdf0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    ctx->pc = 0x1ccdf4u;
}
