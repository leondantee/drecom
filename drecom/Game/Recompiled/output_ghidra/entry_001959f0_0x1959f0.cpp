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

// Function: entry_001959f0
// Address: 0x1959f0 - 0x195a08
void entry_001959f0_0x1959f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001959f0_0x1959f0");
#endif

    ctx->pc = 0x1959f0u;

    // 0x1959f0: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1959f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1959f4: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x1959f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1959f8: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1959F8u;
    {
        const bool branch_taken_0x1959f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1959f8) {
            ctx->pc = 0x195A08u;
            return;
        }
    }
    ctx->pc = 0x195A00u;
    // 0x195a00: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x195a00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x195a04: 0xae030010  sw          $v1, 0x10($s0)
    ctx->pc = 0x195a04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
    ctx->pc = 0x195a08u;
}
