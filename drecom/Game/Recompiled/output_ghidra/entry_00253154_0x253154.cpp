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

// Function: entry_00253154
// Address: 0x253154 - 0x25320c
void entry_00253154_0x253154(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00253154_0x253154");
#endif

    ctx->pc = 0x253154u;

    // 0x253154: 0xc7a000fc  lwc1        $f0, 0xFC($sp)
    ctx->pc = 0x253154u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x253158: 0xe7a000dc  swc1        $f0, 0xDC($sp)
    ctx->pc = 0x253158u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
    // 0x25315c: 0xc7a100d8  lwc1        $f1, 0xD8($sp)
    ctx->pc = 0x25315cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x253160: 0xc7a000dc  lwc1        $f0, 0xDC($sp)
    ctx->pc = 0x253160u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x253164: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x253164u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x253168: 0xe7a000e0  swc1        $f0, 0xE0($sp)
    ctx->pc = 0x253168u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x25316c: 0xc7a10080  lwc1        $f1, 0x80($sp)
    ctx->pc = 0x25316cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x253170: 0xc7a00070  lwc1        $f0, 0x70($sp)
    ctx->pc = 0x253170u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x253174: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x253174u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x253178: 0xe7a000e4  swc1        $f0, 0xE4($sp)
    ctx->pc = 0x253178u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
    // 0x25317c: 0xc7a100dc  lwc1        $f1, 0xDC($sp)
    ctx->pc = 0x25317cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x253180: 0xc7a000e4  lwc1        $f0, 0xE4($sp)
    ctx->pc = 0x253180u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x253184: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x253184u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x253188: 0xc7a000e0  lwc1        $f0, 0xE0($sp)
    ctx->pc = 0x253188u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25318c: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x25318cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x253190: 0xc7a00078  lwc1        $f0, 0x78($sp)
    ctx->pc = 0x253190u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x253194: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x253194u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x253198: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x253198u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x25319c: 0xc7a10080  lwc1        $f1, 0x80($sp)
    ctx->pc = 0x25319cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2531a0: 0xc7a00070  lwc1        $f0, 0x70($sp)
    ctx->pc = 0x2531a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2531a4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2531a4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2531a8: 0xe7a000e4  swc1        $f0, 0xE4($sp)
    ctx->pc = 0x2531a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
    // 0x2531ac: 0xc7a100dc  lwc1        $f1, 0xDC($sp)
    ctx->pc = 0x2531acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2531b0: 0xc7a000e4  lwc1        $f0, 0xE4($sp)
    ctx->pc = 0x2531b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2531b4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2531b4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2531b8: 0xc7a000e0  lwc1        $f0, 0xE0($sp)
    ctx->pc = 0x2531b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2531bc: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x2531bcu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x2531c0: 0xc7a00070  lwc1        $f0, 0x70($sp)
    ctx->pc = 0x2531c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2531c4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2531c4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2531c8: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x2531c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x2531cc: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2531ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2531d0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2531d0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2531d4: 0x0  nop
    ctx->pc = 0x2531d4u;
    // NOP
    // 0x2531d8: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x2531d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x2531dc: 0xc7a10068  lwc1        $f1, 0x68($sp)
    ctx->pc = 0x2531dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2531e0: 0xc7a000c8  lwc1        $f0, 0xC8($sp)
    ctx->pc = 0x2531e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2531e4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2531e4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2531e8: 0x0  nop
    ctx->pc = 0x2531e8u;
    // NOP
    // 0x2531ec: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x2531ECu;
    {
        const bool branch_taken_0x2531ec = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2531ec) {
            ctx->pc = 0x25320Cu;
            return;
        }
    }
    ctx->pc = 0x2531F4u;
    // 0x2531f4: 0xc7a10068  lwc1        $f1, 0x68($sp)
    ctx->pc = 0x2531f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2531f8: 0xc7a00098  lwc1        $f0, 0x98($sp)
    ctx->pc = 0x2531f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2531fc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2531fcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x253200: 0x0  nop
    ctx->pc = 0x253200u;
    // NOP
    // 0x253204: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x253204u;
    {
        const bool branch_taken_0x253204 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x253204) {
            ctx->pc = 0x253228u;
            return;
        }
    }
    ctx->pc = 0x25320Cu;
}
