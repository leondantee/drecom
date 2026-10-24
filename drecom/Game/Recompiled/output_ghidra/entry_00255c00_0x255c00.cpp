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

// Function: entry_00255c00
// Address: 0x255c00 - 0x255c18
void entry_00255c00_0x255c00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00255c00_0x255c00");
#endif

    ctx->pc = 0x255c00u;

    // 0x255c00: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x255c00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x255c04: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x255c04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x255c08: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x255C08u;
    {
        const bool branch_taken_0x255c08 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x255c08) {
            ctx->pc = 0x255C18u;
            return;
        }
    }
    ctx->pc = 0x255C10u;
    // 0x255c10: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x255c10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x255c14: 0xafa200c8  sw          $v0, 0xC8($sp)
    ctx->pc = 0x255c14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 2));
    ctx->pc = 0x255c18u;
}
