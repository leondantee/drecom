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

// Function: entry_0036876c
// Address: 0x36876c - 0x3687b0
void entry_0036876c_0x36876c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0036876c_0x36876c");
#endif

    switch (ctx->pc) {
        case 0x3687a8u: goto label_3687a8;
        default: break;
    }

    ctx->pc = 0x36876cu;

label_36876c:
    // 0x36876c: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x36876cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
label_368770:
    // 0x368770: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x368770u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_368774:
    // 0x368774: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x368774u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_368778:
    // 0x368778: 0x2428821  addu        $s1, $s2, $v0
    ctx->pc = 0x368778u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_36877c:
    // 0x36877c: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x36877cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_368780:
    // 0x368780: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x368780u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
label_368784:
    // 0x368784: 0x92220011  lbu         $v0, 0x11($s1)
    ctx->pc = 0x368784u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 17)));
label_368788:
    // 0x368788: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x368788u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_36878c:
    // 0x36878c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x36878cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_368790:
    // 0x368790: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x368790u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_368794:
    // 0x368794: 0x2442b080  addiu       $v0, $v0, -0x4F80
    ctx->pc = 0x368794u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946944));
label_368798:
    // 0x368798: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x368798u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_36879c:
    // 0x36879c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x36879cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3687a0:
    // 0x3687a0: 0x40f809  jalr        $v0
label_3687a4:
    if (ctx->pc == 0x3687A4u) {
        ctx->pc = 0x3687A8u;
        goto label_3687a8;
    }
    ctx->pc = 0x3687A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3687A8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3687A0u, 0x3687A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3687A8u;
label_3687a8:
    // 0x3687a8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3687a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_3687ac:
    // 0x3687ac: 0x0  nop
    ctx->pc = 0x3687acu;
    // NOP
    ctx->pc = 0x3687b0u;
}
