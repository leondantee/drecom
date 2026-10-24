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

// Function: entry_00362bd4
// Address: 0x362bd4 - 0x362be0
void entry_00362bd4_0x362bd4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00362bd4_0x362bd4");
#endif

    switch (ctx->pc) {
        case 0x362bdcu: goto label_362bdc;
        default: break;
    }

    ctx->pc = 0x362bd4u;

    // 0x362bd4: 0xc0d8ba4  jal         func_362E90
    ctx->pc = 0x362BD4u;
    SET_GPR_U32(ctx, 31, 0x362BDCu);
    ctx->pc = 0x362E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x362E90u, 0x362BD4u, 0x362BDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x362BDCu;
label_362bdc:
    // 0x362bdc: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x362bdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    ctx->pc = 0x362be0u;
}
