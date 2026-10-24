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

// Function: entry_0029b16c
// Address: 0x29b16c - 0x29b29c
void entry_0029b16c_0x29b16c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0029b16c_0x29b16c");
#endif

    switch (ctx->pc) {
        case 0x29b1acu: goto label_29b1ac;
        case 0x29b1c0u: goto label_29b1c0;
        case 0x29b1dcu: goto label_29b1dc;
        default: break;
    }

    ctx->pc = 0x29b16cu;

    // 0x29b16c: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x29b16cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x29b170: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x29b170u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x29b174: 0xc7a00180  lwc1        $f0, 0x180($sp)
    ctx->pc = 0x29b174u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29b178: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x29b178u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x29b17c: 0xe7a00180  swc1        $f0, 0x180($sp)
    ctx->pc = 0x29b17cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 384), bits); }
    // 0x29b180: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x29b180u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x29b184: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x29b184u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x29b188: 0xc7a00184  lwc1        $f0, 0x184($sp)
    ctx->pc = 0x29b188u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29b18c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x29b18cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x29b190: 0xe7a00184  swc1        $f0, 0x184($sp)
    ctx->pc = 0x29b190u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 388), bits); }
    // 0x29b194: 0x27a20170  addiu       $v0, $sp, 0x170
    ctx->pc = 0x29b194u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x29b198: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x29b198u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x29b19c: 0x27a50180  addiu       $a1, $sp, 0x180
    ctx->pc = 0x29b19cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x29b1a0: 0x27a60140  addiu       $a2, $sp, 0x140
    ctx->pc = 0x29b1a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x29b1a4: 0xc040c7a  jal         func_1031E8
    ctx->pc = 0x29B1A4u;
    SET_GPR_U32(ctx, 31, 0x29B1ACu);
    ctx->pc = 0x1031E8u;
    {
        ctx->pc = 0x29B1ACu;
        ps2_stubs::sceVu0AddVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x29B1ACu) { return; }
    ctx->pc = 0x29B1ACu;
label_29b1ac:
    // 0x29b1ac: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x29b1acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x29b1b0: 0x72402e28  paddub      $a1, $s2, $zero
    ctx->pc = 0x29b1b0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x29b1b4: 0x27a60170  addiu       $a2, $sp, 0x170
    ctx->pc = 0x29b1b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x29b1b8: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x29B1B8u;
    SET_GPR_U32(ctx, 31, 0x29B1C0u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x29B1C0u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x29B1C0u) { return; }
    ctx->pc = 0x29B1C0u;
label_29b1c0:
    // 0x29b1c0: 0xc7a0012c  lwc1        $f0, 0x12C($sp)
    ctx->pc = 0x29b1c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29b1c4: 0xe7a0020c  swc1        $f0, 0x20C($sp)
    ctx->pc = 0x29b1c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 524), bits); }
    // 0x29b1c8: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x29b1c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x29b1cc: 0x27a50120  addiu       $a1, $sp, 0x120
    ctx->pc = 0x29b1ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x29b1d0: 0xc7ac020c  lwc1        $f12, 0x20C($sp)
    ctx->pc = 0x29b1d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 524)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x29b1d4: 0xc040c60  jal         func_103180
    ctx->pc = 0x29B1D4u;
    SET_GPR_U32(ctx, 31, 0x29B1DCu);
    ctx->pc = 0x103180u;
    {
        ctx->pc = 0x29B1DCu;
        ps2_stubs::sceVu0DivVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x29B1DCu) { return; }
    ctx->pc = 0x29B1DCu;
