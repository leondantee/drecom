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

// Function: entry_001d4c10
// Address: 0x1d4c10 - 0x1d4c8c
void entry_001d4c10_0x1d4c10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d4c10_0x1d4c10");
#endif

    switch (ctx->pc) {
        case 0x1d4c58u: goto label_1d4c58;
        case 0x1d4c74u: goto label_1d4c74;
        default: break;
    }

    ctx->pc = 0x1d4c10u;

    // 0x1d4c10: 0xc7a20140  lwc1        $f2, 0x140($sp)
    ctx->pc = 0x1d4c10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1d4c14: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1d4c14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1d4c18: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1d4c18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1d4c1c: 0xc7a00150  lwc1        $f0, 0x150($sp)
    ctx->pc = 0x1d4c1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d4c20: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1d4c20u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1d4c24: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x1d4c24u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x1d4c28: 0xe7a00140  swc1        $f0, 0x140($sp)
    ctx->pc = 0x1d4c28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
    // 0x1d4c2c: 0x26520002  addiu       $s2, $s2, 0x2
    ctx->pc = 0x1d4c2cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
    // 0x1d4c30: 0x2605ffff  addiu       $a1, $s0, -0x1
    ctx->pc = 0x1d4c30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x1d4c34: 0x70a08628  paddub      $s0, $a1, $zero
    ctx->pc = 0x1d4c34u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1d4c38: 0x14a0ff26  bnez        $a1, . + 4 + (-0xDA << 2)
    ctx->pc = 0x1D4C38u;
    {
        const bool branch_taken_0x1d4c38 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d4c38) {
            ctx->pc = 0x1D48D4u;
            return;
        }
    }
    ctx->pc = 0x1D4C40u;
    // 0x1d4c40: 0x27a20120  addiu       $v0, $sp, 0x120
    ctx->pc = 0x1d4c40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x1d4c44: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1d4c44u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1d4c48: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x1d4c48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1d4c4c: 0x72203628  paddub      $a2, $s1, $zero
    ctx->pc = 0x1d4c4cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1d4c50: 0xc04f958  jal         func_13E560
    ctx->pc = 0x1D4C50u;
    SET_GPR_U32(ctx, 31, 0x1D4C58u);
    ctx->pc = 0x13E560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E560u, 0x1D4C50u, 0x1D4C58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4C58u;
label_1d4c58:
    // 0x1d4c58: 0x7040be28  paddub      $s7, $v0, $zero
    ctx->pc = 0x1d4c58u;
    SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1d4c5c: 0x17b980  sll         $s7, $s7, 6
    ctx->pc = 0x1d4c5cu;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 23), 6));
    // 0x1d4c60: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x1d4c60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x1d4c64: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x1d4c64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1d4c68: 0x26260010  addiu       $a2, $s1, 0x10
    ctx->pc = 0x1d4c68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x1d4c6c: 0xc04f958  jal         func_13E560
    ctx->pc = 0x1D4C6Cu;
    SET_GPR_U32(ctx, 31, 0x1D4C74u);
    ctx->pc = 0x13E560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E560u, 0x1D4C6Cu, 0x1D4C74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4C74u;
label_1d4c74:
    // 0x1d4c74: 0x7040be28  paddub      $s7, $v0, $zero
    ctx->pc = 0x1d4c74u;
    SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1d4c78: 0x17b980  sll         $s7, $s7, 6
    ctx->pc = 0x1d4c78u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 23), 6));
    // 0x1d4c7c: 0x8fa50180  lw          $a1, 0x180($sp)
    ctx->pc = 0x1d4c7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1d4c80: 0x24a2ffff  addiu       $v0, $a1, -0x1
    ctx->pc = 0x1d4c80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x1d4c84: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x1d4c84u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1d4c88: 0x24120002  addiu       $s2, $zero, 0x2
    ctx->pc = 0x1d4c88u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x1d4c8cu;
}
