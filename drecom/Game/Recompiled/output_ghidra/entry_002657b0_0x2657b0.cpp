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

// Function: entry_002657b0
// Address: 0x2657b0 - 0x2657c0
void entry_002657b0_0x2657b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002657b0_0x2657b0");
#endif

    switch (ctx->pc) {
        case 0x2657bcu: goto label_2657bc;
        default: break;
    }

    ctx->pc = 0x2657b0u;

    // 0x2657b0: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x2657b0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x2657b4: 0xc0d84e8  jal         func_3613A0
    ctx->pc = 0x2657B4u;
    SET_GPR_U32(ctx, 31, 0x2657BCu);
    ctx->pc = 0x3613A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3613A0u, 0x2657B4u, 0x2657BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2657BCu;
label_2657bc:
    // 0x2657bc: 0x0  nop
    ctx->pc = 0x2657bcu;
    // NOP
    ctx->pc = 0x2657c0u;
}
