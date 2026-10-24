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

// Function: entry_0015bff0
// Address: 0x15bff0 - 0x15c0b0
void entry_0015bff0_0x15bff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015bff0_0x15bff0");
#endif

    switch (ctx->pc) {
        case 0x15c034u: goto label_15c034;
        case 0x15c098u: goto label_15c098;
        default: break;
    }

    ctx->pc = 0x15bff0u;

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
            return;
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
            return;
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
            return;
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
            return;
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
    ctx->pc = 0x15c0b0u;
}
