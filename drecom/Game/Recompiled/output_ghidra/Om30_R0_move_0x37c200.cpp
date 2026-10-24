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

// Function: Om30_R0_move
// Address: 0x37c200 - 0x37c450
void Om30_R0_move_0x37c200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Om30_R0_move_0x37c200");
#endif

    switch (ctx->pc) {
        case 0x37c2bcu: goto label_37c2bc;
        default: break;
    }

    ctx->pc = 0x37c200u;

    // 0x37c200: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x37c200u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x37c204: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x37c204u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x37c208: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x37c208u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x37c20c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x37c20cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x37c210: 0x94220084  lhu         $v0, 0x84($at)
    ctx->pc = 0x37c210u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x5D0084u));
    // 0x37c214: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x37c214u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x37c218: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x37c218u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x37c21c: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x37C21Cu;
    {
        const bool branch_taken_0x37c21c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x37c21c) {
            ctx->pc = 0x37C2A4u;
            goto label_37c2a4;
        }
    }
    ctx->pc = 0x37C224u;
    // 0x37c224: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x37c224u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
    // 0x37c228: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x37c228u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x37c22c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x37c22cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x37c230: 0xc420dce0  lwc1        $f0, -0x2320($at)
    ctx->pc = 0x37c230u;
    { uint32_t bits = FAST_READ32(0x3EDCE0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x37c234: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x37c234u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x37c238: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x37c238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x37c23c: 0xe4400120  swc1        $f0, 0x120($v0)
    ctx->pc = 0x37c23cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 288), bits); }
    // 0x37c240: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x37c240u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x37c244: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x37c244u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x37c248: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x37c248u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x37c24c: 0xc420dce4  lwc1        $f0, -0x231C($at)
    ctx->pc = 0x37c24cu;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x37c250: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x37c250u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x37c254: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x37c254u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x37c258: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x37c258u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x37c25c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x37c25cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x37c260: 0xc420dce8  lwc1        $f0, -0x2318($at)
    ctx->pc = 0x37c260u;
    { uint32_t bits = FAST_READ32(0x3EDCE8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x37c264: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x37c264u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x37c268: 0xe4400128  swc1        $f0, 0x128($v0)
    ctx->pc = 0x37c268u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 296), bits); }
    // 0x37c26c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x37c26cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x37c270: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x37c270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x37c274: 0xe44012cc  swc1        $f0, 0x12CC($v0)
    ctx->pc = 0x37c274u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4812), bits); }
    // 0x37c278: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x37c278u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x37c27c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x37c27cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x37c280: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x37c280u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x37c284: 0xe44001a8  swc1        $f0, 0x1A8($v0)
    ctx->pc = 0x37c284u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 424), bits); }
    // 0x37c288: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x37c288u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x37c28c: 0xe44001a4  swc1        $f0, 0x1A4($v0)
    ctx->pc = 0x37c28cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 420), bits); }
    // 0x37c290: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x37c290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x37c294: 0xe44001a0  swc1        $f0, 0x1A0($v0)
    ctx->pc = 0x37c294u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 416), bits); }
    // 0x37c298: 0x2403007f  addiu       $v1, $zero, 0x7F
    ctx->pc = 0x37c298u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x37c29c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x37c29cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x37c2a0: 0xa04311ec  sb          $v1, 0x11EC($v0)
    ctx->pc = 0x37c2a0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4588), (uint8_t)GPR_U32(ctx, 3));
label_37c2a4:
    // 0x37c2a4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x37c2a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x37c2a8: 0x904211ec  lbu         $v0, 0x11EC($v0)
    ctx->pc = 0x37c2a8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4588)));
    // 0x37c2ac: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x37c2acu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x37c2b0: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x37c2b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x37c2b4: 0xc096348  jal         func_258D20
    ctx->pc = 0x37C2B4u;
    SET_GPR_U32(ctx, 31, 0x37C2BCu);
    ctx->pc = 0x258D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258D20u, 0x37C2B4u, 0x37C2BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37C2BCu;
