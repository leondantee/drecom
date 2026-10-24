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

// Function: entry_003745c0
// Address: 0x3745c0 - 0x374608
void entry_003745c0_0x3745c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003745c0_0x3745c0");
#endif

    switch (ctx->pc) {
        case 0x374604u: goto label_374604;
        default: break;
    }

    ctx->pc = 0x3745c0u;

    // 0x3745c0: 0x96030140  lhu         $v1, 0x140($s0)
    ctx->pc = 0x3745c0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x3745c4: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x3745c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x3745c8: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x3745c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x3745cc: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x3745CCu;
    {
        const bool branch_taken_0x3745cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3745cc) {
            ctx->pc = 0x374608u;
            return;
        }
    }
    ctx->pc = 0x3745D4u;
    // 0x3745d4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x3745d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x3745d8: 0x111980  sll         $v1, $s1, 6
    ctx->pc = 0x3745d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 6));
    // 0x3745dc: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x3745dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x3745e0: 0x439021  addu        $s2, $v0, $v1
    ctx->pc = 0x3745e0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3745e4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x3745e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x3745e8: 0x111980  sll         $v1, $s1, 6
    ctx->pc = 0x3745e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 6));
    // 0x3745ec: 0x8c420134  lw          $v0, 0x134($v0)
    ctx->pc = 0x3745ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 308)));
    // 0x3745f0: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x3745f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3745f4: 0x72402e28  paddub      $a1, $s2, $zero
    ctx->pc = 0x3745f4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x3745f8: 0x26060040  addiu       $a2, $s0, 0x40
    ctx->pc = 0x3745f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x3745fc: 0xc0675f8  jal         func_19D7E0
    ctx->pc = 0x3745FCu;
    SET_GPR_U32(ctx, 31, 0x374604u);
    ctx->pc = 0x19D7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D7E0u, 0x3745FCu, 0x374604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x374604u;
label_374604:
    // 0x374604: 0x0  nop
    ctx->pc = 0x374604u;
    // NOP
    ctx->pc = 0x374608u;
}
