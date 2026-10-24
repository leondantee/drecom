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

// Function: entry_001763b0
// Address: 0x1763b0 - 0x176408
void entry_001763b0_0x1763b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001763b0_0x1763b0");
#endif

    ctx->pc = 0x1763b0u;

    // 0x1763b0: 0x10243c  dsll32      $a0, $s0, 16
    ctx->pc = 0x1763b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) << (32 + 16));
    // 0x1763b4: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x1763b4u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x1763b8: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1763b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1763bc: 0x9423cc88  lhu         $v1, -0x3378($at)
    ctx->pc = 0x1763bcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x47CC88u));
    // 0x1763c0: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1763c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1763c4: 0x14830010  bne         $a0, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x1763C4u;
    {
        const bool branch_taken_0x1763c4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1763c4) {
            ctx->pc = 0x176408u;
            return;
        }
    }
    ctx->pc = 0x1763CCu;
    // 0x1763cc: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1763ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1763d0: 0x307600ff  andi        $s6, $v1, 0xFF
    ctx->pc = 0x1763d0u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1763d4: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1763d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1763d8: 0x9423cc8a  lhu         $v1, -0x3376($at)
    ctx->pc = 0x1763d8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x47CC8Au));
    // 0x1763dc: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x1763dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1763e0: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1763e0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1763e4: 0x3843c  dsll32      $s0, $v1, 16
    ctx->pc = 0x1763e4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1763e8: 0x10843f  dsra32      $s0, $s0, 16
    ctx->pc = 0x1763e8u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 16));
    // 0x1763ec: 0x10243c  dsll32      $a0, $s0, 16
    ctx->pc = 0x1763ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) << (32 + 16));
    // 0x1763f0: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x1763f0u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x1763f4: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1763f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1763f8: 0x9423cc8e  lhu         $v1, -0x3372($at)
    ctx->pc = 0x1763f8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x47CC8Eu));
    // 0x1763fc: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1763fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x176400: 0x108300cb  beq         $a0, $v1, . + 4 + (0xCB << 2)
    ctx->pc = 0x176400u;
    {
        const bool branch_taken_0x176400 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x176400) {
            ctx->pc = 0x176730u;
            return;
        }
    }
    ctx->pc = 0x176408u;
}
