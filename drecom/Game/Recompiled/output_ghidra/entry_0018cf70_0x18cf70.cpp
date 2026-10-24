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

// Function: entry_0018cf70
// Address: 0x18cf70 - 0x18cfe0
void entry_0018cf70_0x18cf70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018cf70_0x18cf70");
#endif

    switch (ctx->pc) {
        case 0x18cfd8u: goto label_18cfd8;
        default: break;
    }

    ctx->pc = 0x18cf70u;

    // 0x18cf70: 0x92020368  lbu         $v0, 0x368($s0)
    ctx->pc = 0x18cf70u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 872)));
    // 0x18cf74: 0xa2020b1c  sb          $v0, 0xB1C($s0)
    ctx->pc = 0x18cf74u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2844), (uint8_t)GPR_U32(ctx, 2));
    // 0x18cf78: 0x9202036a  lbu         $v0, 0x36A($s0)
    ctx->pc = 0x18cf78u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 874)));
    // 0x18cf7c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x18cf7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18cf80: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x18cf80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x18cf84: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18cf84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18cf88: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x18cf88u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x18cf8c: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x18cf8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x18cf90: 0x24570010  addiu       $s7, $v0, 0x10
    ctx->pc = 0x18cf90u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x18cf94: 0xae170ac4  sw          $s7, 0xAC4($s0)
    ctx->pc = 0x18cf94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2756), GPR_U32(ctx, 23));
    // 0x18cf98: 0x8ef50010  lw          $s5, 0x10($s7)
    ctx->pc = 0x18cf98u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 16)));
    // 0x18cf9c: 0x92020b1c  lbu         $v0, 0xB1C($s0)
    ctx->pc = 0x18cf9cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2844)));
    // 0x18cfa0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x18cfa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18cfa4: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x18cfa4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x18cfa8: 0x2a2a821  addu        $s5, $s5, $v0
    ctx->pc = 0x18cfa8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x18cfac: 0x92a20018  lbu         $v0, 0x18($s5)
    ctx->pc = 0x18cfacu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 24)));
    // 0x18cfb0: 0xa2020b1d  sb          $v0, 0xB1D($s0)
    ctx->pc = 0x18cfb0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2845), (uint8_t)GPR_U32(ctx, 2));
    // 0x18cfb4: 0x8e020ac0  lw          $v0, 0xAC0($s0)
    ctx->pc = 0x18cfb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2752)));
    // 0x18cfb8: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x18cfb8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18cfbc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x18cfbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18cfc0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x18cfc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x18cfc4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x18CFC4u;
    {
        const bool branch_taken_0x18cfc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18cfc4) {
            ctx->pc = 0x18CFE0u;
            return;
        }
    }
    ctx->pc = 0x18CFCCu;
    // 0x18cfcc: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x18cfccu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x18cfd0: 0xc0c9ae4  jal         func_326B90
    ctx->pc = 0x18CFD0u;
    SET_GPR_U32(ctx, 31, 0x18CFD8u);
    ctx->pc = 0x326B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326B90u, 0x18CFD0u, 0x18CFD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18CFD8u;
label_18cfd8:
    // 0x18cfd8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x18CFD8u;
    {
        const bool branch_taken_0x18cfd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18cfd8) {
            ctx->pc = 0x18CFECu;
            return;
        }
    }
    ctx->pc = 0x18CFE0u;
}
