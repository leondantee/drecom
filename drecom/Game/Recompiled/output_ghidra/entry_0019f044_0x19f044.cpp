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

// Function: entry_0019f044
// Address: 0x19f044 - 0x19f05c
void entry_0019f044_0x19f044(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019f044_0x19f044");
#endif

    ctx->pc = 0x19f044u;

    // 0x19f044: 0x72802628  paddub      $a0, $s4, $zero
    ctx->pc = 0x19f044u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x19f048: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x19f048u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x19f04c: 0x72403628  paddub      $a2, $s2, $zero
    ctx->pc = 0x19f04cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x19f050: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x19f050u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x19f054: 0xc0ce318  jal         func_338C60
    ctx->pc = 0x19F054u;
    SET_GPR_U32(ctx, 31, 0x19F05Cu);
    ctx->pc = 0x338C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338C60u, 0x19F054u, 0x19F05Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F05Cu;
}
