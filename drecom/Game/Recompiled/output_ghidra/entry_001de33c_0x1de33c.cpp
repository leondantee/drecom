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

// Function: entry_001de33c
// Address: 0x1de33c - 0x1de390
void entry_001de33c_0x1de33c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001de33c_0x1de33c");
#endif

    ctx->pc = 0x1de33cu;

    // 0x1de33c: 0x101c3c  dsll32      $v1, $s0, 16
    ctx->pc = 0x1de33cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 16));
    // 0x1de340: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1de340u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1de344: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1de344u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1de348: 0x9422cc88  lhu         $v0, -0x3378($at)
    ctx->pc = 0x1de348u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x47CC88u));
    // 0x1de34c: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1de34cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1de350: 0x1462000f  bne         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1DE350u;
    {
        const bool branch_taken_0x1de350 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1de350) {
            ctx->pc = 0x1DE390u;
            return;
        }
    }
    ctx->pc = 0x1DE358u;
    // 0x1de358: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1de358u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1de35c: 0x9422cc8a  lhu         $v0, -0x3376($at)
    ctx->pc = 0x1de35cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x47CC8Au));
    // 0x1de360: 0x2243c  dsll32      $a0, $v0, 16
    ctx->pc = 0x1de360u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1de364: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x1de364u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x1de368: 0x4143c  dsll32      $v0, $a0, 16
    ctx->pc = 0x1de368u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 16));
    // 0x1de36c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1de36cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1de370: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x1de370u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1de374: 0x101c3c  dsll32      $v1, $s0, 16
    ctx->pc = 0x1de374u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 16));
    // 0x1de378: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1de378u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1de37c: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1de37cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1de380: 0x9422cc8e  lhu         $v0, -0x3372($at)
    ctx->pc = 0x1de380u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x47CC8Eu));
    // 0x1de384: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1de384u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1de388: 0x1062006d  beq         $v1, $v0, . + 4 + (0x6D << 2)
    ctx->pc = 0x1DE388u;
    {
        const bool branch_taken_0x1de388 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1de388) {
            ctx->pc = 0x1DE540u;
            return;
        }
    }
    ctx->pc = 0x1DE390u;
}
