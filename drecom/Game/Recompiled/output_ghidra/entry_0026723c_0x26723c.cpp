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

// Function: entry_0026723c
// Address: 0x26723c - 0x267254
void entry_0026723c_0x26723c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0026723c_0x26723c");
#endif

    switch (ctx->pc) {
        case 0x26724cu: goto label_26724c;
        default: break;
    }

    ctx->pc = 0x26723cu;

    // 0x26723c: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x26723cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x267240: 0x2605124c  addiu       $a1, $s0, 0x124C
    ctx->pc = 0x267240u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4684));
    // 0x267244: 0xc099934  jal         func_2664D0
    ctx->pc = 0x267244u;
    SET_GPR_U32(ctx, 31, 0x26724Cu);
    ctx->pc = 0x2664D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2664D0u, 0x267244u, 0x26724Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26724Cu;
label_26724c:
    // 0x26724c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x26724Cu;
    {
        const bool branch_taken_0x26724c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26724c) {
            ctx->pc = 0x267298u;
            return;
        }
    }
    ctx->pc = 0x267254u;
}
