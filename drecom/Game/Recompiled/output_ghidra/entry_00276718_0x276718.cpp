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

// Function: entry_00276718
// Address: 0x276718 - 0x276730
void entry_00276718_0x276718(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00276718_0x276718");
#endif

    ctx->pc = 0x276718u;

    // 0x276718: 0x2a030020  slti        $v1, $s0, 0x20
    ctx->pc = 0x276718u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x27671c: 0x1460ffa0  bnez        $v1, . + 4 + (-0x60 << 2)
    ctx->pc = 0x27671Cu;
    {
        const bool branch_taken_0x27671c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x27671c) {
            ctx->pc = 0x2765A0u;
            return;
        }
    }
    ctx->pc = 0x276724u;
    // 0x276724: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x276724u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x276728: 0x1000005f  b           . + 4 + (0x5F << 2)
    ctx->pc = 0x276728u;
    {
        const bool branch_taken_0x276728 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x276728) {
            ctx->pc = 0x2768A8u;
            return;
        }
    }
    ctx->pc = 0x276730u;
}
