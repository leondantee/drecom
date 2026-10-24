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

// Function: entry_0018fcc8
// Address: 0x18fcc8 - 0x18fcf0
void entry_0018fcc8_0x18fcc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018fcc8_0x18fcc8");
#endif

    ctx->pc = 0x18fcc8u;

    // 0x18fcc8: 0x8fa20190  lw          $v0, 0x190($sp)
    ctx->pc = 0x18fcc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x18fccc: 0x94420118  lhu         $v0, 0x118($v0)
    ctx->pc = 0x18fcccu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 280)));
    // 0x18fcd0: 0x3053ffff  andi        $s3, $v0, 0xFFFF
    ctx->pc = 0x18fcd0u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x18fcd4: 0x32620020  andi        $v0, $s3, 0x20
    ctx->pc = 0x18fcd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)32);
    // 0x18fcd8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x18FCD8u;
    {
        const bool branch_taken_0x18fcd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18fcd8) {
            ctx->pc = 0x18FCF0u;
            return;
        }
    }
    ctx->pc = 0x18FCE0u;
    // 0x18fce0: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x18fce0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x18fce4: 0x8c30a600  lw          $s0, -0x5A00($at)
    ctx->pc = 0x18fce4u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x53A600u));
    // 0x18fce8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x18FCE8u;
    {
        const bool branch_taken_0x18fce8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18fce8) {
            ctx->pc = 0x18FCFCu;
            return;
        }
    }
    ctx->pc = 0x18FCF0u;
}
