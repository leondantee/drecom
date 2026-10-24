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

// Function: entry_00332258
// Address: 0x332258 - 0x332268
void entry_00332258_0x332258(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00332258_0x332258");
#endif

    ctx->pc = 0x332258u;

    // 0x332258: 0x26640018  addiu       $a0, $s3, 0x18
    ctx->pc = 0x332258u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 24));
    // 0x33225c: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x33225cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x332260: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x332260u;
    SET_GPR_U32(ctx, 31, 0x332268u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x332260u, 0x332268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x332268u;
}
