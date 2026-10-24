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

// Function: entry_001b1a20
// Address: 0x1b1a20 - 0x1b1a40
void entry_001b1a20_0x1b1a20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b1a20_0x1b1a20");
#endif

    ctx->pc = 0x1b1a20u;

    // 0x1b1a20: 0x7000a628  paddub      $s4, $zero, $zero
    ctx->pc = 0x1b1a20u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1b1a24: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1b1a24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b1a28: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x1b1a28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x1b1a2c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B1A2Cu;
    {
        const bool branch_taken_0x1b1a2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b1a2c) {
            ctx->pc = 0x1B1A40u;
            return;
        }
    }
    ctx->pc = 0x1B1A34u;
    // 0x1b1a34: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1b1a34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1b1a38: 0x8c34bb40  lw          $s4, -0x44C0($at)
    ctx->pc = 0x1b1a38u;
    SET_GPR_S32(ctx, 20, (int32_t)FAST_READ32(0x47BB40u));
    // 0x1b1a3c: 0x0  nop
    ctx->pc = 0x1b1a3cu;
    // NOP
    ctx->pc = 0x1b1a40u;
}
