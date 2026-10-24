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

// Function: entry_00266ff8
// Address: 0x266ff8 - 0x267040
void entry_00266ff8_0x266ff8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00266ff8_0x266ff8");
#endif

    ctx->pc = 0x266ff8u;

    // 0x266ff8: 0x7000a628  paddub      $s4, $zero, $zero
    ctx->pc = 0x266ff8u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x266ffc: 0x9222000e  lbu         $v0, 0xE($s1)
    ctx->pc = 0x266ffcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 14)));
    // 0x267000: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x267000u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x267004: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x267004u;
    {
        const bool branch_taken_0x267004 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x267004) {
            ctx->pc = 0x267040u;
            return;
        }
    }
    ctx->pc = 0x26700Cu;
    // 0x26700c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x26700cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x267010: 0x9022e652  lbu         $v0, -0x19AE($at)
    ctx->pc = 0x267010u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x61E652u));
    // 0x267014: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x267014u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x267018: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x267018u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x26701c: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x26701cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x267020: 0x9222000e  lbu         $v0, 0xE($s1)
    ctx->pc = 0x267020u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 14)));
    // 0x267024: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x267024u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x267028: 0x9222000f  lbu         $v0, 0xF($s1)
    ctx->pc = 0x267028u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 15)));
    // 0x26702c: 0x304600ff  andi        $a2, $v0, 0xFF
    ctx->pc = 0x26702cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x267030: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x267030u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x267034: 0x26280020  addiu       $t0, $s1, 0x20
    ctx->pc = 0x267034u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x267038: 0xc0a1054  jal         func_284150
    ctx->pc = 0x267038u;
    SET_GPR_U32(ctx, 31, 0x267040u);
    ctx->pc = 0x284150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x284150u, 0x267038u, 0x267040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267040u;
}
