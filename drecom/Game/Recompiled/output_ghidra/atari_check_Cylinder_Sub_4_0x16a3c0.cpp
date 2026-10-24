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

// Function: atari_check_Cylinder_Sub_4
// Address: 0x16a3c0 - 0x16a9e8
void atari_check_Cylinder_Sub_4_0x16a3c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("atari_check_Cylinder_Sub_4_0x16a3c0");
#endif

    switch (ctx->pc) {
        case 0x16a3ecu: goto label_16a3ec;
        case 0x16a408u: goto label_16a408;
        case 0x16a420u: goto label_16a420;
        case 0x16a438u: goto label_16a438;
        case 0x16a454u: goto label_16a454;
        case 0x16a470u: goto label_16a470;
        case 0x16a678u: goto label_16a678;
        case 0x16a68cu: goto label_16a68c;
        case 0x16a714u: goto label_16a714;
        case 0x16a72cu: goto label_16a72c;
        case 0x16a7b4u: goto label_16a7b4;
        case 0x16a7ccu: goto label_16a7cc;
        default: break;
    }

    ctx->pc = 0x16a3c0u;

    // 0x16a3c0: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x16a3c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x16a3c4: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x16a3c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x16a3c8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x16a3c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x16a3cc: 0xafa400d0  sw          $a0, 0xD0($sp)
    ctx->pc = 0x16a3ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 4));
    // 0x16a3d0: 0xafa500d8  sw          $a1, 0xD8($sp)
    ctx->pc = 0x16a3d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 5));
    // 0x16a3d4: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x16a3d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x16a3d8: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x16a3d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x16a3dc: 0x24450010  addiu       $a1, $v0, 0x10
    ctx->pc = 0x16a3dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x16a3e0: 0x8fa600d8  lw          $a2, 0xD8($sp)
    ctx->pc = 0x16a3e0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x16a3e4: 0xc040c80  jal         func_103200
    ctx->pc = 0x16A3E4u;
    SET_GPR_U32(ctx, 31, 0x16A3ECu);
    ctx->pc = 0x103200u;
    {
        ctx->pc = 0x16A3ECu;
        ps2_stubs::sceVu0SubVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x16A3ECu) { return; }
    ctx->pc = 0x16A3ECu;
label_16a3ec:
    // 0x16a3ec: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x16a3ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x16a3f0: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x16a3f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x16a3f4: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x16a3f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x16a3f8: 0x24650020  addiu       $a1, $v1, 0x20
    ctx->pc = 0x16a3f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x16a3fc: 0x24460010  addiu       $a2, $v0, 0x10
    ctx->pc = 0x16a3fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x16a400: 0xc040c80  jal         func_103200
    ctx->pc = 0x16A400u;
    SET_GPR_U32(ctx, 31, 0x16A408u);
    ctx->pc = 0x103200u;
    {
        ctx->pc = 0x16A408u;
        ps2_stubs::sceVu0SubVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x16A408u) { return; }
    ctx->pc = 0x16A408u;
label_16a408:
    // 0x16a408: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x16a408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x16a40c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x16a40cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x16a410: 0x8fa500d8  lw          $a1, 0xD8($sp)
    ctx->pc = 0x16a410u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x16a414: 0x24460020  addiu       $a2, $v0, 0x20
    ctx->pc = 0x16a414u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x16a418: 0xc040c80  jal         func_103200
    ctx->pc = 0x16A418u;
    SET_GPR_U32(ctx, 31, 0x16A420u);
    ctx->pc = 0x103200u;
    {
        ctx->pc = 0x16A420u;
        ps2_stubs::sceVu0SubVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x16A420u) { return; }
    ctx->pc = 0x16A420u;
label_16a420:
    // 0x16a420: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x16a420u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x16a424: 0x8fa500d8  lw          $a1, 0xD8($sp)
    ctx->pc = 0x16a424u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x16a428: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x16a428u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x16a42c: 0x2446aad0  addiu       $a2, $v0, -0x5530
    ctx->pc = 0x16a42cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945488));
    // 0x16a430: 0xc040c80  jal         func_103200
    ctx->pc = 0x16A430u;
    SET_GPR_U32(ctx, 31, 0x16A438u);
    ctx->pc = 0x103200u;
    {
        ctx->pc = 0x16A438u;
        ps2_stubs::sceVu0SubVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x16A438u) { return; }
    ctx->pc = 0x16A438u;
label_16a438:
    // 0x16a438: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x16a438u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x16a43c: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x16a43cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x16a440: 0x24450010  addiu       $a1, $v0, 0x10
    ctx->pc = 0x16a440u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x16a444: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x16a444u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x16a448: 0x2446aad0  addiu       $a2, $v0, -0x5530
    ctx->pc = 0x16a448u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945488));
    // 0x16a44c: 0xc040c80  jal         func_103200
    ctx->pc = 0x16A44Cu;
    SET_GPR_U32(ctx, 31, 0x16A454u);
    ctx->pc = 0x103200u;
    {
        ctx->pc = 0x16A454u;
        ps2_stubs::sceVu0SubVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x16A454u) { return; }
    ctx->pc = 0x16A454u;
