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

// Function: entry_00364050
// Address: 0x364050 - 0x364088
void entry_00364050_0x364050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00364050_0x364050");
#endif

    ctx->pc = 0x364050u;

    // 0x364050: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x364050u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x364054: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x364054u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x364058: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x364058u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x36405c: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x36405cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x364060: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x364060u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x364064: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x364064u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x364068: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x364068u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x36406c: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x36406cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x364070: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x364070u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x364074: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x364074u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x364078: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x364078u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x36407c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x36407cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x364080: 0x100000b7  b           . + 4 + (0xB7 << 2)
    ctx->pc = 0x364080u;
    {
        const bool branch_taken_0x364080 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x364080) {
            ctx->pc = 0x364360u;
            return;
        }
    }
    ctx->pc = 0x364088u;
}
