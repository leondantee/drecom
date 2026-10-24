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

// Function: entry_0013fb48
// Address: 0x13fb48 - 0x13fba0
void entry_0013fb48_0x13fb48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013fb48_0x13fb48");
#endif

    switch (ctx->pc) {
        case 0x13fb60u: goto label_13fb60;
        case 0x13fb9cu: goto label_13fb9c;
        default: break;
    }

    ctx->pc = 0x13fb48u;

    // 0x13fb48: 0x27a51570  addiu       $a1, $sp, 0x1570
    ctx->pc = 0x13fb48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 5488));
    // 0x13fb4c: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x13fb4cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x13fb50: 0x27a21610  addiu       $v0, $sp, 0x1610
    ctx->pc = 0x13fb50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 5648));
    // 0x13fb54: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x13fb54u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x13fb58: 0xc04f9c0  jal         func_13E700
    ctx->pc = 0x13FB58u;
    SET_GPR_U32(ctx, 31, 0x13FB60u);
    ctx->pc = 0x13E700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E700u, 0x13FB58u, 0x13FB60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13FB60u;
label_13fb60:
    // 0x13fb60: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x13fb60u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x13fb64: 0x32030041  andi        $v1, $s0, 0x41
    ctx->pc = 0x13fb64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65);
    // 0x13fb68: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x13FB68u;
    {
        const bool branch_taken_0x13fb68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x13fb68) {
            ctx->pc = 0x13FBA0u;
            return;
        }
    }
    ctx->pc = 0x13FB70u;
    // 0x13fb70: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x13fb70u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x13fb74: 0x44846000  mtc1        $a0, $f12
    ctx->pc = 0x13fb74u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x13fb78: 0x27a51610  addiu       $a1, $sp, 0x1610
    ctx->pc = 0x13fb78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 5648));
    // 0x13fb7c: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x13fb7cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x13fb80: 0x27a61570  addiu       $a2, $sp, 0x1570
    ctx->pc = 0x13fb80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 5488));
    // 0x13fb84: 0x70c02e28  paddub      $a1, $a2, $zero
    ctx->pc = 0x13fb84u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x13fb88: 0x27a71610  addiu       $a3, $sp, 0x1610
    ctx->pc = 0x13fb88u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 5648));
    // 0x13fb8c: 0x70e03628  paddub      $a2, $a3, $zero
    ctx->pc = 0x13fb8cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x13fb90: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x13fb90u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x13fb94: 0xc04f984  jal         func_13E610
    ctx->pc = 0x13FB94u;
    SET_GPR_U32(ctx, 31, 0x13FB9Cu);
    ctx->pc = 0x13E610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E610u, 0x13FB94u, 0x13FB9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13FB9Cu;
label_13fb9c:
    // 0x13fb9c: 0x0  nop
    ctx->pc = 0x13fb9cu;
    // NOP
    ctx->pc = 0x13fba0u;
}
