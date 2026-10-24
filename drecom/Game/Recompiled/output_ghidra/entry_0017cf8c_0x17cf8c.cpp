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

// Function: entry_0017cf8c
// Address: 0x17cf8c - 0x17cf9c
void entry_0017cf8c_0x17cf8c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017cf8c_0x17cf8c");
#endif

    ctx->pc = 0x17cf8cu;

    // 0x17cf8c: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x17cf8cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x17cf90: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x17cf90u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x17cf94: 0xc056680  jal         func_159A00
    ctx->pc = 0x17CF94u;
    SET_GPR_U32(ctx, 31, 0x17CF9Cu);
    ctx->pc = 0x159A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x159A00u, 0x17CF94u, 0x17CF9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17CF9Cu;
}
