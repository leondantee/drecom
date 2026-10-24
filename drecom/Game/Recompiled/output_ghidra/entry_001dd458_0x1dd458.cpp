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

// Function: entry_001dd458
// Address: 0x1dd458 - 0x1dd498
void entry_001dd458_0x1dd458(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001dd458_0x1dd458");
#endif

    ctx->pc = 0x1dd458u;

    // 0x1dd458: 0x3204ffff  andi        $a0, $s0, 0xFFFF
    ctx->pc = 0x1dd458u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x1dd45c: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1dd45cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1dd460: 0x9422cc88  lhu         $v0, -0x3378($at)
    ctx->pc = 0x1dd460u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x47CC88u));
    // 0x1dd464: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x1dd464u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1dd468: 0x1483000b  bne         $a0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x1DD468u;
    {
        const bool branch_taken_0x1dd468 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1dd468) {
            ctx->pc = 0x1DD498u;
            return;
        }
    }
    ctx->pc = 0x1DD470u;
    // 0x1dd470: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1dd470u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1dd474: 0x9422cc8a  lhu         $v0, -0x3376($at)
    ctx->pc = 0x1dd474u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x47CC8Au));
    // 0x1dd478: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1dd478u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1dd47c: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x1dd47cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1dd480: 0x3204ffff  andi        $a0, $s0, 0xFFFF
    ctx->pc = 0x1dd480u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x1dd484: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1dd484u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1dd488: 0x9423cc8e  lhu         $v1, -0x3372($at)
    ctx->pc = 0x1dd488u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x47CC8Eu));
    // 0x1dd48c: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x1dd48cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1dd490: 0x1082005f  beq         $a0, $v0, . + 4 + (0x5F << 2)
    ctx->pc = 0x1DD490u;
    {
        const bool branch_taken_0x1dd490 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x1dd490) {
            ctx->pc = 0x1DD610u;
            return;
        }
    }
    ctx->pc = 0x1DD498u;
}
