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

// Function: caseD_5
// Address: 0x33c09c - 0x33c0f8
void caseD_5_0x33c09c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_5_0x33c09c");
#endif

    switch (ctx->pc) {
        case 0x33c0b4u: goto label_33c0b4;
        case 0x33c0d0u: goto label_33c0d0;
        default: break;
    }

    ctx->pc = 0x33c09cu;

    // 0x33c09c: 0x8e030130  lw          $v1, 0x130($s0)
    ctx->pc = 0x33c09cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
    // 0x33c0a0: 0x906311ec  lbu         $v1, 0x11EC($v1)
    ctx->pc = 0x33c0a0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4588)));
    // 0x33c0a4: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x33c0a4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x33c0a8: 0x8e040130  lw          $a0, 0x130($s0)
    ctx->pc = 0x33c0a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
    // 0x33c0ac: 0xc096348  jal         func_258D20
    ctx->pc = 0x33C0ACu;
    SET_GPR_U32(ctx, 31, 0x33C0B4u);
    ctx->pc = 0x258D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258D20u, 0x33C0ACu, 0x33C0B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33C0B4u;
label_33c0b4:
    // 0x33c0b4: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x33c0b4u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x33c0b8: 0x8e040130  lw          $a0, 0x130($s0)
    ctx->pc = 0x33c0b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
    // 0x33c0bc: 0x908311ec  lbu         $v1, 0x11EC($a0)
    ctx->pc = 0x33c0bcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4588)));
    // 0x33c0c0: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x33c0c0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x33c0c4: 0x8e040134  lw          $a0, 0x134($s0)
    ctx->pc = 0x33c0c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 308)));
    // 0x33c0c8: 0xc096348  jal         func_258D20
    ctx->pc = 0x33C0C8u;
    SET_GPR_U32(ctx, 31, 0x33C0D0u);
    ctx->pc = 0x258D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258D20u, 0x33C0C8u, 0x33C0D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33C0D0u;
label_33c0d0:
    // 0x33c0d0: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x33c0d0u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x33c0d4: 0x8e030130  lw          $v1, 0x130($s0)
    ctx->pc = 0x33c0d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
    // 0x33c0d8: 0x906311ec  lbu         $v1, 0x11EC($v1)
    ctx->pc = 0x33c0d8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4588)));
    // 0x33c0dc: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x33c0dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x33c0e0: 0x18600005  blez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x33C0E0u;
    {
        const bool branch_taken_0x33c0e0 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x33c0e0) {
            ctx->pc = 0x33C0F8u;
            return;
        }
    }
    ctx->pc = 0x33C0E8u;
    // 0x33c0e8: 0x8e040130  lw          $a0, 0x130($s0)
    ctx->pc = 0x33c0e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
    // 0x33c0ec: 0x908311ec  lbu         $v1, 0x11EC($a0)
    ctx->pc = 0x33c0ecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4588)));
    // 0x33c0f0: 0x2463fffe  addiu       $v1, $v1, -0x2
    ctx->pc = 0x33c0f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
    // 0x33c0f4: 0xa08311ec  sb          $v1, 0x11EC($a0)
    ctx->pc = 0x33c0f4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4588), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x33c0f8u;
}
