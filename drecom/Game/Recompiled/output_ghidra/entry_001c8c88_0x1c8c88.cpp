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

// Function: entry_001c8c88
// Address: 0x1c8c88 - 0x1c8ccc
void entry_001c8c88_0x1c8c88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c8c88_0x1c8c88");
#endif

    ctx->pc = 0x1c8c88u;

    // 0x1c8c88: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x1c8c88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c8c8c: 0x8c421b60  lw          $v0, 0x1B60($v0)
    ctx->pc = 0x1c8c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7008)));
    // 0x1c8c90: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1C8C90u;
    {
        const bool branch_taken_0x1c8c90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c8c90) {
            ctx->pc = 0x1C8CCCu;
            return;
        }
    }
    ctx->pc = 0x1C8C98u;
    // 0x1c8c98: 0x8fa50088  lw          $a1, 0x88($sp)
    ctx->pc = 0x1c8c98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c8c9c: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x1c8c9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1c8ca0: 0x3c038040  lui         $v1, 0x8040
    ctx->pc = 0x1c8ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32832 << 16));
    // 0x1c8ca4: 0x831025  or          $v0, $a0, $v1
    ctx->pc = 0x1c8ca4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1c8ca8: 0xaca20008  sw          $v0, 0x8($a1)
    ctx->pc = 0x1c8ca8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
    // 0x1c8cac: 0x8fa50088  lw          $a1, 0x88($sp)
    ctx->pc = 0x1c8cacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c8cb0: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x1c8cb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1c8cb4: 0x3c02fdff  lui         $v0, 0xFDFF
    ctx->pc = 0x1c8cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65023 << 16));
    // 0x1c8cb8: 0x3443ffff  ori         $v1, $v0, 0xFFFF
    ctx->pc = 0x1c8cb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1c8cbc: 0x831024  and         $v0, $a0, $v1
    ctx->pc = 0x1c8cbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1c8cc0: 0xaca20008  sw          $v0, 0x8($a1)
    ctx->pc = 0x1c8cc0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
    // 0x1c8cc4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1C8CC4u;
    {
        const bool branch_taken_0x1c8cc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c8cc4) {
            ctx->pc = 0x1C8CE4u;
            return;
        }
    }
    ctx->pc = 0x1C8CCCu;
}
