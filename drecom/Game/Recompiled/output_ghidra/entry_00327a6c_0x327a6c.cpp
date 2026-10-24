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

// Function: entry_00327a6c
// Address: 0x327a6c - 0x327b68
void entry_00327a6c_0x327a6c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00327a6c_0x327a6c");
#endif

    switch (ctx->pc) {
        case 0x327b04u: goto label_327b04;
        case 0x327b3cu: goto label_327b3c;
        case 0x327b60u: goto label_327b60;
        default: break;
    }

    ctx->pc = 0x327a6cu;

    // 0x327a6c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x327a6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x327a70: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x327a70u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x327a74: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x327a74u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x327a78: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x327a78u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x327a7c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x327a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x327a80: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x327a80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x327a84: 0x32a00  sll         $a1, $v1, 8
    ctx->pc = 0x327a84u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x327a88: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x327a88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x327a8c: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x327a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x327a90: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x327a90u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x327a94: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x327a94u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x327a98: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x327a98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x327a9c: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x327a9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x327aa0: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x327aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x327aa4: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x327aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x327aa8: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x327aa8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x327aac: 0xac237508  sw          $v1, 0x7508($at)
    ctx->pc = 0x327aacu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x327ab0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x327ab0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x327ab4: 0x30630007  andi        $v1, $v1, 0x7
    ctx->pc = 0x327ab4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x327ab8: 0x106000fe  beqz        $v1, . + 4 + (0xFE << 2)
    ctx->pc = 0x327AB8u;
    {
        const bool branch_taken_0x327ab8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x327ab8) {
            ctx->pc = 0x327EB4u;
            return;
        }
    }
    ctx->pc = 0x327AC0u;
    // 0x327ac0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x327ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x327ac4: 0x90420346  lbu         $v0, 0x346($v0)
    ctx->pc = 0x327ac4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 838)));
    // 0x327ac8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x327ac8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x327acc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x327accu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x327ad0: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x327ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x327ad4: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x327ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x327ad8: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x327ad8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x327adc: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x327adcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x327ae0: 0x90420346  lbu         $v0, 0x346($v0)
    ctx->pc = 0x327ae0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 838)));
    // 0x327ae4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x327ae4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x327ae8: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x327ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x327aec: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x327aecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x327af0: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x327af0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x327af4: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x327af4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x327af8: 0x240707c0  addiu       $a3, $zero, 0x7C0
    ctx->pc = 0x327af8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1984));
    // 0x327afc: 0xc059e1c  jal         func_167870
    ctx->pc = 0x327AFCu;
    SET_GPR_U32(ctx, 31, 0x327B04u);
    ctx->pc = 0x167870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167870u, 0x327AFCu, 0x327B04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x327B04u;
label_327b04:
    // 0x327b04: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x327b04u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x327b08: 0x122000ea  beqz        $s1, . + 4 + (0xEA << 2)
    ctx->pc = 0x327B08u;
    {
        const bool branch_taken_0x327b08 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x327b08) {
            ctx->pc = 0x327EB4u;
            return;
        }
    }
    ctx->pc = 0x327B10u;
    // 0x327b10: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x327b10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x327b14: 0x90420346  lbu         $v0, 0x346($v0)
    ctx->pc = 0x327b14u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 838)));
    // 0x327b18: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x327b18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x327b1c: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x327b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x327b20: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x327b20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x327b24: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x327b24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x327b28: 0x24046500  addiu       $a0, $zero, 0x6500
    ctx->pc = 0x327b28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 25856));
    // 0x327b2c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x327b2cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x327b30: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x327b30u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x327b34: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x327B34u;
    SET_GPR_U32(ctx, 31, 0x327B3Cu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x327B34u, 0x327B3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x327B3Cu;
label_327b3c:
    // 0x327b3c: 0x70409628  paddub      $s2, $v0, $zero
    ctx->pc = 0x327b3cu;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x327b40: 0xc6200024  lwc1        $f0, 0x24($s1)
    ctx->pc = 0x327b40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x327b44: 0xe6400040  swc1        $f0, 0x40($s2)
    ctx->pc = 0x327b44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 64), bits); }
    // 0x327b48: 0xc6200020  lwc1        $f0, 0x20($s1)
    ctx->pc = 0x327b48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x327b4c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x327b4cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x327b50: 0xe6400044  swc1        $f0, 0x44($s2)
    ctx->pc = 0x327b50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 68), bits); }
    // 0x327b54: 0x72402628  paddub      $a0, $s2, $zero
    ctx->pc = 0x327b54u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x327b58: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x327B58u;
    SET_GPR_U32(ctx, 31, 0x327B60u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x327B58u, 0x327B60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x327B60u;
label_327b60:
    // 0x327b60: 0x100000d4  b           . + 4 + (0xD4 << 2)
    ctx->pc = 0x327B60u;
    {
        const bool branch_taken_0x327b60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x327b60) {
            ctx->pc = 0x327EB4u;
            return;
        }
    }
    ctx->pc = 0x327B68u;
}
