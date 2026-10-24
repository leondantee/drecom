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

// Function: entry_0026aecc
// Address: 0x26aecc - 0x26aed4
void entry_0026aecc_0x26aecc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0026aecc_0x26aecc");
#endif

    ctx->pc = 0x26aeccu;

    // 0x26aecc: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x26AECCu;
    SET_GPR_U32(ctx, 31, 0x26AED4u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x26AECCu, 0x26AED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26AED4u;
}
