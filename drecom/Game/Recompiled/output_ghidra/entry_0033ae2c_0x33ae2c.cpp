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

// Function: entry_0033ae2c
// Address: 0x33ae2c - 0x33ae5c
void entry_0033ae2c_0x33ae2c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0033ae2c_0x33ae2c");
#endif

    switch (ctx->pc) {
        case 0x33ae54u: goto label_33ae54;
        default: break;
    }

    ctx->pc = 0x33ae2cu;

    // 0x33ae2c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x33ae2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x33ae30: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x33ae30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x33ae34: 0x82220004  lb          $v0, 0x4($s1)
    ctx->pc = 0x33ae34u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x33ae38: 0x304600ff  andi        $a2, $v0, 0xFF
    ctx->pc = 0x33ae38u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x33ae3c: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x33ae3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x33ae40: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x33ae40u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x33ae44: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x33ae44u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x33ae48: 0x70004e28  paddub      $t1, $zero, $zero
    ctx->pc = 0x33ae48u;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x33ae4c: 0xc0ce9cc  jal         func_33A730
    ctx->pc = 0x33AE4Cu;
    SET_GPR_U32(ctx, 31, 0x33AE54u);
    ctx->pc = 0x33A730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33A730u, 0x33AE4Cu, 0x33AE54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33AE54u;
label_33ae54:
    // 0x33ae54: 0x10000095  b           . + 4 + (0x95 << 2)
    ctx->pc = 0x33AE54u;
    {
        const bool branch_taken_0x33ae54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33ae54) {
            ctx->pc = 0x33B0ACu;
            return;
        }
    }
    ctx->pc = 0x33AE5Cu;
}
