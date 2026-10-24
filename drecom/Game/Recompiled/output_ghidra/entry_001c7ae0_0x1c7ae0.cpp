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

// Function: entry_001c7ae0
// Address: 0x1c7ae0 - 0x1c7b10
void entry_001c7ae0_0x1c7ae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c7ae0_0x1c7ae0");
#endif

    ctx->pc = 0x1c7ae0u;

    // 0x1c7ae0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c7ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c7ae4: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1c7ae4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c7ae8: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x1c7ae8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1c7aec: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1c7aecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c7af0: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x1c7af0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c7af4: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x1c7af4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c7af8: 0xa0a00002  sb          $zero, 0x2($a1)
    ctx->pc = 0x1c7af8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c7afc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1c7afcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c7b00: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1c7b00u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c7b04: 0x24040028  addiu       $a0, $zero, 0x28
    ctx->pc = 0x1c7b04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x1c7b08: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x1c7b08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c7b0c: 0xaca40004  sw          $a0, 0x4($a1)
    ctx->pc = 0x1c7b0cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 4));
    ctx->pc = 0x1c7b10u;
}
