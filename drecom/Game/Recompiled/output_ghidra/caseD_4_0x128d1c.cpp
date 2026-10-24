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

// Function: caseD_4
// Address: 0x128d1c - 0x128d54
void caseD_4_0x128d1c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_4_0x128d1c");
#endif

    ctx->pc = 0x128d1cu;

    // 0x128d1c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x128d1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x128d20: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x128d20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x128d24: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x128d24u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x128d28: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x128d28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x128d2c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x128d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x128d30: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x128d30u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x128d34: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x128d34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x128d38: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x128d38u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x128d3c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x128d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x128d40: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x128d40u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x128d44: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x128d44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x128d48: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x128d48u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x128d4c: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x128D4Cu;
    {
        const bool branch_taken_0x128d4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x128d4c) {
            ctx->pc = 0x128D54u;
            return;
        }
    }
    ctx->pc = 0x128D54u;
}
