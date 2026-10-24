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

// Function: entry_0033af68
// Address: 0x33af68 - 0x33af80
void entry_0033af68_0x33af68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0033af68_0x33af68");
#endif

    ctx->pc = 0x33af68u;

    // 0x33af68: 0x24020045  addiu       $v0, $zero, 0x45
    ctx->pc = 0x33af68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
    // 0x33af6c: 0x12020004  beq         $s0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x33AF6Cu;
    {
        const bool branch_taken_0x33af6c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x33af6c) {
            ctx->pc = 0x33AF80u;
            return;
        }
    }
    ctx->pc = 0x33AF74u;
    // 0x33af74: 0x2402004c  addiu       $v0, $zero, 0x4C
    ctx->pc = 0x33af74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x33af78: 0x16020008  bne         $s0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x33AF78u;
    {
        const bool branch_taken_0x33af78 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x33af78) {
            ctx->pc = 0x33AF9Cu;
            return;
        }
    }
    ctx->pc = 0x33AF80u;
}
