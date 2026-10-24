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

// Function: entry_001ddc48
// Address: 0x1ddc48 - 0x1ddca0
void entry_001ddc48_0x1ddc48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ddc48_0x1ddc48");
#endif

    ctx->pc = 0x1ddc48u;

    // 0x1ddc48: 0x10243c  dsll32      $a0, $s0, 16
    ctx->pc = 0x1ddc48u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) << (32 + 16));
    // 0x1ddc4c: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x1ddc4cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x1ddc50: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1ddc50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1ddc54: 0x9422cc88  lhu         $v0, -0x3378($at)
    ctx->pc = 0x1ddc54u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x47CC88u));
    // 0x1ddc58: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x1ddc58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1ddc5c: 0x14830010  bne         $a0, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x1DDC5Cu;
    {
        const bool branch_taken_0x1ddc5c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1ddc5c) {
            ctx->pc = 0x1DDCA0u;
            return;
        }
    }
    ctx->pc = 0x1DDC64u;
    // 0x1ddc64: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1ddc64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1ddc68: 0x9422cc8a  lhu         $v0, -0x3376($at)
    ctx->pc = 0x1ddc68u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x47CC8Au));
    // 0x1ddc6c: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1ddc6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1ddc70: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1ddc70u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1ddc74: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1ddc74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1ddc78: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1ddc78u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1ddc7c: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x1ddc7cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1ddc80: 0x10243c  dsll32      $a0, $s0, 16
    ctx->pc = 0x1ddc80u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) << (32 + 16));
    // 0x1ddc84: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x1ddc84u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x1ddc88: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1ddc88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1ddc8c: 0x9422cc8e  lhu         $v0, -0x3372($at)
    ctx->pc = 0x1ddc8cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x47CC8Eu));
    // 0x1ddc90: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x1ddc90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1ddc94: 0x10830094  beq         $a0, $v1, . + 4 + (0x94 << 2)
    ctx->pc = 0x1DDC94u;
    {
        const bool branch_taken_0x1ddc94 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1ddc94) {
            ctx->pc = 0x1DDEE8u;
            return;
        }
    }
    ctx->pc = 0x1DDC9Cu;
    // 0x1ddc9c: 0x0  nop
    ctx->pc = 0x1ddc9cu;
    // NOP
    ctx->pc = 0x1ddca0u;
}
