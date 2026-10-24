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

// Function: entry_0011fc9c
// Address: 0x11fc9c - 0x11fcbc
void entry_0011fc9c_0x11fc9c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011fc9c_0x11fc9c");
#endif

    ctx->pc = 0x11fc9cu;

    // 0x11fc9c: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x11fc9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x11fca0: 0x66102a  slt         $v0, $v1, $a2
    ctx->pc = 0x11fca0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x11fca4: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x11FCA4u;
    {
        const bool branch_taken_0x11fca4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11fca4) {
            ctx->pc = 0x11FCA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11FCA4u;
            // 0x11fca8: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11FC90u;
            return;
        }
    }
    ctx->pc = 0x11FCACu;
    // 0x11fcac: 0xc3102a  slt         $v0, $a2, $v1
    ctx->pc = 0x11fcacu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x11fcb0: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x11FCB0u;
    {
        const bool branch_taken_0x11fcb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11fcb0) {
            ctx->pc = 0x11FCB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11FCB0u;
            // 0x11fcb4: 0x8c83000c  lw          $v1, 0xC($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11FCC8u;
            return;
        }
    }
    ctx->pc = 0x11FCB8u;
    // 0x11fcb8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x11fcb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x11fcbcu;
}
