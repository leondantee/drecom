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

// Function: entry_0030d6d0
// Address: 0x30d6d0 - 0x30d708
void entry_0030d6d0_0x30d6d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0030d6d0_0x30d6d0");
#endif

    ctx->pc = 0x30d6d0u;

    // 0x30d6d0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x30d6d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30d6d4: 0x8442127a  lh          $v0, 0x127A($v0)
    ctx->pc = 0x30d6d4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4730)));
    // 0x30d6d8: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x30d6d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x30d6dc: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x30d6dcu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x30d6e0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x30d6e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x30d6e4: 0x1062001c  beq         $v1, $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x30D6E4u;
    {
        const bool branch_taken_0x30d6e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x30d6e4) {
            ctx->pc = 0x30D758u;
            return;
        }
    }
    ctx->pc = 0x30D6ECu;
    // 0x30d6ec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x30d6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30d6f0: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x30D6F0u;
    {
        const bool branch_taken_0x30d6f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x30d6f0) {
            ctx->pc = 0x30D730u;
            return;
        }
    }
    ctx->pc = 0x30D6F8u;
    // 0x30d6f8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x30D6F8u;
    {
        const bool branch_taken_0x30d6f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x30d6f8) {
            ctx->pc = 0x30D708u;
            return;
        }
    }
    ctx->pc = 0x30D700u;
    // 0x30d700: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x30D700u;
    {
        const bool branch_taken_0x30d700 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30d700) {
            ctx->pc = 0x30D778u;
            return;
        }
    }
    ctx->pc = 0x30D708u;
}
