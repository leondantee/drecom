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

// Function: entry_0029cd84
// Address: 0x29cd84 - 0x29cda4
void entry_0029cd84_0x29cd84(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0029cd84_0x29cd84");
#endif

    ctx->pc = 0x29cd84u;

    // 0x29cd84: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x29cd84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x29cd88: 0x8c24bb4c  lw          $a0, -0x44B4($at)
    ctx->pc = 0x29cd88u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x47BB4Cu));
    // 0x29cd8c: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x29cd8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x29cd90: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x29cd90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x29cd94: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x29cd94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x29cd98: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x29cd98u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x29cd9c: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x29CD9Cu;
    {
        const bool branch_taken_0x29cd9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29cd9c) {
            ctx->pc = 0x29CE40u;
            return;
        }
    }
    ctx->pc = 0x29CDA4u;
}
