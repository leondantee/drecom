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

// Function: entry_00170b68
// Address: 0x170b68 - 0x170bc0
void entry_00170b68_0x170b68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00170b68_0x170b68");
#endif

    switch (ctx->pc) {
        case 0x170b90u: goto label_170b90;
        default: break;
    }

    ctx->pc = 0x170b68u;

    // 0x170b68: 0x8fa30188  lw          $v1, 0x188($sp)
    ctx->pc = 0x170b68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x170b6c: 0x161180  sll         $v0, $s6, 6
    ctx->pc = 0x170b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 22), 6));
    // 0x170b70: 0x8c640130  lw          $a0, 0x130($v1)
    ctx->pc = 0x170b70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x170b74: 0x822821  addu        $a1, $a0, $v0
    ctx->pc = 0x170b74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x170b78: 0x24a60030  addiu       $a2, $a1, 0x30
    ctx->pc = 0x170b78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x170b7c: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x170b7cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x170b80: 0x27a20110  addiu       $v0, $sp, 0x110
    ctx->pc = 0x170b80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x170b84: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x170b84u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x170b88: 0xc05da44  jal         func_176910
    ctx->pc = 0x170B88u;
    SET_GPR_U32(ctx, 31, 0x170B90u);
    ctx->pc = 0x176910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176910u, 0x170B88u, 0x170B90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170B90u;
label_170b90:
    // 0x170b90: 0xe7a00150  swc1        $f0, 0x150($sp)
    ctx->pc = 0x170b90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
    // 0x170b94: 0xc7a10144  lwc1        $f1, 0x144($sp)
    ctx->pc = 0x170b94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x170b98: 0xc7a00150  lwc1        $f0, 0x150($sp)
    ctx->pc = 0x170b98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x170b9c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x170b9cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x170ba0: 0x0  nop
    ctx->pc = 0x170ba0u;
    // NOP
    // 0x170ba4: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x170BA4u;
    {
        const bool branch_taken_0x170ba4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x170ba4) {
            ctx->pc = 0x170BC0u;
            return;
        }
    }
    ctx->pc = 0x170BACu;
    // 0x170bac: 0xc7a00150  lwc1        $f0, 0x150($sp)
    ctx->pc = 0x170bacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x170bb0: 0xe7a00144  swc1        $f0, 0x144($sp)
    ctx->pc = 0x170bb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 324), bits); }
    // 0x170bb4: 0x3202ffff  andi        $v0, $s0, 0xFFFF
    ctx->pc = 0x170bb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x170bb8: 0x70409628  paddub      $s2, $v0, $zero
    ctx->pc = 0x170bb8u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x170bbc: 0x0  nop
    ctx->pc = 0x170bbcu;
    // NOP
    ctx->pc = 0x170bc0u;
}
