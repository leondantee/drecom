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

// Function: entry_00279134
// Address: 0x279134 - 0x27914c
void entry_00279134_0x279134(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00279134_0x279134");
#endif

    ctx->pc = 0x279134u;

    // 0x279134: 0x1118c0  sll         $v1, $s1, 3
    ctx->pc = 0x279134u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x279138: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x279138u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x27913c: 0x2442ef10  addiu       $v0, $v0, -0x10F0
    ctx->pc = 0x27913cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962960));
    // 0x279140: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x279140u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x279144: 0xc0a1030  jal         func_2840C0
    ctx->pc = 0x279144u;
    SET_GPR_U32(ctx, 31, 0x27914Cu);
    ctx->pc = 0x2840C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2840C0u, 0x279144u, 0x27914Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27914Cu;
}
