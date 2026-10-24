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

// Function: entry_0019e524
// Address: 0x19e524 - 0x19e578
void entry_0019e524_0x19e524(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019e524_0x19e524");
#endif

    switch (ctx->pc) {
        case 0x19e544u: goto label_19e544;
        case 0x19e550u: goto label_19e550;
        case 0x19e568u: goto label_19e568;
        default: break;
    }

    ctx->pc = 0x19e524u;

    // 0x19e524: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x19e524u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x19e528: 0x8c221a48  lw          $v0, 0x1A48($at)
    ctx->pc = 0x19e528u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D1A48u));
    // 0x19e52c: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x19e52cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x19e530: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x19E530u;
    {
        const bool branch_taken_0x19e530 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19e530) {
            ctx->pc = 0x19E580u;
            return;
        }
    }
    ctx->pc = 0x19E538u;
    // 0x19e538: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x19e538u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x19e53c: 0xc067c9c  jal         func_19F270
    ctx->pc = 0x19E53Cu;
    SET_GPR_U32(ctx, 31, 0x19E544u);
    ctx->pc = 0x19F270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F270u, 0x19E53Cu, 0x19E544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E544u;
label_19e544:
    // 0x19e544: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x19e544u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19e548: 0xc067c9c  jal         func_19F270
    ctx->pc = 0x19E548u;
    SET_GPR_U32(ctx, 31, 0x19E550u);
    ctx->pc = 0x19F270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F270u, 0x19E548u, 0x19E550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E550u;
label_19e550:
    // 0x19e550: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x19e550u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x19e554: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x19e554u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x19e558: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x19e558u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x19e55c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x19e55cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19e560: 0xc0ce8fc  jal         func_33A3F0
    ctx->pc = 0x19E560u;
    SET_GPR_U32(ctx, 31, 0x19E568u);
    ctx->pc = 0x33A3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33A3F0u, 0x19E560u, 0x19E568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E568u;
label_19e568:
    // 0x19e568: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x19E568u;
    {
        const bool branch_taken_0x19e568 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19e568) {
            ctx->pc = 0x19E578u;
            return;
        }
    }
    ctx->pc = 0x19E570u;
    // 0x19e570: 0xc067e4c  jal         func_19F930
    ctx->pc = 0x19E570u;
    SET_GPR_U32(ctx, 31, 0x19E578u);
    ctx->pc = 0x19F930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F930u, 0x19E570u, 0x19E578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E578u;
}
