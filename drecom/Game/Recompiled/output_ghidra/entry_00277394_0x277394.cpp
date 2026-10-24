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

// Function: entry_00277394
// Address: 0x277394 - 0x2773ac
void entry_00277394_0x277394(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00277394_0x277394");
#endif

    ctx->pc = 0x277394u;

    // 0x277394: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x277394u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x277398: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x277398u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x27739c: 0x2442d9e0  addiu       $v0, $v0, -0x2620
    ctx->pc = 0x27739cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957536));
    // 0x2773a0: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x2773a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2773a4: 0xc0a1030  jal         func_2840C0
    ctx->pc = 0x2773A4u;
    SET_GPR_U32(ctx, 31, 0x2773ACu);
    ctx->pc = 0x2840C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2840C0u, 0x2773A4u, 0x2773ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2773ACu;
}
