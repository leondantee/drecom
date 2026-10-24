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

// Function: R11b_init
// Address: 0x278fe0 - 0x2791ec
void R11b_init_0x278fe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("R11b_init_0x278fe0");
#endif

    switch (ctx->pc) {
        case 0x279008u: goto label_279008;
        case 0x2790c0u: goto label_2790c0;
        case 0x27914cu: goto label_27914c;
        case 0x279154u: goto label_279154;
        case 0x279164u: goto label_279164;
        default: break;
    }

    ctx->pc = 0x278fe0u;

    // 0x278fe0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x278fe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x278fe4: 0x7fbf0040  sq          $ra, 0x40($sp)
    ctx->pc = 0x278fe4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 31));
    // 0x278fe8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x278fe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x278fec: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x278fecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x278ff0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x278ff0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x278ff4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x278ff4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x278ff8: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x278ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x278ffc: 0x2444ec30  addiu       $a0, $v0, -0x13D0
    ctx->pc = 0x278ffcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962224));
    // 0x279000: 0xc0a103c  jal         func_2840F0
    ctx->pc = 0x279000u;
    SET_GPR_U32(ctx, 31, 0x279008u);
    ctx->pc = 0x2840F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2840F0u, 0x279000u, 0x279008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279008u;
label_279008:
    // 0x279008: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x279008u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x27900c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x27900cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x279010: 0xa022d5f1  sb          $v0, -0x2A0F($at)
    ctx->pc = 0x279010u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5CD5F1u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5CD5F1u, _value); } while (0);
    // 0x279014: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x279014u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x279018: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x279018u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x27901c: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x27901cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x279020: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x279020u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x279024: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x279024u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x279028: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x279028u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x27902c: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x27902cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x279030: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x279030u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x279034: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x279034u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x279038: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x279038u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x27903c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x27903cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x279040: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x279040u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x279044: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x279044u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x279048: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x279048u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x27904c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x27904cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x279050: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x279050u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x279054: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x279054u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x279058: 0x305300ff  andi        $s3, $v0, 0xFF
    ctx->pc = 0x279058u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x27905c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x27905cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x279060: 0x8c231aa4  lw          $v1, 0x1AA4($at)
    ctx->pc = 0x279060u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1AA4u));
    // 0x279064: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x279064u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x279068: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x279068u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x27906c: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x27906Cu;
    {
        const bool branch_taken_0x27906c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27906c) {
            ctx->pc = 0x279118u;
            goto label_279118;
        }
    }
    ctx->pc = 0x279074u;
    // 0x279074: 0x2e610050  sltiu       $at, $s3, 0x50
    ctx->pc = 0x279074u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)80) ? 1 : 0);
    // 0x279078: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x279078u;
    {
        const bool branch_taken_0x279078 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x279078) {
            ctx->pc = 0x27908Cu;
            goto label_27908c;
        }
    }
    ctx->pc = 0x279080u;
    // 0x279080: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x279080u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x279084: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x279084u;
    {
        const bool branch_taken_0x279084 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x279084) {
            ctx->pc = 0x2790A8u;
            goto label_2790a8;
        }
    }
    ctx->pc = 0x27908Cu;
label_27908c:
    // 0x27908c: 0x2e6100a0  sltiu       $at, $s3, 0xA0
    ctx->pc = 0x27908cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)160) ? 1 : 0);
    // 0x279090: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x279090u;
    {
        const bool branch_taken_0x279090 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x279090) {
            ctx->pc = 0x2790A4u;
            goto label_2790a4;
        }
    }
    ctx->pc = 0x279098u;
    // 0x279098: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x279098u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27909c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x27909Cu;
    {
        const bool branch_taken_0x27909c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27909c) {
            ctx->pc = 0x2790A8u;
            goto label_2790a8;
        }
    }
    ctx->pc = 0x2790A4u;
