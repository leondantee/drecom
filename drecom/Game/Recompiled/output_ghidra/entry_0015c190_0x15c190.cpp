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

// Function: entry_0015c190
// Address: 0x15c190 - 0x15c290
void entry_0015c190_0x15c190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015c190_0x15c190");
#endif

    switch (ctx->pc) {
        case 0x15c210u: goto label_15c210;
        case 0x15c274u: goto label_15c274;
        default: break;
    }

    ctx->pc = 0x15c190u;

    // 0x15c190: 0x101140  sll         $v0, $s0, 5
    ctx->pc = 0x15c190u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
    // 0x15c194: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x15c194u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x15c198: 0x90420014  lbu         $v0, 0x14($v0)
    ctx->pc = 0x15c198u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x15c19c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x15c19cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x15c1a0: 0x1440003b  bnez        $v0, . + 4 + (0x3B << 2)
    ctx->pc = 0x15C1A0u;
    {
        const bool branch_taken_0x15c1a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15c1a0) {
            ctx->pc = 0x15C290u;
            return;
        }
    }
    ctx->pc = 0x15C1A8u;
    // 0x15c1a8: 0x101140  sll         $v0, $s0, 5
    ctx->pc = 0x15c1a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
    // 0x15c1ac: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x15c1acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x15c1b0: 0x8c510010  lw          $s1, 0x10($v0)
    ctx->pc = 0x15c1b0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x15c1b4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x15c1b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15c1b8: 0x101140  sll         $v0, $s0, 5
    ctx->pc = 0x15c1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
    // 0x15c1bc: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x15c1bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x15c1c0: 0xa0430014  sb          $v1, 0x14($v0)
    ctx->pc = 0x15c1c0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 20), (uint8_t)GPR_U32(ctx, 3));
    // 0x15c1c4: 0xc6220124  lwc1        $f2, 0x124($s1)
    ctx->pc = 0x15c1c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x15c1c8: 0xc6610124  lwc1        $f1, 0x124($s3)
    ctx->pc = 0x15c1c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15c1cc: 0x3c024467  lui         $v0, 0x4467
    ctx->pc = 0x15c1ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17511 << 16));
    // 0x15c1d0: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x15c1d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x15c1d4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15c1d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15c1d8: 0x0  nop
    ctx->pc = 0x15c1d8u;
    // NOP
    // 0x15c1dc: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x15c1dcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x15c1e0: 0x3c02437a  lui         $v0, 0x437A
    ctx->pc = 0x15c1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17274 << 16));
    // 0x15c1e4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15c1e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15c1e8: 0x0  nop
    ctx->pc = 0x15c1e8u;
    // NOP
    // 0x15c1ec: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x15c1ecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x15c1f0: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x15c1f0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15c1f4: 0x0  nop
    ctx->pc = 0x15c1f4u;
    // NOP
    // 0x15c1f8: 0x45000025  bc1f        . + 4 + (0x25 << 2)
    ctx->pc = 0x15C1F8u;
    {
        const bool branch_taken_0x15c1f8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x15c1f8) {
            ctx->pc = 0x15C290u;
            return;
        }
    }
    ctx->pc = 0x15C200u;
    // 0x15c200: 0x101140  sll         $v0, $s0, 5
    ctx->pc = 0x15c200u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
    // 0x15c204: 0x2422021  addu        $a0, $s2, $v0
    ctx->pc = 0x15c204u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x15c208: 0xc067588  jal         func_19D620
    ctx->pc = 0x15C208u;
    SET_GPR_U32(ctx, 31, 0x15C210u);
    ctx->pc = 0x19D620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D620u, 0x15C208u, 0x15C210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C210u;
label_15c210:
    // 0x15c210: 0xe7a00098  swc1        $f0, 0x98($sp)
    ctx->pc = 0x15c210u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x15c214: 0xc62111e8  lwc1        $f1, 0x11E8($s1)
    ctx->pc = 0x15c214u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4584)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15c218: 0xc7a00098  lwc1        $f0, 0x98($sp)
    ctx->pc = 0x15c218u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15c21c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x15c21cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15c220: 0x0  nop
    ctx->pc = 0x15c220u;
    // NOP
    // 0x15c224: 0x4500001a  bc1f        . + 4 + (0x1A << 2)
    ctx->pc = 0x15C224u;
    {
        const bool branch_taken_0x15c224 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x15c224) {
            ctx->pc = 0x15C290u;
            return;
        }
    }
    ctx->pc = 0x15C22Cu;
    // 0x15c22c: 0xc7a10098  lwc1        $f1, 0x98($sp)
    ctx->pc = 0x15c22cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15c230: 0xc7a0009c  lwc1        $f0, 0x9C($sp)
    ctx->pc = 0x15c230u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15c234: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x15c234u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15c238: 0x0  nop
    ctx->pc = 0x15c238u;
    // NOP
    // 0x15c23c: 0x45000014  bc1f        . + 4 + (0x14 << 2)
    ctx->pc = 0x15C23Cu;
    {
        const bool branch_taken_0x15c23c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x15c23c) {
            ctx->pc = 0x15C290u;
            return;
        }
    }
    ctx->pc = 0x15C244u;
    // 0x15c244: 0x922210a9  lbu         $v0, 0x10A9($s1)
    ctx->pc = 0x15c244u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 4265)));
    // 0x15c248: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x15c248u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x15c24c: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x15c24cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x15c250: 0x8e220130  lw          $v0, 0x130($s1)
    ctx->pc = 0x15c250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 304)));
    // 0x15c254: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x15c254u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15c258: 0x8e620130  lw          $v0, 0x130($s3)
    ctx->pc = 0x15c258u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 304)));
    // 0x15c25c: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x15c25cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x15c260: 0x24650030  addiu       $a1, $v1, 0x30
    ctx->pc = 0x15c260u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x15c264: 0x24460170  addiu       $a2, $v0, 0x170
    ctx->pc = 0x15c264u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 368));
    // 0x15c268: 0x240707c0  addiu       $a3, $zero, 0x7C0
    ctx->pc = 0x15c268u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1984));
    // 0x15c26c: 0xc059e1c  jal         func_167870
    ctx->pc = 0x15C26Cu;
    SET_GPR_U32(ctx, 31, 0x15C274u);
    ctx->pc = 0x167870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167870u, 0x15C26Cu, 0x15C274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C274u;
label_15c274:
    // 0x15c274: 0x7040a628  paddub      $s4, $v0, $zero
    ctx->pc = 0x15c274u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x15c278: 0x16800005  bnez        $s4, . + 4 + (0x5 << 2)
    ctx->pc = 0x15C278u;
    {
        const bool branch_taken_0x15c278 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x15c278) {
            ctx->pc = 0x15C290u;
            return;
        }
    }
    ctx->pc = 0x15C280u;
    // 0x15c280: 0xc7a00098  lwc1        $f0, 0x98($sp)
    ctx->pc = 0x15c280u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15c284: 0xe7a0009c  swc1        $f0, 0x9C($sp)
    ctx->pc = 0x15c284u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
    // 0x15c288: 0x7200ae28  paddub      $s5, $s0, $zero
    ctx->pc = 0x15c288u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x15c28c: 0x0  nop
    ctx->pc = 0x15c28cu;
    // NOP
    ctx->pc = 0x15c290u;
}
