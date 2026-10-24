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

// Function: entry_00190784
// Address: 0x190784 - 0x190790
void entry_00190784_0x190784(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00190784_0x190784");
#endif

    ctx->pc = 0x190784u;

    // 0x190784: 0x139a02  srl         $s3, $s3, 8
    ctx->pc = 0x190784u;
    SET_GPR_S32(ctx, 19, (int32_t)SRL32(GPR_U32(ctx, 19), 8));
    // 0x190788: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x190788u;
    {
        const bool branch_taken_0x190788 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x190788) {
            ctx->pc = 0x1907B8u;
            return;
        }
    }
    ctx->pc = 0x190790u;
}
