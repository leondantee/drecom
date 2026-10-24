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

// Function: entry_0029257c
// Address: 0x29257c - 0x292598
void entry_0029257c_0x29257c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0029257c_0x29257c");
#endif

    switch (ctx->pc) {
        case 0x292594u: goto label_292594;
        default: break;
    }

    ctx->pc = 0x29257cu;

    // 0x29257c: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x29257cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x292580: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x292580u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x292584: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x292584u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x292588: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x292588u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29258c: 0xc05dbbc  jal         func_176EF0
    ctx->pc = 0x29258Cu;
    SET_GPR_U32(ctx, 31, 0x292594u);
    ctx->pc = 0x176EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176EF0u, 0x29258Cu, 0x292594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292594u;
label_292594:
    // 0x292594: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x292594u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->pc = 0x292598u;
}
