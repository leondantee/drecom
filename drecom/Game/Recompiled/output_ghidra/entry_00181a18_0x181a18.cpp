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

// Function: entry_00181a18
// Address: 0x181a18 - 0x181b58
void entry_00181a18_0x181a18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00181a18_0x181a18");
#endif

    switch (ctx->pc) {
        case 0x181b28u: goto label_181b28;
        default: break;
    }

    ctx->pc = 0x181a18u;

    // 0x181a18: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x181a18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x181a1c: 0x8423f138  lh          $v1, -0xEC8($at)
    ctx->pc = 0x181a1cu;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x47F138u));
    // 0x181a20: 0x3343c  dsll32      $a2, $v1, 16
    ctx->pc = 0x181a20u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 16));
    // 0x181a24: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x181a24u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x181a28: 0x61900  sll         $v1, $a2, 4
    ctx->pc = 0x181a28u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x181a2c: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x181a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x181a30: 0x33940  sll         $a3, $v1, 5
    ctx->pc = 0x181a30u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x181a34: 0x3c06004a  lui         $a2, 0x4A
    ctx->pc = 0x181a34u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)74 << 16));
    // 0x181a38: 0x24c31380  addiu       $v1, $a2, 0x1380
    ctx->pc = 0x181a38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4992));
    // 0x181a3c: 0x673821  addu        $a3, $v1, $a3
    ctx->pc = 0x181a3cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x181a40: 0x3c0341e3  lui         $v1, 0x41E3
    ctx->pc = 0x181a40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16867 << 16));
    // 0x181a44: 0x34662d43  ori         $a2, $v1, 0x2D43
    ctx->pc = 0x181a44u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)11587);
    // 0x181a48: 0x44860800  mtc1        $a2, $f1
    ctx->pc = 0x181a48u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x181a4c: 0xc4e00178  lwc1        $f0, 0x178($a3)
    ctx->pc = 0x181a4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x181a50: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x181a50u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x181a54: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x181a54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x181a58: 0xc420f1d8  lwc1        $f0, -0xE28($at)
    ctx->pc = 0x181a58u;
    { uint32_t bits = FAST_READ32(0x47F1D8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x181a5c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x181a5cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x181a60: 0x0  nop
    ctx->pc = 0x181a60u;
    // NOP
    // 0x181a64: 0x45000096  bc1f        . + 4 + (0x96 << 2)
    ctx->pc = 0x181A64u;
    {
        const bool branch_taken_0x181a64 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x181a64) {
            ctx->pc = 0x181CC0u;
            return;
        }
    }
    ctx->pc = 0x181A6Cu;
    // 0x181a6c: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x181a6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x181a70: 0x8423f138  lh          $v1, -0xEC8($at)
    ctx->pc = 0x181a70u;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x47F138u));
    // 0x181a74: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x181a74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x181a78: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x181a78u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x181a7c: 0x33100  sll         $a2, $v1, 4
    ctx->pc = 0x181a7cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x181a80: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x181a80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x181a84: 0x33140  sll         $a2, $v1, 5
    ctx->pc = 0x181a84u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x181a88: 0x3c07004a  lui         $a3, 0x4A
    ctx->pc = 0x181a88u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)74 << 16));
    // 0x181a8c: 0x24e31380  addiu       $v1, $a3, 0x1380
    ctx->pc = 0x181a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4992));
    // 0x181a90: 0x663021  addu        $a2, $v1, $a2
    ctx->pc = 0x181a90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x181a94: 0x3c0341e3  lui         $v1, 0x41E3
    ctx->pc = 0x181a94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16867 << 16));
    // 0x181a98: 0x34632d43  ori         $v1, $v1, 0x2D43
    ctx->pc = 0x181a98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)11587);
    // 0x181a9c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x181a9cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x181aa0: 0xc4c00178  lwc1        $f0, 0x178($a2)
    ctx->pc = 0x181aa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x181aa4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x181aa4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x181aa8: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x181aa8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x181aac: 0xc420f1d8  lwc1        $f0, -0xE28($at)
    ctx->pc = 0x181aacu;
    { uint32_t bits = FAST_READ32(0x47F1D8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x181ab0: 0x46010043  div.s       $f1, $f0, $f1
    ctx->pc = 0x181ab0u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x181ab4: 0x3c0642b4  lui         $a2, 0x42B4
    ctx->pc = 0x181ab4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)17076 << 16));
    // 0x181ab8: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x181ab8u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x181abc: 0x0  nop
    ctx->pc = 0x181abcu;
    // NOP
    // 0x181ac0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x181ac0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x181ac4: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x181ac4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x181ac8: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x181ac8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x181acc: 0x8423f138  lh          $v1, -0xEC8($at)
    ctx->pc = 0x181accu;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x47F138u));
    // 0x181ad0: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x181ad0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x181ad4: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x181ad4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x181ad8: 0x33900  sll         $a3, $v1, 4
    ctx->pc = 0x181ad8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x181adc: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x181adcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x181ae0: 0x33140  sll         $a2, $v1, 5
    ctx->pc = 0x181ae0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x181ae4: 0x3c07004a  lui         $a3, 0x4A
    ctx->pc = 0x181ae4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)74 << 16));
    // 0x181ae8: 0x24e31380  addiu       $v1, $a3, 0x1380
    ctx->pc = 0x181ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4992));
    // 0x181aec: 0x663021  addu        $a2, $v1, $a2
    ctx->pc = 0x181aecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x181af0: 0x3c0341e3  lui         $v1, 0x41E3
    ctx->pc = 0x181af0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16867 << 16));
    // 0x181af4: 0x34632d43  ori         $v1, $v1, 0x2D43
    ctx->pc = 0x181af4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)11587);
    // 0x181af8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x181af8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x181afc: 0xc4c00178  lwc1        $f0, 0x178($a2)
    ctx->pc = 0x181afcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x181b00: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x181b00u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x181b04: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x181b04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x181b08: 0xc420f1d8  lwc1        $f0, -0xE28($at)
    ctx->pc = 0x181b08u;
    { uint32_t bits = FAST_READ32(0x47F1D8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x181b0c: 0x46010043  div.s       $f1, $f0, $f1
    ctx->pc = 0x181b0cu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x181b10: 0x3c0642b4  lui         $a2, 0x42B4
    ctx->pc = 0x181b10u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)17076 << 16));
    // 0x181b14: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x181b14u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x181b18: 0x0  nop
    ctx->pc = 0x181b18u;
    // NOP
    // 0x181b1c: 0x46010302  mul.s       $f12, $f0, $f1
    ctx->pc = 0x181b1cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x181b20: 0xc047fa2  jal         func_11FE88
    ctx->pc = 0x181B20u;
    SET_GPR_U32(ctx, 31, 0x181B28u);
    ctx->pc = 0x11FE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FE88u, 0x181B20u, 0x181B28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x181B28u;
label_181b28:
    // 0x181b28: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x181b28u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x181b2c: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x181b2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x181b30: 0xac23f218  sw          $v1, -0xDE8($at)
    ctx->pc = 0x181b30u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x47F218u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47F218u, _value); } while (0);
    // 0x181b34: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x181b34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x181b38: 0x8c23f218  lw          $v1, -0xDE8($at)
    ctx->pc = 0x181b38u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x47F218u));
    // 0x181b3c: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x181B3Cu;
    {
        const bool branch_taken_0x181b3c = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x181b3c) {
            ctx->pc = 0x181B58u;
            return;
        }
    }
    ctx->pc = 0x181B44u;
    // 0x181b44: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x181b44u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x181b48: 0x0  nop
    ctx->pc = 0x181b48u;
    // NOP
    // 0x181b4c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x181b4cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x181b50: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x181B50u;
    {
        const bool branch_taken_0x181b50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x181b50) {
            ctx->pc = 0x181B74u;
            return;
        }
    }
    ctx->pc = 0x181B58u;
}
