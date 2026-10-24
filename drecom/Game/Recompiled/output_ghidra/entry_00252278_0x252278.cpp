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

// Function: entry_00252278
// Address: 0x252278 - 0x252330
void entry_00252278_0x252278(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00252278_0x252278");
#endif

    ctx->pc = 0x252278u;

    // 0x252278: 0xc7a000cc  lwc1        $f0, 0xCC($sp)
    ctx->pc = 0x252278u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25227c: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x25227cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
    // 0x252280: 0xc7a100b8  lwc1        $f1, 0xB8($sp)
    ctx->pc = 0x252280u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x252284: 0xc7a000bc  lwc1        $f0, 0xBC($sp)
    ctx->pc = 0x252284u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x252288: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x252288u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x25228c: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x25228cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x252290: 0xc7a10064  lwc1        $f1, 0x64($sp)
    ctx->pc = 0x252290u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x252294: 0xc7a00054  lwc1        $f0, 0x54($sp)
    ctx->pc = 0x252294u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x252298: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x252298u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x25229c: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x25229cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x2522a0: 0xc7a100bc  lwc1        $f1, 0xBC($sp)
    ctx->pc = 0x2522a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2522a4: 0xc7a000c4  lwc1        $f0, 0xC4($sp)
    ctx->pc = 0x2522a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2522a8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2522a8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2522ac: 0xc7a000c0  lwc1        $f0, 0xC0($sp)
    ctx->pc = 0x2522acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2522b0: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x2522b0u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x2522b4: 0xc7a00054  lwc1        $f0, 0x54($sp)
    ctx->pc = 0x2522b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2522b8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2522b8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2522bc: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x2522bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x2522c0: 0xc7a10068  lwc1        $f1, 0x68($sp)
    ctx->pc = 0x2522c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2522c4: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x2522c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2522c8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2522c8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2522cc: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x2522ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x2522d0: 0xc7a100bc  lwc1        $f1, 0xBC($sp)
    ctx->pc = 0x2522d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2522d4: 0xc7a000c4  lwc1        $f0, 0xC4($sp)
    ctx->pc = 0x2522d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2522d8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2522d8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2522dc: 0xc7a000c0  lwc1        $f0, 0xC0($sp)
    ctx->pc = 0x2522dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2522e0: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x2522e0u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x2522e4: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x2522e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2522e8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2522e8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2522ec: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x2522ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x2522f0: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2522f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2522f4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2522f4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2522f8: 0x0  nop
    ctx->pc = 0x2522f8u;
    // NOP
    // 0x2522fc: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x2522fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x252300: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x252300u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x252304: 0xc7a00074  lwc1        $f0, 0x74($sp)
    ctx->pc = 0x252304u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x252308: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x252308u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25230c: 0x0  nop
    ctx->pc = 0x25230cu;
    // NOP
    // 0x252310: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x252310u;
    {
        const bool branch_taken_0x252310 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x252310) {
            ctx->pc = 0x252330u;
            return;
        }
    }
    ctx->pc = 0x252318u;
    // 0x252318: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x252318u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25231c: 0xc7a00094  lwc1        $f0, 0x94($sp)
    ctx->pc = 0x25231cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x252320: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x252320u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x252324: 0x0  nop
    ctx->pc = 0x252324u;
    // NOP
    // 0x252328: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x252328u;
    {
        const bool branch_taken_0x252328 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x252328) {
            ctx->pc = 0x252338u;
            return;
        }
    }
    ctx->pc = 0x252330u;
}