label_2790a4:
    // 0x2790a4: 0x24110002  addiu       $s1, $zero, 0x2
    ctx->pc = 0x2790a4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2790a8:
    // 0x2790a8: 0x1118c0  sll         $v1, $s1, 3
    ctx->pc = 0x2790a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x2790ac: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x2790acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x2790b0: 0x2442ef10  addiu       $v0, $v0, -0x10F0
    ctx->pc = 0x2790b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962960));
    // 0x2790b4: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x2790b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2790b8: 0xc0a1030  jal         func_2840C0
    ctx->pc = 0x2790B8u;
    SET_GPR_U32(ctx, 31, 0x2790C0u);
    ctx->pc = 0x2840C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2840C0u, 0x2790B8u, 0x2790C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2790C0u;
label_2790c0:
    // 0x2790c0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2790c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2790c4: 0x16220021  bne         $s1, $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x2790C4u;
    {
        const bool branch_taken_0x2790c4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x2790c4) {
            ctx->pc = 0x27914Cu;
            goto label_27914c;
        }
    }
    ctx->pc = 0x2790CCu;
    // 0x2790cc: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x2790ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x2790d0: 0x2452bb48  addiu       $s2, $v0, -0x44B8
    ctx->pc = 0x2790d0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949704));
    // 0x2790d4: 0x8e500000  lw          $s0, 0x0($s2)
    ctx->pc = 0x2790d4u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x47BB48u));
    // 0x2790d8: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x2790d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x2790dc: 0xa602127e  sh          $v0, 0x127E($s0)
    ctx->pc = 0x2790dcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4734), (uint16_t)GPR_U32(ctx, 2));
    // 0x2790e0: 0x8e500004  lw          $s0, 0x4($s2)
    ctx->pc = 0x2790e0u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x47BB4Cu));
    // 0x2790e4: 0x24020019  addiu       $v0, $zero, 0x19
    ctx->pc = 0x2790e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x2790e8: 0xa602127e  sh          $v0, 0x127E($s0)
    ctx->pc = 0x2790e8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4734), (uint16_t)GPR_U32(ctx, 2));
    // 0x2790ec: 0x8e500008  lw          $s0, 0x8($s2)
    ctx->pc = 0x2790ecu;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x47BB50u));
    // 0x2790f0: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x2790f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x2790f4: 0xa602127e  sh          $v0, 0x127E($s0)
    ctx->pc = 0x2790f4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4734), (uint16_t)GPR_U32(ctx, 2));
    // 0x2790f8: 0x8e50000c  lw          $s0, 0xC($s2)
    ctx->pc = 0x2790f8u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x47BB54u));
    // 0x2790fc: 0x24020019  addiu       $v0, $zero, 0x19
    ctx->pc = 0x2790fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x279100: 0xa602127e  sh          $v0, 0x127E($s0)
    ctx->pc = 0x279100u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4734), (uint16_t)GPR_U32(ctx, 2));
    // 0x279104: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x279104u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x279108: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x279108u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x27910c: 0xa022d5f1  sb          $v0, -0x2A0F($at)
    ctx->pc = 0x27910cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5CD5F1u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5CD5F1u, _value); } while (0);
    // 0x279110: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x279110u;
    {
        const bool branch_taken_0x279110 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x279110) {
            ctx->pc = 0x27914Cu;
            goto label_27914c;
        }
    }
    ctx->pc = 0x279118u;
label_279118:
    // 0x279118: 0x2e610080  sltiu       $at, $s3, 0x80
    ctx->pc = 0x279118u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)128) ? 1 : 0);
    // 0x27911c: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x27911Cu;
    {
        const bool branch_taken_0x27911c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x27911c) {
            ctx->pc = 0x279130u;
            goto label_279130;
        }
    }
    ctx->pc = 0x279124u;
    // 0x279124: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x279124u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x279128: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x279128u;
    {
        const bool branch_taken_0x279128 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x279128) {
            ctx->pc = 0x279134u;
            goto label_279134;
        }
    }
    ctx->pc = 0x279130u;
