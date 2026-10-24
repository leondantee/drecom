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

// Function: entry_002f8724
// Address: 0x2f8724 - 0x2f8740
void entry_002f8724_0x2f8724(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002f8724_0x2f8724");
#endif

    ctx->pc = 0x2f8724u;

    // 0x2f8724: 0x8faa0048  lw          $t2, 0x48($sp)
    ctx->pc = 0x2f8724u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2f8728: 0x8d430000  lw          $v1, 0x0($t2)
    ctx->pc = 0x2f8728u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x2f872c: 0x38640010  xori        $a0, $v1, 0x10
    ctx->pc = 0x2f872cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)16);
    // 0x2f8730: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2f8730u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2f8734: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x2f8734u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x2f8738: 0x1000010d  b           . + 4 + (0x10D << 2)
    ctx->pc = 0x2F8738u;
    {
        const bool branch_taken_0x2f8738 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f8738) {
            ctx->pc = 0x2F8B70u;
            return;
        }
    }
    ctx->pc = 0x2F8740u;
}
