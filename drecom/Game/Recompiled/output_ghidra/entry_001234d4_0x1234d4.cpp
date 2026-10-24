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

// Function: entry_001234d4
// Address: 0x1234d4 - 0x123518
void entry_001234d4_0x1234d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001234d4_0x1234d4");
#endif

    switch (ctx->pc) {
        case 0x123510u: goto label_123510;
        default: break;
    }

    ctx->pc = 0x1234d4u;

    // 0x1234d4: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x1234d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1234d8: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1234d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x1234dc: 0x24424ed8  addiu       $v0, $v0, 0x4ED8
    ctx->pc = 0x1234dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20184));
    // 0x1234e0: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1234e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1234e4: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x1234e4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1234e8: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1234e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1234ec: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x1234ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1234f0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1234f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1234f4: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1234f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1234f8: 0x8c820058  lw          $v0, 0x58($a0)
    ctx->pc = 0x1234f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
    // 0x1234fc: 0x438821  addu        $s1, $v0, $v1
    ctx->pc = 0x1234fcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x123500: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x123500u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x123504: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x123504u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x123508: 0xc079140  jal         func_1E4500
    ctx->pc = 0x123508u;
    SET_GPR_U32(ctx, 31, 0x123510u);
    ctx->pc = 0x1E4500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E4500u, 0x123508u, 0x123510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123510u;
label_123510:
    // 0x123510: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x123510u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x123514: 0x0  nop
    ctx->pc = 0x123514u;
    // NOP
    ctx->pc = 0x123518u;
}
