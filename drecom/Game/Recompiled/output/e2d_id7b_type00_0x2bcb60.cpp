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

// Function: e2d_id7b_type00
// Address: 0x2bcb60 - 0x2bcc4c
void e2d_id7b_type00_0x2bcb60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id7b_type00_0x2bcb60");
#endif

    switch (ctx->pc) {
        case 0x2bcbc8u: goto label_2bcbc8;
        default: break;
    }

    ctx->pc = 0x2bcb60u;

    // 0x2bcb60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2bcb60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2bcb64: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2bcb64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2bcb68: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2bcb68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2bcb6c: 0x3c024240  lui         $v0, 0x4240
    ctx->pc = 0x2bcb6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16960 << 16));
    // 0x2bcb70: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bcb70u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bcb74: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2bcb74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bcb78: 0xe4400090  swc1        $f0, 0x90($v0)
    ctx->pc = 0x2bcb78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 144), bits); }
    // 0x2bcb7c: 0x3c0242c0  lui         $v0, 0x42C0
    ctx->pc = 0x2bcb7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17088 << 16));
    // 0x2bcb80: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bcb80u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bcb84: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2bcb84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bcb88: 0xe4400094  swc1        $f0, 0x94($v0)
    ctx->pc = 0x2bcb88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 148), bits); }
    // 0x2bcb8c: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x2bcb8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x2bcb90: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bcb90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bcb94: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2bcb94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bcb98: 0xe4400098  swc1        $f0, 0x98($v0)
    ctx->pc = 0x2bcb98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 152), bits); }
    // 0x2bcb9c: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2bcb9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2bcba0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bcba0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bcba4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2bcba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bcba8: 0xe440009c  swc1        $f0, 0x9C($v0)
    ctx->pc = 0x2bcba8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 156), bits); }
    // 0x2bcbac: 0x3c023cf5  lui         $v0, 0x3CF5
    ctx->pc = 0x2bcbacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15605 << 16));
    // 0x2bcbb0: 0x3442c28f  ori         $v0, $v0, 0xC28F
    ctx->pc = 0x2bcbb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49807);
    // 0x2bcbb4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bcbb4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bcbb8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2bcbb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bcbbc: 0xe44000f4  swc1        $f0, 0xF4($v0)
    ctx->pc = 0x2bcbbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 244), bits); }
    // 0x2bcbc0: 0xc06765c  jal         func_19D970
    ctx->pc = 0x2BCBC0u;
    SET_GPR_U32(ctx, 31, 0x2BCBC8u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x2BCBC0u, 0x2BCBC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BCBC8u;
label_2bcbc8:
    // 0x2bcbc8: 0x3c0341f0  lui         $v1, 0x41F0
    ctx->pc = 0x2bcbc8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16880 << 16));
    // 0x2bcbcc: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2bcbccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2bcbd0: 0x0  nop
    ctx->pc = 0x2bcbd0u;
    // NOP
    // 0x2bcbd4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2bcbd4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2bcbd8: 0x3c034348  lui         $v1, 0x4348
    ctx->pc = 0x2bcbd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17224 << 16));
    // 0x2bcbdc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2bcbdcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bcbe0: 0x0  nop
    ctx->pc = 0x2bcbe0u;
    // NOP
    // 0x2bcbe4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2bcbe4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2bcbe8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2bcbe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bcbec: 0xe4600104  swc1        $f0, 0x104($v1)
    ctx->pc = 0x2bcbecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 260), bits); }
    // 0x2bcbf0: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x2bcbf0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x2bcbf4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2bcbf4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bcbf8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2bcbf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bcbfc: 0xe4600054  swc1        $f0, 0x54($v1)
    ctx->pc = 0x2bcbfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 84), bits); }
    // 0x2bcc00: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x2bcc00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x2bcc04: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2bcc04u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bcc08: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2bcc08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bcc0c: 0xe4600060  swc1        $f0, 0x60($v1)
    ctx->pc = 0x2bcc0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 96), bits); }
    // 0x2bcc10: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x2bcc10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x2bcc14: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2bcc14u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bcc18: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2bcc18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bcc1c: 0xe4600064  swc1        $f0, 0x64($v1)
    ctx->pc = 0x2bcc1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 100), bits); }
    // 0x2bcc20: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x2bcc20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x2bcc24: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2bcc24u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bcc28: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2bcc28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bcc2c: 0xe4600068  swc1        $f0, 0x68($v1)
    ctx->pc = 0x2bcc2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 104), bits); }
    // 0x2bcc30: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x2bcc30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2bcc34: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2bcc34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bcc38: 0xa0640139  sb          $a0, 0x139($v1)
    ctx->pc = 0x2bcc38u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 313), (uint8_t)GPR_U32(ctx, 4));
    // 0x2bcc3c: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2bcc3cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bcc40: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2bcc40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2bcc44: 0x3e00008  jr          $ra
    ctx->pc = 0x2BCC44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BCC44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BCC4Cu;
}
