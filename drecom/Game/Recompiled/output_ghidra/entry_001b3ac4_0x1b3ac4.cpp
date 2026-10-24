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

// Function: entry_001b3ac4
// Address: 0x1b3ac4 - 0x1b3b78
void entry_001b3ac4_0x1b3ac4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b3ac4_0x1b3ac4");
#endif

    switch (ctx->pc) {
        case 0x1b3b40u: goto label_1b3b40;
        case 0x1b3b4cu: goto label_1b3b4c;
        default: break;
    }

    ctx->pc = 0x1b3ac4u;

    // 0x1b3ac4: 0x161880  sll         $v1, $s6, 2
    ctx->pc = 0x1b3ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 22), 2));
    // 0x1b3ac8: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x1b3ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x1b3acc: 0x2442bb40  addiu       $v0, $v0, -0x44C0
    ctx->pc = 0x1b3accu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949696));
    // 0x1b3ad0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1b3ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b3ad4: 0x8c520008  lw          $s2, 0x8($v0)
    ctx->pc = 0x1b3ad4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1b3ad8: 0x864210a6  lh          $v0, 0x10A6($s2)
    ctx->pc = 0x1b3ad8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 4262)));
    // 0x1b3adc: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1b3adcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1b3ae0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1b3ae0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1b3ae4: 0x4400024  bltz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x1B3AE4u;
    {
        const bool branch_taken_0x1b3ae4 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1b3ae4) {
            ctx->pc = 0x1B3B78u;
            return;
        }
    }
    ctx->pc = 0x1B3AECu;
    // 0x1b3aec: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x1b3aecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1b3af0: 0x12420021  beq         $s2, $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x1B3AF0u;
    {
        const bool branch_taken_0x1b3af0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x1b3af0) {
            ctx->pc = 0x1B3B78u;
            return;
        }
    }
    ctx->pc = 0x1B3AF8u;
    // 0x1b3af8: 0x92420012  lbu         $v0, 0x12($s2)
    ctx->pc = 0x1b3af8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 18)));
    // 0x1b3afc: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1b3afcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1b3b00: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x1b3b00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1b3b04: 0x90420012  lbu         $v0, 0x12($v0)
    ctx->pc = 0x1b3b04u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 18)));
    // 0x1b3b08: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1b3b08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1b3b0c: 0x1062001a  beq         $v1, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x1B3B0Cu;
    {
        const bool branch_taken_0x1b3b0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1b3b0c) {
            ctx->pc = 0x1B3B78u;
            return;
        }
    }
    ctx->pc = 0x1B3B14u;
    // 0x1b3b14: 0x924210a8  lbu         $v0, 0x10A8($s2)
    ctx->pc = 0x1b3b14u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 4264)));
    // 0x1b3b18: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1B3B18u;
    {
        const bool branch_taken_0x1b3b18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b3b18) {
            ctx->pc = 0x1B3B78u;
            return;
        }
    }
    ctx->pc = 0x1B3B20u;
    // 0x1b3b20: 0x8e430130  lw          $v1, 0x130($s2)
    ctx->pc = 0x1b3b20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 304)));
    // 0x1b3b24: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x1b3b24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1b3b28: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1b3b28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b3b2c: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1b3b2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1b3b30: 0x24650030  addiu       $a1, $v1, 0x30
    ctx->pc = 0x1b3b30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x1b3b34: 0x244600c0  addiu       $a2, $v0, 0xC0
    ctx->pc = 0x1b3b34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x1b3b38: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x1B3B38u;
    SET_GPR_U32(ctx, 31, 0x1B3B40u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x1B3B38u, 0x1B3B40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3B40u;
label_1b3b40:
    // 0x1b3b40: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1b3b40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1b3b44: 0xc067588  jal         func_19D620
    ctx->pc = 0x1B3B44u;
    SET_GPR_U32(ctx, 31, 0x1B3B4Cu);
    ctx->pc = 0x19D620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D620u, 0x1B3B44u, 0x1B3B4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3B4Cu;
label_1b3b4c:
    // 0x1b3b4c: 0xe7a000dc  swc1        $f0, 0xDC($sp)
    ctx->pc = 0x1b3b4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
    // 0x1b3b50: 0xc7a100dc  lwc1        $f1, 0xDC($sp)
    ctx->pc = 0x1b3b50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b3b54: 0xc7a000e0  lwc1        $f0, 0xE0($sp)
    ctx->pc = 0x1b3b54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b3b58: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1b3b58u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b3b5c: 0x0  nop
    ctx->pc = 0x1b3b5cu;
    // NOP
    // 0x1b3b60: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x1B3B60u;
    {
        const bool branch_taken_0x1b3b60 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b3b60) {
            ctx->pc = 0x1B3B78u;
            return;
        }
    }
    ctx->pc = 0x1B3B68u;
    // 0x1b3b68: 0xc7a000dc  lwc1        $f0, 0xDC($sp)
    ctx->pc = 0x1b3b68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b3b6c: 0xe7a000e0  swc1        $f0, 0xE0($sp)
    ctx->pc = 0x1b3b6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x1b3b70: 0x72408628  paddub      $s0, $s2, $zero
    ctx->pc = 0x1b3b70u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x1b3b74: 0x0  nop
    ctx->pc = 0x1b3b74u;
    // NOP
    ctx->pc = 0x1b3b78u;
}
