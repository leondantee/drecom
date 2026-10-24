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

// Function: entry_00279118
// Address: 0x279118 - 0x279130
void entry_00279118_0x279118(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00279118_0x279118");
#endif

    ctx->pc = 0x279118u;

    // 0x279118: 0x2e610080  sltiu       $at, $s3, 0x80
    ctx->pc = 0x279118u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)128) ? 1 : 0);
    // 0x27911c: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x27911Cu;
    {
        const bool branch_taken_0x27911c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x27911c) {
            ctx->pc = 0x279130u;
            return;
        }
    }
    ctx->pc = 0x279124u;
    // 0x279124: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x279124u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x279128: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x279128u;
    {
        const bool branch_taken_0x279128 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x279128) {
            ctx->pc = 0x279134u;
            return;
        }
    }
    ctx->pc = 0x279130u;
}
