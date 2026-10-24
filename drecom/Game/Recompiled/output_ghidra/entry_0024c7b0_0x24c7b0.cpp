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

// Function: entry_0024c7b0
// Address: 0x24c7b0 - 0x24c7c4
void entry_0024c7b0_0x24c7b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0024c7b0_0x24c7b0");
#endif

    ctx->pc = 0x24c7b0u;

    // 0x24c7b0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x24c7b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x24c7b4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x24c7b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x24c7b8: 0xac64000c  sw          $a0, 0xC($v1)
    ctx->pc = 0x24c7b8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
    // 0x24c7bc: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x24C7BCu;
    {
        const bool branch_taken_0x24c7bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24c7bc) {
            ctx->pc = 0x24C818u;
            return;
        }
    }
    ctx->pc = 0x24C7C4u;
}
