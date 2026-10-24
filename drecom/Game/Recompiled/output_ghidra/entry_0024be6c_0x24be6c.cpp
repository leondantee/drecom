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

// Function: entry_0024be6c
// Address: 0x24be6c - 0x24bff8
void entry_0024be6c_0x24be6c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0024be6c_0x24be6c");
#endif

    switch (ctx->pc) {
        case 0x24bfe4u: goto label_24bfe4;
        case 0x24bff0u: goto label_24bff0;
        default: break;
    }

    ctx->pc = 0x24be6cu;

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
    ctx->pc = 0x24bff8u;
}
