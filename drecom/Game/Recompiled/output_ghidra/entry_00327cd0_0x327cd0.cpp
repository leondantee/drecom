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

// Function: entry_00327cd0
// Address: 0x327cd0 - 0x327d5c
void entry_00327cd0_0x327cd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00327cd0_0x327cd0");
#endif

    switch (ctx->pc) {
        case 0x327d08u: goto label_327d08;
        case 0x327d50u: goto label_327d50;
        default: break;
    }

    ctx->pc = 0x327cd0u;

    // 0x327cd0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x327cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x327cd4: 0x90430344  lbu         $v1, 0x344($v0)
    ctx->pc = 0x327cd4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 836)));
    // 0x327cd8: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x327cd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x327cdc: 0x202202b  sltu        $a0, $s0, $v0
    ctx->pc = 0x327cdcu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x327ce0: 0x1480ffef  bnez        $a0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x327CE0u;
    {
        const bool branch_taken_0x327ce0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x327ce0) {
            ctx->pc = 0x327CA0u;
            return;
        }
    }
    ctx->pc = 0x327CE8u;
    // 0x327ce8: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x327ce8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x327cec: 0x8fa60068  lw          $a2, 0x68($sp)
    ctx->pc = 0x327cecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x327cf0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x327cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x327cf4: 0x24a402f0  addiu       $a0, $a1, 0x2F0
    ctx->pc = 0x327cf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 752));
    // 0x327cf8: 0x24c502f0  addiu       $a1, $a2, 0x2F0
    ctx->pc = 0x327cf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 752));
    // 0x327cfc: 0x24460300  addiu       $a2, $v0, 0x300
    ctx->pc = 0x327cfcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 768));
    // 0x327d00: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x327D00u;
    SET_GPR_U32(ctx, 31, 0x327D08u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x327D00u, 0x327D08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x327D08u;
label_327d08:
    // 0x327d08: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x327d08u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x327d0c: 0x8fa60068  lw          $a2, 0x68($sp)
    ctx->pc = 0x327d0cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x327d10: 0x90c20346  lbu         $v0, 0x346($a2)
    ctx->pc = 0x327d10u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 838)));
    // 0x327d14: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x327d14u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x327d18: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x327d18u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x327d1c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x327d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x327d20: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x327d20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x327d24: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x327d24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x327d28: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x327d28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x327d2c: 0x90430346  lbu         $v1, 0x346($v0)
    ctx->pc = 0x327d2cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 838)));
    // 0x327d30: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x327d30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x327d34: 0x2447ffff  addiu       $a3, $v0, -0x1
    ctx->pc = 0x327d34u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x327d38: 0x71900  sll         $v1, $a3, 4
    ctx->pc = 0x327d38u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x327d3c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x327d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x327d40: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x327d40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x327d44: 0x24a502f0  addiu       $a1, $a1, 0x2F0
    ctx->pc = 0x327d44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 752));
    // 0x327d48: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x327D48u;
    SET_GPR_U32(ctx, 31, 0x327D50u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x327D48u, 0x327D50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x327D50u;
label_327d50:
    // 0x327d50: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x327d50u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x327d54: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x327D54u;
    {
        const bool branch_taken_0x327d54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x327d54) {
            ctx->pc = 0x327D98u;
            return;
        }
    }
    ctx->pc = 0x327D5Cu;
}
