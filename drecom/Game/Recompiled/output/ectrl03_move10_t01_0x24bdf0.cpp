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

// Function: ectrl03_move10_t01
// Address: 0x24bdf0 - 0x24c0d8
void ectrl03_move10_t01_0x24bdf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ectrl03_move10_t01_0x24bdf0");
#endif

    switch (ctx->pc) {
        case 0x24be60u: goto label_24be60;
        case 0x24be6cu: goto label_24be6c;
        case 0x24bfe4u: goto label_24bfe4;
        case 0x24bff0u: goto label_24bff0;
        case 0x24c08cu: goto label_24c08c;
        case 0x24c098u: goto label_24c098;
        default: break;
    }

    ctx->pc = 0x24bdf0u;

    // 0x24bdf0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x24bdf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x24bdf4: 0x7fbf0050  sq          $ra, 0x50($sp)
    ctx->pc = 0x24bdf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 31));
    // 0x24bdf8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x24bdf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x24bdfc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x24bdfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x24be00: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x24be00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x24be04: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x24be04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x24be08: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x24be08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x24be0c: 0xafa40078  sw          $a0, 0x78($sp)
    ctx->pc = 0x24be0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 4));
    // 0x24be10: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x24be10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x24be14: 0x8c720100  lw          $s2, 0x100($v1)
    ctx->pc = 0x24be14u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 256)));
    // 0x24be18: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x24be18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x24be1c: 0x8c740104  lw          $s4, 0x104($v1)
    ctx->pc = 0x24be1cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 260)));
    // 0x24be20: 0x8e440128  lw          $a0, 0x128($s2)
    ctx->pc = 0x24be20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 296)));
    // 0x24be24: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x24be24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x24be28: 0x10830006  beq         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x24BE28u;
    {
        const bool branch_taken_0x24be28 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x24be28) {
            ctx->pc = 0x24BE44u;
            goto label_24be44;
        }
    }
    ctx->pc = 0x24BE30u;
    // 0x24be30: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x24be30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x24be34: 0x8c6300d4  lw          $v1, 0xD4($v1)
    ctx->pc = 0x24be34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 212)));
    // 0x24be38: 0x28630078  slti        $v1, $v1, 0x78
    ctx->pc = 0x24be38u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)120) ? 1 : 0);
    // 0x24be3c: 0x14600088  bnez        $v1, . + 4 + (0x88 << 2)
    ctx->pc = 0x24BE3Cu;
    {
        const bool branch_taken_0x24be3c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x24be3c) {
            ctx->pc = 0x24C060u;
            goto label_24c060;
        }
    }
    ctx->pc = 0x24BE44u;
label_24be44:
    // 0x24be44: 0x8e44012c  lw          $a0, 0x12C($s2)
    ctx->pc = 0x24be44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 300)));
    // 0x24be48: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x24be48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24be4c: 0x1483006e  bne         $a0, $v1, . + 4 + (0x6E << 2)
    ctx->pc = 0x24BE4Cu;
    {
        const bool branch_taken_0x24be4c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x24be4c) {
            ctx->pc = 0x24C008u;
            goto label_24c008;
        }
    }
    ctx->pc = 0x24BE54u;
    // 0x24be54: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x24be54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x24be58: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x24BE58u;
    SET_GPR_U32(ctx, 31, 0x24BE60u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x24BE58u, 0x24BE60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24BE60u;
label_24be60:
    // 0x24be60: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x24be60u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x24be64: 0x10000064  b           . + 4 + (0x64 << 2)
    ctx->pc = 0x24BE64u;
    {
        const bool branch_taken_0x24be64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24be64) {
            ctx->pc = 0x24BFF8u;
            goto label_24bff8;
        }
    }
    ctx->pc = 0x24BE6Cu;
