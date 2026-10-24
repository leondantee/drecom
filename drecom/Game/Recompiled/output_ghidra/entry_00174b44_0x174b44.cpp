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

// Function: entry_00174b44
// Address: 0x174b44 - 0x174b68
void entry_00174b44_0x174b44(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00174b44_0x174b44");
#endif

    switch (ctx->pc) {
        case 0x174b5cu: goto label_174b5c;
        default: break;
    }

    ctx->pc = 0x174b44u;

    // 0x174b44: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x174b44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x174b48: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x174b48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x174b4c: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x174b4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x174b50: 0x240707c0  addiu       $a3, $zero, 0x7C0
    ctx->pc = 0x174b50u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1984));
    // 0x174b54: 0xc059e1c  jal         func_167870
    ctx->pc = 0x174B54u;
    SET_GPR_U32(ctx, 31, 0x174B5Cu);
    ctx->pc = 0x167870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167870u, 0x174B54u, 0x174B5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174B5Cu;
label_174b5c:
    // 0x174b5c: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x174b5cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x174b60: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x174B60u;
    {
        const bool branch_taken_0x174b60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x174b60) {
            ctx->pc = 0x174B88u;
            return;
        }
    }
    ctx->pc = 0x174B68u;
}
