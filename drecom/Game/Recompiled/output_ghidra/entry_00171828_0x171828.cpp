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

// Function: entry_00171828
// Address: 0x171828 - 0x171868
void entry_00171828_0x171828(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00171828_0x171828");
#endif

    ctx->pc = 0x171828u;

    // 0x171828: 0x3204ffff  andi        $a0, $s0, 0xFFFF
    ctx->pc = 0x171828u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x17182c: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x17182cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x171830: 0x9423cc88  lhu         $v1, -0x3378($at)
    ctx->pc = 0x171830u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x47CC88u));
    // 0x171834: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x171834u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x171838: 0x1483000b  bne         $a0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x171838u;
    {
        const bool branch_taken_0x171838 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x171838) {
            ctx->pc = 0x171868u;
            return;
        }
    }
    ctx->pc = 0x171840u;
    // 0x171840: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x171840u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x171844: 0x9423cc8a  lhu         $v1, -0x3376($at)
    ctx->pc = 0x171844u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x47CC8Au));
    // 0x171848: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x171848u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x17184c: 0x70608628  paddub      $s0, $v1, $zero
    ctx->pc = 0x17184cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x171850: 0x3204ffff  andi        $a0, $s0, 0xFFFF
    ctx->pc = 0x171850u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x171854: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x171854u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x171858: 0x9423cc8e  lhu         $v1, -0x3372($at)
    ctx->pc = 0x171858u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x47CC8Eu));
    // 0x17185c: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x17185cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x171860: 0x10830077  beq         $a0, $v1, . + 4 + (0x77 << 2)
    ctx->pc = 0x171860u;
    {
        const bool branch_taken_0x171860 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x171860) {
            ctx->pc = 0x171A40u;
            return;
        }
    }
    ctx->pc = 0x171868u;
}