label_279130:
    // 0x279130: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x279130u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_279134:
    // 0x279134: 0x1118c0  sll         $v1, $s1, 3
    ctx->pc = 0x279134u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x279138: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x279138u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x27913c: 0x2442ef10  addiu       $v0, $v0, -0x10F0
    ctx->pc = 0x27913cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962960));
    // 0x279140: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x279140u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x279144: 0xc0a1030  jal         func_2840C0
    ctx->pc = 0x279144u;
    SET_GPR_U32(ctx, 31, 0x27914Cu);
    ctx->pc = 0x2840C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2840C0u, 0x279144u, 0x27914Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27914Cu;
label_27914c:
    // 0x27914c: 0xc09e4b4  jal         func_2792D0
    ctx->pc = 0x27914Cu;
    SET_GPR_U32(ctx, 31, 0x279154u);
    ctx->pc = 0x2792D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2792D0u, 0x27914Cu, 0x279154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279154u;
label_279154:
    // 0x279154: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x279154u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x279158: 0x2444e960  addiu       $a0, $v0, -0x16A0
    ctx->pc = 0x279158u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961504));
    // 0x27915c: 0xc0a1048  jal         func_284120
    ctx->pc = 0x27915Cu;
    SET_GPR_U32(ctx, 31, 0x279164u);
    ctx->pc = 0x284120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x284120u, 0x27915Cu, 0x279164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279164u;
label_279164:
    // 0x279164: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x279164u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x279168: 0x8c231aa4  lw          $v1, 0x1AA4($at)
    ctx->pc = 0x279168u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1AA4u));
    // 0x27916c: 0x30634000  andi        $v1, $v1, 0x4000
    ctx->pc = 0x27916cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
    // 0x279170: 0x14600013  bnez        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x279170u;
    {
        const bool branch_taken_0x279170 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x279170) {
            ctx->pc = 0x2791C0u;
            goto label_2791c0;
        }
    }
    ctx->pc = 0x279178u;
    // 0x279178: 0x3c030028  lui         $v1, 0x28
    ctx->pc = 0x279178u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)40 << 16));
    // 0x27917c: 0x24639370  addiu       $v1, $v1, -0x6C90
    ctx->pc = 0x27917cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939504));
    // 0x279180: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x279180u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x279184: 0xac23d69c  sw          $v1, -0x2964($at)
    ctx->pc = 0x279184u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5CD69Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5CD69Cu, _value); } while (0);
    // 0x279188: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x279188u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x27918c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x27918cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x279190: 0xac23d698  sw          $v1, -0x2968($at)
    ctx->pc = 0x279190u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5CD698u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5CD698u, _value); } while (0);
    // 0x279194: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x279194u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x279198: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x279198u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x27919c: 0xa023d691  sb          $v1, -0x296F($at)
    ctx->pc = 0x27919cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5CD691u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5CD691u, _value); } while (0);
    // 0x2791a0: 0x24030091  addiu       $v1, $zero, 0x91
    ctx->pc = 0x2791a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 145));
    // 0x2791a4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2791a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2791a8: 0xa023d693  sb          $v1, -0x296D($at)
    ctx->pc = 0x2791a8u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5CD693u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5CD693u, _value); } while (0);
    // 0x2791ac: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2791acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2791b0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2791b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2791b4: 0xa023d551  sb          $v1, -0x2AAF($at)
    ctx->pc = 0x2791b4u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5CD551u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5CD551u, _value); } while (0);
    // 0x2791b8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2791B8u;
    {
        const bool branch_taken_0x2791b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2791b8) {
            ctx->pc = 0x2791CCu;
            goto label_2791cc;
        }
    }
    ctx->pc = 0x2791C0u;
label_2791c0:
    // 0x2791c0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2791c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2791c4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2791c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2791c8: 0xa023d691  sb          $v1, -0x296F($at)
    ctx->pc = 0x2791c8u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5CD691u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5CD691u, _value); } while (0);
label_2791cc:
    // 0x2791cc: 0x7bbf0040  lq          $ra, 0x40($sp)
    ctx->pc = 0x2791ccu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2791d0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2791d0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2791d4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2791d4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2791d8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2791d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2791dc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2791dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2791e0: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x2791e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2791e4: 0x3e00008  jr          $ra
    ctx->pc = 0x2791E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2791E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2791ECu;
}
