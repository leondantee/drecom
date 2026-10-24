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

// Function: entry_003452d4
// Address: 0x3452d4 - 0x345328
void entry_003452d4_0x3452d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003452d4_0x3452d4");
#endif

    ctx->pc = 0x3452d4u;

    // 0x3452d4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x3452d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3452d8: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x3452d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x3452dc: 0x84630068  lh          $v1, 0x68($v1)
    ctx->pc = 0x3452dcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 104)));
    // 0x3452e0: 0x14600011  bnez        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x3452E0u;
    {
        const bool branch_taken_0x3452e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3452e0) {
            ctx->pc = 0x345328u;
            return;
        }
    }
    ctx->pc = 0x3452E8u;
    // 0x3452e8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3452e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3452ec: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x3452ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3452f0: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x3452f0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x3452f4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3452f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3452f8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x3452f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3452fc: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x3452fcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x345300: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x345300u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x345304: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x345304u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x345308: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x345308u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34530c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x34530cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x345310: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x345310u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x345314: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x345314u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x345318: 0x24040078  addiu       $a0, $zero, 0x78
    ctx->pc = 0x345318u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x34531c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x34531cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x345320: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x345320u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x345324: 0xa4640068  sh          $a0, 0x68($v1)
    ctx->pc = 0x345324u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 104), (uint16_t)GPR_U32(ctx, 4));
    ctx->pc = 0x345328u;
}
