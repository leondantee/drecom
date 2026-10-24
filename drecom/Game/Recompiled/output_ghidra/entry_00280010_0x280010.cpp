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

// Function: entry_00280010
// Address: 0x280010 - 0x280018
void entry_00280010_0x280010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00280010_0x280010");
#endif

    ctx->pc = 0x280010u;

    // 0x280010: 0x2e030002  sltiu       $v1, $s0, 0x2
    ctx->pc = 0x280010u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x280014: 0x1460ffcd  bnez        $v1, . + 4 + (-0x33 << 2)
    ctx->pc = 0x280014u;
    {
        const bool branch_taken_0x280014 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x280014) {
            ctx->pc = 0x27FF4Cu;
            return;
        }
    }
    ctx->pc = 0x28001Cu;
}
