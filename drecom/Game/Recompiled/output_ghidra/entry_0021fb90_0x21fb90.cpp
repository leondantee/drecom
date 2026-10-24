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

// Function: entry_0021fb90
// Address: 0x21fb90 - 0x21fb9c
void entry_0021fb90_0x21fb90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021fb90_0x21fb90");
#endif

    ctx->pc = 0x21fb90u;

    // 0x21fb90: 0x24170004  addiu       $s7, $zero, 0x4
    ctx->pc = 0x21fb90u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x21fb94: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x21FB94u;
    {
        const bool branch_taken_0x21fb94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21fb94) {
            ctx->pc = 0x21FBB8u;
            return;
        }
    }
    ctx->pc = 0x21FB9Cu;
}
