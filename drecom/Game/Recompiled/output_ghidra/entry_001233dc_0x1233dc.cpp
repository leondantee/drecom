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

// Function: entry_001233dc
// Address: 0x1233dc - 0x123420
void entry_001233dc_0x1233dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001233dc_0x1233dc");
#endif

    switch (ctx->pc) {
        case 0x123418u: goto label_123418;
        default: break;
    }

    ctx->pc = 0x1233dcu;

    // 0x1233dc: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x1233dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1233e0: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1233e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x1233e4: 0x24424ec8  addiu       $v0, $v0, 0x4EC8
    ctx->pc = 0x1233e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20168));
    // 0x1233e8: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1233e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1233ec: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x1233ecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1233f0: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1233f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1233f4: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x1233f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1233f8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1233f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1233fc: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1233fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x123400: 0x8c820058  lw          $v0, 0x58($a0)
    ctx->pc = 0x123400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
    // 0x123404: 0x438821  addu        $s1, $v0, $v1
    ctx->pc = 0x123404u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x123408: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x123408u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x12340c: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x12340cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x123410: 0xc079140  jal         func_1E4500
    ctx->pc = 0x123410u;
    SET_GPR_U32(ctx, 31, 0x123418u);
    ctx->pc = 0x1E4500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E4500u, 0x123410u, 0x123418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123418u;
label_123418:
    // 0x123418: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x123418u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x12341c: 0x0  nop
    ctx->pc = 0x12341cu;
    // NOP
    ctx->pc = 0x123420u;
}
