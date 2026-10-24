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

// Function: entry_00292390
// Address: 0x292390 - 0x2923a8
void entry_00292390_0x292390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00292390_0x292390");
#endif

    switch (ctx->pc) {
        case 0x292398u: goto label_292398;
        case 0x2923a4u: goto label_2923a4;
        default: break;
    }

    ctx->pc = 0x292390u;

    // 0x292390: 0xc0a493c  jal         func_2924F0
    ctx->pc = 0x292390u;
    SET_GPR_U32(ctx, 31, 0x292398u);
    ctx->pc = 0x2924F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2924F0u, 0x292390u, 0x292398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292398u;
label_292398:
    // 0x292398: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x292398u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29239c: 0xc06750c  jal         func_19D430
    ctx->pc = 0x29239Cu;
    SET_GPR_U32(ctx, 31, 0x2923A4u);
    ctx->pc = 0x19D430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D430u, 0x29239Cu, 0x2923A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2923A4u;
label_2923a4:
    // 0x2923a4: 0x0  nop
    ctx->pc = 0x2923a4u;
    // NOP
    ctx->pc = 0x2923a8u;
}
