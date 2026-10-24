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

// Function: entry_00279990
// Address: 0x279990 - 0x2799a8
void entry_00279990_0x279990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00279990_0x279990");
#endif

    ctx->pc = 0x279990u;

    // 0x279990: 0x2e02000a  sltiu       $v0, $s0, 0xA
    ctx->pc = 0x279990u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x279994: 0x1440ffac  bnez        $v0, . + 4 + (-0x54 << 2)
    ctx->pc = 0x279994u;
    {
        const bool branch_taken_0x279994 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x279994) {
            ctx->pc = 0x279848u;
            return;
        }
    }
    ctx->pc = 0x27999Cu;
    // 0x27999c: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x27999cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2799a0: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x2799A0u;
    {
        const bool branch_taken_0x2799a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2799a0) {
            ctx->pc = 0x2799E8u;
            return;
        }
    }
    ctx->pc = 0x2799A8u;
}
