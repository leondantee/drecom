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

// Function: entry_003209a4
// Address: 0x3209a4 - 0x3209bc
void entry_003209a4_0x3209a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003209a4_0x3209a4");
#endif

    ctx->pc = 0x3209a4u;

    // 0x3209a4: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x3209a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3209a8: 0x8c830364  lw          $v1, 0x364($a0)
    ctx->pc = 0x3209a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 868)));
    // 0x3209ac: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3209acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x3209b0: 0xac830364  sw          $v1, 0x364($a0)
    ctx->pc = 0x3209b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 868), GPR_U32(ctx, 3));
    // 0x3209b4: 0x10000102  b           . + 4 + (0x102 << 2)
    ctx->pc = 0x3209B4u;
    {
        const bool branch_taken_0x3209b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3209b4) {
            ctx->pc = 0x320DC0u;
            return;
        }
    }
    ctx->pc = 0x3209BCu;
}
