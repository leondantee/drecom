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

// Function: entry_00169590
// Address: 0x169590 - 0x169644
void entry_00169590_0x169590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00169590_0x169590");
#endif

    switch (ctx->pc) {
        case 0x169610u: goto label_169610;
        default: break;
    }

    ctx->pc = 0x169590u;

    // 0x169590: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x169590u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x169594: 0x3c0200ff  lui         $v0, 0xFF
    ctx->pc = 0x169594u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
    // 0x169598: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x169598u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x16959c: 0x10620029  beq         $v1, $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x16959Cu;
    {
        const bool branch_taken_0x16959c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x16959c) {
            ctx->pc = 0x169644u;
            return;
        }
    }
    ctx->pc = 0x1695A4u;
    // 0x1695a4: 0xc6001314  lwc1        $f0, 0x1314($s0)
    ctx->pc = 0x1695a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4884)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1695a8: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x1695a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x1695ac: 0x3c024316  lui         $v0, 0x4316
    ctx->pc = 0x1695acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17174 << 16));
    // 0x1695b0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1695b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1695b4: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1695b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1695b8: 0xc420aad4  lwc1        $f0, -0x552C($at)
    ctx->pc = 0x1695b8u;
    { uint32_t bits = FAST_READ32(0x47AAD4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1695bc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1695bcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1695c0: 0xe7a000b4  swc1        $f0, 0xB4($sp)
    ctx->pc = 0x1695c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x1695c4: 0xc6001318  lwc1        $f0, 0x1318($s0)
    ctx->pc = 0x1695c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4888)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1695c8: 0xe7a000b8  swc1        $f0, 0xB8($sp)
    ctx->pc = 0x1695c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x1695cc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1695ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1695d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1695d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1695d4: 0x0  nop
    ctx->pc = 0x1695d4u;
    // NOP
    // 0x1695d8: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x1695d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
    // 0x1695dc: 0xc6010124  lwc1        $f1, 0x124($s0)
    ctx->pc = 0x1695dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1695e0: 0x3c024316  lui         $v0, 0x4316
    ctx->pc = 0x1695e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17174 << 16));
    // 0x1695e4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1695e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1695e8: 0x0  nop
    ctx->pc = 0x1695e8u;
    // NOP
    // 0x1695ec: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1695ecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1695f0: 0xe6000124  swc1        $f0, 0x124($s0)
    ctx->pc = 0x1695f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 292), bits); }
    // 0x1695f4: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1695f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1695f8: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x1695f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1695fc: 0x26060120  addiu       $a2, $s0, 0x120
    ctx->pc = 0x1695fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    // 0x169600: 0x3c02000c  lui         $v0, 0xC
    ctx->pc = 0x169600u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12 << 16));
    // 0x169604: 0x344707c7  ori         $a3, $v0, 0x7C7
    ctx->pc = 0x169604u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1991);
    // 0x169608: 0xc059e1c  jal         func_167870
    ctx->pc = 0x169608u;
    SET_GPR_U32(ctx, 31, 0x169610u);
    ctx->pc = 0x167870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167870u, 0x169608u, 0x169610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169610u;
label_169610:
    // 0x169610: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x169610u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x169614: 0xc6010124  lwc1        $f1, 0x124($s0)
    ctx->pc = 0x169614u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x169618: 0x3c024316  lui         $v0, 0x4316
    ctx->pc = 0x169618u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17174 << 16));
    // 0x16961c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16961cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x169620: 0x0  nop
    ctx->pc = 0x169620u;
    // NOP
    // 0x169624: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x169624u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x169628: 0xe6000124  swc1        $f0, 0x124($s0)
    ctx->pc = 0x169628u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 292), bits); }
    // 0x16962c: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x16962Cu;
    {
        const bool branch_taken_0x16962c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x16962c) {
            ctx->pc = 0x169644u;
            return;
        }
    }
    ctx->pc = 0x169634u;
    // 0x169634: 0xc6001314  lwc1        $f0, 0x1314($s0)
    ctx->pc = 0x169634u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4884)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x169638: 0xe6000120  swc1        $f0, 0x120($s0)
    ctx->pc = 0x169638u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 288), bits); }
    // 0x16963c: 0xc6001318  lwc1        $f0, 0x1318($s0)
    ctx->pc = 0x16963cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4888)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x169640: 0xe6000128  swc1        $f0, 0x128($s0)
    ctx->pc = 0x169640u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 296), bits); }
    ctx->pc = 0x169644u;
}