label_29b1dc:
    // 0x29b1dc: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x29b1dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x29b1e0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x29b1e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x29b1e4: 0xc7a0020c  lwc1        $f0, 0x20C($sp)
    ctx->pc = 0x29b1e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 524)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29b1e8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x29b1e8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29b1ec: 0x0  nop
    ctx->pc = 0x29b1ecu;
    // NOP
    // 0x29b1f0: 0x4500002a  bc1f        . + 4 + (0x2A << 2)
    ctx->pc = 0x29B1F0u;
    {
        const bool branch_taken_0x29b1f0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x29b1f0) {
            ctx->pc = 0x29B29Cu;
            return;
        }
    }
    ctx->pc = 0x29B1F8u;
    // 0x29b1f8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x29b1f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x29b1fc: 0xc421fd70  lwc1        $f1, -0x290($at)
    ctx->pc = 0x29b1fcu;
    { uint32_t bits = FAST_READ32(0x5CFD70u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29b200: 0xc7a0020c  lwc1        $f0, 0x20C($sp)
    ctx->pc = 0x29b200u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 524)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29b204: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x29b204u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29b208: 0x0  nop
    ctx->pc = 0x29b208u;
    // NOP
    // 0x29b20c: 0x45010023  bc1t        . + 4 + (0x23 << 2)
    ctx->pc = 0x29B20Cu;
    {
        const bool branch_taken_0x29b20c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x29b20c) {
            ctx->pc = 0x29B29Cu;
            return;
        }
    }
    ctx->pc = 0x29B214u;
    // 0x29b214: 0xc7a10120  lwc1        $f1, 0x120($sp)
    ctx->pc = 0x29b214u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29b218: 0x3c0444d4  lui         $a0, 0x44D4
    ctx->pc = 0x29b218u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17620 << 16));
    // 0x29b21c: 0x34858000  ori         $a1, $a0, 0x8000
    ctx->pc = 0x29b21cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32768);
    // 0x29b220: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x29b220u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29b224: 0x0  nop
    ctx->pc = 0x29b224u;
    // NOP
    // 0x29b228: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x29b228u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29b22c: 0x0  nop
    ctx->pc = 0x29b22cu;
    // NOP
    // 0x29b230: 0x4501001a  bc1t        . + 4 + (0x1A << 2)
    ctx->pc = 0x29B230u;
    {
        const bool branch_taken_0x29b230 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x29b230) {
            ctx->pc = 0x29B29Cu;
            return;
        }
    }
    ctx->pc = 0x29B238u;
    // 0x29b238: 0xc7a10120  lwc1        $f1, 0x120($sp)
    ctx->pc = 0x29b238u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29b23c: 0x3c054516  lui         $a1, 0x4516
    ctx->pc = 0x29b23cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17686 << 16));
    // 0x29b240: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x29b240u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29b244: 0x0  nop
    ctx->pc = 0x29b244u;
    // NOP
    // 0x29b248: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x29b248u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29b24c: 0x0  nop
    ctx->pc = 0x29b24cu;
    // NOP
    // 0x29b250: 0x45000012  bc1f        . + 4 + (0x12 << 2)
    ctx->pc = 0x29B250u;
    {
        const bool branch_taken_0x29b250 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x29b250) {
            ctx->pc = 0x29B29Cu;
            return;
        }
    }
    ctx->pc = 0x29B258u;
    // 0x29b258: 0xc7a10124  lwc1        $f1, 0x124($sp)
    ctx->pc = 0x29b258u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29b25c: 0x3c0244e1  lui         $v0, 0x44E1
    ctx->pc = 0x29b25cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17633 << 16));
    // 0x29b260: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x29b260u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29b264: 0x0  nop
    ctx->pc = 0x29b264u;
    // NOP
    // 0x29b268: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x29b268u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29b26c: 0x0  nop
    ctx->pc = 0x29b26cu;
    // NOP
    // 0x29b270: 0x4501000a  bc1t        . + 4 + (0xA << 2)
    ctx->pc = 0x29B270u;
    {
        const bool branch_taken_0x29b270 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x29b270) {
            ctx->pc = 0x29B29Cu;
            return;
        }
    }
    ctx->pc = 0x29B278u;
    // 0x29b278: 0xc7a10124  lwc1        $f1, 0x124($sp)
    ctx->pc = 0x29b278u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29b27c: 0x3c02450f  lui         $v0, 0x450F
    ctx->pc = 0x29b27cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17679 << 16));
    // 0x29b280: 0x3442c000  ori         $v0, $v0, 0xC000
    ctx->pc = 0x29b280u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49152);
    // 0x29b284: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x29b284u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29b288: 0x0  nop
    ctx->pc = 0x29b288u;
    // NOP
    // 0x29b28c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x29b28cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29b290: 0x0  nop
    ctx->pc = 0x29b290u;
    // NOP
    // 0x29b294: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x29B294u;
    {
        const bool branch_taken_0x29b294 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x29b294) {
            ctx->pc = 0x29B2A4u;
            return;
        }
    }
    ctx->pc = 0x29B29Cu;
}
