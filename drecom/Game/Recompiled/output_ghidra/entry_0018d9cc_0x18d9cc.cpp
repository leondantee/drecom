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

// Function: entry_0018d9cc
// Address: 0x18d9cc - 0x18d9f0
void entry_0018d9cc_0x18d9cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018d9cc_0x18d9cc");
#endif

    ctx->pc = 0x18d9ccu;

    // 0x18d9cc: 0x96020340  lhu         $v0, 0x340($s0)
    ctx->pc = 0x18d9ccu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 832)));
    // 0x18d9d0: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x18d9d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x18d9d4: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x18d9d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x18d9d8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x18D9D8u;
    {
        const bool branch_taken_0x18d9d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18d9d8) {
            ctx->pc = 0x18D9F0u;
            return;
        }
    }
    ctx->pc = 0x18D9E0u;
    // 0x18d9e0: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x18d9e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x18d9e4: 0x34420011  ori         $v0, $v0, 0x11
    ctx->pc = 0x18d9e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)17);
    // 0x18d9e8: 0x10000095  b           . + 4 + (0x95 << 2)
    ctx->pc = 0x18D9E8u;
    {
        const bool branch_taken_0x18d9e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18d9e8) {
            ctx->pc = 0x18DC40u;
            return;
        }
    }
    ctx->pc = 0x18D9F0u;
}
