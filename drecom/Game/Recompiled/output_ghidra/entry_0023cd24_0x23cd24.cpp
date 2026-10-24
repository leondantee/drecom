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

// Function: entry_0023cd24
// Address: 0x23cd24 - 0x23cd60
void entry_0023cd24_0x23cd24(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0023cd24_0x23cd24");
#endif

    switch (ctx->pc) {
        case 0x23cd2cu: goto label_23cd2c;
        default: break;
    }

    ctx->pc = 0x23cd24u;

    // 0x23cd24: 0xc067694  jal         func_19DA50
    ctx->pc = 0x23CD24u;
    SET_GPR_U32(ctx, 31, 0x23CD2Cu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x23CD24u, 0x23CD2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23CD2Cu;
label_23cd2c:
    // 0x23cd2c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x23cd2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x23cd30: 0x3063001f  andi        $v1, $v1, 0x1F
    ctx->pc = 0x23cd30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
    // 0x23cd34: 0x2463003c  addiu       $v1, $v1, 0x3C
    ctx->pc = 0x23cd34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 60));
    // 0x23cd38: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x23cd38u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x23cd3c: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x23cd3cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x23cd40: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x23cd40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23cd44: 0xa4641278  sh          $a0, 0x1278($v1)
    ctx->pc = 0x23cd44u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 4));
    // 0x23cd48: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x23cd48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23cd4c: 0x24651330  addiu       $a1, $v1, 0x1330
    ctx->pc = 0x23cd4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x23cd50: 0x8ca40030  lw          $a0, 0x30($a1)
    ctx->pc = 0x23cd50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x23cd54: 0x2403ffe7  addiu       $v1, $zero, -0x19
    ctx->pc = 0x23cd54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967271));
    // 0x23cd58: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x23cd58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x23cd5c: 0xaca30030  sw          $v1, 0x30($a1)
    ctx->pc = 0x23cd5cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 48), GPR_U32(ctx, 3));
    ctx->pc = 0x23cd60u;
}
