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

// Function: entry_0011fdc0
// Address: 0x11fdc0 - 0x11fde4
void entry_0011fdc0_0x11fdc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011fdc0_0x11fdc0");
#endif

    ctx->pc = 0x11fdc0u;

label_11fdc0:
    // 0x11fdc0: 0x61840  sll         $v1, $a2, 1
    ctx->pc = 0x11fdc0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x11fdc4: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x11fdc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x11fdc8: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x11fdc8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11fdcc: 0xa3102b  sltu        $v0, $a1, $v1
    ctx->pc = 0x11fdccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x11fdd0: 0x0  nop
    ctx->pc = 0x11fdd0u;
    // NOP
    // 0x11fdd4: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x11FDD4u;
    {
        const bool branch_taken_0x11fdd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11fdd4) {
            ctx->pc = 0x11FDC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11fdc0;
        }
    }
    ctx->pc = 0x11FDDCu;
    // 0x11fddc: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x11fddcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x11fde0: 0xafa3000c  sw          $v1, 0xC($sp)
    ctx->pc = 0x11fde0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 3));
    ctx->pc = 0x11fde4u;
}
