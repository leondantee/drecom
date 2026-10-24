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

// Function: entry_0030e770
// Address: 0x30e770 - 0x30e7d8
void entry_0030e770_0x30e770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0030e770_0x30e770");
#endif

    switch (ctx->pc) {
        case 0x30e790u: goto label_30e790;
        default: break;
    }

    ctx->pc = 0x30e770u;

    // 0x30e770: 0x122880  sll         $a1, $s2, 2
    ctx->pc = 0x30e770u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x30e774: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x30e774u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x30e778: 0x244497b0  addiu       $a0, $v0, -0x6850
    ctx->pc = 0x30e778u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940592));
    // 0x30e77c: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x30e77cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x30e780: 0x8fa40298  lw          $a0, 0x298($sp)
    ctx->pc = 0x30e780u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 664)));
    // 0x30e784: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x30e784u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x30e788: 0xc096cc8  jal         func_25B320
    ctx->pc = 0x30E788u;
    SET_GPR_U32(ctx, 31, 0x30E790u);
    ctx->pc = 0x25B320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B320u, 0x30E788u, 0x30E790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30E790u;
label_30e790:
    // 0x30e790: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x30e790u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x30e794: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x30e794u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x30e798: 0x248597d0  addiu       $a1, $a0, -0x6830
    ctx->pc = 0x30e798u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940624));
    // 0x30e79c: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x30e79cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x30e7a0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x30e7a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x30e7a4: 0x220c0  sll         $a0, $v0, 3
    ctx->pc = 0x30e7a4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x30e7a8: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x30e7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x30e7ac: 0x22100  sll         $a0, $v0, 4
    ctx->pc = 0x30e7acu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x30e7b0: 0x8fa30298  lw          $v1, 0x298($sp)
    ctx->pc = 0x30e7b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 664)));
    // 0x30e7b4: 0x8c620058  lw          $v0, 0x58($v1)
    ctx->pc = 0x30e7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x30e7b8: 0x448021  addu        $s0, $v0, $a0
    ctx->pc = 0x30e7b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x30e7bc: 0xae000060  sw          $zero, 0x60($s0)
    ctx->pc = 0x30e7bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 0));
    // 0x30e7c0: 0xae000064  sw          $zero, 0x64($s0)
    ctx->pc = 0x30e7c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 0));
    // 0x30e7c4: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x30e7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x30e7c8: 0xae020068  sw          $v0, 0x68($s0)
    ctx->pc = 0x30e7c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 2));
    // 0x30e7cc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x30e7ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30e7d0: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x30e7d0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x30e7d4: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x30e7d4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->pc = 0x30e7d8u;
}
