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

// Function: _RotMatrixX_01
// Address: 0x103460 - 0x103468
void ps2__RotMatrixX_01_0x103460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__RotMatrixX_01_0x103460");
#endif

    ctx->pc = 0x103460u;

    // 0x103460: 0x460c0301  sub.s       $f12, $f0, $f12
    ctx->pc = 0x103460u;
    ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[12]);
    // 0x103464: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x103464u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x103468u;
}
