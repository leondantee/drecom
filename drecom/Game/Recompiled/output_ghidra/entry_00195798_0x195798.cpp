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

// Function: entry_00195798
// Address: 0x195798 - 0x1957b8
void entry_00195798_0x195798(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00195798_0x195798");
#endif

    ctx->pc = 0x195798u;

    // 0x195798: 0x8e0400c0  lw          $a0, 0xC0($s0)
    ctx->pc = 0x195798u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x19579c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x19579cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1957a0: 0x10830005  beq         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1957A0u;
    {
        const bool branch_taken_0x1957a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1957a0) {
            ctx->pc = 0x1957B8u;
            return;
        }
    }
    ctx->pc = 0x1957A8u;
    // 0x1957a8: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1957a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1957ac: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x1957acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1957b0: 0x14830009  bne         $a0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1957B0u;
    {
        const bool branch_taken_0x1957b0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1957b0) {
            ctx->pc = 0x1957D8u;
            return;
        }
    }
    ctx->pc = 0x1957B8u;
}
