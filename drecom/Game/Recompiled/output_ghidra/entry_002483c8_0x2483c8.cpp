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

// Function: entry_002483c8
// Address: 0x2483c8 - 0x24842c
void entry_002483c8_0x2483c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002483c8_0x2483c8");
#endif

    switch (ctx->pc) {
        case 0x2483e8u: goto label_2483e8;
        default: break;
    }

    ctx->pc = 0x2483c8u;

    // 0x2483c8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2483c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2483cc: 0x24441330  addiu       $a0, $v0, 0x1330
    ctx->pc = 0x2483ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2483d0: 0x8c830030  lw          $v1, 0x30($a0)
    ctx->pc = 0x2483d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x2483d4: 0x2402ffe7  addiu       $v0, $zero, -0x19
    ctx->pc = 0x2483d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967271));
    // 0x2483d8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2483d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2483dc: 0xac820030  sw          $v0, 0x30($a0)
    ctx->pc = 0x2483dcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 2));
    // 0x2483e0: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2483E0u;
    SET_GPR_U32(ctx, 31, 0x2483E8u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2483E0u, 0x2483E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2483E8u;
label_2483e8:
    // 0x2483e8: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2483e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2483ec: 0x30640003  andi        $a0, $v1, 0x3
    ctx->pc = 0x2483ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x2483f0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2483f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2483f4: 0x1483000d  bne         $a0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x2483F4u;
    {
        const bool branch_taken_0x2483f4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2483f4) {
            ctx->pc = 0x24842Cu;
            return;
        }
    }
    ctx->pc = 0x2483FCu;
    // 0x2483fc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2483fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x248400: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x248400u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x248404: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x248404u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x248408: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x248408u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x24840c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x24840cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x248410: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x248410u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x248414: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x248414u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x248418: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x248418u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x24841c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x24841cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x248420: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x248420u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x248424: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x248424u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x248428: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x248428u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x24842cu;
}
