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

// Function: entry_0029cd64
// Address: 0x29cd64 - 0x29cd84
void entry_0029cd64_0x29cd64(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0029cd64_0x29cd64");
#endif

    ctx->pc = 0x29cd64u;

    // 0x29cd64: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x29cd64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x29cd68: 0x8c24bb48  lw          $a0, -0x44B8($at)
    ctx->pc = 0x29cd68u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x47BB48u));
    // 0x29cd6c: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x29cd6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x29cd70: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x29cd70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x29cd74: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x29cd74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x29cd78: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x29cd78u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x29cd7c: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x29CD7Cu;
    {
        const bool branch_taken_0x29cd7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29cd7c) {
            ctx->pc = 0x29CE40u;
            return;
        }
    }
    ctx->pc = 0x29CD84u;
}