label_16a454:
    // 0x16a454: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x16a454u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x16a458: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x16a458u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x16a45c: 0x24450020  addiu       $a1, $v0, 0x20
    ctx->pc = 0x16a45cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x16a460: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x16a460u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x16a464: 0x2446aad0  addiu       $a2, $v0, -0x5530
    ctx->pc = 0x16a464u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945488));
    // 0x16a468: 0xc040c80  jal         func_103200
    ctx->pc = 0x16A468u;
    SET_GPR_U32(ctx, 31, 0x16A470u);
    ctx->pc = 0x103200u;
    {
        ctx->pc = 0x16A470u;
        ps2_stubs::sceVu0SubVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x16A470u) { return; }
    ctx->pc = 0x16A470u;
label_16a470:
    // 0x16a470: 0xc7a10058  lwc1        $f1, 0x58($sp)
    ctx->pc = 0x16a470u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16a474: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x16a474u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16a478: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x16a478u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x16a47c: 0xc7a10050  lwc1        $f1, 0x50($sp)
    ctx->pc = 0x16a47cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16a480: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x16a480u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16a484: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x16a484u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x16a488: 0x46001041  sub.s       $f1, $f2, $f0
    ctx->pc = 0x16a488u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x16a48c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x16a48cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16a490: 0x0  nop
    ctx->pc = 0x16a490u;
    // NOP
    // 0x16a494: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x16a494u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16a498: 0x0  nop
    ctx->pc = 0x16a498u;
    // NOP
    // 0x16a49c: 0x45010029  bc1t        . + 4 + (0x29 << 2)
    ctx->pc = 0x16A49Cu;
    {
        const bool branch_taken_0x16a49c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x16a49c) {
            ctx->pc = 0x16A544u;
            goto label_16a544;
        }
    }
    ctx->pc = 0x16A4A4u;
    // 0x16a4a4: 0xc7a10068  lwc1        $f1, 0x68($sp)
    ctx->pc = 0x16a4a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16a4a8: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x16a4a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16a4ac: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x16a4acu;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x16a4b0: 0xc7a10060  lwc1        $f1, 0x60($sp)
    ctx->pc = 0x16a4b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16a4b4: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x16a4b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16a4b8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x16a4b8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x16a4bc: 0x46001041  sub.s       $f1, $f2, $f0
    ctx->pc = 0x16a4bcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x16a4c0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x16a4c0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16a4c4: 0x0  nop
    ctx->pc = 0x16a4c4u;
    // NOP
    // 0x16a4c8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x16a4c8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16a4cc: 0x0  nop
    ctx->pc = 0x16a4ccu;
    // NOP
    // 0x16a4d0: 0x4501001c  bc1t        . + 4 + (0x1C << 2)
    ctx->pc = 0x16A4D0u;
    {
        const bool branch_taken_0x16a4d0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x16a4d0) {
            ctx->pc = 0x16A544u;
            goto label_16a544;
        }
    }
    ctx->pc = 0x16A4D8u;
    // 0x16a4d8: 0xc7a10078  lwc1        $f1, 0x78($sp)
    ctx->pc = 0x16a4d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16a4dc: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x16a4dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16a4e0: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x16a4e0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x16a4e4: 0xc7a10070  lwc1        $f1, 0x70($sp)
    ctx->pc = 0x16a4e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16a4e8: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x16a4e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16a4ec: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x16a4ecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x16a4f0: 0x46001041  sub.s       $f1, $f2, $f0
    ctx->pc = 0x16a4f0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x16a4f4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x16a4f4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16a4f8: 0x0  nop
    ctx->pc = 0x16a4f8u;
    // NOP
    // 0x16a4fc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x16a4fcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16a500: 0x0  nop
    ctx->pc = 0x16a500u;
    // NOP
    // 0x16a504: 0x4501000f  bc1t        . + 4 + (0xF << 2)
    ctx->pc = 0x16A504u;
    {
        const bool branch_taken_0x16a504 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x16a504) {
            ctx->pc = 0x16A544u;
            goto label_16a544;
        }
    }
    ctx->pc = 0x16A50Cu;
    // 0x16a50c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x16a50cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16a510: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x16a510u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x16a514: 0xe420ab00  swc1        $f0, -0x5500($at)
    ctx->pc = 0x16a514u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x47AB00u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47AB00u, _value); } while (0); }
    // 0x16a518: 0x8fa300d0  lw          $v1, 0xD0($sp)
    ctx->pc = 0x16a518u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x16a51c: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x16a51cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x16a520: 0xac23ab20  sw          $v1, -0x54E0($at)
    ctx->pc = 0x16a520u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x47AB20u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47AB20u, _value); } while (0);
    // 0x16a524: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x16a524u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x16a528: 0x2463aad0  addiu       $v1, $v1, -0x5530
    ctx->pc = 0x16a528u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294945488));
    // 0x16a52c: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x16a52cu;
    SET_GPR_VEC(ctx, 4, FAST_READ128(0x47AAD0u));
    // 0x16a530: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x16a530u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x16a534: 0x2463aaf0  addiu       $v1, $v1, -0x5510
    ctx->pc = 0x16a534u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294945520));
    // 0x16a538: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x16a538u;
    do { __m128i _value = (GPR_VEC(ctx, 4)); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x47AAF0u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x47AAF0u, _value); } while (0);
    // 0x16a53c: 0x10000125  b           . + 4 + (0x125 << 2)
    ctx->pc = 0x16A53Cu;
    {
        const bool branch_taken_0x16a53c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16a53c) {
            ctx->pc = 0x16A9D4u;
            goto label_16a9d4;
        }
    }
    ctx->pc = 0x16A544u;
