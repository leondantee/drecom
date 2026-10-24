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

// Function: entry_001bda20
// Address: 0x1bda20 - 0x1bda44
void entry_001bda20_0x1bda20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bda20_0x1bda20");
#endif

    ctx->pc = 0x1bda20u;

    // 0x1bda20: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1bda20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bda24: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x1bda24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1bda28: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1BDA28u;
    {
        const bool branch_taken_0x1bda28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bda28) {
            ctx->pc = 0x1BDA44u;
            return;
        }
    }
    ctx->pc = 0x1BDA30u;
    // 0x1bda30: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1bda30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bda34: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x1bda34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1bda38: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x1bda38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
    // 0x1bda3c: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x1bda3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1bda40: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x1bda40u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    ctx->pc = 0x1bda44u;
}
