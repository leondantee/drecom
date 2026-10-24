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

// Function: entry_0035aeb8
// Address: 0x35aeb8 - 0x35af14
void entry_0035aeb8_0x35aeb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0035aeb8_0x35aeb8");
#endif

    ctx->pc = 0x35aeb8u;

    // 0x35aeb8: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x35aeb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x35aebc: 0x8c831330  lw          $v1, 0x1330($a0)
    ctx->pc = 0x35aebcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4912)));
    // 0x35aec0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x35aec0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x35aec4: 0xac831330  sw          $v1, 0x1330($a0)
    ctx->pc = 0x35aec4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4912), GPR_U32(ctx, 3));
    // 0x35aec8: 0x2861001f  slti        $at, $v1, 0x1F
    ctx->pc = 0x35aec8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)31) ? 1 : 0);
    // 0x35aecc: 0x14200011  bnez        $at, . + 4 + (0x11 << 2)
    ctx->pc = 0x35AECCu;
    {
        const bool branch_taken_0x35aecc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x35aecc) {
            ctx->pc = 0x35AF14u;
            return;
        }
    }
    ctx->pc = 0x35AED4u;
    // 0x35aed4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x35aed4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x35aed8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x35aed8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x35aedc: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x35aedcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x35aee0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x35aee0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x35aee4: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x35aee4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x35aee8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x35aee8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x35aeec: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x35aeecu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x35aef0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x35aef0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x35aef4: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x35aef4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x35aef8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x35aef8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x35aefc: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x35aefcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x35af00: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x35af00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x35af04: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x35af04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x35af08: 0xa06411ec  sb          $a0, 0x11EC($v1)
    ctx->pc = 0x35af08u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4588), (uint8_t)GPR_U32(ctx, 4));
    // 0x35af0c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x35af0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x35af10: 0xac601330  sw          $zero, 0x1330($v1)
    ctx->pc = 0x35af10u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4912), GPR_U32(ctx, 0));
    ctx->pc = 0x35af14u;
}
