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

// Function: entry_0024c04c
// Address: 0x24c04c - 0x24c060
void entry_0024c04c_0x24c04c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0024c04c_0x24c04c");
#endif

    ctx->pc = 0x24c04cu;

    // 0x24c04c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x24c04cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x24c050: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x24c050u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x24c054: 0xac64000c  sw          $a0, 0xC($v1)
    ctx->pc = 0x24c054u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
    // 0x24c058: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x24C058u;
    {
        const bool branch_taken_0x24c058 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24c058) {
            ctx->pc = 0x24C0B4u;
            return;
        }
    }
    ctx->pc = 0x24C060u;
}
