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

// Function: entry_0017cf1c
// Address: 0x17cf1c - 0x17cf2c
void entry_0017cf1c_0x17cf1c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017cf1c_0x17cf1c");
#endif

    ctx->pc = 0x17cf1cu;

    // 0x17cf1c: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x17cf1cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x17cf20: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x17cf20u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x17cf24: 0xc056680  jal         func_159A00
    ctx->pc = 0x17CF24u;
    SET_GPR_U32(ctx, 31, 0x17CF2Cu);
    ctx->pc = 0x159A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x159A00u, 0x17CF24u, 0x17CF2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17CF2Cu;
}
