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

// Function: entry_00114fd8
// Address: 0x114fd8 - 0x114ff4
void entry_00114fd8_0x114fd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00114fd8_0x114fd8");
#endif

    ctx->pc = 0x114fd8u;

    // 0x114fd8: 0x3c027f7f  lui         $v0, 0x7F7F
    ctx->pc = 0x114fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32639 << 16));
    // 0x114fdc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x114fdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x114fe0: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x114fe0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x114fe4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x114FE4u;
    {
        const bool branch_taken_0x114fe4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x114fe4) {
            ctx->pc = 0x114FF4u;
            return;
        }
    }
    ctx->pc = 0x114FECu;
    // 0x114fec: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x114FECu;
    {
        const bool branch_taken_0x114fec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x114FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114FECu;
        // 0x114ff0: 0x460c6001  sub.s       $f0, $f12, $f12 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[12], ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x114fec) {
            ctx->pc = 0x115074u;
            return;
        }
    }
    ctx->pc = 0x114FF4u;
}
