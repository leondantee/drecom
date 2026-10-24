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

// Function: entry_0027dbfc
// Address: 0x27dbfc - 0x27dc88
void entry_0027dbfc_0x27dbfc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0027dbfc_0x27dbfc");
#endif

    switch (ctx->pc) {
        case 0x27dc74u: goto label_27dc74;
        case 0x27dc80u: goto label_27dc80;
        default: break;
    }

    ctx->pc = 0x27dbfcu;

    // 0x27dbfc: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x27dbfcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x27dc00: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x27dc00u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x27dc04: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x27dc04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x27dc08: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x27dc08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x27dc0c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x27dc0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x27dc10: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x27dc10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x27dc14: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x27dc14u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x27dc18: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x27dc18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x27dc1c: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x27dc1cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x27dc20: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x27dc20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x27dc24: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x27dc24u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x27dc28: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x27dc28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x27dc2c: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x27dc2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x27dc30: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x27dc30u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x27dc34: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x27dc34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x27dc38: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x27dc38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x27dc3c: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x27dc3cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x27dc40: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x27dc40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x27dc44: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x27dc44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x27dc48: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x27DC48u;
    {
        const bool branch_taken_0x27dc48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27dc48) {
            ctx->pc = 0x27DC88u;
            return;
        }
    }
    ctx->pc = 0x27DC50u;
    // 0x27dc50: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x27dc50u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x27dc54: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x27dc54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x27dc58: 0x24420f50  addiu       $v0, $v0, 0xF50
    ctx->pc = 0x27dc58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3920));
    // 0x27dc5c: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x27dc5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x27dc60: 0x24047300  addiu       $a0, $zero, 0x7300
    ctx->pc = 0x27dc60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 29440));
    // 0x27dc64: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x27dc64u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x27dc68: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x27dc68u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x27dc6c: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x27DC6Cu;
    SET_GPR_U32(ctx, 31, 0x27DC74u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x27DC6Cu, 0x27DC74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27DC74u;
label_27dc74:
    // 0x27dc74: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x27dc74u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x27dc78: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x27DC78u;
    SET_GPR_U32(ctx, 31, 0x27DC80u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x27DC78u, 0x27DC80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27DC80u;
label_27dc80:
    // 0x27dc80: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x27DC80u;
    {
        const bool branch_taken_0x27dc80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27dc80) {
            ctx->pc = 0x27DCB8u;
            return;
        }
    }
    ctx->pc = 0x27DC88u;
}
