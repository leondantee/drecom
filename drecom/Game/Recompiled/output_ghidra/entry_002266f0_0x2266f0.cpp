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

// Function: entry_002266f0
// Address: 0x2266f0 - 0x226738
void entry_002266f0_0x2266f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002266f0_0x2266f0");
#endif

    ctx->pc = 0x2266f0u;

    // 0x2266f0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2266f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2266f4: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2266f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2266f8: 0x8c630030  lw          $v1, 0x30($v1)
    ctx->pc = 0x2266f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x2266fc: 0x30630400  andi        $v1, $v1, 0x400
    ctx->pc = 0x2266fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1024);
    // 0x226700: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x226700u;
    {
        const bool branch_taken_0x226700 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x226700) {
            ctx->pc = 0x226738u;
            return;
        }
    }
    ctx->pc = 0x226708u;
    // 0x226708: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x226708u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22670c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x22670cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x226710: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x226710u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x226714: 0x24040015  addiu       $a0, $zero, 0x15
    ctx->pc = 0x226714u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x226718: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x226718u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x22671c: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x22671cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x226720: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x226720u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x226724: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x226724u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x226728: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x226728u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x22672c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x22672cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x226730: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x226730u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x226734: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x226734u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x226738u;
}
