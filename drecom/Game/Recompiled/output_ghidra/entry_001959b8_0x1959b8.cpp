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

// Function: entry_001959b8
// Address: 0x1959b8 - 0x1959d8
void entry_001959b8_0x1959b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001959b8_0x1959b8");
#endif

    ctx->pc = 0x1959b8u;

    // 0x1959b8: 0x8e0400c0  lw          $a0, 0xC0($s0)
    ctx->pc = 0x1959b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x1959bc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1959bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1959c0: 0x10830005  beq         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1959C0u;
    {
        const bool branch_taken_0x1959c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1959c0) {
            ctx->pc = 0x1959D8u;
            return;
        }
    }
    ctx->pc = 0x1959C8u;
    // 0x1959c8: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1959c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1959cc: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x1959ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1959d0: 0x14830019  bne         $a0, $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x1959D0u;
    {
        const bool branch_taken_0x1959d0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1959d0) {
            ctx->pc = 0x195A38u;
            return;
        }
    }
    ctx->pc = 0x1959D8u;
}
