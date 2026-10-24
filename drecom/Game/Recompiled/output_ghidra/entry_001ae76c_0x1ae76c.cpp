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

// Function: entry_001ae76c
// Address: 0x1ae76c - 0x1ae978
void entry_001ae76c_0x1ae76c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ae76c_0x1ae76c");
#endif

    switch (ctx->pc) {
        case 0x1ae794u: goto label_1ae794;
        case 0x1ae810u: goto label_1ae810;
        case 0x1ae828u: goto label_1ae828;
        case 0x1ae83cu: goto label_1ae83c;
        default: break;
    }

    ctx->pc = 0x1ae76cu;

    // 0x1ae76c: 0x92220d87  lbu         $v0, 0xD87($s1)
    ctx->pc = 0x1ae76cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3463)));
    // 0x1ae770: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1ae770u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1ae774: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1ae774u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1ae778: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1ae778u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1ae77c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1ae77cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1ae780: 0xa2220d87  sb          $v0, 0xD87($s1)
    ctx->pc = 0x1ae780u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 3463), (uint8_t)GPR_U32(ctx, 2));
    // 0x1ae784: 0x3c01005f  lui         $at, 0x5F
    ctx->pc = 0x1ae784u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)95 << 16));
    // 0x1ae788: 0xc42cefe0  lwc1        $f12, -0x1020($at)
    ctx->pc = 0x1ae788u;
    { uint32_t bits = FAST_READ32(0x5EEFE0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1ae78c: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x1AE78Cu;
    SET_GPR_U32(ctx, 31, 0x1AE794u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x1AE78Cu, 0x1AE794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE794u;
label_1ae794:
    // 0x1ae794: 0x3c01005f  lui         $at, 0x5F
    ctx->pc = 0x1ae794u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)95 << 16));
    // 0x1ae798: 0xe420efe0  swc1        $f0, -0x1020($at)
    ctx->pc = 0x1ae798u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5EEFE0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5EEFE0u, _value); } while (0); }
    // 0x1ae79c: 0x3c01005f  lui         $at, 0x5F
    ctx->pc = 0x1ae79cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)95 << 16));
    // 0x1ae7a0: 0xc420efe8  lwc1        $f0, -0x1018($at)
    ctx->pc = 0x1ae7a0u;
    { uint32_t bits = FAST_READ32(0x5EEFE8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ae7a4: 0x92220d87  lbu         $v0, 0xD87($s1)
    ctx->pc = 0x1ae7a4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3463)));
    // 0x1ae7a8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1ae7a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1ae7ac: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1ae7acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1ae7b0: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1ae7b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1ae7b4: 0xe4400d88  swc1        $f0, 0xD88($v0)
    ctx->pc = 0x1ae7b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 3464), bits); }
    // 0x1ae7b8: 0x3c01005f  lui         $at, 0x5F
    ctx->pc = 0x1ae7b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)95 << 16));
    // 0x1ae7bc: 0xc420efe0  lwc1        $f0, -0x1020($at)
    ctx->pc = 0x1ae7bcu;
    { uint32_t bits = FAST_READ32(0x5EEFE0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ae7c0: 0x92220d87  lbu         $v0, 0xD87($s1)
    ctx->pc = 0x1ae7c0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3463)));
    // 0x1ae7c4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1ae7c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1ae7c8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1ae7c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1ae7cc: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1ae7ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1ae7d0: 0xe4401188  swc1        $f0, 0x1188($v0)
    ctx->pc = 0x1ae7d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4488), bits); }
    // 0x1ae7d4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1ae7d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ae7d8: 0x0  nop
    ctx->pc = 0x1ae7d8u;
    // NOP
    // 0x1ae7dc: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x1ae7dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x1ae7e0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1ae7e0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ae7e4: 0x0  nop
    ctx->pc = 0x1ae7e4u;
    // NOP
    // 0x1ae7e8: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x1ae7e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x1ae7ec: 0x3c01005f  lui         $at, 0x5F
    ctx->pc = 0x1ae7ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)95 << 16));
    // 0x1ae7f0: 0xc420efe8  lwc1        $f0, -0x1018($at)
    ctx->pc = 0x1ae7f0u;
    { uint32_t bits = FAST_READ32(0x5EEFE8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ae7f4: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x1ae7f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x1ae7f8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1ae7f8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ae7fc: 0x0  nop
    ctx->pc = 0x1ae7fcu;
    // NOP
    // 0x1ae800: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x1ae800u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x1ae804: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x1ae804u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1ae808: 0xc040cbc  jal         func_1032F0
    ctx->pc = 0x1AE808u;
    SET_GPR_U32(ctx, 31, 0x1AE810u);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x1AE810u;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1AE810u) { return; }
    ctx->pc = 0x1AE810u;
label_1ae810:
    // 0x1ae810: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x1ae810u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1ae814: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x1ae814u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1ae818: 0x3c01005f  lui         $at, 0x5F
    ctx->pc = 0x1ae818u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)95 << 16));
    // 0x1ae81c: 0xc42cefe0  lwc1        $f12, -0x1020($at)
    ctx->pc = 0x1ae81cu;
    { uint32_t bits = FAST_READ32(0x5EEFE0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1ae820: 0xc040d38  jal         func_1034E0
    ctx->pc = 0x1AE820u;
    SET_GPR_U32(ctx, 31, 0x1AE828u);
    ctx->pc = 0x1034E0u;
    {
        ctx->pc = 0x1AE828u;
        ps2_stubs::sceVu0RotMatrixY(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1AE828u) { return; }
    ctx->pc = 0x1AE828u;
label_1ae828:
    // 0x1ae828: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1ae828u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1ae82c: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x1ae82cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1ae830: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x1ae830u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1ae834: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x1AE834u;
    SET_GPR_U32(ctx, 31, 0x1AE83Cu);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x1AE83Cu;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1AE83Cu) { return; }
    ctx->pc = 0x1AE83Cu;
label_1ae83c:
    // 0x1ae83c: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x1ae83cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ae840: 0x92230d87  lbu         $v1, 0xD87($s1)
    ctx->pc = 0x1ae840u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3463)));
    // 0x1ae844: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1ae844u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1ae848: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1ae848u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1ae84c: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x1ae84cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x1ae850: 0xe4607d00  swc1        $f0, 0x7D00($v1)
    ctx->pc = 0x1ae850u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 32000), bits); }
    // 0x1ae854: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x1ae854u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ae858: 0x92230d87  lbu         $v1, 0xD87($s1)
    ctx->pc = 0x1ae858u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3463)));
    // 0x1ae85c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1ae85cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1ae860: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1ae860u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1ae864: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x1ae864u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x1ae868: 0xe4607d04  swc1        $f0, 0x7D04($v1)
    ctx->pc = 0x1ae868u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 32004), bits); }
    // 0x1ae86c: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x1ae86cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ae870: 0x92230d87  lbu         $v1, 0xD87($s1)
    ctx->pc = 0x1ae870u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3463)));
    // 0x1ae874: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1ae874u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1ae878: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1ae878u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1ae87c: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x1ae87cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x1ae880: 0xe4607d08  swc1        $f0, 0x7D08($v1)
    ctx->pc = 0x1ae880u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 32008), bits); }
    // 0x1ae884: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1ae884u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ae888: 0x92230d87  lbu         $v1, 0xD87($s1)
    ctx->pc = 0x1ae888u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3463)));
    // 0x1ae88c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1ae88cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1ae890: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1ae890u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1ae894: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x1ae894u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x1ae898: 0xe4607d0c  swc1        $f0, 0x7D0C($v1)
    ctx->pc = 0x1ae898u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 32012), bits); }
    // 0x1ae89c: 0x92230d87  lbu         $v1, 0xD87($s1)
    ctx->pc = 0x1ae89cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3463)));
    // 0x1ae8a0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1ae8a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1ae8a4: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1ae8a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1ae8a8: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x1ae8a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x1ae8ac: 0xc6410008  lwc1        $f1, 0x8($s2)
    ctx->pc = 0x1ae8acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ae8b0: 0xc4607d00  lwc1        $f0, 0x7D00($v1)
    ctx->pc = 0x1ae8b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ae8b4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1ae8b4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1ae8b8: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x1ae8b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ae8bc: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1ae8bcu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1ae8c0: 0x92230d87  lbu         $v1, 0xD87($s1)
    ctx->pc = 0x1ae8c0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3463)));
    // 0x1ae8c4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1ae8c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1ae8c8: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1ae8c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1ae8cc: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x1ae8ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x1ae8d0: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1ae8d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1ae8d4: 0x610821  addu        $at, $v1, $at
    ctx->pc = 0x1ae8d4u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 1)));
    // 0x1ae8d8: 0xe4208d00  swc1        $f0, -0x7300($at)
    ctx->pc = 0x1ae8d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294937856), bits); }
    // 0x1ae8dc: 0xc6400008  lwc1        $f0, 0x8($s2)
    ctx->pc = 0x1ae8dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ae8e0: 0x92230d87  lbu         $v1, 0xD87($s1)
    ctx->pc = 0x1ae8e0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3463)));
    // 0x1ae8e4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1ae8e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1ae8e8: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1ae8e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1ae8ec: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x1ae8ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x1ae8f0: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1ae8f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1ae8f4: 0x610821  addu        $at, $v1, $at
    ctx->pc = 0x1ae8f4u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 1)));
    // 0x1ae8f8: 0xe4208d04  swc1        $f0, -0x72FC($at)
    ctx->pc = 0x1ae8f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294937860), bits); }
    // 0x1ae8fc: 0x92230d87  lbu         $v1, 0xD87($s1)
    ctx->pc = 0x1ae8fcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3463)));
    // 0x1ae900: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1ae900u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1ae904: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1ae904u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1ae908: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x1ae908u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x1ae90c: 0xc6410008  lwc1        $f1, 0x8($s2)
    ctx->pc = 0x1ae90cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ae910: 0xc4607d08  lwc1        $f0, 0x7D08($v1)
    ctx->pc = 0x1ae910u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32008)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ae914: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1ae914u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1ae918: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x1ae918u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ae91c: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1ae91cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1ae920: 0x92230d87  lbu         $v1, 0xD87($s1)
    ctx->pc = 0x1ae920u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3463)));
    // 0x1ae924: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1ae924u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1ae928: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1ae928u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1ae92c: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x1ae92cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x1ae930: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1ae930u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1ae934: 0x610821  addu        $at, $v1, $at
    ctx->pc = 0x1ae934u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 1)));
    // 0x1ae938: 0xe4208d08  swc1        $f0, -0x72F8($at)
    ctx->pc = 0x1ae938u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294937864), bits); }
    // 0x1ae93c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1ae93cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ae940: 0x92230d87  lbu         $v1, 0xD87($s1)
    ctx->pc = 0x1ae940u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3463)));
    // 0x1ae944: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1ae944u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1ae948: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1ae948u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1ae94c: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x1ae94cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x1ae950: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1ae950u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1ae954: 0x610821  addu        $at, $v1, $at
    ctx->pc = 0x1ae954u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 1)));
    // 0x1ae958: 0xe4208d0c  swc1        $f0, -0x72F4($at)
    ctx->pc = 0x1ae958u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294937868), bits); }
    // 0x1ae95c: 0x7bbf0030  lq          $ra, 0x30($sp)
    ctx->pc = 0x1ae95cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ae960: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1ae960u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ae964: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1ae964u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ae968: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1ae968u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ae96c: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x1ae96cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1ae970: 0x3e00008  jr          $ra
    ctx->pc = 0x1AE970u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AE970u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AE978u;
}
