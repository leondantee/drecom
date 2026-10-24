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

// Function: entry_0014ea00
// Address: 0x14ea00 - 0x14ea44
void entry_0014ea00_0x14ea00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014ea00_0x14ea00");
#endif

    switch (ctx->pc) {
        case 0x14ea2cu: goto label_14ea2c;
        default: break;
    }

    ctx->pc = 0x14ea00u;

    // 0x14ea00: 0x8e630008  lw          $v1, 0x8($s3)
    ctx->pc = 0x14ea00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x14ea04: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x14ea04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x14ea08: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x14EA08u;
    {
        const bool branch_taken_0x14ea08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14ea08) {
            ctx->pc = 0x14EA44u;
            return;
        }
    }
    ctx->pc = 0x14EA10u;
    // 0x14ea10: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x14ea10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x14ea14: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x14ea14u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0140u));
    // 0x14ea18: 0x304600ff  andi        $a2, $v0, 0xFF
    ctx->pc = 0x14ea18u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x14ea1c: 0x72602628  paddub      $a0, $s3, $zero
    ctx->pc = 0x14ea1cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x14ea20: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x14ea20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x14ea24: 0xc096304  jal         func_258C10
    ctx->pc = 0x14EA24u;
    SET_GPR_U32(ctx, 31, 0x14EA2Cu);
    ctx->pc = 0x258C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258C10u, 0x14EA24u, 0x14EA2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14EA2Cu;
label_14ea2c:
    // 0x14ea2c: 0x860213c0  lh          $v0, 0x13C0($s0)
    ctx->pc = 0x14ea2cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 5056)));
    // 0x14ea30: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x14ea30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x14ea34: 0x3045ffff  andi        $a1, $v0, 0xFFFF
    ctx->pc = 0x14ea34u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x14ea38: 0x72602628  paddub      $a0, $s3, $zero
    ctx->pc = 0x14ea38u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x14ea3c: 0xc096348  jal         func_258D20
    ctx->pc = 0x14EA3Cu;
    SET_GPR_U32(ctx, 31, 0x14EA44u);
    ctx->pc = 0x258D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258D20u, 0x14EA3Cu, 0x14EA44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14EA44u;
}
