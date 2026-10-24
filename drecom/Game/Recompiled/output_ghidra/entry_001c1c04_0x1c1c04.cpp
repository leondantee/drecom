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

// Function: entry_001c1c04
// Address: 0x1c1c04 - 0x1c1c3c
void entry_001c1c04_0x1c1c04(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c1c04_0x1c1c04");
#endif

    ctx->pc = 0x1c1c04u;

    // 0x1c1c04: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1c1c04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c1c08: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c1c08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c1c0c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1c1c0cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x1c1c10: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c1c10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c1c14: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x1c1c14u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c1c18: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c1c18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c1c1c: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x1c1c1cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c1c20: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c1c20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c1c24: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1c1c24u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c1c28: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x1c1c28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x1c1c2c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c1c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c1c30: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x1c1c30u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x1c1c34: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x1C1C34u;
    {
        const bool branch_taken_0x1c1c34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c1c34) {
            ctx->pc = 0x1C1CA0u;
            return;
        }
    }
    ctx->pc = 0x1C1C3Cu;
}