label_16a544:
    // 0x16a544: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x16a544u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16a548: 0x46000047  neg.s       $f1, $f0
    ctx->pc = 0x16a548u;
    ctx->f[1] = FPU_NEG_S(ctx->f[0]);
    // 0x16a54c: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x16a54cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16a550: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x16a550u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x16a554: 0xc7a10058  lwc1        $f1, 0x58($sp)
    ctx->pc = 0x16a554u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16a558: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x16a558u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16a55c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x16a55cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x16a560: 0x460010c1  sub.s       $f3, $f2, $f0
    ctx->pc = 0x16a560u;
    ctx->f[3] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x16a564: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x16a564u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16a568: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x16a568u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16a56c: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x16a56cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x16a570: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x16a570u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16a574: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x16a574u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16a578: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x16a578u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x16a57c: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x16a57cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x16a580: 0x46001803  div.s       $f0, $f3, $f0
    ctx->pc = 0x16a580u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[3], ctx->f[0]); }
    // 0x16a584: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x16a584u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x16a588: 0xc7a00060  lwc1        $f0, 0x60($sp)
    ctx->pc = 0x16a588u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16a58c: 0x46000047  neg.s       $f1, $f0
    ctx->pc = 0x16a58cu;
    ctx->f[1] = FPU_NEG_S(ctx->f[0]);
    // 0x16a590: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x16a590u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16a594: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x16a594u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x16a598: 0xc7a10068  lwc1        $f1, 0x68($sp)
    ctx->pc = 0x16a598u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16a59c: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x16a59cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16a5a0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x16a5a0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x16a5a4: 0x460010c1  sub.s       $f3, $f2, $f0
    ctx->pc = 0x16a5a4u;
    ctx->f[3] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x16a5a8: 0xc7a10030  lwc1        $f1, 0x30($sp)
    ctx->pc = 0x16a5a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16a5ac: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x16a5acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16a5b0: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x16a5b0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x16a5b4: 0xc7a10038  lwc1        $f1, 0x38($sp)
    ctx->pc = 0x16a5b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16a5b8: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x16a5b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16a5bc: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x16a5bcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x16a5c0: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x16a5c0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x16a5c4: 0x46001803  div.s       $f0, $f3, $f0
    ctx->pc = 0x16a5c4u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[3], ctx->f[0]); }
    // 0x16a5c8: 0xe7a000b4  swc1        $f0, 0xB4($sp)
    ctx->pc = 0x16a5c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x16a5cc: 0xc7a00070  lwc1        $f0, 0x70($sp)
    ctx->pc = 0x16a5ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16a5d0: 0x46000047  neg.s       $f1, $f0
    ctx->pc = 0x16a5d0u;
    ctx->f[1] = FPU_NEG_S(ctx->f[0]);
    // 0x16a5d4: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x16a5d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16a5d8: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x16a5d8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x16a5dc: 0xc7a10078  lwc1        $f1, 0x78($sp)
    ctx->pc = 0x16a5dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16a5e0: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x16a5e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16a5e4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x16a5e4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x16a5e8: 0x460010c1  sub.s       $f3, $f2, $f0
    ctx->pc = 0x16a5e8u;
    ctx->f[3] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x16a5ec: 0xc7a10040  lwc1        $f1, 0x40($sp)
    ctx->pc = 0x16a5ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16a5f0: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x16a5f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16a5f4: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x16a5f4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x16a5f8: 0xc7a10048  lwc1        $f1, 0x48($sp)
    ctx->pc = 0x16a5f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16a5fc: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x16a5fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16a600: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x16a600u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x16a604: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x16a604u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x16a608: 0x46001803  div.s       $f0, $f3, $f0
    ctx->pc = 0x16a608u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[3], ctx->f[0]); }
    // 0x16a60c: 0xe7a000b8  swc1        $f0, 0xB8($sp)
    ctx->pc = 0x16a60cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x16a610: 0xc7a100b0  lwc1        $f1, 0xB0($sp)
    ctx->pc = 0x16a610u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16a614: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x16a614u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16a618: 0x0  nop
    ctx->pc = 0x16a618u;
    // NOP
    // 0x16a61c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x16a61cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16a620: 0x0  nop
    ctx->pc = 0x16a620u;
    // NOP
    // 0x16a624: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x16A624u;
    {
        const bool branch_taken_0x16a624 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x16a624) {
            ctx->pc = 0x16A644u;
            goto label_16a644;
        }
    }
    ctx->pc = 0x16A62Cu;
    // 0x16a62c: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x16a62cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x16a630: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x16a630u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16a634: 0x27a30080  addiu       $v1, $sp, 0x80
    ctx->pc = 0x16a634u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x16a638: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x16a638u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x16a63c: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x16A63Cu;
    {
        const bool branch_taken_0x16a63c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16a63c) {
            ctx->pc = 0x16A6A8u;
            goto label_16a6a8;
        }
    }
    ctx->pc = 0x16A644u;
