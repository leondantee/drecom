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

// Function: entry_002e61e0
// Address: 0x2e61e0 - 0x2e6314
void entry_002e61e0_0x2e61e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002e61e0_0x2e61e0");
#endif

    switch (ctx->pc) {
        case 0x2e6284u: goto label_2e6284;
        case 0x2e62b4u: goto label_2e62b4;
        case 0x2e62e4u: goto label_2e62e4;
        default: break;
    }

    ctx->pc = 0x2e61e0u;

    // 0x2e61e0: 0xc6010094  lwc1        $f1, 0x94($s0)
    ctx->pc = 0x2e61e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e61e4: 0x3c024170  lui         $v0, 0x4170
    ctx->pc = 0x2e61e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16752 << 16));
    // 0x2e61e8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e61e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e61ec: 0x0  nop
    ctx->pc = 0x2e61ecu;
    // NOP
    // 0x2e61f0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2e61f0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2e61f4: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x2e61f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x2e61f8: 0xc6010098  lwc1        $f1, 0x98($s0)
    ctx->pc = 0x2e61f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e61fc: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x2e61fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x2e6200: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e6200u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e6204: 0x0  nop
    ctx->pc = 0x2e6204u;
    // NOP
    // 0x2e6208: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2e6208u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2e620c: 0xe6000098  swc1        $f0, 0x98($s0)
    ctx->pc = 0x2e620cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
    // 0x2e6210: 0xc6010098  lwc1        $f1, 0x98($s0)
    ctx->pc = 0x2e6210u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e6214: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2e6214u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e6218: 0x0  nop
    ctx->pc = 0x2e6218u;
    // NOP
    // 0x2e621c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2e621cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e6220: 0x0  nop
    ctx->pc = 0x2e6220u;
    // NOP
    // 0x2e6224: 0x4501003b  bc1t        . + 4 + (0x3B << 2)
    ctx->pc = 0x2E6224u;
    {
        const bool branch_taken_0x2e6224 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e6224) {
            ctx->pc = 0x2E6314u;
            return;
        }
    }
    ctx->pc = 0x2E622Cu;
    // 0x2e622c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2e622cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e6230: 0x0  nop
    ctx->pc = 0x2e6230u;
    // NOP
    // 0x2e6234: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x2e6234u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2e6238: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2e6238u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e623c: 0x0  nop
    ctx->pc = 0x2e623cu;
    // NOP
    // 0x2e6240: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x2e6240u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x2e6244: 0x3c0242fa  lui         $v0, 0x42FA
    ctx->pc = 0x2e6244u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17146 << 16));
    // 0x2e6248: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e6248u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e624c: 0x0  nop
    ctx->pc = 0x2e624cu;
    // NOP
    // 0x2e6250: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x2e6250u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2e6254: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2e6254u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2e6258: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e6258u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e625c: 0x0  nop
    ctx->pc = 0x2e625cu;
    // NOP
    // 0x2e6260: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x2e6260u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x2e6264: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x2e6264u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x2e6268: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2e6268u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e626c: 0xc6000098  lwc1        $f0, 0x98($s0)
    ctx->pc = 0x2e626cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e6270: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2e6270u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2e6274: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x2e6274u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x2e6278: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x2e6278u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2e627c: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x2E627Cu;
    SET_GPR_U32(ctx, 31, 0x2E6284u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x2E627Cu, 0x2E6284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6284u;
label_2e6284:
    // 0x2e6284: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x2e6284u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2e6288: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2e6288u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2e628c: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x2e628cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2e6290: 0x27a70030  addiu       $a3, $sp, 0x30
    ctx->pc = 0x2e6290u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2e6294: 0xc60c0094  lwc1        $f12, 0x94($s0)
    ctx->pc = 0x2e6294u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2e6298: 0xc7ad004c  lwc1        $f13, 0x4C($sp)
    ctx->pc = 0x2e6298u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2e629c: 0xc7ae004c  lwc1        $f14, 0x4C($sp)
    ctx->pc = 0x2e629cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x2e62a0: 0xc60f0098  lwc1        $f15, 0x98($s0)
    ctx->pc = 0x2e62a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x2e62a4: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2e62a4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e62a8: 0x70004e28  paddub      $t1, $zero, $zero
    ctx->pc = 0x2e62a8u;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2e62ac: 0xc0862f8  jal         func_218BE0
    ctx->pc = 0x2E62ACu;
    SET_GPR_U32(ctx, 31, 0x2E62B4u);
    ctx->pc = 0x218BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218BE0u, 0x2E62ACu, 0x2E62B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E62B4u;
label_2e62b4:
    // 0x2e62b4: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x2e62b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2e62b8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2e62b8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2e62bc: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x2e62bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2e62c0: 0x27a70030  addiu       $a3, $sp, 0x30
    ctx->pc = 0x2e62c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2e62c4: 0xc60c0094  lwc1        $f12, 0x94($s0)
    ctx->pc = 0x2e62c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2e62c8: 0xc7ad004c  lwc1        $f13, 0x4C($sp)
    ctx->pc = 0x2e62c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2e62cc: 0xc7ae004c  lwc1        $f14, 0x4C($sp)
    ctx->pc = 0x2e62ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x2e62d0: 0xc60f0098  lwc1        $f15, 0x98($s0)
    ctx->pc = 0x2e62d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x2e62d4: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2e62d4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e62d8: 0x70004e28  paddub      $t1, $zero, $zero
    ctx->pc = 0x2e62d8u;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2e62dc: 0xc0862f8  jal         func_218BE0
    ctx->pc = 0x2E62DCu;
    SET_GPR_U32(ctx, 31, 0x2E62E4u);
    ctx->pc = 0x218BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218BE0u, 0x2E62DCu, 0x2E62E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E62E4u;
label_2e62e4:
    // 0x2e62e4: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x2e62e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2e62e8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2e62e8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2e62ec: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x2e62ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2e62f0: 0x27a70030  addiu       $a3, $sp, 0x30
    ctx->pc = 0x2e62f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2e62f4: 0xc60c0094  lwc1        $f12, 0x94($s0)
    ctx->pc = 0x2e62f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2e62f8: 0xc7ad004c  lwc1        $f13, 0x4C($sp)
    ctx->pc = 0x2e62f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2e62fc: 0xc7ae004c  lwc1        $f14, 0x4C($sp)
    ctx->pc = 0x2e62fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x2e6300: 0xc60f0098  lwc1        $f15, 0x98($s0)
    ctx->pc = 0x2e6300u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x2e6304: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2e6304u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e6308: 0x70004e28  paddub      $t1, $zero, $zero
    ctx->pc = 0x2e6308u;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2e630c: 0xc0862f8  jal         func_218BE0
    ctx->pc = 0x2E630Cu;
    SET_GPR_U32(ctx, 31, 0x2E6314u);
    ctx->pc = 0x218BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218BE0u, 0x2E630Cu, 0x2E6314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6314u;
}
