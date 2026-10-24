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

// Function: entry_0010b788
// Address: 0x10b788 - 0x10b7a8
void entry_0010b788_0x10b788(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010b788_0x10b788");
#endif

    ctx->pc = 0x10b788u;

label_10b788:
    // 0x10b788: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x10b788u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x10b78c: 0x304200f0  andi        $v0, $v0, 0xF0
    ctx->pc = 0x10b78cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)240);
    // 0x10b790: 0x0  nop
    ctx->pc = 0x10b790u;
    // NOP
    // 0x10b794: 0x0  nop
    ctx->pc = 0x10b794u;
    // NOP
    // 0x10b798: 0x0  nop
    ctx->pc = 0x10b798u;
    // NOP
    // 0x10b79c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x10B79Cu;
    {
        const bool branch_taken_0x10b79c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10b79c) {
            ctx->pc = 0x10B788u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10b788;
        }
    }
    ctx->pc = 0x10B7A4u;
    // 0x10b7a4: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x10b7a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    ctx->pc = 0x10b7a8u;
}
