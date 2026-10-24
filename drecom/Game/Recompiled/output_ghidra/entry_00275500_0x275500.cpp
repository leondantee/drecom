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

// Function: entry_00275500
// Address: 0x275500 - 0x275518
void entry_00275500_0x275500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00275500_0x275500");
#endif

    ctx->pc = 0x275500u;

    // 0x275500: 0x216302a  slt         $a2, $s0, $s6
    ctx->pc = 0x275500u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
    // 0x275504: 0x14c0ffe2  bnez        $a2, . + 4 + (-0x1E << 2)
    ctx->pc = 0x275504u;
    {
        const bool branch_taken_0x275504 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x275504) {
            ctx->pc = 0x275490u;
            return;
        }
    }
    ctx->pc = 0x27550Cu;
    // 0x27550c: 0x26430001  addiu       $v1, $s2, 0x1
    ctx->pc = 0x27550cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x275510: 0x70609628  paddub      $s2, $v1, $zero
    ctx->pc = 0x275510u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x275514: 0x0  nop
    ctx->pc = 0x275514u;
    // NOP
    ctx->pc = 0x275518u;
}
