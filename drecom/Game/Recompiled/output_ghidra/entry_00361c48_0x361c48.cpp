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

// Function: entry_00361c48
// Address: 0x361c48 - 0x361c6c
void entry_00361c48_0x361c48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00361c48_0x361c48");
#endif

    ctx->pc = 0x361c48u;

    // 0x361c48: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x361c48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x361c4c: 0x9022e651  lbu         $v0, -0x19AF($at)
    ctx->pc = 0x361c4cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x61E651u));
    // 0x361c50: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x361c50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x361c54: 0x262102b  sltu        $v0, $s3, $v0
    ctx->pc = 0x361c54u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x361c58: 0x1440ff84  bnez        $v0, . + 4 + (-0x7C << 2)
    ctx->pc = 0x361C58u;
    {
        const bool branch_taken_0x361c58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x361c58) {
            ctx->pc = 0x361A6Cu;
            return;
        }
    }
    ctx->pc = 0x361C60u;
    // 0x361c60: 0x7000ae28  paddub      $s5, $zero, $zero
    ctx->pc = 0x361c60u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x361c64: 0x10000088  b           . + 4 + (0x88 << 2)
    ctx->pc = 0x361C64u;
    {
        const bool branch_taken_0x361c64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x361c64) {
            ctx->pc = 0x361E88u;
            return;
        }
    }
    ctx->pc = 0x361C6Cu;
}
