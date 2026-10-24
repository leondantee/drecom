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

// Function: entry_00307900
// Address: 0x307900 - 0x307930
void entry_00307900_0x307900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00307900_0x307900");
#endif

    ctx->pc = 0x307900u;

    // 0x307900: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x307900u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x307904: 0x946311f6  lhu         $v1, 0x11F6($v1)
    ctx->pc = 0x307904u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4598)));
    // 0x307908: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x307908u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x30790c: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x30790cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x307910: 0x10830007  beq         $a0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x307910u;
    {
        const bool branch_taken_0x307910 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x307910) {
            ctx->pc = 0x307930u;
            return;
        }
    }
    ctx->pc = 0x307918u;
    // 0x307918: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x307918u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x30791c: 0x946511f6  lhu         $a1, 0x11F6($v1)
    ctx->pc = 0x30791cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4598)));
    // 0x307920: 0x30a4ffff  andi        $a0, $a1, 0xFFFF
    ctx->pc = 0x307920u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x307924: 0x2403001f  addiu       $v1, $zero, 0x1F
    ctx->pc = 0x307924u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x307928: 0x14830075  bne         $a0, $v1, . + 4 + (0x75 << 2)
    ctx->pc = 0x307928u;
    {
        const bool branch_taken_0x307928 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x307928) {
            ctx->pc = 0x307B00u;
            return;
        }
    }
    ctx->pc = 0x307930u;
}
