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

// Function: Search_enemy_near2
// Address: 0x15c120 - 0x15c2fc
void Search_enemy_near2_0x15c120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Search_enemy_near2_0x15c120");
#endif

    switch (ctx->pc) {
        case 0x15c168u: goto label_15c168;
        case 0x15c190u: goto label_15c190;
        case 0x15c210u: goto label_15c210;
        case 0x15c274u: goto label_15c274;
        default: break;
    }

    ctx->pc = 0x15c120u;

    // 0x15c120: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x15c120u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x15c124: 0x7fbf0070  sq          $ra, 0x70($sp)
    ctx->pc = 0x15c124u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 31));
    // 0x15c128: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x15c128u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x15c12c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x15c12cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x15c130: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x15c130u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x15c134: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x15c134u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x15c138: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x15c138u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x15c13c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x15c13cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x15c140: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15c140u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x15c144: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x15c144u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x15c148: 0x2453dbc0  addiu       $s3, $v0, -0x2440
    ctx->pc = 0x15c148u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
    // 0x15c14c: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x15c14cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x15c150: 0x24524f50  addiu       $s2, $v0, 0x4F50
    ctx->pc = 0x15c150u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 20304));
    // 0x15c154: 0x8e620130  lw          $v0, 0x130($s3)
    ctx->pc = 0x15c154u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3EDCF0u));
    // 0x15c158: 0x72402628  paddub      $a0, $s2, $zero
    ctx->pc = 0x15c158u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x15c15c: 0x24450170  addiu       $a1, $v0, 0x170
    ctx->pc = 0x15c15cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 368));
    // 0x15c160: 0xc056cf4  jal         func_15B3D0
    ctx->pc = 0x15C160u;
    SET_GPR_U32(ctx, 31, 0x15C168u);
    ctx->pc = 0x15B3D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15B3D0u, 0x15C160u, 0x15C168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C168u;
label_15c168:
    // 0x15c168: 0x7040b628  paddub      $s6, $v0, $zero
    ctx->pc = 0x15c168u;
    SET_GPR_VEC(ctx, 22, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x15c16c: 0x3c024cbe  lui         $v0, 0x4CBE
    ctx->pc = 0x15c16cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19646 << 16));
    // 0x15c170: 0x3442bc20  ori         $v0, $v0, 0xBC20
    ctx->pc = 0x15c170u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)48160);
    // 0x15c174: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15c174u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15c178: 0x0  nop
    ctx->pc = 0x15c178u;
    // NOP
    // 0x15c17c: 0xe7a0009c  swc1        $f0, 0x9C($sp)
    ctx->pc = 0x15c17cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
    // 0x15c180: 0x2415ffff  addiu       $s5, $zero, -0x1
    ctx->pc = 0x15c180u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x15c184: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x15c184u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x15c188: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x15C188u;
    {
        const bool branch_taken_0x15c188 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15c188) {
            ctx->pc = 0x15C298u;
            goto label_15c298;
        }
    }
    ctx->pc = 0x15C190u;
label_15c190:
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
            goto label_15c290;
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
            goto label_15c290;
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
            goto label_15c290;
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
            goto label_15c290;
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
            goto label_15c290;
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
label_15c290:
    // 0x15c290: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x15c290u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x15c294: 0x0  nop
    ctx->pc = 0x15c294u;
    // NOP
label_15c298:
    // 0x15c298: 0x216102b  sltu        $v0, $s0, $s6
    ctx->pc = 0x15c298u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
    // 0x15c29c: 0x1440ffbc  bnez        $v0, . + 4 + (-0x44 << 2)
    ctx->pc = 0x15C29Cu;
    {
        const bool branch_taken_0x15c29c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15c29c) {
            ctx->pc = 0x15C190u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15c190;
        }
    }
    ctx->pc = 0x15C2A4u;
    // 0x15c2a4: 0x6a00008  bltz        $s5, . + 4 + (0x8 << 2)
    ctx->pc = 0x15C2A4u;
    {
        const bool branch_taken_0x15c2a4 = (GPR_S32(ctx, 21) < 0);
        if (branch_taken_0x15c2a4) {
            ctx->pc = 0x15C2C8u;
            goto label_15c2c8;
        }
    }
    ctx->pc = 0x15C2ACu;
    // 0x15c2ac: 0x151140  sll         $v0, $s5, 5
    ctx->pc = 0x15c2acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 5));
    // 0x15c2b0: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x15c2b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x15c2b4: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x15c2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x15c2b8: 0xae6213ec  sw          $v0, 0x13EC($s3)
    ctx->pc = 0x15c2b8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 5100), GPR_U32(ctx, 2));
    // 0x15c2bc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15c2bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15c2c0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x15C2C0u;
    {
        const bool branch_taken_0x15c2c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15c2c0) {
            ctx->pc = 0x15C2D0u;
            goto label_15c2d0;
        }
    }
    ctx->pc = 0x15C2C8u;
label_15c2c8:
    // 0x15c2c8: 0xae6013ec  sw          $zero, 0x13EC($s3)
    ctx->pc = 0x15c2c8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 5100), GPR_U32(ctx, 0));
    // 0x15c2cc: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x15c2ccu;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_15c2d0:
    // 0x15c2d0: 0x7bbf0070  lq          $ra, 0x70($sp)
    ctx->pc = 0x15c2d0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x15c2d4: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x15c2d4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x15c2d8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x15c2d8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x15c2dc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x15c2dcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x15c2e0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x15c2e0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x15c2e4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x15c2e4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15c2e8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x15c2e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15c2ec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15c2ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15c2f0: 0x27bd00a0  addiu       $sp, $sp, 0xA0
    ctx->pc = 0x15c2f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x15c2f4: 0x3e00008  jr          $ra
    ctx->pc = 0x15C2F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15C2F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15C2FCu;
}
