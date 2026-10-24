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

// Function: entry_001b46bc
// Address: 0x1b46bc - 0x1b46dc
void entry_001b46bc_0x1b46bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b46bc_0x1b46bc");
#endif

    ctx->pc = 0x1b46bcu;

    // 0x1b46bc: 0x92020012  lbu         $v0, 0x12($s0)
    ctx->pc = 0x1b46bcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x1b46c0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1b46c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1b46c4: 0x3042007f  andi        $v0, $v0, 0x7F
    ctx->pc = 0x1b46c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)127);
    // 0x1b46c8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B46C8u;
    {
        const bool branch_taken_0x1b46c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b46c8) {
            ctx->pc = 0x1B46DCu;
            return;
        }
    }
    ctx->pc = 0x1B46D0u;
    // 0x1b46d0: 0x36940009  ori         $s4, $s4, 0x9
    ctx->pc = 0x1b46d0u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)9);
    // 0x1b46d4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1B46D4u;
    {
        const bool branch_taken_0x1b46d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b46d4) {
            ctx->pc = 0x1B4708u;
            return;
        }
    }
    ctx->pc = 0x1B46DCu;
}
