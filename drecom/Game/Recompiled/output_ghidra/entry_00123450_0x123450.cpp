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

// Function: entry_00123450
// Address: 0x123450 - 0x123490
void entry_00123450_0x123450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00123450_0x123450");
#endif

    switch (ctx->pc) {
        case 0x12348cu: goto label_12348c;
        default: break;
    }

    ctx->pc = 0x123450u;

    // 0x123450: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x123450u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x123454: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x123454u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x123458: 0x24424ee0  addiu       $v0, $v0, 0x4EE0
    ctx->pc = 0x123458u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20192));
    // 0x12345c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x12345cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x123460: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x123460u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x123464: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x123464u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x123468: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x123468u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x12346c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x12346cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x123470: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x123470u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x123474: 0x8c820058  lw          $v0, 0x58($a0)
    ctx->pc = 0x123474u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
    // 0x123478: 0x438821  addu        $s1, $v0, $v1
    ctx->pc = 0x123478u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x12347c: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x12347cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x123480: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x123480u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x123484: 0xc079140  jal         func_1E4500
    ctx->pc = 0x123484u;
    SET_GPR_U32(ctx, 31, 0x12348Cu);
    ctx->pc = 0x1E4500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E4500u, 0x123484u, 0x12348Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12348Cu;
label_12348c:
    // 0x12348c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x12348cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->pc = 0x123490u;
}
