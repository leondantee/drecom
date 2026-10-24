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

// Function: entry_003404fc
// Address: 0x3404fc - 0x34050c
void entry_003404fc_0x3404fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003404fc_0x3404fc");
#endif

    ctx->pc = 0x3404fcu;

    // 0x3404fc: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x3404fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x340500: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x340500u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x340504: 0xc0cfdfc  jal         func_33F7F0
    ctx->pc = 0x340504u;
    SET_GPR_U32(ctx, 31, 0x34050Cu);
    ctx->pc = 0x33F7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33F7F0u, 0x340504u, 0x34050Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34050Cu;
}