label_16a644:
    // 0x16a644: 0xc7a100b0  lwc1        $f1, 0xB0($sp)
    ctx->pc = 0x16a644u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16a648: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x16a648u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x16a64c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x16a64cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16a650: 0x0  nop
    ctx->pc = 0x16a650u;
    // NOP
    // 0x16a654: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x16a654u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16a658: 0x0  nop
    ctx->pc = 0x16a658u;
    // NOP
    // 0x16a65c: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x16A65Cu;
    {
        const bool branch_taken_0x16a65c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x16a65c) {
            ctx->pc = 0x16A694u;
            goto label_16a694;
        }
    }
    ctx->pc = 0x16A664u;
    // 0x16a664: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x16a664u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x16a668: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x16a668u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x16a66c: 0xc7ac00b0  lwc1        $f12, 0xB0($sp)
    ctx->pc = 0x16a66cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x16a670: 0xc040c8c  jal         func_103230
    ctx->pc = 0x16A670u;
    SET_GPR_U32(ctx, 31, 0x16A678u);
    ctx->pc = 0x103230u;
    {
        ctx->pc = 0x16A678u;
        ps2_stubs::sceVu0ScaleVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x16A678u) { return; }
    ctx->pc = 0x16A678u;
label_16a678:
    // 0x16a678: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x16a678u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x16a67c: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x16a67cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x16a680: 0x8fa600d8  lw          $a2, 0xD8($sp)
    ctx->pc = 0x16a680u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x16a684: 0xc040c7a  jal         func_1031E8
    ctx->pc = 0x16A684u;
    SET_GPR_U32(ctx, 31, 0x16A68Cu);
    ctx->pc = 0x1031E8u;
    {
        ctx->pc = 0x16A68Cu;
        ps2_stubs::sceVu0AddVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x16A68Cu) { return; }
    ctx->pc = 0x16A68Cu;
label_16a68c:
    // 0x16a68c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x16A68Cu;
    {
        const bool branch_taken_0x16a68c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16a68c) {
            ctx->pc = 0x16A6A8u;
            goto label_16a6a8;
        }
    }
    ctx->pc = 0x16A694u;
label_16a694:
    // 0x16a694: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x16a694u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x16a698: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x16a698u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x16a69c: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x16a69cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16a6a0: 0x27a30080  addiu       $v1, $sp, 0x80
    ctx->pc = 0x16a6a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x16a6a4: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x16a6a4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
label_16a6a8:
    // 0x16a6a8: 0xc7a100b4  lwc1        $f1, 0xB4($sp)
    ctx->pc = 0x16a6a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16a6ac: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x16a6acu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16a6b0: 0x0  nop
    ctx->pc = 0x16a6b0u;
    // NOP
    // 0x16a6b4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x16a6b4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16a6b8: 0x0  nop
    ctx->pc = 0x16a6b8u;
    // NOP
    // 0x16a6bc: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x16A6BCu;
    {
        const bool branch_taken_0x16a6bc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x16a6bc) {
            ctx->pc = 0x16A6E0u;
            goto label_16a6e0;
        }
    }
    ctx->pc = 0x16A6C4u;
    // 0x16a6c4: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x16a6c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x16a6c8: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x16a6c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x16a6cc: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x16a6ccu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16a6d0: 0x27a30090  addiu       $v1, $sp, 0x90
    ctx->pc = 0x16a6d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x16a6d4: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x16a6d4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x16a6d8: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x16A6D8u;
    {
        const bool branch_taken_0x16a6d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16a6d8) {
            ctx->pc = 0x16A748u;
            goto label_16a748;
        }
    }
    ctx->pc = 0x16A6E0u;
