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

// Function: entry_00277328
// Address: 0x277328 - 0x277360
void entry_00277328_0x277328(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00277328_0x277328");
#endif

    switch (ctx->pc) {
        case 0x277340u: goto label_277340;
        default: break;
    }

    ctx->pc = 0x277328u;

    // 0x277328: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x277328u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x27732c: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x27732cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x277330: 0x2442d9e0  addiu       $v0, $v0, -0x2620
    ctx->pc = 0x277330u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957536));
    // 0x277334: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x277334u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x277338: 0xc0a1030  jal         func_2840C0
    ctx->pc = 0x277338u;
    SET_GPR_U32(ctx, 31, 0x277340u);
    ctx->pc = 0x2840C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2840C0u, 0x277338u, 0x277340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277340u;
label_277340:
    // 0x277340: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x277340u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x277344: 0x8c22bb54  lw          $v0, -0x44AC($at)
    ctx->pc = 0x277344u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x47BB54u));
    // 0x277348: 0xa440127e  sh          $zero, 0x127E($v0)
    ctx->pc = 0x277348u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4734), (uint16_t)GPR_U32(ctx, 0));
    // 0x27734c: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x27734cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x277350: 0x8c22bb58  lw          $v0, -0x44A8($at)
    ctx->pc = 0x277350u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x47BB58u));
    // 0x277354: 0xa440127e  sh          $zero, 0x127E($v0)
    ctx->pc = 0x277354u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4734), (uint16_t)GPR_U32(ctx, 0));
    // 0x277358: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x277358u;
    {
        const bool branch_taken_0x277358 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x277358) {
            ctx->pc = 0x2773ACu;
            return;
        }
    }
    ctx->pc = 0x277360u;
}
