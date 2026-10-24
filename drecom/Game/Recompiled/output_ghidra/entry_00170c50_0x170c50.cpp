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

// Function: entry_00170c50
// Address: 0x170c50 - 0x170c70
void entry_00170c50_0x170c50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00170c50_0x170c50");
#endif

    ctx->pc = 0x170c50u;

    // 0x170c50: 0x3205ffff  andi        $a1, $s0, 0xFFFF
    ctx->pc = 0x170c50u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x170c54: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x170c54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x170c58: 0x9426cc8e  lhu         $a2, -0x3372($at)
    ctx->pc = 0x170c58u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)FAST_READ16(0x47CC8Eu));
    // 0x170c5c: 0x30c2ffff  andi        $v0, $a2, 0xFFFF
    ctx->pc = 0x170c5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x170c60: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x170c60u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x170c64: 0x1440ff78  bnez        $v0, . + 4 + (-0x88 << 2)
    ctx->pc = 0x170C64u;
    {
        const bool branch_taken_0x170c64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x170c64) {
            ctx->pc = 0x170A48u;
            return;
        }
    }
    ctx->pc = 0x170C6Cu;
    // 0x170c6c: 0x0  nop
    ctx->pc = 0x170c6cu;
    // NOP
    ctx->pc = 0x170c70u;
}
