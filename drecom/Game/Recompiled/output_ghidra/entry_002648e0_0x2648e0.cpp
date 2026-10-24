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

// Function: entry_002648e0
// Address: 0x2648e0 - 0x264910
void entry_002648e0_0x2648e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002648e0_0x2648e0");
#endif

    ctx->pc = 0x2648e0u;

    // 0x2648e0: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x2648e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2648e4: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x2648e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x2648e8: 0x8c6400a0  lw          $a0, 0xA0($v1)
    ctx->pc = 0x2648e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 160)));
    // 0x2648ec: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2648ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2648f0: 0x14830007  bne         $a0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2648F0u;
    {
        const bool branch_taken_0x2648f0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2648f0) {
            ctx->pc = 0x264910u;
            return;
        }
    }
    ctx->pc = 0x2648F8u;
    // 0x2648f8: 0x8e24005c  lw          $a0, 0x5C($s1)
    ctx->pc = 0x2648f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
    // 0x2648fc: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x2648fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x264900: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x264900u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x264904: 0xac6400a0  sw          $a0, 0xA0($v1)
    ctx->pc = 0x264904u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 160), GPR_U32(ctx, 4));
    // 0x264908: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x264908u;
    {
        const bool branch_taken_0x264908 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x264908) {
            ctx->pc = 0x264928u;
            return;
        }
    }
    ctx->pc = 0x264910u;
}
