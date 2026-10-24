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

// Function: entry_001fe198
// Address: 0x1fe198 - 0x1fe1bc
void entry_001fe198_0x1fe198(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fe198_0x1fe198");
#endif

    ctx->pc = 0x1fe198u;

    // 0x1fe198: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1fe198u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fe19c: 0x90640348  lbu         $a0, 0x348($v1)
    ctx->pc = 0x1fe19cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 840)));
    // 0x1fe1a0: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x1fe1a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x1fe1a4: 0x70082b  sltu        $at, $v1, $s0
    ctx->pc = 0x1fe1a4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x1fe1a8: 0x1020ffeb  beqz        $at, . + 4 + (-0x15 << 2)
    ctx->pc = 0x1FE1A8u;
    {
        const bool branch_taken_0x1fe1a8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fe1a8) {
            ctx->pc = 0x1FE158u;
            return;
        }
    }
    ctx->pc = 0x1FE1B0u;
    // 0x1fe1b0: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x1fe1b0u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1fe1b4: 0x1000019a  b           . + 4 + (0x19A << 2)
    ctx->pc = 0x1FE1B4u;
    {
        const bool branch_taken_0x1fe1b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fe1b4) {
            ctx->pc = 0x1FE820u;
            return;
        }
    }
    ctx->pc = 0x1FE1BCu;
}
