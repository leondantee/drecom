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

// Function: entry_0024bff8
// Address: 0x24bff8 - 0x24c008
void entry_0024bff8_0x24bff8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0024bff8_0x24bff8");
#endif

    ctx->pc = 0x24bff8u;

    // 0x24bff8: 0x2e23000a  sltiu       $v1, $s1, 0xA
    ctx->pc = 0x24bff8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x24bffc: 0x1460ff9b  bnez        $v1, . + 4 + (-0x65 << 2)
    ctx->pc = 0x24BFFCu;
    {
        const bool branch_taken_0x24bffc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x24bffc) {
            ctx->pc = 0x24BE6Cu;
            return;
        }
    }
    ctx->pc = 0x24C004u;
    // 0x24c004: 0x0  nop
    ctx->pc = 0x24c004u;
    // NOP
    ctx->pc = 0x24c008u;
}
