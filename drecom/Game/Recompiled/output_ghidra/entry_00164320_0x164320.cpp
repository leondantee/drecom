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

// Function: entry_00164320
// Address: 0x164320 - 0x164330
void entry_00164320_0x164320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00164320_0x164320");
#endif

    switch (ctx->pc) {
        case 0x16432cu: goto label_16432c;
        default: break;
    }

    ctx->pc = 0x164320u;

    // 0x164320: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x164320u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x164324: 0xc084900  jal         func_212400
    ctx->pc = 0x164324u;
    SET_GPR_U32(ctx, 31, 0x16432Cu);
    ctx->pc = 0x212400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212400u, 0x164324u, 0x16432Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16432Cu;
label_16432c:
    // 0x16432c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x16432cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->pc = 0x164330u;
}
