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

// Function: entry_0018a8bc
// Address: 0x18a8bc - 0x18a910
void entry_0018a8bc_0x18a8bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018a8bc_0x18a8bc");
#endif

    switch (ctx->pc) {
        case 0x18a8d4u: goto label_18a8d4;
        case 0x18a8fcu: goto label_18a8fc;
        default: break;
    }

    ctx->pc = 0x18a8bcu;

    // 0x18a8bc: 0x24040036  addiu       $a0, $zero, 0x36
    ctx->pc = 0x18a8bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
    // 0x18a8c0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x18a8c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x18a8c4: 0x8c25ac50  lw          $a1, -0x53B0($at)
    ctx->pc = 0x18a8c4u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x5CAC50u));
    // 0x18a8c8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x18a8c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18a8cc: 0xc076590  jal         func_1D9640
    ctx->pc = 0x18A8CCu;
    SET_GPR_U32(ctx, 31, 0x18A8D4u);
    ctx->pc = 0x1D9640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9640u, 0x18A8CCu, 0x18A8D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A8D4u;
label_18a8d4:
    // 0x18a8d4: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x18a8d4u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x18a8d8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x18a8d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x18a8dc: 0x8c31ac50  lw          $s1, -0x53B0($at)
    ctx->pc = 0x18a8dcu;
    SET_GPR_S32(ctx, 17, (int32_t)FAST_READ32(0x5CAC50u));
    // 0x18a8e0: 0x600000b  bltz        $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x18A8E0u;
    {
        const bool branch_taken_0x18a8e0 = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x18a8e0) {
            ctx->pc = 0x18A910u;
            return;
        }
    }
    ctx->pc = 0x18A8E8u;
    // 0x18a8e8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x18a8e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x18a8ec: 0x8c24ac50  lw          $a0, -0x53B0($at)
    ctx->pc = 0x18a8ecu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5CAC50u));
    // 0x18a8f0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x18a8f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18a8f4: 0xc062b60  jal         func_18AD80
    ctx->pc = 0x18A8F4u;
    SET_GPR_U32(ctx, 31, 0x18A8FCu);
    ctx->pc = 0x18AD80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18AD80u, 0x18A8F4u, 0x18A8FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A8FCu;
label_18a8fc:
    // 0x18a8fc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x18a8fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x18a900: 0x8c22ac50  lw          $v0, -0x53B0($at)
    ctx->pc = 0x18a900u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5CAC50u));
    // 0x18a904: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x18a904u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x18a908: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x18a908u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x18a90c: 0xac22ac50  sw          $v0, -0x53B0($at)
    ctx->pc = 0x18a90cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5CAC50u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5CAC50u, _value); } while (0);
    ctx->pc = 0x18a910u;
}