label_16a6e0:
    // 0x16a6e0: 0xc7a100b4  lwc1        $f1, 0xB4($sp)
    ctx->pc = 0x16a6e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16a6e4: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x16a6e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x16a6e8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x16a6e8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16a6ec: 0x0  nop
    ctx->pc = 0x16a6ecu;
    // NOP
    // 0x16a6f0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x16a6f0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16a6f4: 0x0  nop
    ctx->pc = 0x16a6f4u;
    // NOP
    // 0x16a6f8: 0x4500000e  bc1f        . + 4 + (0xE << 2)
    ctx->pc = 0x16A6F8u;
    {
        const bool branch_taken_0x16a6f8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x16a6f8) {
            ctx->pc = 0x16A734u;
            goto label_16a734;
        }
    }
    ctx->pc = 0x16A700u;
    // 0x16a700: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x16a700u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x16a704: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x16a704u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x16a708: 0xc7ac00b4  lwc1        $f12, 0xB4($sp)
    ctx->pc = 0x16a708u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x16a70c: 0xc040c8c  jal         func_103230
    ctx->pc = 0x16A70Cu;
    SET_GPR_U32(ctx, 31, 0x16A714u);
    ctx->pc = 0x103230u;
    {
        ctx->pc = 0x16A714u;
        ps2_stubs::sceVu0ScaleVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x16A714u) { return; }
    ctx->pc = 0x16A714u;
label_16a714:
    // 0x16a714: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x16a714u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x16a718: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x16a718u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x16a71c: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x16a71cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x16a720: 0x24460010  addiu       $a2, $v0, 0x10
    ctx->pc = 0x16a720u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x16a724: 0xc040c7a  jal         func_1031E8
    ctx->pc = 0x16A724u;
    SET_GPR_U32(ctx, 31, 0x16A72Cu);
    ctx->pc = 0x1031E8u;
    {
        ctx->pc = 0x16A72Cu;
        ps2_stubs::sceVu0AddVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x16A72Cu) { return; }
    ctx->pc = 0x16A72Cu;
label_16a72c:
    // 0x16a72c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x16A72Cu;
    {
        const bool branch_taken_0x16a72c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16a72c) {
            ctx->pc = 0x16A748u;
            goto label_16a748;
        }
    }
    ctx->pc = 0x16A734u;
label_16a734:
    // 0x16a734: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x16a734u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x16a738: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x16a738u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x16a73c: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x16a73cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16a740: 0x27a30090  addiu       $v1, $sp, 0x90
    ctx->pc = 0x16a740u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x16a744: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x16a744u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
label_16a748:
    // 0x16a748: 0xc7a100b8  lwc1        $f1, 0xB8($sp)
    ctx->pc = 0x16a748u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16a74c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x16a74cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16a750: 0x0  nop
    ctx->pc = 0x16a750u;
    // NOP
    // 0x16a754: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x16a754u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16a758: 0x0  nop
    ctx->pc = 0x16a758u;
    // NOP
    // 0x16a75c: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x16A75Cu;
    {
        const bool branch_taken_0x16a75c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x16a75c) {
            ctx->pc = 0x16A780u;
            goto label_16a780;
        }
    }
    ctx->pc = 0x16A764u;
    // 0x16a764: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x16a764u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x16a768: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x16a768u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x16a76c: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x16a76cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16a770: 0x27a300a0  addiu       $v1, $sp, 0xA0
    ctx->pc = 0x16a770u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x16a774: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x16a774u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x16a778: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x16A778u;
    {
        const bool branch_taken_0x16a778 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16a778) {
            ctx->pc = 0x16A7E4u;
            goto label_16a7e4;
        }
    }
    ctx->pc = 0x16A780u;
label_16a780:
    // 0x16a780: 0xc7a100b8  lwc1        $f1, 0xB8($sp)
    ctx->pc = 0x16a780u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16a784: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x16a784u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x16a788: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x16a788u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16a78c: 0x0  nop
    ctx->pc = 0x16a78cu;
    // NOP
    // 0x16a790: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x16a790u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16a794: 0x0  nop
    ctx->pc = 0x16a794u;
    // NOP
    // 0x16a798: 0x4500000e  bc1f        . + 4 + (0xE << 2)
    ctx->pc = 0x16A798u;
    {
        const bool branch_taken_0x16a798 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x16a798) {
            ctx->pc = 0x16A7D4u;
            goto label_16a7d4;
        }
    }
    ctx->pc = 0x16A7A0u;
    // 0x16a7a0: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x16a7a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x16a7a4: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x16a7a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x16a7a8: 0xc7ac00b8  lwc1        $f12, 0xB8($sp)
    ctx->pc = 0x16a7a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x16a7ac: 0xc040c8c  jal         func_103230
    ctx->pc = 0x16A7ACu;
    SET_GPR_U32(ctx, 31, 0x16A7B4u);
    ctx->pc = 0x103230u;
    {
        ctx->pc = 0x16A7B4u;
        ps2_stubs::sceVu0ScaleVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x16A7B4u) { return; }
    ctx->pc = 0x16A7B4u;
