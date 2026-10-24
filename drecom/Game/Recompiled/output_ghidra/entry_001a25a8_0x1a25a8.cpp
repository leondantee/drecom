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

// Function: entry_001a25a8
// Address: 0x1a25a8 - 0x1a25d0
void entry_001a25a8_0x1a25a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a25a8_0x1a25a8");
#endif

    ctx->pc = 0x1a25a8u;

    // 0x1a25a8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a25a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1a25ac: 0x8c24011c  lw          $a0, 0x11C($at)
    ctx->pc = 0x1a25acu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D011Cu));
    // 0x1a25b0: 0x3c030200  lui         $v1, 0x200
    ctx->pc = 0x1a25b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)512 << 16));
    // 0x1a25b4: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1a25b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1a25b8: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A25B8u;
    {
        const bool branch_taken_0x1a25b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a25b8) {
            ctx->pc = 0x1A25D0u;
            return;
        }
    }
    ctx->pc = 0x1A25C0u;
    // 0x1a25c0: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1a25c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1a25c4: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x1a25c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1a25c8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1a25c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1a25cc: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x1a25ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
    ctx->pc = 0x1a25d0u;
}
