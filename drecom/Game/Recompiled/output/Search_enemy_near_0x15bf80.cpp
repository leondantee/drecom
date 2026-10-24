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

// Function: Search_enemy_near
// Address: 0x15bf80 - 0x15c11c
void Search_enemy_near_0x15bf80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Search_enemy_near_0x15bf80");
#endif

    switch (ctx->pc) {
        case 0x15bfc8u: goto label_15bfc8;
        case 0x15bff0u: goto label_15bff0;
        case 0x15c034u: goto label_15c034;
        case 0x15c098u: goto label_15c098;
        default: break;
    }

    ctx->pc = 0x15bf80u;

    // 0x15bf80: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x15bf80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x15bf84: 0x7fbf0070  sq          $ra, 0x70($sp)
    ctx->pc = 0x15bf84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 31));
    // 0x15bf88: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x15bf88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x15bf8c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x15bf8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x15bf90: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x15bf90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x15bf94: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x15bf94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x15bf98: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x15bf98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x15bf9c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x15bf9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x15bfa0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15bfa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x15bfa4: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x15bfa4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x15bfa8: 0x2453dbc0  addiu       $s3, $v0, -0x2440
    ctx->pc = 0x15bfa8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
    // 0x15bfac: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x15bfacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x15bfb0: 0x24514f50  addiu       $s1, $v0, 0x4F50
    ctx->pc = 0x15bfb0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 20304));
    // 0x15bfb4: 0x8e620130  lw          $v0, 0x130($s3)
    ctx->pc = 0x15bfb4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3EDCF0u));
    // 0x15bfb8: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x15bfb8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x15bfbc: 0x24450170  addiu       $a1, $v0, 0x170
    ctx->pc = 0x15bfbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 368));
    // 0x15bfc0: 0xc056cf4  jal         func_15B3D0
    ctx->pc = 0x15BFC0u;
    SET_GPR_U32(ctx, 31, 0x15BFC8u);
    ctx->pc = 0x15B3D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15B3D0u, 0x15BFC0u, 0x15BFC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15BFC8u;
label_15bfc8:
    // 0x15bfc8: 0x7040b628  paddub      $s6, $v0, $zero
    ctx->pc = 0x15bfc8u;
    SET_GPR_VEC(ctx, 22, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x15bfcc: 0x3c024cbe  lui         $v0, 0x4CBE
    ctx->pc = 0x15bfccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19646 << 16));
    // 0x15bfd0: 0x3442bc20  ori         $v0, $v0, 0xBC20
    ctx->pc = 0x15bfd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)48160);
    // 0x15bfd4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15bfd4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15bfd8: 0x0  nop
    ctx->pc = 0x15bfd8u;
    // NOP
    // 0x15bfdc: 0xe7a0009c  swc1        $f0, 0x9C($sp)
    ctx->pc = 0x15bfdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
    // 0x15bfe0: 0x2415ffff  addiu       $s5, $zero, -0x1
    ctx->pc = 0x15bfe0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x15bfe4: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x15bfe4u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x15bfe8: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x15BFE8u;
    {
        const bool branch_taken_0x15bfe8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15bfe8) {
            ctx->pc = 0x15C0B8u;
            goto label_15c0b8;
        }
    }
    ctx->pc = 0x15BFF0u;
label_15bff0:
    // 0x15bff0: 0x101140  sll         $v0, $s0, 5
    ctx->pc = 0x15bff0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
    // 0x15bff4: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x15bff4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x15bff8: 0x90420014  lbu         $v0, 0x14($v0)
    ctx->pc = 0x15bff8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x15bffc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x15bffcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x15c000: 0x1440002b  bnez        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x15C000u;
    {
        const bool branch_taken_0x15c000 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15c000) {
            ctx->pc = 0x15C0B0u;
            goto label_15c0b0;
        }
    }
    ctx->pc = 0x15C008u;
    // 0x15c008: 0x101140  sll         $v0, $s0, 5
    ctx->pc = 0x15c008u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
    // 0x15c00c: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x15c00cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x15c010: 0x8c520010  lw          $s2, 0x10($v0)
    ctx->pc = 0x15c010u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x15c014: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x15c014u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15c018: 0x101140  sll         $v0, $s0, 5
    ctx->pc = 0x15c018u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
    // 0x15c01c: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x15c01cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x15c020: 0xa0430014  sb          $v1, 0x14($v0)
    ctx->pc = 0x15c020u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 20), (uint8_t)GPR_U32(ctx, 3));
    // 0x15c024: 0x101140  sll         $v0, $s0, 5
    ctx->pc = 0x15c024u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
    // 0x15c028: 0x2222021  addu        $a0, $s1, $v0
    ctx->pc = 0x15c028u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x15c02c: 0xc067588  jal         func_19D620
    ctx->pc = 0x15C02Cu;
    SET_GPR_U32(ctx, 31, 0x15C034u);
    ctx->pc = 0x19D620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D620u, 0x15C02Cu, 0x15C034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C034u;
