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

// Function: entry_001cb6a4
// Address: 0x1cb6a4 - 0x1cb6cc
void entry_001cb6a4_0x1cb6a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cb6a4_0x1cb6a4");
#endif

    ctx->pc = 0x1cb6a4u;

    // 0x1cb6a4: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1cb6a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1cb6a8: 0x84831278  lh          $v1, 0x1278($a0)
    ctx->pc = 0x1cb6a8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4728)));
    // 0x1cb6ac: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1CB6ACu;
    {
        const bool branch_taken_0x1cb6ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cb6ac) {
            ctx->pc = 0x1CB6CCu;
            return;
        }
    }
    ctx->pc = 0x1CB6B4u;
    // 0x1cb6b4: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x1cb6b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1cb6b8: 0x84a41278  lh          $a0, 0x1278($a1)
    ctx->pc = 0x1cb6b8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4728)));
    // 0x1cb6bc: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x1cb6bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x1cb6c0: 0xa4a31278  sh          $v1, 0x1278($a1)
    ctx->pc = 0x1cb6c0u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x1cb6c4: 0x10000057  b           . + 4 + (0x57 << 2)
    ctx->pc = 0x1CB6C4u;
    {
        const bool branch_taken_0x1cb6c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cb6c4) {
            ctx->pc = 0x1CB824u;
            return;
        }
    }
    ctx->pc = 0x1CB6CCu;
}
