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

// Function: entry_0036bc18
// Address: 0x36bc18 - 0x36bd08
void entry_0036bc18_0x36bc18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0036bc18_0x36bc18");
#endif

    switch (ctx->pc) {
        case 0x36bc28u: goto label_36bc28;
        case 0x36bc7cu: goto label_36bc7c;
        case 0x36bcecu: goto label_36bcec;
        default: break;
    }

    ctx->pc = 0x36bc18u;

    // 0x36bc18: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x36bc18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x36bc1c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x36bc1cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x36bc20: 0xc0db498  jal         func_36D260
    ctx->pc = 0x36BC20u;
    SET_GPR_U32(ctx, 31, 0x36BC28u);
    ctx->pc = 0x36D260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36D260u, 0x36BC20u, 0x36BC28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36BC28u;
label_36bc28:
    // 0x36bc28: 0x70409628  paddub      $s2, $v0, $zero
    ctx->pc = 0x36bc28u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x36bc2c: 0x6400036  bltz        $s2, . + 4 + (0x36 << 2)
    ctx->pc = 0x36BC2Cu;
    {
        const bool branch_taken_0x36bc2c = (GPR_S32(ctx, 18) < 0);
        if (branch_taken_0x36bc2c) {
            ctx->pc = 0x36BD08u;
            return;
        }
    }
    ctx->pc = 0x36BC34u;
    // 0x36bc34: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x36bc34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x36bc38: 0x24441330  addiu       $a0, $v0, 0x1330
    ctx->pc = 0x36bc38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x36bc3c: 0x121040  sll         $v0, $s2, 1
    ctx->pc = 0x36bc3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x36bc40: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x36bc40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x36bc44: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x36bc44u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x36bc48: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x36bc48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x36bc4c: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x36bc4cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x36bc50: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x36bc50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36bc54: 0xae020040  sw          $v0, 0x40($s0)
    ctx->pc = 0x36bc54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 2));
    // 0x36bc58: 0x3c0245fa  lui         $v0, 0x45FA
    ctx->pc = 0x36bc58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17914 << 16));
    // 0x36bc5c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x36bc5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x36bc60: 0x0  nop
    ctx->pc = 0x36bc60u;
    // NOP
    // 0x36bc64: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x36bc64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x36bc68: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x36bc68u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x36bc6c: 0x0  nop
    ctx->pc = 0x36bc6cu;
    // NOP
    // 0x36bc70: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x36bc70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x36bc74: 0xc06765c  jal         func_19D970
    ctx->pc = 0x36BC74u;
    SET_GPR_U32(ctx, 31, 0x36BC7Cu);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x36BC74u, 0x36BC7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36BC7Cu;
label_36bc7c:
    // 0x36bc7c: 0x3c02461c  lui         $v0, 0x461C
    ctx->pc = 0x36bc7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17948 << 16));
    // 0x36bc80: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x36bc80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x36bc84: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x36bc84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x36bc88: 0x0  nop
    ctx->pc = 0x36bc88u;
    // NOP
    // 0x36bc8c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x36bc8cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x36bc90: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x36bc90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x36bc94: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x36bc94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x36bc98: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x36bc98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x36bc9c: 0x0  nop
    ctx->pc = 0x36bc9cu;
    // NOP
    // 0x36bca0: 0xe600000c  swc1        $f0, 0xC($s0)
    ctx->pc = 0x36bca0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x36bca4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x36bca4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x36bca8: 0x0  nop
    ctx->pc = 0x36bca8u;
    // NOP
    // 0x36bcac: 0xe6000028  swc1        $f0, 0x28($s0)
    ctx->pc = 0x36bcacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
    // 0x36bcb0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x36bcb0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x36bcb4: 0x0  nop
    ctx->pc = 0x36bcb4u;
    // NOP
    // 0x36bcb8: 0xe6000014  swc1        $f0, 0x14($s0)
    ctx->pc = 0x36bcb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x36bcbc: 0x2402012c  addiu       $v0, $zero, 0x12C
    ctx->pc = 0x36bcbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
    // 0x36bcc0: 0xae020048  sw          $v0, 0x48($s0)
    ctx->pc = 0x36bcc0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 2));
    // 0x36bcc4: 0xae14004c  sw          $s4, 0x4C($s0)
    ctx->pc = 0x36bcc4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 20));
    // 0x36bcc8: 0x24020032  addiu       $v0, $zero, 0x32
    ctx->pc = 0x36bcc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x36bccc: 0xae020050  sw          $v0, 0x50($s0)
    ctx->pc = 0x36bcccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 2));
    // 0x36bcd0: 0x2404001f  addiu       $a0, $zero, 0x1F
    ctx->pc = 0x36bcd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x36bcd4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x36bcd4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x36bcd8: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x36bcd8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x36bcdc: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x36bcdcu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x36bce0: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x36bce0u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x36bce4: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x36BCE4u;
    SET_GPR_U32(ctx, 31, 0x36BCECu);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x36BCE4u, 0x36BCECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36BCECu;
label_36bcec:
    // 0x36bcec: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x36bcecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
    // 0x36bcf0: 0x8e030054  lw          $v1, 0x54($s0)
    ctx->pc = 0x36bcf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x36bcf4: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x36bcf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x36bcf8: 0x34420011  ori         $v0, $v0, 0x11
    ctx->pc = 0x36bcf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)17);
    // 0x36bcfc: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x36BCFCu;
    {
        const bool branch_taken_0x36bcfc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x36bcfc) {
            ctx->pc = 0x36BD08u;
            return;
        }
    }
    ctx->pc = 0x36BD04u;
    // 0x36bd04: 0xae000040  sw          $zero, 0x40($s0)
    ctx->pc = 0x36bd04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 0));
    ctx->pc = 0x36bd08u;
}
