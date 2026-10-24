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

// Function: entry_00184be8
// Address: 0x184be8 - 0x184c00
void entry_00184be8_0x184be8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00184be8_0x184be8");
#endif

    ctx->pc = 0x184be8u;

    // 0x184be8: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x184be8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x184bec: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x184becu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x184bf0: 0x26030030  addiu       $v1, $s0, 0x30
    ctx->pc = 0x184bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x184bf4: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x184bf4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x184bf8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x184BF8u;
    {
        const bool branch_taken_0x184bf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x184bf8) {
            ctx->pc = 0x184C18u;
            return;
        }
    }
    ctx->pc = 0x184C00u;
}
