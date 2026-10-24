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

// Function: caseD_6
// Address: 0x2605d8 - 0x2605fc
void caseD_6_0x2605d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_6_0x2605d8");
#endif

    ctx->pc = 0x2605d8u;

    // 0x2605d8: 0x8fa50260  lw          $a1, 0x260($sp)
    ctx->pc = 0x2605d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x2605dc: 0x101180  sll         $v0, $s0, 6
    ctx->pc = 0x2605dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x2605e0: 0x8ca40130  lw          $a0, 0x130($a1)
    ctx->pc = 0x2605e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 304)));
    // 0x2605e4: 0x822821  addu        $a1, $a0, $v0
    ctx->pc = 0x2605e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2605e8: 0x24a40030  addiu       $a0, $a1, 0x30
    ctx->pc = 0x2605e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x2605ec: 0x27a50170  addiu       $a1, $sp, 0x170
    ctx->pc = 0x2605ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x2605f0: 0x27a601a0  addiu       $a2, $sp, 0x1A0
    ctx->pc = 0x2605f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x2605f4: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x2605F4u;
    SET_GPR_U32(ctx, 31, 0x2605FCu);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x2605F4u, 0x2605FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2605FCu;
}
