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

// Function: entry_00257500
// Address: 0x257500 - 0x257510
void entry_00257500_0x257500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00257500_0x257500");
#endif

    ctx->pc = 0x257500u;

    // 0x257500: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x257500u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x257504: 0x97a50088  lhu         $a1, 0x88($sp)
    ctx->pc = 0x257504u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x257508: 0xc095d50  jal         func_257540
    ctx->pc = 0x257508u;
    SET_GPR_U32(ctx, 31, 0x257510u);
    ctx->pc = 0x257540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257540u, 0x257508u, 0x257510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x257510u;
}
