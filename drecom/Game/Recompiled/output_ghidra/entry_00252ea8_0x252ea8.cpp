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

// Function: entry_00252ea8
// Address: 0x252ea8 - 0x252f60
void entry_00252ea8_0x252ea8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00252ea8_0x252ea8");
#endif

    ctx->pc = 0x252ea8u;

    // 0x252ea8: 0xc7a000f4  lwc1        $f0, 0xF4($sp)
    ctx->pc = 0x252ea8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x252eac: 0xe7a000dc  swc1        $f0, 0xDC($sp)
    ctx->pc = 0x252eacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
    // 0x252eb0: 0xc7a100d8  lwc1        $f1, 0xD8($sp)
    ctx->pc = 0x252eb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x252eb4: 0xc7a000dc  lwc1        $f0, 0xDC($sp)
    ctx->pc = 0x252eb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x252eb8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x252eb8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x252ebc: 0xe7a000e0  swc1        $f0, 0xE0($sp)
    ctx->pc = 0x252ebcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x252ec0: 0xc7a10084  lwc1        $f1, 0x84($sp)
    ctx->pc = 0x252ec0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x252ec4: 0xc7a00074  lwc1        $f0, 0x74($sp)
    ctx->pc = 0x252ec4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x252ec8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x252ec8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x252ecc: 0xe7a000e4  swc1        $f0, 0xE4($sp)
    ctx->pc = 0x252eccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
    // 0x252ed0: 0xc7a100dc  lwc1        $f1, 0xDC($sp)
    ctx->pc = 0x252ed0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x252ed4: 0xc7a000e4  lwc1        $f0, 0xE4($sp)
    ctx->pc = 0x252ed4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x252ed8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x252ed8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x252edc: 0xc7a000e0  lwc1        $f0, 0xE0($sp)
    ctx->pc = 0x252edcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x252ee0: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x252ee0u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x252ee4: 0xc7a00074  lwc1        $f0, 0x74($sp)
    ctx->pc = 0x252ee4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x252ee8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x252ee8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x252eec: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x252eecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x252ef0: 0xc7a10080  lwc1        $f1, 0x80($sp)
    ctx->pc = 0x252ef0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x252ef4: 0xc7a00070  lwc1        $f0, 0x70($sp)
    ctx->pc = 0x252ef4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x252ef8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x252ef8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x252efc: 0xe7a000e4  swc1        $f0, 0xE4($sp)
    ctx->pc = 0x252efcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
    // 0x252f00: 0xc7a100dc  lwc1        $f1, 0xDC($sp)
    ctx->pc = 0x252f00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x252f04: 0xc7a000e4  lwc1        $f0, 0xE4($sp)
    ctx->pc = 0x252f04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x252f08: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x252f08u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x252f0c: 0xc7a000e0  lwc1        $f0, 0xE0($sp)
    ctx->pc = 0x252f0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x252f10: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x252f10u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x252f14: 0xc7a00070  lwc1        $f0, 0x70($sp)
    ctx->pc = 0x252f14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x252f18: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x252f18u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x252f1c: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x252f1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x252f20: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x252f20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x252f24: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x252f24u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x252f28: 0x0  nop
    ctx->pc = 0x252f28u;
    // NOP
    // 0x252f2c: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x252f2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x252f30: 0xc7a10064  lwc1        $f1, 0x64($sp)
    ctx->pc = 0x252f30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x252f34: 0xc7a00094  lwc1        $f0, 0x94($sp)
    ctx->pc = 0x252f34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x252f38: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x252f38u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x252f3c: 0x0  nop
    ctx->pc = 0x252f3cu;
    // NOP
    // 0x252f40: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x252F40u;
    {
        const bool branch_taken_0x252f40 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x252f40) {
            ctx->pc = 0x252F60u;
            return;
        }
    }
    ctx->pc = 0x252F48u;
    // 0x252f48: 0xc7a10064  lwc1        $f1, 0x64($sp)
    ctx->pc = 0x252f48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x252f4c: 0xc7a000a4  lwc1        $f0, 0xA4($sp)
    ctx->pc = 0x252f4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x252f50: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x252f50u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x252f54: 0x0  nop
    ctx->pc = 0x252f54u;
    // NOP
    // 0x252f58: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x252F58u;
    {
        const bool branch_taken_0x252f58 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x252f58) {
            ctx->pc = 0x252F7Cu;
            return;
        }
    }
    ctx->pc = 0x252F60u;
}
