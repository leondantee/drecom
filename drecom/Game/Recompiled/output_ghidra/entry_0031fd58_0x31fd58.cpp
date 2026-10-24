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

// Function: entry_0031fd58
// Address: 0x31fd58 - 0x31fd70
void entry_0031fd58_0x31fd58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0031fd58_0x31fd58");
#endif

    ctx->pc = 0x31fd58u;

    // 0x31fd58: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x31fd58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x31fd5c: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x31fd5cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x31fd60: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x31fd60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31fd64: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x31fd64u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x31fd68: 0x10000059  b           . + 4 + (0x59 << 2)
    ctx->pc = 0x31FD68u;
    {
        const bool branch_taken_0x31fd68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31fd68) {
            ctx->pc = 0x31FED0u;
            return;
        }
    }
    ctx->pc = 0x31FD70u;
}
