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

// Function: entry_0015be10
// Address: 0x15be10 - 0x15bec8
void entry_0015be10_0x15be10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015be10_0x15be10");
#endif

    switch (ctx->pc) {
        case 0x15be48u: goto label_15be48;
        case 0x15beacu: goto label_15beac;
        default: break;
    }

    ctx->pc = 0x15be10u;

    // 0x15be10: 0xc7a100b8  lwc1        $f1, 0xB8($sp)
    ctx->pc = 0x15be10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15be14: 0xc7a000bc  lwc1        $f0, 0xBC($sp)
    ctx->pc = 0x15be14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15be18: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x15be18u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15be1c: 0x0  nop
    ctx->pc = 0x15be1cu;
    // NOP
    // 0x15be20: 0x45000029  bc1f        . + 4 + (0x29 << 2)
    ctx->pc = 0x15BE20u;
    {
        const bool branch_taken_0x15be20 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x15be20) {
            ctx->pc = 0x15BEC8u;
            return;
        }
    }
    ctx->pc = 0x15BE28u;
    // 0x15be28: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x15be28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15be2c: 0x101140  sll         $v0, $s0, 5
    ctx->pc = 0x15be2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
    // 0x15be30: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x15be30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x15be34: 0xa0430014  sb          $v1, 0x14($v0)
    ctx->pc = 0x15be34u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 20), (uint8_t)GPR_U32(ctx, 3));
    // 0x15be38: 0x101140  sll         $v0, $s0, 5
    ctx->pc = 0x15be38u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
    // 0x15be3c: 0x2222021  addu        $a0, $s1, $v0
    ctx->pc = 0x15be3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x15be40: 0xc067588  jal         func_19D620
    ctx->pc = 0x15BE40u;
    SET_GPR_U32(ctx, 31, 0x15BE48u);
    ctx->pc = 0x19D620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D620u, 0x15BE40u, 0x15BE48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15BE48u;
label_15be48:
    // 0x15be48: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x15be48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x15be4c: 0xc64111e8  lwc1        $f1, 0x11E8($s2)
    ctx->pc = 0x15be4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4584)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15be50: 0xc7a000b0  lwc1        $f0, 0xB0($sp)
    ctx->pc = 0x15be50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15be54: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x15be54u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15be58: 0x0  nop
    ctx->pc = 0x15be58u;
    // NOP
    // 0x15be5c: 0x4500001a  bc1f        . + 4 + (0x1A << 2)
    ctx->pc = 0x15BE5Cu;
    {
        const bool branch_taken_0x15be5c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x15be5c) {
            ctx->pc = 0x15BEC8u;
            return;
        }
    }
    ctx->pc = 0x15BE64u;
    // 0x15be64: 0xc7a100b0  lwc1        $f1, 0xB0($sp)
    ctx->pc = 0x15be64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15be68: 0xc7a000b4  lwc1        $f0, 0xB4($sp)
    ctx->pc = 0x15be68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15be6c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x15be6cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15be70: 0x0  nop
    ctx->pc = 0x15be70u;
    // NOP
    // 0x15be74: 0x45000014  bc1f        . + 4 + (0x14 << 2)
    ctx->pc = 0x15BE74u;
    {
        const bool branch_taken_0x15be74 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x15be74) {
            ctx->pc = 0x15BEC8u;
            return;
        }
    }
    ctx->pc = 0x15BE7Cu;
    // 0x15be7c: 0x924210a9  lbu         $v0, 0x10A9($s2)
    ctx->pc = 0x15be7cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 4265)));
    // 0x15be80: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x15be80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x15be84: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x15be84u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x15be88: 0x8e420130  lw          $v0, 0x130($s2)
    ctx->pc = 0x15be88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 304)));
    // 0x15be8c: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x15be8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15be90: 0x8e620130  lw          $v0, 0x130($s3)
    ctx->pc = 0x15be90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 304)));
    // 0x15be94: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x15be94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x15be98: 0x24650030  addiu       $a1, $v1, 0x30
    ctx->pc = 0x15be98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x15be9c: 0x24460170  addiu       $a2, $v0, 0x170
    ctx->pc = 0x15be9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 368));
    // 0x15bea0: 0x240701c0  addiu       $a3, $zero, 0x1C0
    ctx->pc = 0x15bea0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
    // 0x15bea4: 0xc059e1c  jal         func_167870
    ctx->pc = 0x15BEA4u;
    SET_GPR_U32(ctx, 31, 0x15BEACu);
    ctx->pc = 0x167870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167870u, 0x15BEA4u, 0x15BEACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15BEACu;
label_15beac:
    // 0x15beac: 0x7040a628  paddub      $s4, $v0, $zero
    ctx->pc = 0x15beacu;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x15beb0: 0x16800005  bnez        $s4, . + 4 + (0x5 << 2)
    ctx->pc = 0x15BEB0u;
    {
        const bool branch_taken_0x15beb0 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x15beb0) {
            ctx->pc = 0x15BEC8u;
            return;
        }
    }
    ctx->pc = 0x15BEB8u;
    // 0x15beb8: 0xc7a000b0  lwc1        $f0, 0xB0($sp)
    ctx->pc = 0x15beb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15bebc: 0xe7a000b4  swc1        $f0, 0xB4($sp)
    ctx->pc = 0x15bebcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x15bec0: 0x7200ae28  paddub      $s5, $s0, $zero
    ctx->pc = 0x15bec0u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x15bec4: 0x0  nop
    ctx->pc = 0x15bec4u;
    // NOP
    ctx->pc = 0x15bec8u;
}
