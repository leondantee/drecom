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

// Function: entry_00304a44
// Address: 0x304a44 - 0x304ac8
void entry_00304a44_0x304a44(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00304a44_0x304a44");
#endif

    switch (ctx->pc) {
        case 0x304ac0u: goto label_304ac0;
        default: break;
    }

    ctx->pc = 0x304a44u;

    // 0x304a44: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x304a44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x304a48: 0x8442127a  lh          $v0, 0x127A($v0)
    ctx->pc = 0x304a48u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4730)));
    // 0x304a4c: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x304A4Cu;
    {
        const bool branch_taken_0x304a4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x304a4c) {
            ctx->pc = 0x304AC8u;
            return;
        }
    }
    ctx->pc = 0x304A54u;
    // 0x304a54: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x304a54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x304a58: 0x24429540  addiu       $v0, $v0, -0x6AC0
    ctx->pc = 0x304a58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939968));
    // 0x304a5c: 0x27a30050  addiu       $v1, $sp, 0x50
    ctx->pc = 0x304a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x304a60: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x304a60u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x399540u));
    // 0x304a64: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x304a64u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x304a68: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x304a68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x304a6c: 0x24429550  addiu       $v0, $v0, -0x6AB0
    ctx->pc = 0x304a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939984));
    // 0x304a70: 0x27a30060  addiu       $v1, $sp, 0x60
    ctx->pc = 0x304a70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x304a74: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x304a74u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x399550u));
    // 0x304a78: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x304a78u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x304a7c: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x304a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x304a80: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x304a80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x304a84: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x304a84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x304a88: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x304a88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x304a8c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x304a8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x304a90: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x304a90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x304a94: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x304a94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x304a98: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x304a98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x304a9c: 0x34440106  ori         $a0, $v0, 0x106
    ctx->pc = 0x304a9cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)262);
    // 0x304aa0: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x304aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x304aa4: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x304aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x304aa8: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x304aa8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x304aac: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x304aacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x304ab0: 0x24470300  addiu       $a3, $v0, 0x300
    ctx->pc = 0x304ab0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 768));
    // 0x304ab4: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x304ab4u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x304ab8: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x304AB8u;
    SET_GPR_U32(ctx, 31, 0x304AC0u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x304AB8u, 0x304AC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304AC0u;
label_304ac0:
    // 0x304ac0: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x304ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x304ac4: 0xa440127a  sh          $zero, 0x127A($v0)
    ctx->pc = 0x304ac4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 0));
    ctx->pc = 0x304ac8u;
}
