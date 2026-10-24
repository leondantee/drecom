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

// Function: entry_0018ef14
// Address: 0x18ef14 - 0x18ef3c
void entry_0018ef14_0x18ef14(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018ef14_0x18ef14");
#endif

    ctx->pc = 0x18ef14u;

    // 0x18ef14: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x18ef14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x18ef18: 0x94420340  lhu         $v0, 0x340($v0)
    ctx->pc = 0x18ef18u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 832)));
    // 0x18ef1c: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x18ef1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x18ef20: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x18ef20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x18ef24: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x18EF24u;
    {
        const bool branch_taken_0x18ef24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18ef24) {
            ctx->pc = 0x18EF3Cu;
            return;
        }
    }
    ctx->pc = 0x18EF2Cu;
    // 0x18ef2c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x18ef2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x18ef30: 0x8c420b24  lw          $v0, 0xB24($v0)
    ctx->pc = 0x18ef30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2852)));
    // 0x18ef34: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x18EF34u;
    {
        const bool branch_taken_0x18ef34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18ef34) {
            ctx->pc = 0x18EF94u;
            return;
        }
    }
    ctx->pc = 0x18EF3Cu;
}
