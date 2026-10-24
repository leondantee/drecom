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

// Function: entry_001ac908
// Address: 0x1ac908 - 0x1ac924
void entry_001ac908_0x1ac908(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ac908_0x1ac908");
#endif

    switch (ctx->pc) {
        case 0x1ac91cu: goto label_1ac91c;
        default: break;
    }

    ctx->pc = 0x1ac908u;

    // 0x1ac908: 0x2e0207d0  sltiu       $v0, $s0, 0x7D0
    ctx->pc = 0x1ac908u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)2000) ? 1 : 0);
    // 0x1ac90c: 0x1440ffe0  bnez        $v0, . + 4 + (-0x20 << 2)
    ctx->pc = 0x1AC90Cu;
    {
        const bool branch_taken_0x1ac90c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ac90c) {
            ctx->pc = 0x1AC890u;
            return;
        }
    }
    ctx->pc = 0x1AC914u;
    // 0x1ac914: 0xc06b8cc  jal         func_1AE330
    ctx->pc = 0x1AC914u;
    SET_GPR_U32(ctx, 31, 0x1AC91Cu);
    ctx->pc = 0x1AE330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AE330u, 0x1AC914u, 0x1AC91Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC91Cu;
label_1ac91c:
    // 0x1ac91c: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x1AC91Cu;
    {
        const bool branch_taken_0x1ac91c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ac91c) {
            ctx->pc = 0x1AC998u;
            return;
        }
    }
    ctx->pc = 0x1AC924u;
}
