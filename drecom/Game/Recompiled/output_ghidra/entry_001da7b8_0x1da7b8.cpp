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

// Function: entry_001da7b8
// Address: 0x1da7b8 - 0x1da7e0
void entry_001da7b8_0x1da7b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001da7b8_0x1da7b8");
#endif

    ctx->pc = 0x1da7b8u;

    // 0x1da7b8: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x1da7b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1da7bc: 0x90420003  lbu         $v0, 0x3($v0)
    ctx->pc = 0x1da7bcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
    // 0x1da7c0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1da7c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1da7c4: 0x30420006  andi        $v0, $v0, 0x6
    ctx->pc = 0x1da7c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)6);
    // 0x1da7c8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1DA7C8u;
    {
        const bool branch_taken_0x1da7c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1da7c8) {
            ctx->pc = 0x1DA7E0u;
            return;
        }
    }
    ctx->pc = 0x1DA7D0u;
    // 0x1da7d0: 0x2402021c  addiu       $v0, $zero, 0x21C
    ctx->pc = 0x1da7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 540));
    // 0x1da7d4: 0xfe020000  sd          $v0, 0x0($s0)
    ctx->pc = 0x1da7d4u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
    // 0x1da7d8: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x1DA7D8u;
    {
        const bool branch_taken_0x1da7d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1da7d8) {
            ctx->pc = 0x1DA850u;
            return;
        }
    }
    ctx->pc = 0x1DA7E0u;
}
