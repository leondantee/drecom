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

// Function: entry_001884b4
// Address: 0x1884b4 - 0x1884d4
void entry_001884b4_0x1884b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001884b4_0x1884b4");
#endif

    switch (ctx->pc) {
        case 0x1884bcu: goto label_1884bc;
        default: break;
    }

    ctx->pc = 0x1884b4u;

    // 0x1884b4: 0xc062144  jal         func_188510
    ctx->pc = 0x1884B4u;
    SET_GPR_U32(ctx, 31, 0x1884BCu);
    ctx->pc = 0x188510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x188510u, 0x1884B4u, 0x1884BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1884BCu;
label_1884bc:
    // 0x1884bc: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1884BCu;
    {
        const bool branch_taken_0x1884bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1884bc) {
            ctx->pc = 0x1884ECu;
            return;
        }
    }
    ctx->pc = 0x1884C4u;
    // 0x1884c4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1884c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1884c8: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x1884c8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1884cc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1884CCu;
    {
        const bool branch_taken_0x1884cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1884cc) {
            ctx->pc = 0x1884ECu;
            return;
        }
    }
    ctx->pc = 0x1884D4u;
}