label_24be6c:
    // 0x24be6c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x24be6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x24be70: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x24be70u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x24be74: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x24be74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x24be78: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x24be78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x24be7c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x24be7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x24be80: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x24be80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x24be84: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x24be84u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x24be88: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x24be88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x24be8c: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x24be8cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x24be90: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x24be90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x24be94: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x24be94u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x24be98: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x24be98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x24be9c: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x24be9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x24bea0: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x24bea0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x24bea4: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x24bea4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x24bea8: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x24bea8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x24beac: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x24beacu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x24beb0: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x24beb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x24beb4: 0x24020019  addiu       $v0, $zero, 0x19
    ctx->pc = 0x24beb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x24beb8: 0x62001b  divu        $zero, $v1, $v0
    ctx->pc = 0x24beb8u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x24bebc: 0x0  nop
    ctx->pc = 0x24bebcu;
    // NOP
    // 0x24bec0: 0x0  nop
    ctx->pc = 0x24bec0u;
    // NOP
    // 0x24bec4: 0x8010  mfhi        $s0
    ctx->pc = 0x24bec4u;
    SET_GPR_U64(ctx, 16, ctx->hi);
    // 0x24bec8: 0x27a20060  addiu       $v0, $sp, 0x60
    ctx->pc = 0x24bec8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x24becc: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x24beccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24bed0: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x24bed0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x24bed4: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x24bed4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24bed8: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x24bed8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x24bedc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x24bedcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x24bee0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x24bee0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x24bee4: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x24bee4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24bee8: 0x27a20060  addiu       $v0, $sp, 0x60
    ctx->pc = 0x24bee8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x24beec: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x24beecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24bef0: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x24bef0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x24bef4: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x24bef4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24bef8: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x24bef8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x24befc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x24befcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x24bf00: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x24bf00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x24bf04: 0x822825  or          $a1, $a0, $v0
    ctx->pc = 0x24bf04u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x24bf08: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x24bf08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x24bf0c: 0x2442dbc0  addiu       $v0, $v0, -0x2440
    ctx->pc = 0x24bf0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
    // 0x24bf10: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x24bf10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24bf14: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x24bf14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x24bf18: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x24bf18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24bf1c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x24bf1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x24bf20: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x24bf20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x24bf24: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x24bf24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x24bf28: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x24bf28u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24bf2c: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x24bf2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x24bf30: 0x2442dbc0  addiu       $v0, $v0, -0x2440
    ctx->pc = 0x24bf30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
    // 0x24bf34: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x24bf34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24bf38: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x24bf38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x24bf3c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x24bf3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24bf40: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x24bf40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x24bf44: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x24bf44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x24bf48: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x24bf48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x24bf4c: 0x823025  or          $a2, $a0, $v0
    ctx->pc = 0x24bf4cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x24bf50: 0x101840  sll         $v1, $s0, 1
    ctx->pc = 0x24bf50u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x24bf54: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x24bf54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x24bf58: 0x2442b5f0  addiu       $v0, $v0, -0x4A10
    ctx->pc = 0x24bf58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948336));
    // 0x24bf5c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x24bf5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x24bf60: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x24bf60u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24bf64: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x24bf64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x24bf68: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x24bf68u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x24bf6c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x24bf6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x24bf70: 0x8c22dcf0  lw          $v0, -0x2310($at)
    ctx->pc = 0x24bf70u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3EDCF0u));
    // 0x24bf74: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x24bf74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x24bf78: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x24bf78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24bf7c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x24bf7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x24bf80: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x24bf80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24bf84: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x24bf84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x24bf88: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x24bf88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x24bf8c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x24bf8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x24bf90: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x24bf90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24bf94: 0x102040  sll         $a0, $s0, 1
    ctx->pc = 0x24bf94u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x24bf98: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x24bf98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x24bf9c: 0x2463b5f0  addiu       $v1, $v1, -0x4A10
    ctx->pc = 0x24bf9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294948336));
    // 0x24bfa0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x24bfa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x24bfa4: 0x90630001  lbu         $v1, 0x1($v1)
    ctx->pc = 0x24bfa4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
    // 0x24bfa8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x24bfa8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x24bfac: 0x32180  sll         $a0, $v1, 6
    ctx->pc = 0x24bfacu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x24bfb0: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x24bfb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x24bfb4: 0x8c23dcf0  lw          $v1, -0x2310($at)
    ctx->pc = 0x24bfb4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3EDCF0u));
    // 0x24bfb8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x24bfb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x24bfbc: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x24bfbcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x24bfc0: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x24bfc0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x24bfc4: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x24bfc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24bfc8: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x24bfc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x24bfcc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x24bfccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x24bfd0: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x24bfd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x24bfd4: 0x433825  or          $a3, $v0, $v1
    ctx->pc = 0x24bfd4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x24bfd8: 0x24042700  addiu       $a0, $zero, 0x2700
    ctx->pc = 0x24bfd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9984));
    // 0x24bfdc: 0xc0631f0  jal         func_18C7C0
    ctx->pc = 0x24BFDCu;
    SET_GPR_U32(ctx, 31, 0x24BFE4u);
    ctx->pc = 0x18C7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C7C0u, 0x24BFDCu, 0x24BFE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24BFE4u;
label_24bfe4:
    // 0x24bfe4: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x24bfe4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x24bfe8: 0xc06332c  jal         func_18CCB0
    ctx->pc = 0x24BFE8u;
    SET_GPR_U32(ctx, 31, 0x24BFF0u);
    ctx->pc = 0x18CCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18CCB0u, 0x24BFE8u, 0x24BFF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24BFF0u;
label_24bff0:
    // 0x24bff0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x24bff0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x24bff4: 0x0  nop
    ctx->pc = 0x24bff4u;
    // NOP
label_24bff8:
    // 0x24bff8: 0x2e23000a  sltiu       $v1, $s1, 0xA
    ctx->pc = 0x24bff8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x24bffc: 0x1460ff9b  bnez        $v1, . + 4 + (-0x65 << 2)
    ctx->pc = 0x24BFFCu;
    {
        const bool branch_taken_0x24bffc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x24bffc) {
            ctx->pc = 0x24BE6Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24be6c;
        }
    }
    ctx->pc = 0x24C004u;
    // 0x24c004: 0x0  nop
    ctx->pc = 0x24c004u;
    // NOP
