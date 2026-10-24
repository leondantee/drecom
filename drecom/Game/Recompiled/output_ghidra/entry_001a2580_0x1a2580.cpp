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

// Function: entry_001a2580
// Address: 0x1a2580 - 0x1a25a8
void entry_001a2580_0x1a2580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a2580_0x1a2580");
#endif

    ctx->pc = 0x1a2580u;

    // 0x1a2580: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a2580u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1a2584: 0x8c24011c  lw          $a0, 0x11C($at)
    ctx->pc = 0x1a2584u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D011Cu));
    // 0x1a2588: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x1a2588u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
    // 0x1a258c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1a258cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1a2590: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A2590u;
    {
        const bool branch_taken_0x1a2590 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a2590) {
            ctx->pc = 0x1A25A8u;
            return;
        }
    }
    ctx->pc = 0x1A2598u;
    // 0x1a2598: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1a2598u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1a259c: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x1a259cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1a25a0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1a25a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1a25a4: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x1a25a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
    ctx->pc = 0x1a25a8u;
}
