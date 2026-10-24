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

// Function: default
// Address: 0x128b84 - 0x128bc0
void ps2_default_0x128b84(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2_default_0x128b84");
#endif

    ctx->pc = 0x128b84u;

    // 0x128b84: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x128b84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x128b88: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x128b88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x128b8c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x128b8cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x128b90: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x128b90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x128b94: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x128b94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x128b98: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x128b98u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x128b9c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x128b9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x128ba0: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x128ba0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x128ba4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x128ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x128ba8: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x128ba8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x128bac: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x128bacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x128bb0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x128bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x128bb4: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x128bb4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x128bb8: 0x10000066  b           . + 4 + (0x66 << 2)
    ctx->pc = 0x128BB8u;
    {
        const bool branch_taken_0x128bb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x128bb8) {
            ctx->pc = 0x128D54u;
            return;
        }
    }
    ctx->pc = 0x128BC0u;
}
