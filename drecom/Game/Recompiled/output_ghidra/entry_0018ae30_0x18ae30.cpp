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

// Function: entry_0018ae30
// Address: 0x18ae30 - 0x18ae7c
void entry_0018ae30_0x18ae30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018ae30_0x18ae30");
#endif

    switch (ctx->pc) {
        case 0x18ae68u: goto label_18ae68;
        case 0x18ae74u: goto label_18ae74;
        default: break;
    }

    ctx->pc = 0x18ae30u;

    // 0x18ae30: 0x2e2200a8  sltiu       $v0, $s1, 0xA8
    ctx->pc = 0x18ae30u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)168) ? 1 : 0);
    // 0x18ae34: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x18AE34u;
    {
        const bool branch_taken_0x18ae34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18ae34) {
            ctx->pc = 0x18AE00u;
            return;
        }
    }
    ctx->pc = 0x18AE3Cu;
    // 0x18ae3c: 0x2402002c  addiu       $v0, $zero, 0x2C
    ctx->pc = 0x18ae3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x18ae40: 0xa2020018  sb          $v0, 0x18($s0)
    ctx->pc = 0x18ae40u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 24), (uint8_t)GPR_U32(ctx, 2));
    // 0x18ae44: 0x24020087  addiu       $v0, $zero, 0x87
    ctx->pc = 0x18ae44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 135));
    // 0x18ae48: 0xa2020019  sb          $v0, 0x19($s0)
    ctx->pc = 0x18ae48u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 25), (uint8_t)GPR_U32(ctx, 2));
    // 0x18ae4c: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x18ae4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18ae50: 0x2404002c  addiu       $a0, $zero, 0x2C
    ctx->pc = 0x18ae50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x18ae54: 0x24062500  addiu       $a2, $zero, 0x2500
    ctx->pc = 0x18ae54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9472));
    // 0x18ae58: 0x24070087  addiu       $a3, $zero, 0x87
    ctx->pc = 0x18ae58u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 135));
    // 0x18ae5c: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x18ae5cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x18ae60: 0xc05e858  jal         func_17A160
    ctx->pc = 0x18AE60u;
    SET_GPR_U32(ctx, 31, 0x18AE68u);
    ctx->pc = 0x17A160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A160u, 0x18AE60u, 0x18AE68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18AE68u;
label_18ae68:
    // 0x18ae68: 0x2404002c  addiu       $a0, $zero, 0x2C
    ctx->pc = 0x18ae68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x18ae6c: 0xc05e964  jal         func_17A590
    ctx->pc = 0x18AE6Cu;
    SET_GPR_U32(ctx, 31, 0x18AE74u);
    ctx->pc = 0x17A590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A590u, 0x18AE6Cu, 0x18AE74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18AE74u;
label_18ae74:
    // 0x18ae74: 0x10000079  b           . + 4 + (0x79 << 2)
    ctx->pc = 0x18AE74u;
    {
        const bool branch_taken_0x18ae74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18ae74) {
            ctx->pc = 0x18B05Cu;
            return;
        }
    }
    ctx->pc = 0x18AE7Cu;
}
