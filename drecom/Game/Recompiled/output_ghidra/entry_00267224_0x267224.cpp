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

// Function: entry_00267224
// Address: 0x267224 - 0x26723c
void entry_00267224_0x267224(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00267224_0x267224");
#endif

    switch (ctx->pc) {
        case 0x267234u: goto label_267234;
        default: break;
    }

    ctx->pc = 0x267224u;

    // 0x267224: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x267224u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x267228: 0x8e0500a8  lw          $a1, 0xA8($s0)
    ctx->pc = 0x267228u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 168)));
    // 0x26722c: 0xc05be64  jal         func_16F990
    ctx->pc = 0x26722Cu;
    SET_GPR_U32(ctx, 31, 0x267234u);
    ctx->pc = 0x16F990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F990u, 0x26722Cu, 0x267234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267234u;
label_267234:
    // 0x267234: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x267234u;
    {
        const bool branch_taken_0x267234 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x267234) {
            ctx->pc = 0x267298u;
            return;
        }
    }
    ctx->pc = 0x26723Cu;
}
