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

// Function: entry_00324840
// Address: 0x324840 - 0x324858
void entry_00324840_0x324840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00324840_0x324840");
#endif

    ctx->pc = 0x324840u;

    // 0x324840: 0x2e020009  sltiu       $v0, $s0, 0x9
    ctx->pc = 0x324840u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x324844: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x324844u;
    {
        const bool branch_taken_0x324844 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x324844) {
            ctx->pc = 0x3247F8u;
            return;
        }
    }
    ctx->pc = 0x32484Cu;
    // 0x32484c: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x32484cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x324850: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x324850u;
    {
        const bool branch_taken_0x324850 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x324850) {
            ctx->pc = 0x3248A0u;
            return;
        }
    }
    ctx->pc = 0x324858u;
}
