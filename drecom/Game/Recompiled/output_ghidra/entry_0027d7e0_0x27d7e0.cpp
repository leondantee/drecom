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

// Function: entry_0027d7e0
// Address: 0x27d7e0 - 0x27d800
void entry_0027d7e0_0x27d7e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0027d7e0_0x27d7e0");
#endif

    ctx->pc = 0x27d7e0u;

    // 0x27d7e0: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x27d7e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x27d7e4: 0x12020038  beq         $s0, $v0, . + 4 + (0x38 << 2)
    ctx->pc = 0x27D7E4u;
    {
        const bool branch_taken_0x27d7e4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x27d7e4) {
            ctx->pc = 0x27D8C8u;
            return;
        }
    }
    ctx->pc = 0x27D7ECu;
    // 0x27d7ec: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x27d7ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x27d7f0: 0x12020003  beq         $s0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x27D7F0u;
    {
        const bool branch_taken_0x27d7f0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x27d7f0) {
            ctx->pc = 0x27D800u;
            return;
        }
    }
    ctx->pc = 0x27D7F8u;
    // 0x27d7f8: 0x10000088  b           . + 4 + (0x88 << 2)
    ctx->pc = 0x27D7F8u;
    {
        const bool branch_taken_0x27d7f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27d7f8) {
            ctx->pc = 0x27DA1Cu;
            return;
        }
    }
    ctx->pc = 0x27D800u;
}
