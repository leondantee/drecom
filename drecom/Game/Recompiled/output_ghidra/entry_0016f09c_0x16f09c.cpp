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

// Function: entry_0016f09c
// Address: 0x16f09c - 0x16f0b8
void entry_0016f09c_0x16f09c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016f09c_0x16f09c");
#endif

    ctx->pc = 0x16f09cu;

    // 0x16f09c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x16f09cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x16f0a0: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x16f0a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x16f0a4: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x16F0A4u;
    {
        const bool branch_taken_0x16f0a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x16f0a4) {
            ctx->pc = 0x16F0C8u;
            return;
        }
    }
    ctx->pc = 0x16F0ACu;
    // 0x16f0ac: 0x2631003c  addiu       $s1, $s1, 0x3C
    ctx->pc = 0x16f0acu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 60));
    // 0x16f0b0: 0x26420001  addiu       $v0, $s2, 0x1
    ctx->pc = 0x16f0b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x16f0b4: 0x3052ffff  andi        $s2, $v0, 0xFFFF
    ctx->pc = 0x16f0b4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    ctx->pc = 0x16f0b8u;
}
