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

// Function: entry_001cd490
// Address: 0x1cd490 - 0x1cd4c0
void entry_001cd490_0x1cd490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cd490_0x1cd490");
#endif

    ctx->pc = 0x1cd490u;

    // 0x1cd490: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1cd490u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cd494: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1cd494u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cd498: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1cd498u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x1cd49c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1cd49cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cd4a0: 0xa0800001  sb          $zero, 0x1($a0)
    ctx->pc = 0x1cd4a0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x1cd4a4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1cd4a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cd4a8: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x1cd4a8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1cd4ac: 0x8fb00048  lw          $s0, 0x48($sp)
    ctx->pc = 0x1cd4acu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cd4b0: 0xa2000003  sb          $zero, 0x3($s0)
    ctx->pc = 0x1cd4b0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1cd4b4: 0x24040028  addiu       $a0, $zero, 0x28
    ctx->pc = 0x1cd4b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x1cd4b8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1cd4b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cd4bc: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x1cd4bcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    ctx->pc = 0x1cd4c0u;
}
