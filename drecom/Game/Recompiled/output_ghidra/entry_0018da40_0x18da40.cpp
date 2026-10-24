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

// Function: entry_0018da40
// Address: 0x18da40 - 0x18da64
void entry_0018da40_0x18da40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018da40_0x18da40");
#endif

    ctx->pc = 0x18da40u;

    // 0x18da40: 0x96020340  lhu         $v0, 0x340($s0)
    ctx->pc = 0x18da40u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 832)));
    // 0x18da44: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x18da44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x18da48: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x18da48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x18da4c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x18DA4Cu;
    {
        const bool branch_taken_0x18da4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18da4c) {
            ctx->pc = 0x18DA64u;
            return;
        }
    }
    ctx->pc = 0x18DA54u;
    // 0x18da54: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x18da54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x18da58: 0x34420011  ori         $v0, $v0, 0x11
    ctx->pc = 0x18da58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)17);
    // 0x18da5c: 0x10000078  b           . + 4 + (0x78 << 2)
    ctx->pc = 0x18DA5Cu;
    {
        const bool branch_taken_0x18da5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18da5c) {
            ctx->pc = 0x18DC40u;
            return;
        }
    }
    ctx->pc = 0x18DA64u;
}
