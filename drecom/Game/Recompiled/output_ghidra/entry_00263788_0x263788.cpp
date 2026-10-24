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

// Function: entry_00263788
// Address: 0x263788 - 0x2638e0
void entry_00263788_0x263788(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00263788_0x263788");
#endif

    ctx->pc = 0x263788u;

    // 0x263788: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x263788u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26378c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x26378cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x263790: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x263790u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x263794: 0xc7a10074  lwc1        $f1, 0x74($sp)
    ctx->pc = 0x263794u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x263798: 0xc7a00074  lwc1        $f0, 0x74($sp)
    ctx->pc = 0x263798u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26379c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x26379cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2637a0: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x2637a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x2637a4: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x2637a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2637a8: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x2637a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2637ac: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2637acu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2637b0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2637b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2637b4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2637b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2637b8: 0x0  nop
    ctx->pc = 0x2637b8u;
    // NOP
    // 0x2637bc: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x2637bcu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x2637c0: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x2637c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x2637c4: 0xc7a10070  lwc1        $f1, 0x70($sp)
    ctx->pc = 0x2637c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2637c8: 0xc7a00070  lwc1        $f0, 0x70($sp)
    ctx->pc = 0x2637c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2637cc: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2637ccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2637d0: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x2637d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x2637d4: 0xc7a10078  lwc1        $f1, 0x78($sp)
    ctx->pc = 0x2637d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2637d8: 0xc7a00070  lwc1        $f0, 0x70($sp)
    ctx->pc = 0x2637d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2637dc: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2637dcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2637e0: 0xe7a0008c  swc1        $f0, 0x8C($sp)
    ctx->pc = 0x2637e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
    // 0x2637e4: 0xc7a10078  lwc1        $f1, 0x78($sp)
    ctx->pc = 0x2637e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2637e8: 0xc7a00074  lwc1        $f0, 0x74($sp)
    ctx->pc = 0x2637e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2637ec: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2637ecu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2637f0: 0xc7a0007c  lwc1        $f0, 0x7C($sp)
    ctx->pc = 0x2637f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2637f4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2637f4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2637f8: 0xe7a00088  swc1        $f0, 0x88($sp)
    ctx->pc = 0x2637f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x2637fc: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2637fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x263800: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x263800u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x263804: 0xc7a00088  lwc1        $f0, 0x88($sp)
    ctx->pc = 0x263804u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x263808: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x263808u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x26380c: 0xc7a00070  lwc1        $f0, 0x70($sp)
    ctx->pc = 0x26380cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x263810: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x263810u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x263814: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x263814u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x263818: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x263818u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x26381c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x26381cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x263820: 0xc7a00078  lwc1        $f0, 0x78($sp)
    ctx->pc = 0x263820u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x263824: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x263824u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x263828: 0xc7a0007c  lwc1        $f0, 0x7C($sp)
    ctx->pc = 0x263828u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26382c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x26382cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x263830: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x263830u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x263834: 0xc7a10080  lwc1        $f1, 0x80($sp)
    ctx->pc = 0x263834u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x263838: 0xc7a00084  lwc1        $f0, 0x84($sp)
    ctx->pc = 0x263838u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26383c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x26383cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x263840: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x263840u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x263844: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x263844u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x263848: 0x0  nop
    ctx->pc = 0x263848u;
    // NOP
    // 0x26384c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x26384cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x263850: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x263850u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x263854: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x263854u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x263858: 0x46000047  neg.s       $f1, $f0
    ctx->pc = 0x263858u;
    ctx->f[1] = FPU_NEG_S(ctx->f[0]);
    // 0x26385c: 0xc7a00084  lwc1        $f0, 0x84($sp)
    ctx->pc = 0x26385cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x263860: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x263860u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x263864: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x263864u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x263868: 0xc7a10088  lwc1        $f1, 0x88($sp)
    ctx->pc = 0x263868u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26386c: 0xc7a0008c  lwc1        $f0, 0x8C($sp)
    ctx->pc = 0x26386cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x263870: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x263870u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x263874: 0xc7a0008c  lwc1        $f0, 0x8C($sp)
    ctx->pc = 0x263874u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x263878: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x263878u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x26387c: 0xc7a00074  lwc1        $f0, 0x74($sp)
    ctx->pc = 0x26387cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x263880: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x263880u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x263884: 0xe7a00098  swc1        $f0, 0x98($sp)
    ctx->pc = 0x263884u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x263888: 0xc7a10088  lwc1        $f1, 0x88($sp)
    ctx->pc = 0x263888u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26388c: 0xc7a0008c  lwc1        $f0, 0x8C($sp)
    ctx->pc = 0x26388cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x263890: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x263890u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x263894: 0xe7a0009c  swc1        $f0, 0x9C($sp)
    ctx->pc = 0x263894u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
    // 0x263898: 0xc7a10058  lwc1        $f1, 0x58($sp)
    ctx->pc = 0x263898u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26389c: 0xc7a00090  lwc1        $f0, 0x90($sp)
    ctx->pc = 0x26389cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2638a0: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x2638a0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2638a4: 0xc7a1005c  lwc1        $f1, 0x5C($sp)
    ctx->pc = 0x2638a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2638a8: 0xc7a00094  lwc1        $f0, 0x94($sp)
    ctx->pc = 0x2638a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2638ac: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2638acu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2638b0: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x2638b0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x2638b4: 0xc7a10060  lwc1        $f1, 0x60($sp)
    ctx->pc = 0x2638b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2638b8: 0xc7a00098  lwc1        $f0, 0x98($sp)
    ctx->pc = 0x2638b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2638bc: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2638bcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2638c0: 0x46020080  add.s       $f2, $f0, $f2
    ctx->pc = 0x2638c0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2638c4: 0xc7a10064  lwc1        $f1, 0x64($sp)
    ctx->pc = 0x2638c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2638c8: 0xc7a0009c  lwc1        $f0, 0x9C($sp)
    ctx->pc = 0x2638c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2638cc: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2638ccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2638d0: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2638d0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2638d4: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x2638d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x2638d8: 0xc7a00068  lwc1        $f0, 0x68($sp)
    ctx->pc = 0x2638d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2638dc: 0x0  nop
    ctx->pc = 0x2638dcu;
    // NOP
    ctx->pc = 0x2638e0u;
}
