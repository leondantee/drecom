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

// Function: entry_0015add0
// Address: 0x15add0 - 0x15ae78
void entry_0015add0_0x15add0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015add0_0x15add0");
#endif

    switch (ctx->pc) {
        case 0x15adf8u: goto label_15adf8;
        case 0x15ae20u: goto label_15ae20;
        default: break;
    }

    ctx->pc = 0x15add0u;

label_15add0:
    // 0x15add0: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x15add0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_15add4:
    // 0x15add4: 0x92020012  lbu         $v0, 0x12($s0)
    ctx->pc = 0x15add4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 18)));
label_15add8:
    // 0x15add8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x15add8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_15addc:
    // 0x15addc: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x15addcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_15ade0:
    // 0x15ade0: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x15ade0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
label_15ade4:
    // 0x15ade4: 0x24425630  addiu       $v0, $v0, 0x5630
    ctx->pc = 0x15ade4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22064));
label_15ade8:
    // 0x15ade8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x15ade8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_15adec:
    // 0x15adec: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x15adecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_15adf0:
    // 0x15adf0: 0x40f809  jalr        $v0
label_15adf4:
    if (ctx->pc == 0x15ADF4u) {
        ctx->pc = 0x15ADF8u;
        goto label_15adf8;
    }
    ctx->pc = 0x15ADF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x15ADF8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15ADF0u, 0x15ADF8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15ADF8u;
label_15adf8:
    // 0x15adf8: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x15adf8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_15adfc:
    // 0x15adfc: 0x92020012  lbu         $v0, 0x12($s0)
    ctx->pc = 0x15adfcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 18)));
label_15ae00:
    // 0x15ae00: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x15ae00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_15ae04:
    // 0x15ae04: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x15ae04u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_15ae08:
    // 0x15ae08: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x15ae08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
label_15ae0c:
    // 0x15ae0c: 0x24425590  addiu       $v0, $v0, 0x5590
    ctx->pc = 0x15ae0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21904));
label_15ae10:
    // 0x15ae10: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x15ae10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_15ae14:
    // 0x15ae14: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x15ae14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_15ae18:
    // 0x15ae18: 0x40f809  jalr        $v0
label_15ae1c:
    if (ctx->pc == 0x15AE1Cu) {
        ctx->pc = 0x15AE20u;
        goto label_15ae20;
    }
    ctx->pc = 0x15AE18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x15AE20u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15AE18u, 0x15AE20u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15AE20u;
label_15ae20:
    // 0x15ae20: 0x920209de  lbu         $v0, 0x9DE($s0)
    ctx->pc = 0x15ae20u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2526)));
label_15ae24:
    // 0x15ae24: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x15ae24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_15ae28:
    // 0x15ae28: 0x3042003f  andi        $v0, $v0, 0x3F
    ctx->pc = 0x15ae28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
label_15ae2c:
    // 0x15ae2c: 0x10400034  beqz        $v0, . + 4 + (0x34 << 2)
label_15ae30:
    if (ctx->pc == 0x15AE30u) {
        ctx->pc = 0x15AE34u;
        goto label_15ae34;
    }
    ctx->pc = 0x15AE2Cu;
    {
        const bool branch_taken_0x15ae2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15ae2c) {
            ctx->pc = 0x15AF00u;
            return;
        }
    }
    ctx->pc = 0x15AE34u;
label_15ae34:
    // 0x15ae34: 0x920209de  lbu         $v0, 0x9DE($s0)
    ctx->pc = 0x15ae34u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2526)));
label_15ae38:
    // 0x15ae38: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x15ae38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_15ae3c:
    // 0x15ae3c: 0x3042003f  andi        $v0, $v0, 0x3F
    ctx->pc = 0x15ae3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
label_15ae40:
    // 0x15ae40: 0x244204ff  addiu       $v0, $v0, 0x4FF
    ctx->pc = 0x15ae40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1279));
label_15ae44:
    // 0x15ae44: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x15ae44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_15ae48:
    // 0x15ae48: 0x3051ffff  andi        $s1, $v0, 0xFFFF
    ctx->pc = 0x15ae48u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_15ae4c:
    // 0x15ae4c: 0x92020012  lbu         $v0, 0x12($s0)
    ctx->pc = 0x15ae4cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 18)));
label_15ae50:
    // 0x15ae50: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x15ae50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_15ae54:
    // 0x15ae54: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x15ae54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_15ae58:
    // 0x15ae58: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
label_15ae5c:
    if (ctx->pc == 0x15AE5Cu) {
        ctx->pc = 0x15AE60u;
        goto label_15ae60;
    }
    ctx->pc = 0x15AE58u;
    {
        const bool branch_taken_0x15ae58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x15ae58) {
            ctx->pc = 0x15AE78u;
            return;
        }
    }
    ctx->pc = 0x15AE60u;
label_15ae60:
    // 0x15ae60: 0x92020012  lbu         $v0, 0x12($s0)
    ctx->pc = 0x15ae60u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 18)));
label_15ae64:
    // 0x15ae64: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x15ae64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_15ae68:
    // 0x15ae68: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x15ae68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_15ae6c:
    // 0x15ae6c: 0x1462001a  bne         $v1, $v0, . + 4 + (0x1A << 2)
label_15ae70:
    if (ctx->pc == 0x15AE70u) {
        ctx->pc = 0x15AE74u;
        goto label_15ae74;
    }
    ctx->pc = 0x15AE6Cu;
    {
        const bool branch_taken_0x15ae6c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x15ae6c) {
            ctx->pc = 0x15AED8u;
            return;
        }
    }
    ctx->pc = 0x15AE74u;
label_15ae74:
    // 0x15ae74: 0x0  nop
    ctx->pc = 0x15ae74u;
    // NOP
    ctx->pc = 0x15ae78u;
}
