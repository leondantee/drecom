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

// Function: entry_003459cc
// Address: 0x3459cc - 0x345a14
void entry_003459cc_0x3459cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003459cc_0x3459cc");
#endif

    switch (ctx->pc) {
        case 0x3459d4u: goto label_3459d4;
        case 0x345a08u: goto label_345a08;
        default: break;
    }

    ctx->pc = 0x3459ccu;

    // 0x3459cc: 0xc067694  jal         func_19DA50
    ctx->pc = 0x3459CCu;
    SET_GPR_U32(ctx, 31, 0x3459D4u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x3459CCu, 0x3459D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3459D4u;
label_3459d4:
    // 0x3459d4: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x3459d4u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x3459d8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x3459d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3459dc: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x3459dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x3459e0: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x3459E0u;
    {
        const bool branch_taken_0x3459e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3459e0) {
            ctx->pc = 0x345A14u;
            return;
        }
    }
    ctx->pc = 0x3459E8u;
    // 0x3459e8: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x3459e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x3459ec: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x3459ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x3459f0: 0x8c650368  lw          $a1, 0x368($v1)
    ctx->pc = 0x3459f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 872)));
    // 0x3459f4: 0x24061e07  addiu       $a2, $zero, 0x1E07
    ctx->pc = 0x3459f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7687));
    // 0x3459f8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x3459f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3459fc: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x3459fcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x345a00: 0xc0965d0  jal         func_259740
    ctx->pc = 0x345A00u;
    SET_GPR_U32(ctx, 31, 0x345A08u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x345A00u, 0x345A08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345A08u;
label_345a08:
    // 0x345a08: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x345a08u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x345a0c: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x345A0Cu;
    {
        const bool branch_taken_0x345a0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x345a0c) {
            ctx->pc = 0x345A44u;
            return;
        }
    }
    ctx->pc = 0x345A14u;
}
