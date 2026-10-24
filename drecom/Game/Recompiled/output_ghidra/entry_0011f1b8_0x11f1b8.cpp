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

// Function: entry_0011f1b8
// Address: 0x11f1b8 - 0x11f1dc
void entry_0011f1b8_0x11f1b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011f1b8_0x11f1b8");
#endif

    ctx->pc = 0x11f1b8u;

label_11f1b8:
    // 0x11f1b8: 0x51878  dsll        $v1, $a1, 1
    ctx->pc = 0x11f1b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << 1);
    // 0x11f1bc: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x11f1bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x11f1c0: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x11f1c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f1c4: 0xc3102b  sltu        $v0, $a2, $v1
    ctx->pc = 0x11f1c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x11f1c8: 0x0  nop
    ctx->pc = 0x11f1c8u;
    // NOP
    // 0x11f1cc: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x11F1CCu;
    {
        const bool branch_taken_0x11f1cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11f1cc) {
            ctx->pc = 0x11F1B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11f1b8;
        }
    }
    ctx->pc = 0x11F1D4u;
    // 0x11f1d4: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x11f1d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x11f1d8: 0xffa30010  sd          $v1, 0x10($sp)
    ctx->pc = 0x11f1d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 3));
    ctx->pc = 0x11f1dcu;
}
