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

// Function: entry_00286948
// Address: 0x286948 - 0x28695c
void entry_00286948_0x286948(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00286948_0x286948");
#endif

    ctx->pc = 0x286948u;

    // 0x286948: 0x2ae60004  slti        $a2, $s7, 0x4
    ctx->pc = 0x286948u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 23) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x28694c: 0x14c0ffea  bnez        $a2, . + 4 + (-0x16 << 2)
    ctx->pc = 0x28694Cu;
    {
        const bool branch_taken_0x28694c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x28694c) {
            ctx->pc = 0x2868F8u;
            return;
        }
    }
    ctx->pc = 0x286954u;
    // 0x286954: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x286954u;
    {
        const bool branch_taken_0x286954 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x286954) {
            ctx->pc = 0x2869C8u;
            return;
        }
    }
    ctx->pc = 0x28695Cu;
}
