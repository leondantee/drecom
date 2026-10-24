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

// Function: entry_001f21c4
// Address: 0x1f21c4 - 0x1f22e0
void entry_001f21c4_0x1f21c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f21c4_0x1f21c4");
#endif

    switch (ctx->pc) {
        case 0x1f223cu: goto label_1f223c;
        case 0x1f22bcu: goto label_1f22bc;
        case 0x1f22c4u: goto label_1f22c4;
        default: break;
    }

    ctx->pc = 0x1f21c4u;

    // 0x1f21c4: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x1f21c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1f21c8: 0x8c830130  lw          $v1, 0x130($a0)
    ctx->pc = 0x1f21c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
    // 0x1f21cc: 0x24630880  addiu       $v1, $v1, 0x880
    ctx->pc = 0x1f21ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2176));
    // 0x1f21d0: 0xafa30060  sw          $v1, 0x60($sp)
    ctx->pc = 0x1f21d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 3));
    // 0x1f21d4: 0x3c03c396  lui         $v1, 0xC396
    ctx->pc = 0x1f21d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)50070 << 16));
    // 0x1f21d8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1f21d8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f21dc: 0x0  nop
    ctx->pc = 0x1f21dcu;
    // NOP
    // 0x1f21e0: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x1f21e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x1f21e4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f21e4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f21e8: 0x0  nop
    ctx->pc = 0x1f21e8u;
    // NOP
    // 0x1f21ec: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x1f21ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x1f21f0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f21f0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f21f4: 0x0  nop
    ctx->pc = 0x1f21f4u;
    // NOP
    // 0x1f21f8: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x1f21f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x1f21fc: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1f21fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1f2200: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1f2200u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f2204: 0x0  nop
    ctx->pc = 0x1f2204u;
    // NOP
    // 0x1f2208: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x1f2208u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x1f220c: 0x3c0643c8  lui         $a2, 0x43C8
    ctx->pc = 0x1f220cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)17352 << 16));
    // 0x1f2210: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x1f2210u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f2214: 0x0  nop
    ctx->pc = 0x1f2214u;
    // NOP
    // 0x1f2218: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x1f2218u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x1f221c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1f221cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1f2220: 0xa7a30084  sh          $v1, 0x84($sp)
    ctx->pc = 0x1f2220u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 132), (uint16_t)GPR_U32(ctx, 3));
    // 0x1f2224: 0xa3a00086  sb          $zero, 0x86($sp)
    ctx->pc = 0x1f2224u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 134), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f2228: 0xa3a00087  sb          $zero, 0x87($sp)
    ctx->pc = 0x1f2228u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 135), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f222c: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x1f222cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1f2230: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x1f2230u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1f2234: 0xc06ce90  jal         func_1B3A40
    ctx->pc = 0x1F2234u;
    SET_GPR_U32(ctx, 31, 0x1F223Cu);
    ctx->pc = 0x1B3A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3A40u, 0x1F2234u, 0x1F223Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F223Cu;
label_1f223c:
    // 0x1f223c: 0x10400057  beqz        $v0, . + 4 + (0x57 << 2)
    ctx->pc = 0x1F223Cu;
    {
        const bool branch_taken_0x1f223c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f223c) {
            ctx->pc = 0x1F239Cu;
            return;
        }
    }
    ctx->pc = 0x1F2244u;
    // 0x1f2244: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f2244u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f2248: 0x0  nop
    ctx->pc = 0x1f2248u;
    // NOP
    // 0x1f224c: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x1f224cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x1f2250: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f2250u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f2254: 0x0  nop
    ctx->pc = 0x1f2254u;
    // NOP
    // 0x1f2258: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x1f2258u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x1f225c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f225cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f2260: 0x0  nop
    ctx->pc = 0x1f2260u;
    // NOP
    // 0x1f2264: 0xe7a00098  swc1        $f0, 0x98($sp)
    ctx->pc = 0x1f2264u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x1f2268: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1f2268u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1f226c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1f226cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f2270: 0x0  nop
    ctx->pc = 0x1f2270u;
    // NOP
    // 0x1f2274: 0xe7a0009c  swc1        $f0, 0x9C($sp)
    ctx->pc = 0x1f2274u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
    // 0x1f2278: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x1f2278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1f227c: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x1f227cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1f2280: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x1f2280u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x1f2284: 0x3405ffff  ori         $a1, $zero, 0xFFFF
    ctx->pc = 0x1f2284u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1f2288: 0x53438  dsll        $a2, $a1, 16
    ctx->pc = 0x1f2288u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) << 16);
    // 0x1f228c: 0x34c7ffff  ori         $a3, $a2, 0xFFFF
    ctx->pc = 0x1f228cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x1f2290: 0x874024  and         $t0, $a0, $a3
    ctx->pc = 0x1f2290u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 4) & GPR_U64(ctx, 7));
    // 0x1f2294: 0x8103c  dsll32      $v0, $t0, 0
    ctx->pc = 0x1f2294u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) << (32 + 0));
    // 0x1f2298: 0x34440006  ori         $a0, $v0, 0x6
    ctx->pc = 0x1f2298u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6);
    // 0x1f229c: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x1f229cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1f22a0: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x1f22a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x1f22a4: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x1f22a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1f22a8: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1f22a8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1f22ac: 0x24470880  addiu       $a3, $v0, 0x880
    ctx->pc = 0x1f22acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 2176));
    // 0x1f22b0: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x1f22b0u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1f22b4: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x1F22B4u;
    SET_GPR_U32(ctx, 31, 0x1F22BCu);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x1F22B4u, 0x1F22BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F22BCu;
label_1f22bc:
    // 0x1f22bc: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1F22BCu;
    SET_GPR_U32(ctx, 31, 0x1F22C4u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1F22BCu, 0x1F22C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F22C4u;
label_1f22c4:
    // 0x1f22c4: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1F22C4u;
    {
        const bool branch_taken_0x1f22c4 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1f22c4) {
            ctx->pc = 0x1F22E0u;
            return;
        }
    }
    ctx->pc = 0x1F22CCu;
    // 0x1f22cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f22ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f22d0: 0x0  nop
    ctx->pc = 0x1f22d0u;
    // NOP
    // 0x1f22d4: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1f22d4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1f22d8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1F22D8u;
    {
        const bool branch_taken_0x1f22d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f22d8) {
            ctx->pc = 0x1F22FCu;
            return;
        }
    }
    ctx->pc = 0x1F22E0u;
}
