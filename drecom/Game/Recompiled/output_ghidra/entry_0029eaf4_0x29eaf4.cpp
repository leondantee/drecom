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

// Function: entry_0029eaf4
// Address: 0x29eaf4 - 0x29eb10
void entry_0029eaf4_0x29eaf4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0029eaf4_0x29eaf4");
#endif

    switch (ctx->pc) {
        case 0x29eafcu: goto label_29eafc;
        default: break;
    }

    ctx->pc = 0x29eaf4u;

    // 0x29eaf4: 0xc067694  jal         func_19DA50
    ctx->pc = 0x29EAF4u;
    SET_GPR_U32(ctx, 31, 0x29EAFCu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x29EAF4u, 0x29EAFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29EAFCu;
label_29eafc:
    // 0x29eafc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x29eafcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x29eb00: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x29eb00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x29eb04: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x29eb04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x29eb08: 0x90420040  lbu         $v0, 0x40($v0)
    ctx->pc = 0x29eb08u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x29eb0c: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x29eb0cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    ctx->pc = 0x29eb10u;
}
