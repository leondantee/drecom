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

// Function: entry_001fe3a4
// Address: 0x1fe3a4 - 0x1fe3bc
void entry_001fe3a4_0x1fe3a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fe3a4_0x1fe3a4");
#endif

    ctx->pc = 0x1fe3a4u;

    // 0x1fe3a4: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1fe3a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fe3a8: 0x8c830364  lw          $v1, 0x364($a0)
    ctx->pc = 0x1fe3a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 868)));
    // 0x1fe3ac: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1fe3acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1fe3b0: 0xac830364  sw          $v1, 0x364($a0)
    ctx->pc = 0x1fe3b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 868), GPR_U32(ctx, 3));
    // 0x1fe3b4: 0x10000118  b           . + 4 + (0x118 << 2)
    ctx->pc = 0x1FE3B4u;
    {
        const bool branch_taken_0x1fe3b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fe3b4) {
            ctx->pc = 0x1FE818u;
            return;
        }
    }
    ctx->pc = 0x1FE3BCu;
}
