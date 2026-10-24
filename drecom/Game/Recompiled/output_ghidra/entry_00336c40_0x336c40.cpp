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

// Function: entry_00336c40
// Address: 0x336c40 - 0x336c94
void entry_00336c40_0x336c40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00336c40_0x336c40");
#endif

    switch (ctx->pc) {
        case 0x336c50u: goto label_336c50;
        case 0x336c7cu: goto label_336c7c;
        default: break;
    }

    ctx->pc = 0x336c40u;

    // 0x336c40: 0x326400ff  andi        $a0, $s3, 0xFF
    ctx->pc = 0x336c40u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)255);
    // 0x336c44: 0x32a500ff  andi        $a1, $s5, 0xFF
    ctx->pc = 0x336c44u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)255);
    // 0x336c48: 0xc0ce1ec  jal         func_3387B0
    ctx->pc = 0x336C48u;
    SET_GPR_U32(ctx, 31, 0x336C50u);
    ctx->pc = 0x3387B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3387B0u, 0x336C48u, 0x336C50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x336C50u;
label_336c50:
    // 0x336c50: 0x7040b628  paddub      $s6, $v0, $zero
    ctx->pc = 0x336c50u;
    SET_GPR_VEC(ctx, 22, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x336c54: 0x161400  sll         $v0, $s6, 16
    ctx->pc = 0x336c54u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 22), 16));
    // 0x336c58: 0x34540085  ori         $s4, $v0, 0x85
    ctx->pc = 0x336c58u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)133);
    // 0x336c5c: 0x26120120  addiu       $s2, $s0, 0x120
    ctx->pc = 0x336c5cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    // 0x336c60: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x336c60u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x336c64: 0x72802628  paddub      $a0, $s4, $zero
    ctx->pc = 0x336c64u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x336c68: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x336c68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
    // 0x336c6c: 0x34454000  ori         $a1, $v0, 0x4000
    ctx->pc = 0x336c6cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x336c70: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x336c70u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x336c74: 0xc07648c  jal         func_1D9230
    ctx->pc = 0x336C74u;
    SET_GPR_U32(ctx, 31, 0x336C7Cu);
    ctx->pc = 0x1D9230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9230u, 0x336C74u, 0x336C7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x336C7Cu;
label_336c7c:
    // 0x336c7c: 0x8e02685c  lw          $v0, 0x685C($s0)
    ctx->pc = 0x336c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 26716)));
    // 0x336c80: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x336c80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x336c84: 0xae02685c  sw          $v0, 0x685C($s0)
    ctx->pc = 0x336c84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 26716), GPR_U32(ctx, 2));
    // 0x336c88: 0x8e025dd4  lw          $v0, 0x5DD4($s0)
    ctx->pc = 0x336c88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24020)));
    // 0x336c8c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x336c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x336c90: 0xae025dd4  sw          $v0, 0x5DD4($s0)
    ctx->pc = 0x336c90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24020), GPR_U32(ctx, 2));
    ctx->pc = 0x336c94u;
}
