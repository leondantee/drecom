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

// Function: entry_0033a3d0
// Address: 0x33a3d0 - 0x33a3dc
void entry_0033a3d0_0x33a3d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0033a3d0_0x33a3d0");
#endif

    switch (ctx->pc) {
        case 0x33a3d8u: goto label_33a3d8;
        default: break;
    }

    ctx->pc = 0x33a3d0u;

    // 0x33a3d0: 0xc084a90  jal         func_212A40
    ctx->pc = 0x33A3D0u;
    SET_GPR_U32(ctx, 31, 0x33A3D8u);
    ctx->pc = 0x212A40u;
    {
        ctx->pc = 0x33A3D8u;
        ps2_syscalls::SignalSema(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x33A3D8u) { return; }
    ctx->pc = 0x33A3D8u;
label_33a3d8:
    // 0x33a3d8: 0x72001628  paddub      $v0, $s0, $zero
    ctx->pc = 0x33a3d8u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    ctx->pc = 0x33a3dcu;
}
