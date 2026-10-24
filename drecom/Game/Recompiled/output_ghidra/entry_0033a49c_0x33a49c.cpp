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

// Function: entry_0033a49c
// Address: 0x33a49c - 0x33a4ac
void entry_0033a49c_0x33a49c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0033a49c_0x33a49c");
#endif

    ctx->pc = 0x33a49cu;

    // 0x33a49c: 0x32420004  andi        $v0, $s2, 0x4
    ctx->pc = 0x33a49cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)4);
    // 0x33a4a0: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x33A4A0u;
    {
        const bool branch_taken_0x33a4a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x33a4a0) {
            ctx->pc = 0x33A4ACu;
            return;
        }
    }
    ctx->pc = 0x33A4A8u;
    // 0x33a4a8: 0x26310002  addiu       $s1, $s1, 0x2
    ctx->pc = 0x33a4a8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
    ctx->pc = 0x33a4acu;
}
