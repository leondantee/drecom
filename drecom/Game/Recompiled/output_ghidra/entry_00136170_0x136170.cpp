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

// Function: entry_00136170
// Address: 0x136170 - 0x136188
void entry_00136170_0x136170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00136170_0x136170");
#endif

    ctx->pc = 0x136170u;

    // 0x136170: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x136170u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x136174: 0x24050016  addiu       $a1, $zero, 0x16
    ctx->pc = 0x136174u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x136178: 0x72003628  paddub      $a2, $s0, $zero
    ctx->pc = 0x136178u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x13617c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x13617cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x136180: 0xc04d72c  jal         func_135CB0
    ctx->pc = 0x136180u;
    SET_GPR_U32(ctx, 31, 0x136188u);
    ctx->pc = 0x135CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135CB0u, 0x136180u, 0x136188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136188u;
}