label_37c2bc:
    // 0x37c2bc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x37c2bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x37c2c0: 0xc46112cc  lwc1        $f1, 0x12CC($v1)
    ctx->pc = 0x37c2c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4812)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x37c2c4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x37c2c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x37c2c8: 0xc4600120  lwc1        $f0, 0x120($v1)
    ctx->pc = 0x37c2c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x37c2cc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x37c2ccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x37c2d0: 0xe4600120  swc1        $f0, 0x120($v1)
    ctx->pc = 0x37c2d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 288), bits); }
    // 0x37c2d4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x37c2d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x37c2d8: 0xc46112cc  lwc1        $f1, 0x12CC($v1)
    ctx->pc = 0x37c2d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4812)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x37c2dc: 0x3c0341f0  lui         $v1, 0x41F0
    ctx->pc = 0x37c2dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16880 << 16));
    // 0x37c2e0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x37c2e0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x37c2e4: 0x0  nop
    ctx->pc = 0x37c2e4u;
    // NOP
    // 0x37c2e8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x37c2e8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x37c2ec: 0x0  nop
    ctx->pc = 0x37c2ecu;
    // NOP
    // 0x37c2f0: 0x4500001f  bc1f        . + 4 + (0x1F << 2)
    ctx->pc = 0x37C2F0u;
    {
        const bool branch_taken_0x37c2f0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x37c2f0) {
            ctx->pc = 0x37C370u;
            goto label_37c370;
        }
    }
    ctx->pc = 0x37C2F8u;
    // 0x37c2f8: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x37c2f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x37c2fc: 0xc48112cc  lwc1        $f1, 0x12CC($a0)
    ctx->pc = 0x37c2fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4812)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x37c300: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x37c300u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x37c304: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x37c304u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x37c308: 0x0  nop
    ctx->pc = 0x37c308u;
    // NOP
    // 0x37c30c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x37c30cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x37c310: 0xe48012cc  swc1        $f0, 0x12CC($a0)
    ctx->pc = 0x37c310u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4812), bits); }
    // 0x37c314: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x37c314u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x37c318: 0x3c033f85  lui         $v1, 0x3F85
    ctx->pc = 0x37c318u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16261 << 16));
    // 0x37c31c: 0x34631eb8  ori         $v1, $v1, 0x1EB8
    ctx->pc = 0x37c31cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)7864);
    // 0x37c320: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x37c320u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x37c324: 0xc48001a0  lwc1        $f0, 0x1A0($a0)
    ctx->pc = 0x37c324u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x37c328: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x37c328u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x37c32c: 0xe48001a0  swc1        $f0, 0x1A0($a0)
    ctx->pc = 0x37c32cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 416), bits); }
    // 0x37c330: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x37c330u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x37c334: 0x3c033f85  lui         $v1, 0x3F85
    ctx->pc = 0x37c334u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16261 << 16));
    // 0x37c338: 0x34631eb8  ori         $v1, $v1, 0x1EB8
    ctx->pc = 0x37c338u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)7864);
    // 0x37c33c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x37c33cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x37c340: 0xc48001a4  lwc1        $f0, 0x1A4($a0)
    ctx->pc = 0x37c340u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x37c344: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x37c344u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x37c348: 0xe48001a4  swc1        $f0, 0x1A4($a0)
    ctx->pc = 0x37c348u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 420), bits); }
    // 0x37c34c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x37c34cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x37c350: 0x3c033f85  lui         $v1, 0x3F85
    ctx->pc = 0x37c350u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16261 << 16));
    // 0x37c354: 0x34631eb8  ori         $v1, $v1, 0x1EB8
    ctx->pc = 0x37c354u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)7864);
    // 0x37c358: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x37c358u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x37c35c: 0xc48001a8  lwc1        $f0, 0x1A8($a0)
    ctx->pc = 0x37c35cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x37c360: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x37c360u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x37c364: 0xe48001a8  swc1        $f0, 0x1A8($a0)
    ctx->pc = 0x37c364u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 424), bits); }
    // 0x37c368: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x37C368u;
    {
        const bool branch_taken_0x37c368 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x37c368) {
            ctx->pc = 0x37C3E0u;
            goto label_37c3e0;
        }
    }
    ctx->pc = 0x37C370u;
