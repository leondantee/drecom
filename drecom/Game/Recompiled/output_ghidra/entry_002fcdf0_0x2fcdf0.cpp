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

// Function: entry_002fcdf0
// Address: 0x2fcdf0 - 0x2fce18
void entry_002fcdf0_0x2fcdf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002fcdf0_0x2fcdf0");
#endif

    ctx->pc = 0x2fcdf0u;

    // 0x2fcdf0: 0x8fa30178  lw          $v1, 0x178($sp)
    ctx->pc = 0x2fcdf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x2fcdf4: 0x8c650108  lw          $a1, 0x108($v1)
    ctx->pc = 0x2fcdf4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 264)));
    // 0x2fcdf8: 0x70a09e28  paddub      $s3, $a1, $zero
    ctx->pc = 0x2fcdf8u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x2fcdfc: 0x3c040800  lui         $a0, 0x800
    ctx->pc = 0x2fcdfcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)2048 << 16));
    // 0x2fce00: 0x34840011  ori         $a0, $a0, 0x11
    ctx->pc = 0x2fce00u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)17);
    // 0x2fce04: 0x12640004  beq         $s3, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2FCE04u;
    {
        const bool branch_taken_0x2fce04 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 4));
        if (branch_taken_0x2fce04) {
            ctx->pc = 0x2FCE18u;
            return;
        }
    }
    ctx->pc = 0x2FCE0Cu;
    // 0x2fce0c: 0x8e660b18  lw          $a2, 0xB18($s3)
    ctx->pc = 0x2fce0cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 2840)));
    // 0x2fce10: 0x34c30008  ori         $v1, $a2, 0x8
    ctx->pc = 0x2fce10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)8);
    // 0x2fce14: 0xae630b18  sw          $v1, 0xB18($s3)
    ctx->pc = 0x2fce14u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 2840), GPR_U32(ctx, 3));
    ctx->pc = 0x2fce18u;
}
