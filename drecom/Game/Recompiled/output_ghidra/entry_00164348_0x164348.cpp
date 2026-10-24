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

// Function: entry_00164348
// Address: 0x164348 - 0x164358
void entry_00164348_0x164348(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00164348_0x164348");
#endif

    switch (ctx->pc) {
        case 0x164354u: goto label_164354;
        default: break;
    }

    ctx->pc = 0x164348u;

    // 0x164348: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x164348u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x16434c: 0xc0592dc  jal         func_164B70
    ctx->pc = 0x16434Cu;
    SET_GPR_U32(ctx, 31, 0x164354u);
    ctx->pc = 0x164B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164B70u, 0x16434Cu, 0x164354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164354u;
label_164354:
    // 0x164354: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x164354u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->pc = 0x164358u;
}
