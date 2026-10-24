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

// Function: entry_00289a1c
// Address: 0x289a1c - 0x289a44
void entry_00289a1c_0x289a1c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00289a1c_0x289a1c");
#endif

    ctx->pc = 0x289a1cu;

    // 0x289a1c: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x289a1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x289a20: 0xafa600d0  sw          $a2, 0xD0($sp)
    ctx->pc = 0x289a20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 6));
    // 0x289a24: 0x24080020  addiu       $t0, $zero, 0x20
    ctx->pc = 0x289a24u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x289a28: 0xafa800d4  sw          $t0, 0xD4($sp)
    ctx->pc = 0x289a28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 8));
    // 0x289a2c: 0x24070060  addiu       $a3, $zero, 0x60
    ctx->pc = 0x289a2cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x289a30: 0xafa700d8  sw          $a3, 0xD8($sp)
    ctx->pc = 0x289a30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 7));
    // 0x289a34: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x289a34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x289a38: 0xafa600dc  sw          $a2, 0xDC($sp)
    ctx->pc = 0x289a38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 6));
    // 0x289a3c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x289A3Cu;
    {
        const bool branch_taken_0x289a3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x289a3c) {
            ctx->pc = 0x289A68u;
            return;
        }
    }
    ctx->pc = 0x289A44u;
}
