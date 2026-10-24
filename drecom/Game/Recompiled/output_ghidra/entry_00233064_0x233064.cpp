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

// Function: entry_00233064
// Address: 0x233064 - 0x233078
void entry_00233064_0x233064(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00233064_0x233064");
#endif

    ctx->pc = 0x233064u;

    // 0x233064: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x233064u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x233068: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x233068u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23306c: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x23306cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x233070: 0xc0576a4  jal         func_15DA90
    ctx->pc = 0x233070u;
    SET_GPR_U32(ctx, 31, 0x233078u);
    ctx->pc = 0x15DA90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15DA90u, 0x233070u, 0x233078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233078u;
}
