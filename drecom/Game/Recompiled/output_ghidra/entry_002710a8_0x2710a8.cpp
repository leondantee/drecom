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

// Function: entry_002710a8
// Address: 0x2710a8 - 0x2710c0
void entry_002710a8_0x2710a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002710a8_0x2710a8");
#endif

    ctx->pc = 0x2710a8u;

    // 0x2710a8: 0x2e020013  sltiu       $v0, $s0, 0x13
    ctx->pc = 0x2710a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)19) ? 1 : 0);
    // 0x2710ac: 0x1440ffab  bnez        $v0, . + 4 + (-0x55 << 2)
    ctx->pc = 0x2710ACu;
    {
        const bool branch_taken_0x2710ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2710ac) {
            ctx->pc = 0x270F5Cu;
            return;
        }
    }
    ctx->pc = 0x2710B4u;
    // 0x2710b4: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x2710b4u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2710b8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2710B8u;
    {
        const bool branch_taken_0x2710b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2710b8) {
            ctx->pc = 0x2710C8u;
            return;
        }
    }
    ctx->pc = 0x2710C0u;
}