label_24c008:
    // 0x24c008: 0x264300b0  addiu       $v1, $s2, 0xB0
    ctx->pc = 0x24c008u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 176));
    // 0x24c00c: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x24c00cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x24c010: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x24c010u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x24c014: 0x246300a0  addiu       $v1, $v1, 0xA0
    ctx->pc = 0x24c014u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 160));
    // 0x24c018: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x24c018u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x24c01c: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x24c01cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x24c020: 0xac6000d4  sw          $zero, 0xD4($v1)
    ctx->pc = 0x24c020u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 212), GPR_U32(ctx, 0));
    // 0x24c024: 0x8e43020c  lw          $v1, 0x20C($s2)
    ctx->pc = 0x24c024u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 524)));
    // 0x24c028: 0x34630010  ori         $v1, $v1, 0x10
    ctx->pc = 0x24c028u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
    // 0x24c02c: 0xae43020c  sw          $v1, 0x20C($s2)
    ctx->pc = 0x24c02cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 524), GPR_U32(ctx, 3));
    // 0x24c030: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x24c030u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x24c034: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x24c034u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x24c038: 0x12830004  beq         $s4, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x24C038u;
    {
        const bool branch_taken_0x24c038 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 3));
        if (branch_taken_0x24c038) {
            ctx->pc = 0x24C04Cu;
            goto label_24c04c;
        }
    }
    ctx->pc = 0x24C040u;
    // 0x24c040: 0x8e830b18  lw          $v1, 0xB18($s4)
    ctx->pc = 0x24c040u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2840)));
    // 0x24c044: 0x34630010  ori         $v1, $v1, 0x10
    ctx->pc = 0x24c044u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
    // 0x24c048: 0xae830b18  sw          $v1, 0xB18($s4)
    ctx->pc = 0x24c048u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 2840), GPR_U32(ctx, 3));
label_24c04c:
    // 0x24c04c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x24c04cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x24c050: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x24c050u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x24c054: 0xac64000c  sw          $a0, 0xC($v1)
    ctx->pc = 0x24c054u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
    // 0x24c058: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x24C058u;
    {
        const bool branch_taken_0x24c058 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24c058) {
            ctx->pc = 0x24C0B4u;
            goto label_24c0b4;
        }
    }
    ctx->pc = 0x24C060u;
label_24c060:
    // 0x24c060: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x24c060u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x24c064: 0x8c6300d4  lw          $v1, 0xD4($v1)
    ctx->pc = 0x24c064u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 212)));
    // 0x24c068: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x24c068u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x24c06c: 0x14600011  bnez        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x24C06Cu;
    {
        const bool branch_taken_0x24c06c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x24c06c) {
            ctx->pc = 0x24C0B4u;
            goto label_24c0b4;
        }
    }
    ctx->pc = 0x24C074u;
    // 0x24c074: 0x24041d02  addiu       $a0, $zero, 0x1D02
    ctx->pc = 0x24c074u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7426));
    // 0x24c078: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x24c078u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x24c07c: 0x264600b0  addiu       $a2, $s2, 0xB0
    ctx->pc = 0x24c07cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 176));
    // 0x24c080: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x24c080u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x24c084: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x24C084u;
    SET_GPR_U32(ctx, 31, 0x24C08Cu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x24C084u, 0x24C08Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C08Cu;
label_24c08c:
    // 0x24c08c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x24c08cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x24c090: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x24C090u;
    SET_GPR_U32(ctx, 31, 0x24C098u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x24C090u, 0x24C098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C098u;
label_24c098:
    // 0x24c098: 0x70409e28  paddub      $s3, $v0, $zero
    ctx->pc = 0x24c098u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x24c09c: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x24c09cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x24c0a0: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x24c0a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x24c0a4: 0x12630003  beq         $s3, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x24C0A4u;
    {
        const bool branch_taken_0x24c0a4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 3));
        if (branch_taken_0x24c0a4) {
            ctx->pc = 0x24C0B4u;
            goto label_24c0b4;
        }
    }
    ctx->pc = 0x24C0ACu;
    // 0x24c0ac: 0xc6400018  lwc1        $f0, 0x18($s2)
    ctx->pc = 0x24c0acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24c0b0: 0xe6600000  swc1        $f0, 0x0($s3)
    ctx->pc = 0x24c0b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
label_24c0b4:
    // 0x24c0b4: 0x7bbf0050  lq          $ra, 0x50($sp)
    ctx->pc = 0x24c0b4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x24c0b8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x24c0b8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x24c0bc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x24c0bcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x24c0c0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x24c0c0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24c0c4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x24c0c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24c0c8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x24c0c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24c0cc: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x24c0ccu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x24c0d0: 0x3e00008  jr          $ra
    ctx->pc = 0x24C0D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24C0D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24C0D8u;
}
