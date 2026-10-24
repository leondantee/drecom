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

// Function: entry_001c4710
// Address: 0x1c4710 - 0x1c4748
void entry_001c4710_0x1c4710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c4710_0x1c4710");
#endif

    ctx->pc = 0x1c4710u;

    // 0x1c4710: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1c4710u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c4714: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c4714u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c4718: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1c4718u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x1c471c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c471cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c4720: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x1c4720u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c4724: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c4724u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c4728: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x1c4728u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c472c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c472cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c4730: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1c4730u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c4734: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x1c4734u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x1c4738: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c4738u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c473c: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x1c473cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x1c4740: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x1C4740u;
    {
        const bool branch_taken_0x1c4740 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c4740) {
            ctx->pc = 0x1C47ACu;
            return;
        }
    }
    ctx->pc = 0x1C4748u;
}