label_15c034:
    // 0x15c034: 0xe7a00098  swc1        $f0, 0x98($sp)
    ctx->pc = 0x15c034u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x15c038: 0xc64111e8  lwc1        $f1, 0x11E8($s2)
    ctx->pc = 0x15c038u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4584)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15c03c: 0xc7a00098  lwc1        $f0, 0x98($sp)
    ctx->pc = 0x15c03cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15c040: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x15c040u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15c044: 0x0  nop
    ctx->pc = 0x15c044u;
    // NOP
    // 0x15c048: 0x45000019  bc1f        . + 4 + (0x19 << 2)
    ctx->pc = 0x15C048u;
    {
        const bool branch_taken_0x15c048 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x15c048) {
            ctx->pc = 0x15C0B0u;
            goto label_15c0b0;
        }
    }
    ctx->pc = 0x15C050u;
    // 0x15c050: 0xc7a10098  lwc1        $f1, 0x98($sp)
    ctx->pc = 0x15c050u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15c054: 0xc7a0009c  lwc1        $f0, 0x9C($sp)
    ctx->pc = 0x15c054u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15c058: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x15c058u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15c05c: 0x0  nop
    ctx->pc = 0x15c05cu;
    // NOP
    // 0x15c060: 0x45000013  bc1f        . + 4 + (0x13 << 2)
    ctx->pc = 0x15C060u;
    {
        const bool branch_taken_0x15c060 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x15c060) {
            ctx->pc = 0x15C0B0u;
            goto label_15c0b0;
        }
    }
    ctx->pc = 0x15C068u;
    // 0x15c068: 0x924210a9  lbu         $v0, 0x10A9($s2)
    ctx->pc = 0x15c068u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 4265)));
    // 0x15c06c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x15c06cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x15c070: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x15c070u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x15c074: 0x8e420130  lw          $v0, 0x130($s2)
    ctx->pc = 0x15c074u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 304)));
    // 0x15c078: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x15c078u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15c07c: 0x8e620130  lw          $v0, 0x130($s3)
    ctx->pc = 0x15c07cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 304)));
    // 0x15c080: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x15c080u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x15c084: 0x24650030  addiu       $a1, $v1, 0x30
    ctx->pc = 0x15c084u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x15c088: 0x24460170  addiu       $a2, $v0, 0x170
    ctx->pc = 0x15c088u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 368));
    // 0x15c08c: 0x240707c0  addiu       $a3, $zero, 0x7C0
    ctx->pc = 0x15c08cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1984));
    // 0x15c090: 0xc059e1c  jal         func_167870
    ctx->pc = 0x15C090u;
    SET_GPR_U32(ctx, 31, 0x15C098u);
    ctx->pc = 0x167870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167870u, 0x15C090u, 0x15C098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C098u;
label_15c098:
    // 0x15c098: 0x7040a628  paddub      $s4, $v0, $zero
    ctx->pc = 0x15c098u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x15c09c: 0x16800004  bnez        $s4, . + 4 + (0x4 << 2)
    ctx->pc = 0x15C09Cu;
    {
        const bool branch_taken_0x15c09c = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x15c09c) {
            ctx->pc = 0x15C0B0u;
            goto label_15c0b0;
        }
    }
    ctx->pc = 0x15C0A4u;
    // 0x15c0a4: 0xc7a00098  lwc1        $f0, 0x98($sp)
    ctx->pc = 0x15c0a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15c0a8: 0xe7a0009c  swc1        $f0, 0x9C($sp)
    ctx->pc = 0x15c0a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
    // 0x15c0ac: 0x7200ae28  paddub      $s5, $s0, $zero
    ctx->pc = 0x15c0acu;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_15c0b0:
    // 0x15c0b0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x15c0b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x15c0b4: 0x0  nop
    ctx->pc = 0x15c0b4u;
    // NOP
label_15c0b8:
    // 0x15c0b8: 0x216102b  sltu        $v0, $s0, $s6
    ctx->pc = 0x15c0b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
    // 0x15c0bc: 0x1440ffcc  bnez        $v0, . + 4 + (-0x34 << 2)
    ctx->pc = 0x15C0BCu;
    {
        const bool branch_taken_0x15c0bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15c0bc) {
            ctx->pc = 0x15BFF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15bff0;
        }
    }
    ctx->pc = 0x15C0C4u;
    // 0x15c0c4: 0x6a00008  bltz        $s5, . + 4 + (0x8 << 2)
    ctx->pc = 0x15C0C4u;
    {
        const bool branch_taken_0x15c0c4 = (GPR_S32(ctx, 21) < 0);
        if (branch_taken_0x15c0c4) {
            ctx->pc = 0x15C0E8u;
            goto label_15c0e8;
        }
    }
    ctx->pc = 0x15C0CCu;
    // 0x15c0cc: 0x151140  sll         $v0, $s5, 5
    ctx->pc = 0x15c0ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 5));
    // 0x15c0d0: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x15c0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x15c0d4: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x15c0d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x15c0d8: 0xae6213ec  sw          $v0, 0x13EC($s3)
    ctx->pc = 0x15c0d8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 5100), GPR_U32(ctx, 2));
    // 0x15c0dc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15c0dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15c0e0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x15C0E0u;
    {
        const bool branch_taken_0x15c0e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15c0e0) {
            ctx->pc = 0x15C0F0u;
            goto label_15c0f0;
        }
    }
    ctx->pc = 0x15C0E8u;
label_15c0e8:
    // 0x15c0e8: 0xae6013ec  sw          $zero, 0x13EC($s3)
    ctx->pc = 0x15c0e8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 5100), GPR_U32(ctx, 0));
    // 0x15c0ec: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x15c0ecu;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_15c0f0:
    // 0x15c0f0: 0x7bbf0070  lq          $ra, 0x70($sp)
    ctx->pc = 0x15c0f0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x15c0f4: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x15c0f4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x15c0f8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x15c0f8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x15c0fc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x15c0fcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x15c100: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x15c100u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x15c104: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x15c104u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15c108: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x15c108u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15c10c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15c10cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15c110: 0x27bd00a0  addiu       $sp, $sp, 0xA0
    ctx->pc = 0x15c110u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x15c114: 0x3e00008  jr          $ra
    ctx->pc = 0x15C114u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15C114u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15C11Cu;
}
