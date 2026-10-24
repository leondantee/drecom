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

// Function: entry_0028f178
// Address: 0x28f178 - 0x28f1c4
void entry_0028f178_0x28f178(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0028f178_0x28f178");
#endif

    ctx->pc = 0x28f178u;

    // 0x28f178: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x28f178u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x28f17c: 0x942300c8  lhu         $v1, 0xC8($at)
    ctx->pc = 0x28f17cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x5D00C8u));
    // 0x28f180: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x28f180u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x28f184: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x28f184u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x28f188: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x28F188u;
    {
        const bool branch_taken_0x28f188 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x28f188) {
            ctx->pc = 0x28F1C4u;
            return;
        }
    }
    ctx->pc = 0x28F190u;
    // 0x28f190: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x28f190u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x28f194: 0x942300dc  lhu         $v1, 0xDC($at)
    ctx->pc = 0x28f194u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x5D00DCu));
    // 0x28f198: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x28f198u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x28f19c: 0x30634000  andi        $v1, $v1, 0x4000
    ctx->pc = 0x28f19cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
    // 0x28f1a0: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x28F1A0u;
    {
        const bool branch_taken_0x28f1a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x28f1a0) {
            ctx->pc = 0x28F1C4u;
            return;
        }
    }
    ctx->pc = 0x28F1A8u;
    // 0x28f1a8: 0x92035dfc  lbu         $v1, 0x5DFC($s0)
    ctx->pc = 0x28f1a8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 24060)));
    // 0x28f1ac: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x28f1acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x28f1b0: 0x18600004  blez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x28F1B0u;
    {
        const bool branch_taken_0x28f1b0 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x28f1b0) {
            ctx->pc = 0x28F1C4u;
            return;
        }
    }
    ctx->pc = 0x28F1B8u;
    // 0x28f1b8: 0x92035dfc  lbu         $v1, 0x5DFC($s0)
    ctx->pc = 0x28f1b8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 24060)));
    // 0x28f1bc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x28f1bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x28f1c0: 0xa2035dfc  sb          $v1, 0x5DFC($s0)
    ctx->pc = 0x28f1c0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 24060), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x28f1c4u;
}
