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

// Function: entry_00170324
// Address: 0x170324 - 0x170360
void entry_00170324_0x170324(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00170324_0x170324");
#endif

    ctx->pc = 0x170324u;

    // 0x170324: 0x3202ffff  andi        $v0, $s0, 0xFFFF
    ctx->pc = 0x170324u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x170328: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x170328u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x17032c: 0x9424cc88  lhu         $a0, -0x3378($at)
    ctx->pc = 0x17032cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)FAST_READ16(0x47CC88u));
    // 0x170330: 0x3085ffff  andi        $a1, $a0, 0xFFFF
    ctx->pc = 0x170330u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x170334: 0x1445000a  bne         $v0, $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x170334u;
    {
        const bool branch_taken_0x170334 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x170334) {
            ctx->pc = 0x170360u;
            return;
        }
    }
    ctx->pc = 0x17033Cu;
    // 0x17033c: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x17033cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x170340: 0x9426cc8a  lhu         $a2, -0x3376($at)
    ctx->pc = 0x170340u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)FAST_READ16(0x47CC8Au));
    // 0x170344: 0x30d0ffff  andi        $s0, $a2, 0xFFFF
    ctx->pc = 0x170344u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x170348: 0x3202ffff  andi        $v0, $s0, 0xFFFF
    ctx->pc = 0x170348u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x17034c: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x17034cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x170350: 0x9424cc8e  lhu         $a0, -0x3372($at)
    ctx->pc = 0x170350u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)FAST_READ16(0x47CC8Eu));
    // 0x170354: 0x3085ffff  andi        $a1, $a0, 0xFFFF
    ctx->pc = 0x170354u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x170358: 0x10450077  beq         $v0, $a1, . + 4 + (0x77 << 2)
    ctx->pc = 0x170358u;
    {
        const bool branch_taken_0x170358 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x170358) {
            ctx->pc = 0x170538u;
            return;
        }
    }
    ctx->pc = 0x170360u;
}
