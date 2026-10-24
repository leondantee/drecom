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

// Function: entry_0014f7f8
// Address: 0x14f7f8 - 0x14f804
void entry_0014f7f8_0x14f7f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014f7f8_0x14f7f8");
#endif

    ctx->pc = 0x14f7f8u;

    // 0x14f7f8: 0x72802628  paddub      $a0, $s4, $zero
    ctx->pc = 0x14f7f8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x14f7fc: 0xc055418  jal         func_155060
    ctx->pc = 0x14F7FCu;
    SET_GPR_U32(ctx, 31, 0x14F804u);
    ctx->pc = 0x155060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155060u, 0x14F7FCu, 0x14F804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F804u;
}
