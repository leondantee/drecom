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

// Function: entry_0018da90
// Address: 0x18da90 - 0x18dac0
void entry_0018da90_0x18da90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018da90_0x18da90");
#endif

    ctx->pc = 0x18da90u;

    // 0x18da90: 0x96020340  lhu         $v0, 0x340($s0)
    ctx->pc = 0x18da90u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 832)));
    // 0x18da94: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x18da94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x18da98: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x18da98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x18da9c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x18DA9Cu;
    {
        const bool branch_taken_0x18da9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18da9c) {
            ctx->pc = 0x18DAC0u;
            return;
        }
    }
    ctx->pc = 0x18DAA4u;
    // 0x18daa4: 0x2402ff38  addiu       $v0, $zero, -0xC8
    ctx->pc = 0x18daa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967096));
    // 0x18daa8: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x18daa8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x18daac: 0x24020368  addiu       $v0, $zero, 0x368
    ctx->pc = 0x18daacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 872));
    // 0x18dab0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x18dab0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x18dab4: 0xfe020a98  sd          $v0, 0xA98($s0)
    ctx->pc = 0x18dab4u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 2712), GPR_U64(ctx, 2));
    // 0x18dab8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x18DAB8u;
    {
        const bool branch_taken_0x18dab8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18dab8) {
            ctx->pc = 0x18DAD4u;
            return;
        }
    }
    ctx->pc = 0x18DAC0u;
}