label_37c370:
    // 0x37c370: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x37c370u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x37c374: 0xc48112cc  lwc1        $f1, 0x12CC($a0)
    ctx->pc = 0x37c374u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4812)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x37c378: 0x3c0340c0  lui         $v1, 0x40C0
    ctx->pc = 0x37c378u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16576 << 16));
    // 0x37c37c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x37c37cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x37c380: 0x0  nop
    ctx->pc = 0x37c380u;
    // NOP
    // 0x37c384: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x37c384u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x37c388: 0xe48012cc  swc1        $f0, 0x12CC($a0)
    ctx->pc = 0x37c388u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4812), bits); }
    // 0x37c38c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x37c38cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x37c390: 0x3c033f81  lui         $v1, 0x3F81
    ctx->pc = 0x37c390u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16257 << 16));
    // 0x37c394: 0x346347ae  ori         $v1, $v1, 0x47AE
    ctx->pc = 0x37c394u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)18350);
    // 0x37c398: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x37c398u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x37c39c: 0xc48001a0  lwc1        $f0, 0x1A0($a0)
    ctx->pc = 0x37c39cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x37c3a0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x37c3a0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x37c3a4: 0xe48001a0  swc1        $f0, 0x1A0($a0)
    ctx->pc = 0x37c3a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 416), bits); }
    // 0x37c3a8: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x37c3a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x37c3ac: 0x3c033f81  lui         $v1, 0x3F81
    ctx->pc = 0x37c3acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16257 << 16));
    // 0x37c3b0: 0x346347ae  ori         $v1, $v1, 0x47AE
    ctx->pc = 0x37c3b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)18350);
    // 0x37c3b4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x37c3b4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x37c3b8: 0xc48001a4  lwc1        $f0, 0x1A4($a0)
    ctx->pc = 0x37c3b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x37c3bc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x37c3bcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x37c3c0: 0xe48001a4  swc1        $f0, 0x1A4($a0)
    ctx->pc = 0x37c3c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 420), bits); }
    // 0x37c3c4: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x37c3c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x37c3c8: 0x3c033f81  lui         $v1, 0x3F81
    ctx->pc = 0x37c3c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16257 << 16));
    // 0x37c3cc: 0x346347ae  ori         $v1, $v1, 0x47AE
    ctx->pc = 0x37c3ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)18350);
    // 0x37c3d0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x37c3d0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x37c3d4: 0xc48001a8  lwc1        $f0, 0x1A8($a0)
    ctx->pc = 0x37c3d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x37c3d8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x37c3d8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x37c3dc: 0xe48001a8  swc1        $f0, 0x1A8($a0)
    ctx->pc = 0x37c3dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 424), bits); }
label_37c3e0:
    // 0x37c3e0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x37c3e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x37c3e4: 0xc46101a0  lwc1        $f1, 0x1A0($v1)
    ctx->pc = 0x37c3e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x37c3e8: 0x3c033ff3  lui         $v1, 0x3FF3
    ctx->pc = 0x37c3e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16371 << 16));
    // 0x37c3ec: 0x34633333  ori         $v1, $v1, 0x3333
    ctx->pc = 0x37c3ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)13107);
    // 0x37c3f0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x37c3f0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x37c3f4: 0x0  nop
    ctx->pc = 0x37c3f4u;
    // NOP
    // 0x37c3f8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x37c3f8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x37c3fc: 0x0  nop
    ctx->pc = 0x37c3fcu;
    // NOP
    // 0x37c400: 0x4501000f  bc1t        . + 4 + (0xF << 2)
    ctx->pc = 0x37C400u;
    {
        const bool branch_taken_0x37c400 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x37c400) {
            ctx->pc = 0x37C440u;
            goto label_37c440;
        }
    }
    ctx->pc = 0x37C408u;
    // 0x37c408: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x37c408u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x37c40c: 0x906311ec  lbu         $v1, 0x11EC($v1)
    ctx->pc = 0x37c40cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4588)));
    // 0x37c410: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x37c410u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x37c414: 0x2861000a  slti        $at, $v1, 0xA
    ctx->pc = 0x37c414u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x37c418: 0x14200007  bnez        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x37C418u;
    {
        const bool branch_taken_0x37c418 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x37c418) {
            ctx->pc = 0x37C438u;
            goto label_37c438;
        }
    }
    ctx->pc = 0x37C420u;
    // 0x37c420: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x37c420u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x37c424: 0x908311ec  lbu         $v1, 0x11EC($a0)
    ctx->pc = 0x37c424u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4588)));
    // 0x37c428: 0x2463fff8  addiu       $v1, $v1, -0x8
    ctx->pc = 0x37c428u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967288));
    // 0x37c42c: 0xa08311ec  sb          $v1, 0x11EC($a0)
    ctx->pc = 0x37c42cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4588), (uint8_t)GPR_U32(ctx, 3));
    // 0x37c430: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x37C430u;
    {
        const bool branch_taken_0x37c430 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x37c430) {
            ctx->pc = 0x37C440u;
            goto label_37c440;
        }
    }
    ctx->pc = 0x37C438u;
label_37c438:
    // 0x37c438: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x37c438u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x37c43c: 0xa06011ec  sb          $zero, 0x11EC($v1)
    ctx->pc = 0x37c43cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4588), (uint8_t)GPR_U32(ctx, 0));
label_37c440:
    // 0x37c440: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x37c440u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37c444: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x37c444u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x37c448: 0x3e00008  jr          $ra
    ctx->pc = 0x37C448u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37C448u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37C450u;
}
