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

// Function: entry_00170a48
// Address: 0x170a48 - 0x170a88
void entry_00170a48_0x170a48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00170a48_0x170a48");
#endif

    ctx->pc = 0x170a48u;

    // 0x170a48: 0x3203ffff  andi        $v1, $s0, 0xFFFF
    ctx->pc = 0x170a48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x170a4c: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x170a4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x170a50: 0x9422cc88  lhu         $v0, -0x3378($at)
    ctx->pc = 0x170a50u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x47CC88u));
    // 0x170a54: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x170a54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x170a58: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x170A58u;
    {
        const bool branch_taken_0x170a58 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x170a58) {
            ctx->pc = 0x170A88u;
            return;
        }
    }
    ctx->pc = 0x170A60u;
    // 0x170a60: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x170a60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x170a64: 0x9424cc8a  lhu         $a0, -0x3376($at)
    ctx->pc = 0x170a64u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)FAST_READ16(0x47CC8Au));
    // 0x170a68: 0x3082ffff  andi        $v0, $a0, 0xFFFF
    ctx->pc = 0x170a68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x170a6c: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x170a6cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x170a70: 0x3203ffff  andi        $v1, $s0, 0xFFFF
    ctx->pc = 0x170a70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x170a74: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x170a74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x170a78: 0x9422cc8e  lhu         $v0, -0x3372($at)
    ctx->pc = 0x170a78u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x47CC8Eu));
    // 0x170a7c: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x170a7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x170a80: 0x1062007b  beq         $v1, $v0, . + 4 + (0x7B << 2)
    ctx->pc = 0x170A80u;
    {
        const bool branch_taken_0x170a80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x170a80) {
            ctx->pc = 0x170C70u;
            return;
        }
    }
    ctx->pc = 0x170A88u;
}
