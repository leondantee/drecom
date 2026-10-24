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

// Function: entry_001d0a78
// Address: 0x1d0a78 - 0x1d0aa0
void entry_001d0a78_0x1d0a78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d0a78_0x1d0a78");
#endif

    ctx->pc = 0x1d0a78u;

    // 0x1d0a78: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1d0a78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d0a7c: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x1d0a7cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x1d0a80: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1d0a80u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1d0a84: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1d0a84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d0a88: 0x10830014  beq         $a0, $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x1D0A88u;
    {
        const bool branch_taken_0x1d0a88 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1d0a88) {
            ctx->pc = 0x1D0ADCu;
            return;
        }
    }
    ctx->pc = 0x1D0A90u;
    // 0x1d0a90: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D0A90u;
    {
        const bool branch_taken_0x1d0a90 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d0a90) {
            ctx->pc = 0x1D0AA0u;
            return;
        }
    }
    ctx->pc = 0x1D0A98u;
    // 0x1d0a98: 0x10000053  b           . + 4 + (0x53 << 2)
    ctx->pc = 0x1D0A98u;
    {
        const bool branch_taken_0x1d0a98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d0a98) {
            ctx->pc = 0x1D0BE8u;
            return;
        }
    }
    ctx->pc = 0x1D0AA0u;
}
