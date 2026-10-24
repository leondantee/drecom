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

// Function: entry_00369abc
// Address: 0x369abc - 0x369ba4
void entry_00369abc_0x369abc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00369abc_0x369abc");
#endif

    switch (ctx->pc) {
        case 0x369ad0u: goto label_369ad0;
        case 0x369b18u: goto label_369b18;
        case 0x369b28u: goto label_369b28;
        case 0x369b88u: goto label_369b88;
        default: break;
    }

    ctx->pc = 0x369abcu;

    // 0x369abc: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x369abcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x369ac0: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x369ac0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x369ac4: 0xc44c000c  lwc1        $f12, 0xC($v0)
    ctx->pc = 0x369ac4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x369ac8: 0xc067874  jal         func_19E1D0
    ctx->pc = 0x369AC8u;
    SET_GPR_U32(ctx, 31, 0x369AD0u);
    ctx->pc = 0x19E1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E1D0u, 0x369AC8u, 0x369AD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x369AD0u;
label_369ad0:
    // 0x369ad0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x369ad0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x369ad4: 0x0  nop
    ctx->pc = 0x369ad4u;
    // NOP
    // 0x369ad8: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x369ad8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x369adc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x369adcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x369ae0: 0x0  nop
    ctx->pc = 0x369ae0u;
    // NOP
    // 0x369ae4: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x369ae4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x369ae8: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x369ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x369aec: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x369aecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x369af0: 0xe7a000c8  swc1        $f0, 0xC8($sp)
    ctx->pc = 0x369af0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x369af4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x369af4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x369af8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x369af8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x369afc: 0x0  nop
    ctx->pc = 0x369afcu;
    // NOP
    // 0x369b00: 0xe7a000cc  swc1        $f0, 0xCC($sp)
    ctx->pc = 0x369b00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
    // 0x369b04: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x369b04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x369b08: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x369b08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x369b0c: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x369b0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x369b10: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x369B10u;
    SET_GPR_U32(ctx, 31, 0x369B18u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x369B18u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x369B18u) { return; }
    ctx->pc = 0x369B18u;
label_369b18:
    // 0x369b18: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x369b18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x369b1c: 0x26050030  addiu       $a1, $s0, 0x30
    ctx->pc = 0x369b1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x369b20: 0xc040c9e  jal         func_103278
    ctx->pc = 0x369B20u;
    SET_GPR_U32(ctx, 31, 0x369B28u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x369B28u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x369B28u) { return; }
    ctx->pc = 0x369B28u;
label_369b28:
    // 0x369b28: 0xc6010030  lwc1        $f1, 0x30($s0)
    ctx->pc = 0x369b28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x369b2c: 0xc7a000c0  lwc1        $f0, 0xC0($sp)
    ctx->pc = 0x369b2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x369b30: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x369b30u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x369b34: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x369b34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x369b38: 0xc6010038  lwc1        $f1, 0x38($s0)
    ctx->pc = 0x369b38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x369b3c: 0xc7a000c8  lwc1        $f0, 0xC8($sp)
    ctx->pc = 0x369b3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x369b40: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x369b40u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x369b44: 0xe6000038  swc1        $f0, 0x38($s0)
    ctx->pc = 0x369b44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
    // 0x369b48: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x369b48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x369b4c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x369b4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x369b50: 0x0  nop
    ctx->pc = 0x369b50u;
    // NOP
    // 0x369b54: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x369b54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x369b58: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x369b58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x369b5c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x369b5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x369b60: 0x0  nop
    ctx->pc = 0x369b60u;
    // NOP
    // 0x369b64: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x369b64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x369b68: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x369b68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x369b6c: 0x26050030  addiu       $a1, $s0, 0x30
    ctx->pc = 0x369b6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x369b70: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x369b70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x369b74: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x369b74u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x369b78: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x369b78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x369b7c: 0x344801c7  ori         $t0, $v0, 0x1C7
    ctx->pc = 0x369b7cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)455);
    // 0x369b80: 0xc05a2d4  jal         func_168B50
    ctx->pc = 0x369B80u;
    SET_GPR_U32(ctx, 31, 0x369B88u);
    ctx->pc = 0x168B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x168B50u, 0x369B80u, 0x369B88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x369B88u;
label_369b88:
    // 0x369b88: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x369b88u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x369b8c: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x369B8Cu;
    {
        const bool branch_taken_0x369b8c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x369b8c) {
            ctx->pc = 0x369BA4u;
            return;
        }
    }
    ctx->pc = 0x369B94u;
    // 0x369b94: 0x26040030  addiu       $a0, $s0, 0x30
    ctx->pc = 0x369b94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x369b98: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x369b98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x369b9c: 0xc040c9e  jal         func_103278
    ctx->pc = 0x369B9Cu;
    SET_GPR_U32(ctx, 31, 0x369BA4u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x369BA4u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x369BA4u) { return; }
    ctx->pc = 0x369BA4u;
}
