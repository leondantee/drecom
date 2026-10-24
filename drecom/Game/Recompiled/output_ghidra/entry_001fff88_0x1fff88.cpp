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

// Function: entry_001fff88
// Address: 0x1fff88 - 0x1fffa0
void entry_001fff88_0x1fff88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fff88_0x1fff88");
#endif

    ctx->pc = 0x1fff88u;

    // 0x1fff88: 0x8fa500d8  lw          $a1, 0xD8($sp)
    ctx->pc = 0x1fff88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1fff8c: 0x90a402a8  lbu         $a0, 0x2A8($a1)
    ctx->pc = 0x1fff8cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 680)));
    // 0x1fff90: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x1fff90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x1fff94: 0x2c3302b  sltu        $a2, $s6, $v1
    ctx->pc = 0x1fff94u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1fff98: 0x14c0fd28  bnez        $a2, . + 4 + (-0x2D8 << 2)
    ctx->pc = 0x1FFF98u;
    {
        const bool branch_taken_0x1fff98 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fff98) {
            ctx->pc = 0x1FF43Cu;
            return;
        }
    }
    ctx->pc = 0x1FFFA0u;
}
