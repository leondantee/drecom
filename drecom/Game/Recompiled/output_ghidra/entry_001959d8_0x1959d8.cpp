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

// Function: entry_001959d8
// Address: 0x1959d8 - 0x1959f0
void entry_001959d8_0x1959d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001959d8_0x1959d8");
#endif

    ctx->pc = 0x1959d8u;

    // 0x1959d8: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x1959d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1959dc: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x1959dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1959e0: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1959E0u;
    {
        const bool branch_taken_0x1959e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1959e0) {
            ctx->pc = 0x1959F0u;
            return;
        }
    }
    ctx->pc = 0x1959E8u;
    // 0x1959e8: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1959e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1959ec: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x1959ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    ctx->pc = 0x1959f0u;
}
