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

// Function: entry_002710c8
// Address: 0x2710c8 - 0x2710e0
void entry_002710c8_0x2710c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002710c8_0x2710c8");
#endif

    ctx->pc = 0x2710c8u;

    // 0x2710c8: 0x2e020003  sltiu       $v0, $s0, 0x3
    ctx->pc = 0x2710c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x2710cc: 0x1440fffc  bnez        $v0, . + 4 + (-0x4 << 2)
    ctx->pc = 0x2710CCu;
    {
        const bool branch_taken_0x2710cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2710cc) {
            ctx->pc = 0x2710C0u;
            return;
        }
    }
    ctx->pc = 0x2710D4u;
    // 0x2710d4: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x2710d4u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2710d8: 0x10000053  b           . + 4 + (0x53 << 2)
    ctx->pc = 0x2710D8u;
    {
        const bool branch_taken_0x2710d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2710d8) {
            ctx->pc = 0x271228u;
            return;
        }
    }
    ctx->pc = 0x2710E0u;
}
