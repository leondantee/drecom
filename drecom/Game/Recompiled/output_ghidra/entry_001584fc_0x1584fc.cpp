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

// Function: entry_001584fc
// Address: 0x1584fc - 0x158520
void entry_001584fc_0x1584fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001584fc_0x1584fc");
#endif

    switch (ctx->pc) {
        case 0x158518u: goto label_158518;
        default: break;
    }

    ctx->pc = 0x1584fcu;

    // 0x1584fc: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x1584fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x158500: 0x2821821  addu        $v1, $s4, $v0
    ctx->pc = 0x158500u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x158504: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x158504u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x158508: 0x24441614  addiu       $a0, $v0, 0x1614
    ctx->pc = 0x158508u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 5652));
    // 0x15850c: 0x24650060  addiu       $a1, $v1, 0x60
    ctx->pc = 0x15850cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
    // 0x158510: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x158510u;
    SET_GPR_U32(ctx, 31, 0x158518u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x158510u, 0x158518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158518u;
label_158518:
    // 0x158518: 0x26440001  addiu       $a0, $s2, 0x1
    ctx->pc = 0x158518u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x15851c: 0x70809628  paddub      $s2, $a0, $zero
    ctx->pc = 0x15851cu;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    ctx->pc = 0x158520u;
}