label_16a7b4:
    // 0x16a7b4: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x16a7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x16a7b8: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x16a7b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x16a7bc: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x16a7bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x16a7c0: 0x24460020  addiu       $a2, $v0, 0x20
    ctx->pc = 0x16a7c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x16a7c4: 0xc040c7a  jal         func_1031E8
    ctx->pc = 0x16A7C4u;
    SET_GPR_U32(ctx, 31, 0x16A7CCu);
    ctx->pc = 0x1031E8u;
    {
        ctx->pc = 0x16A7CCu;
        ps2_stubs::sceVu0AddVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x16A7CCu) { return; }
    ctx->pc = 0x16A7CCu;
label_16a7cc:
    // 0x16a7cc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x16A7CCu;
    {
        const bool branch_taken_0x16a7cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16a7cc) {
            ctx->pc = 0x16A7E4u;
            goto label_16a7e4;
        }
    }
    ctx->pc = 0x16A7D4u;
label_16a7d4:
    // 0x16a7d4: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x16a7d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x16a7d8: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x16a7d8u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16a7dc: 0x27a300a0  addiu       $v1, $sp, 0xA0
    ctx->pc = 0x16a7dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x16a7e0: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x16a7e0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
label_16a7e4:
    // 0x16a7e4: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x16a7e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x16a7e8: 0xc421aad0  lwc1        $f1, -0x5530($at)
    ctx->pc = 0x16a7e8u;
    { uint32_t bits = FAST_READ32(0x47AAD0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16a7ec: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x16a7ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16a7f0: 0x46000881  sub.s       $f2, $f1, $f0
    ctx->pc = 0x16a7f0u;
    ctx->f[2] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x16a7f4: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x16a7f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x16a7f8: 0xc421aad0  lwc1        $f1, -0x5530($at)
    ctx->pc = 0x16a7f8u;
    { uint32_t bits = FAST_READ32(0x47AAD0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16a7fc: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x16a7fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16a800: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x16a800u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x16a804: 0x460010c2  mul.s       $f3, $f2, $f0
    ctx->pc = 0x16a804u;
    ctx->f[3] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x16a808: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x16a808u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x16a80c: 0xc421aad8  lwc1        $f1, -0x5528($at)
    ctx->pc = 0x16a80cu;
    { uint32_t bits = FAST_READ32(0x47AAD8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16a810: 0xc7a00088  lwc1        $f0, 0x88($sp)
    ctx->pc = 0x16a810u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16a814: 0x46000881  sub.s       $f2, $f1, $f0
    ctx->pc = 0x16a814u;
    ctx->f[2] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x16a818: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x16a818u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x16a81c: 0xc421aad8  lwc1        $f1, -0x5528($at)
    ctx->pc = 0x16a81cu;
    { uint32_t bits = FAST_READ32(0x47AAD8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16a820: 0xc7a00088  lwc1        $f0, 0x88($sp)
    ctx->pc = 0x16a820u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16a824: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x16a824u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x16a828: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x16a828u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x16a82c: 0x46001800  add.s       $f0, $f3, $f0
    ctx->pc = 0x16a82cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x16a830: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x16a830u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x16a834: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x16a834u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x16a838: 0xc421aad0  lwc1        $f1, -0x5530($at)
    ctx->pc = 0x16a838u;
    { uint32_t bits = FAST_READ32(0x47AAD0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16a83c: 0xc7a00090  lwc1        $f0, 0x90($sp)
    ctx->pc = 0x16a83cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16a840: 0x46000881  sub.s       $f2, $f1, $f0
    ctx->pc = 0x16a840u;
    ctx->f[2] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x16a844: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x16a844u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x16a848: 0xc421aad0  lwc1        $f1, -0x5530($at)
    ctx->pc = 0x16a848u;
    { uint32_t bits = FAST_READ32(0x47AAD0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16a84c: 0xc7a00090  lwc1        $f0, 0x90($sp)
    ctx->pc = 0x16a84cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16a850: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x16a850u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x16a854: 0x460010c2  mul.s       $f3, $f2, $f0
    ctx->pc = 0x16a854u;
    ctx->f[3] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x16a858: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x16a858u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x16a85c: 0xc421aad8  lwc1        $f1, -0x5528($at)
    ctx->pc = 0x16a85cu;
    { uint32_t bits = FAST_READ32(0x47AAD8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16a860: 0xc7a00098  lwc1        $f0, 0x98($sp)
    ctx->pc = 0x16a860u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16a864: 0x46000881  sub.s       $f2, $f1, $f0
    ctx->pc = 0x16a864u;
    ctx->f[2] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x16a868: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x16a868u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x16a86c: 0xc421aad8  lwc1        $f1, -0x5528($at)
    ctx->pc = 0x16a86cu;
    { uint32_t bits = FAST_READ32(0x47AAD8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16a870: 0xc7a00098  lwc1        $f0, 0x98($sp)
    ctx->pc = 0x16a870u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16a874: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x16a874u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x16a878: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x16a878u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x16a87c: 0x46001800  add.s       $f0, $f3, $f0
    ctx->pc = 0x16a87cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x16a880: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x16a880u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x16a884: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x16a884u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x16a888: 0xc421aad0  lwc1        $f1, -0x5530($at)
    ctx->pc = 0x16a888u;
    { uint32_t bits = FAST_READ32(0x47AAD0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16a88c: 0xc7a000a0  lwc1        $f0, 0xA0($sp)
    ctx->pc = 0x16a88cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16a890: 0x46000881  sub.s       $f2, $f1, $f0
    ctx->pc = 0x16a890u;
    ctx->f[2] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x16a894: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x16a894u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x16a898: 0xc421aad0  lwc1        $f1, -0x5530($at)
    ctx->pc = 0x16a898u;
    { uint32_t bits = FAST_READ32(0x47AAD0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16a89c: 0xc7a000a0  lwc1        $f0, 0xA0($sp)
    ctx->pc = 0x16a89cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16a8a0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x16a8a0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x16a8a4: 0x460010c2  mul.s       $f3, $f2, $f0
    ctx->pc = 0x16a8a4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x16a8a8: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x16a8a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x16a8ac: 0xc421aad8  lwc1        $f1, -0x5528($at)
    ctx->pc = 0x16a8acu;
    { uint32_t bits = FAST_READ32(0x47AAD8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16a8b0: 0xc7a000a8  lwc1        $f0, 0xA8($sp)
    ctx->pc = 0x16a8b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16a8b4: 0x46000881  sub.s       $f2, $f1, $f0
    ctx->pc = 0x16a8b4u;
    ctx->f[2] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x16a8b8: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x16a8b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x16a8bc: 0xc421aad8  lwc1        $f1, -0x5528($at)
    ctx->pc = 0x16a8bcu;
    { uint32_t bits = FAST_READ32(0x47AAD8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16a8c0: 0xc7a000a8  lwc1        $f0, 0xA8($sp)
    ctx->pc = 0x16a8c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16a8c4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x16a8c4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x16a8c8: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x16a8c8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x16a8cc: 0x46001800  add.s       $f0, $f3, $f0
    ctx->pc = 0x16a8ccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x16a8d0: 0xe7a000c8  swc1        $f0, 0xC8($sp)
    ctx->pc = 0x16a8d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x16a8d4: 0xc7a100c0  lwc1        $f1, 0xC0($sp)
    ctx->pc = 0x16a8d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16a8d8: 0xc7a000c4  lwc1        $f0, 0xC4($sp)
    ctx->pc = 0x16a8d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16a8dc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x16a8dcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16a8e0: 0x0  nop
    ctx->pc = 0x16a8e0u;
    // NOP
    // 0x16a8e4: 0x4501000d  bc1t        . + 4 + (0xD << 2)
    ctx->pc = 0x16A8E4u;
    {
        const bool branch_taken_0x16a8e4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x16a8e4) {
            ctx->pc = 0x16A91Cu;
            goto label_16a91c;
        }
    }
    ctx->pc = 0x16A8ECu;
    // 0x16a8ec: 0xc7a100c4  lwc1        $f1, 0xC4($sp)
    ctx->pc = 0x16a8ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16a8f0: 0xc7a000c8  lwc1        $f0, 0xC8($sp)
    ctx->pc = 0x16a8f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16a8f4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x16a8f4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16a8f8: 0x0  nop
    ctx->pc = 0x16a8f8u;
    // NOP
    // 0x16a8fc: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x16A8FCu;
    {
        const bool branch_taken_0x16a8fc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x16a8fc) {
            ctx->pc = 0x16A910u;
            goto label_16a910;
        }
    }
    ctx->pc = 0x16A904u;
    // 0x16a904: 0x24100002  addiu       $s0, $zero, 0x2
    ctx->pc = 0x16a904u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16a908: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x16A908u;
    {
        const bool branch_taken_0x16a908 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16a908) {
            ctx->pc = 0x16A944u;
            goto label_16a944;
        }
    }
    ctx->pc = 0x16A910u;
label_16a910:
    // 0x16a910: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x16a910u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16a914: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x16A914u;
    {
        const bool branch_taken_0x16a914 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16a914) {
            ctx->pc = 0x16A944u;
            goto label_16a944;
        }
    }
    ctx->pc = 0x16A91Cu;
label_16a91c:
    // 0x16a91c: 0xc7a100c0  lwc1        $f1, 0xC0($sp)
    ctx->pc = 0x16a91cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16a920: 0xc7a000c8  lwc1        $f0, 0xC8($sp)
    ctx->pc = 0x16a920u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16a924: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x16a924u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16a928: 0x0  nop
    ctx->pc = 0x16a928u;
    // NOP
    // 0x16a92c: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x16A92Cu;
    {
        const bool branch_taken_0x16a92c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x16a92c) {
            ctx->pc = 0x16A940u;
            goto label_16a940;
        }
    }
    ctx->pc = 0x16A934u;
    // 0x16a934: 0x24100002  addiu       $s0, $zero, 0x2
    ctx->pc = 0x16a934u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16a938: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x16A938u;
    {
        const bool branch_taken_0x16a938 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16a938) {
            ctx->pc = 0x16A944u;
            goto label_16a944;
        }
    }
    ctx->pc = 0x16A940u;
label_16a940:
    // 0x16a940: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x16a940u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_16a944:
    // 0x16a944: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x16a944u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x16a948: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x16a948u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x16a94c: 0xc46200c0  lwc1        $f2, 0xC0($v1)
    ctx->pc = 0x16a94cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x16a950: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x16a950u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x16a954: 0xc421ab08  lwc1        $f1, -0x54F8($at)
    ctx->pc = 0x16a954u;
    { uint32_t bits = FAST_READ32(0x47AB08u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16a958: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x16a958u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x16a95c: 0xc420ab08  lwc1        $f0, -0x54F8($at)
    ctx->pc = 0x16a95cu;
    { uint32_t bits = FAST_READ32(0x47AB08u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16a960: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x16a960u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x16a964: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x16a964u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16a968: 0x0  nop
    ctx->pc = 0x16a968u;
    // NOP
    // 0x16a96c: 0x45000019  bc1f        . + 4 + (0x19 << 2)
    ctx->pc = 0x16A96Cu;
    {
        const bool branch_taken_0x16a96c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x16a96c) {
            ctx->pc = 0x16A9D4u;
            goto label_16a9d4;
        }
    }
    ctx->pc = 0x16A974u;
    // 0x16a974: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x16a974u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x16a978: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x16a978u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x16a97c: 0xc46100c0  lwc1        $f1, 0xC0($v1)
    ctx->pc = 0x16a97cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16a980: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x16a980u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x16a984: 0xc420ab00  lwc1        $f0, -0x5500($at)
    ctx->pc = 0x16a984u;
    { uint32_t bits = FAST_READ32(0x47AB00u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16a988: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x16a988u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16a98c: 0x0  nop
    ctx->pc = 0x16a98cu;
    // NOP
    // 0x16a990: 0x45000010  bc1f        . + 4 + (0x10 << 2)
    ctx->pc = 0x16A990u;
    {
        const bool branch_taken_0x16a990 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x16a990) {
            ctx->pc = 0x16A9D4u;
            goto label_16a9d4;
        }
    }
    ctx->pc = 0x16A998u;
    // 0x16a998: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x16a998u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x16a99c: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x16a99cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x16a9a0: 0xc46000c0  lwc1        $f0, 0xC0($v1)
    ctx->pc = 0x16a9a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16a9a4: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x16a9a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x16a9a8: 0xe420ab00  swc1        $f0, -0x5500($at)
    ctx->pc = 0x16a9a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x47AB00u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47AB00u, _value); } while (0); }
    // 0x16a9ac: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x16a9acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x16a9b0: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x16a9b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x16a9b4: 0x24630080  addiu       $v1, $v1, 0x80
    ctx->pc = 0x16a9b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
    // 0x16a9b8: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x16a9b8u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16a9bc: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x16a9bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x16a9c0: 0x2463aaf0  addiu       $v1, $v1, -0x5510
    ctx->pc = 0x16a9c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294945520));
    // 0x16a9c4: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x16a9c4u;
    do { __m128i _value = (GPR_VEC(ctx, 4)); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x47AAF0u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x47AAF0u, _value); } while (0);
    // 0x16a9c8: 0x8fa300d0  lw          $v1, 0xD0($sp)
    ctx->pc = 0x16a9c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x16a9cc: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x16a9ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x16a9d0: 0xac23ab20  sw          $v1, -0x54E0($at)
    ctx->pc = 0x16a9d0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x47AB20u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47AB20u, _value); } while (0);
label_16a9d4:
    // 0x16a9d4: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x16a9d4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16a9d8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x16a9d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16a9dc: 0x27bd00e0  addiu       $sp, $sp, 0xE0
    ctx->pc = 0x16a9dcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x16a9e0: 0x3e00008  jr          $ra
    ctx->pc = 0x16A9E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16A9E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16A9E8u;
}
