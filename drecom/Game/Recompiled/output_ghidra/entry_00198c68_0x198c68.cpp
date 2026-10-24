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

// Function: entry_00198c68
// Address: 0x198c68 - 0x198c7c
void entry_00198c68_0x198c68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00198c68_0x198c68");
#endif

    ctx->pc = 0x198c68u;

    // 0x198c68: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x198C68u;
    {
        const bool branch_taken_0x198c68 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x198c68) {
            ctx->pc = 0x198C7Cu;
            return;
        }
    }
    ctx->pc = 0x198C70u;
    // 0x198c70: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x198c70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x198c74: 0x16030032  bne         $s0, $v1, . + 4 + (0x32 << 2)
    ctx->pc = 0x198C74u;
    {
        const bool branch_taken_0x198c74 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        if (branch_taken_0x198c74) {
            ctx->pc = 0x198D40u;
            return;
        }
    }
    ctx->pc = 0x198C7Cu;
}
