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

// Function: entry_0017cd08
// Address: 0x17cd08 - 0x17cd14
void entry_0017cd08_0x17cd08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017cd08_0x17cd08");
#endif

    ctx->pc = 0x17cd08u;

    // 0x17cd08: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x17cd08u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x17cd0c: 0xc056518  jal         func_159460
    ctx->pc = 0x17CD0Cu;
    SET_GPR_U32(ctx, 31, 0x17CD14u);
    ctx->pc = 0x159460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x159460u, 0x17CD0Cu, 0x17CD14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17CD14u;
}
