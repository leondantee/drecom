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

// Function: entry_0034a448
// Address: 0x34a448 - 0x34a49c
void entry_0034a448_0x34a448(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0034a448_0x34a448");
#endif

    ctx->pc = 0x34a448u;

    // 0x34a448: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x34a448u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34a44c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x34a44cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34a450: 0x84630068  lh          $v1, 0x68($v1)
    ctx->pc = 0x34a450u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 104)));
    // 0x34a454: 0x14600011  bnez        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x34A454u;
    {
        const bool branch_taken_0x34a454 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x34a454) {
            ctx->pc = 0x34A49Cu;
            return;
        }
    }
    ctx->pc = 0x34A45Cu;
    // 0x34a45c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x34a45cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34a460: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x34a460u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34a464: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x34a464u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x34a468: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x34a468u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34a46c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x34a46cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34a470: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x34a470u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x34a474: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x34a474u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34a478: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x34a478u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x34a47c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x34a47cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34a480: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x34a480u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x34a484: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x34a484u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34a488: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x34a488u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x34a48c: 0x24040078  addiu       $a0, $zero, 0x78
    ctx->pc = 0x34a48cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x34a490: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x34a490u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34a494: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x34a494u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34a498: 0xa4640068  sh          $a0, 0x68($v1)
    ctx->pc = 0x34a498u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 104), (uint16_t)GPR_U32(ctx, 4));
    ctx->pc = 0x34a49cu;
}
