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

// Function: entry_003377fc
// Address: 0x3377fc - 0x33781c
void entry_003377fc_0x3377fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003377fc_0x3377fc");
#endif

    ctx->pc = 0x3377fcu;

    // 0x3377fc: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x3377fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x337800: 0x2402002f  addiu       $v0, $zero, 0x2F
    ctx->pc = 0x337800u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    // 0x337804: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x337804u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x337808: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x337808u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x33780c: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x33780cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x337810: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x337810u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x337814: 0xc0654fc  jal         func_1953F0
    ctx->pc = 0x337814u;
    SET_GPR_U32(ctx, 31, 0x33781Cu);
    ctx->pc = 0x1953F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1953F0u, 0x337814u, 0x33781Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33781Cu;
}
