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

// Function: entry_0011510c
// Address: 0x11510c - 0x115120
void entry_0011510c_0x11510c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011510c_0x11510c");
#endif

    ctx->pc = 0x11510cu;

    // 0x11510c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x11510cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x115110: 0xa23007  srav        $a2, $v0, $a1
    ctx->pc = 0x115110u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 5) & 0x1F));
    // 0x115114: 0x861824  and         $v1, $a0, $a2
    ctx->pc = 0x115114u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 6));
    // 0x115118: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x115118u;
    {
        const bool branch_taken_0x115118 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x115118) {
            ctx->pc = 0x115128u;
            return;
        }
    }
    ctx->pc = 0x115120u;
}
