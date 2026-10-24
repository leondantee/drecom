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

// Function: entry_002f7a30
// Address: 0x2f7a30 - 0x2f7b60
void entry_002f7a30_0x2f7a30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002f7a30_0x2f7a30");
#endif

    switch (ctx->pc) {
        case 0x2f7a94u: goto label_2f7a94;
        case 0x2f7af8u: goto label_2f7af8;
        default: break;
    }

    ctx->pc = 0x2f7a30u;

    // 0x2f7a30: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2f7a30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2f7a34: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2f7a34u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2f7a38: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x2f7a38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2f7a3c: 0x33080  sll         $a2, $v1, 2
    ctx->pc = 0x2f7a3cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2f7a40: 0xc32021  addu        $a0, $a2, $v1
    ctx->pc = 0x2f7a40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x2f7a44: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x2f7a44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x2f7a48: 0x32a00  sll         $a1, $v1, 8
    ctx->pc = 0x2f7a48u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x2f7a4c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2f7a4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2f7a50: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2f7a50u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2f7a54: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2f7a54u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2f7a58: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2f7a58u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2f7a5c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2f7a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2f7a60: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x2f7a60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x2f7a64: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x2f7a64u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x2f7a68: 0xa3a021  addu        $s4, $a1, $v1
    ctx->pc = 0x2f7a68u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2f7a6c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2f7a6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2f7a70: 0xac347508  sw          $s4, 0x7508($at)
    ctx->pc = 0x2f7a70u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 20)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2f7a74: 0x328400ff  andi        $a0, $s4, 0xFF
    ctx->pc = 0x2f7a74u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
    // 0x2f7a78: 0x24030016  addiu       $v1, $zero, 0x16
    ctx->pc = 0x2f7a78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x2f7a7c: 0x83001b  divu        $zero, $a0, $v1
    ctx->pc = 0x2f7a7cu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
    // 0x2f7a80: 0x0  nop
    ctx->pc = 0x2f7a80u;
    // NOP
    // 0x2f7a84: 0x0  nop
    ctx->pc = 0x2f7a84u;
    // NOP
    // 0x2f7a88: 0x8010  mfhi        $s0
    ctx->pc = 0x2f7a88u;
    SET_GPR_U64(ctx, 16, ctx->hi);
    // 0x2f7a8c: 0xc067648  jal         func_19D920
    ctx->pc = 0x2F7A8Cu;
    SET_GPR_U32(ctx, 31, 0x2F7A94u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2F7A8Cu, 0x2F7A94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F7A94u;
label_2f7a94:
    // 0x2f7a94: 0x3c0440a0  lui         $a0, 0x40A0
    ctx->pc = 0x2f7a94u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16544 << 16));
    // 0x2f7a98: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x2f7a98u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f7a9c: 0x0  nop
    ctx->pc = 0x2f7a9cu;
    // NOP
    // 0x2f7aa0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2f7aa0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f7aa4: 0x3c034234  lui         $v1, 0x4234
    ctx->pc = 0x2f7aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16948 << 16));
    // 0x2f7aa8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2f7aa8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f7aac: 0x0  nop
    ctx->pc = 0x2f7aacu;
    // NOP
    // 0x2f7ab0: 0x46010340  add.s       $f13, $f0, $f1
    ctx->pc = 0x2f7ab0u;
    ctx->f[13] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2f7ab4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2f7ab4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2f7ab8: 0x8fa400f8  lw          $a0, 0xF8($sp)
    ctx->pc = 0x2f7ab8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x2f7abc: 0x8fa700f8  lw          $a3, 0xF8($sp)
    ctx->pc = 0x2f7abcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x2f7ac0: 0x3c0341f0  lui         $v1, 0x41F0
    ctx->pc = 0x2f7ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16880 << 16));
    // 0x2f7ac4: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x2f7ac4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2f7ac8: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x2f7ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x2f7acc: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x2f7accu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2f7ad0: 0x8c8400c4  lw          $a0, 0xC4($a0)
    ctx->pc = 0x2f7ad0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 196)));
    // 0x2f7ad4: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x2f7ad4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x2f7ad8: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x2f7ad8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2f7adc: 0x8ce700c4  lw          $a3, 0xC4($a3)
    ctx->pc = 0x2f7adcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 196)));
    // 0x2f7ae0: 0x24080015  addiu       $t0, $zero, 0x15
    ctx->pc = 0x2f7ae0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x2f7ae4: 0x27a900c0  addiu       $t1, $sp, 0xC0
    ctx->pc = 0x2f7ae4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2f7ae8: 0x27aa00c0  addiu       $t2, $sp, 0xC0
    ctx->pc = 0x2f7ae8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2f7aec: 0x70005e28  paddub      $t3, $zero, $zero
    ctx->pc = 0x2f7aecu;
    SET_GPR_VEC(ctx, 11, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2f7af0: 0xc0c8cc0  jal         func_323300
    ctx->pc = 0x2F7AF0u;
    SET_GPR_U32(ctx, 31, 0x2F7AF8u);
    ctx->pc = 0x323300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323300u, 0x2F7AF0u, 0x2F7AF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F7AF8u;
label_2f7af8:
    // 0x2f7af8: 0x70405628  paddub      $t2, $v0, $zero
    ctx->pc = 0x2f7af8u;
    SET_GPR_VEC(ctx, 10, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2f7afc: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2f7afcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2f7b00: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2f7b00u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2f7b04: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x2f7b04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2f7b08: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x2f7b08u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2f7b0c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x2f7b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2f7b10: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2f7b10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2f7b14: 0x33200  sll         $a2, $v1, 8
    ctx->pc = 0x2f7b14u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x2f7b18: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2f7b18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2f7b1c: 0x8c287508  lw          $t0, 0x7508($at)
    ctx->pc = 0x2f7b1cu;
    SET_GPR_S32(ctx, 8, (int32_t)FAST_READ32(0x387508u));
    // 0x2f7b20: 0x3107ffff  andi        $a3, $t0, 0xFFFF
    ctx->pc = 0x2f7b20u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
    // 0x2f7b24: 0x72080  sll         $a0, $a3, 2
    ctx->pc = 0x2f7b24u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x2f7b28: 0x871821  addu        $v1, $a0, $a3
    ctx->pc = 0x2f7b28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x2f7b2c: 0x3064ff00  andi        $a0, $v1, 0xFF00
    ctx->pc = 0x2f7b2cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x2f7b30: 0x42a02  srl         $a1, $a0, 8
    ctx->pc = 0x2f7b30u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 4), 8));
    // 0x2f7b34: 0xc53021  addu        $a2, $a2, $a1
    ctx->pc = 0x2f7b34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x2f7b38: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2f7b38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2f7b3c: 0xac267508  sw          $a2, 0x7508($at)
    ctx->pc = 0x2f7b3cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2f7b40: 0x30c700ff  andi        $a3, $a2, 0xFF
    ctx->pc = 0x2f7b40u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x2f7b44: 0x30e80003  andi        $t0, $a3, 0x3
    ctx->pc = 0x2f7b44u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)3);
    // 0x2f7b48: 0x11000005  beqz        $t0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F7B48u;
    {
        const bool branch_taken_0x2f7b48 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f7b48) {
            ctx->pc = 0x2F7B60u;
            return;
        }
    }
    ctx->pc = 0x2F7B50u;
    // 0x2f7b50: 0x24090004  addiu       $t1, $zero, 0x4
    ctx->pc = 0x2f7b50u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2f7b54: 0x7120f628  paddub      $fp, $t1, $zero
    ctx->pc = 0x2f7b54u;
    SET_GPR_VEC(ctx, 30, _mm_adds_epu8(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
    // 0x2f7b58: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2F7B58u;
    {
        const bool branch_taken_0x2f7b58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f7b58) {
            ctx->pc = 0x2F7B68u;
            return;
        }
    }
    ctx->pc = 0x2F7B60u;
}
