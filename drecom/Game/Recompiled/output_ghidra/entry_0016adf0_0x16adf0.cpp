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

// Function: entry_0016adf0
// Address: 0x16adf0 - 0x16ae10
void entry_0016adf0_0x16adf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016adf0_0x16adf0");
#endif

    switch (ctx->pc) {
        case 0x16ae0cu: goto label_16ae0c;
        default: break;
    }

    ctx->pc = 0x16adf0u;

    // 0x16adf0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x16adf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x16adf4: 0x24440020  addiu       $a0, $v0, 0x20
    ctx->pc = 0x16adf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x16adf8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x16adf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x16adfc: 0x94420014  lhu         $v0, 0x14($v0)
    ctx->pc = 0x16adfcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x16ae00: 0x3045ffff  andi        $a1, $v0, 0xFFFF
    ctx->pc = 0x16ae00u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x16ae04: 0xc05ab94  jal         func_16AE50
    ctx->pc = 0x16AE04u;
    SET_GPR_U32(ctx, 31, 0x16AE0Cu);
    ctx->pc = 0x16AE50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16AE50u, 0x16AE04u, 0x16AE0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16AE0Cu;
label_16ae0c:
    // 0x16ae0c: 0x0  nop
    ctx->pc = 0x16ae0cu;
    // NOP
    ctx->pc = 0x16ae10u;
}
