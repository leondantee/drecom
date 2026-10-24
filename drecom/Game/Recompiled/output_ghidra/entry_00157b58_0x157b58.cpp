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

// Function: entry_00157b58
// Address: 0x157b58 - 0x157b74
void entry_00157b58_0x157b58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00157b58_0x157b58");
#endif

    ctx->pc = 0x157b58u;

    // 0x157b58: 0x2e440003  sltiu       $a0, $s2, 0x3
    ctx->pc = 0x157b58u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x157b5c: 0x1480ff6f  bnez        $a0, . + 4 + (-0x91 << 2)
    ctx->pc = 0x157B5Cu;
    {
        const bool branch_taken_0x157b5c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x157b5c) {
            ctx->pc = 0x15791Cu;
            return;
        }
    }
    ctx->pc = 0x157B64u;
    // 0x157b64: 0x3402fff8  ori         $v0, $zero, 0xFFF8
    ctx->pc = 0x157b64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65528);
    // 0x157b68: 0x7040ae28  paddub      $s5, $v0, $zero
    ctx->pc = 0x157b68u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x157b6c: 0x10000164  b           . + 4 + (0x164 << 2)
    ctx->pc = 0x157B6Cu;
    {
        const bool branch_taken_0x157b6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x157b6c) {
            ctx->pc = 0x158100u;
            return;
        }
    }
    ctx->pc = 0x157B74u;
}
