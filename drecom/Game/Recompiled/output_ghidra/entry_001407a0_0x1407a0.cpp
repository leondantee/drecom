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

// Function: entry_001407a0
// Address: 0x1407a0 - 0x1407b8
void entry_001407a0_0x1407a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001407a0_0x1407a0");
#endif

    ctx->pc = 0x1407a0u;

    // 0x1407a0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1407a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1407a4: 0x90420006  lbu         $v0, 0x6($v0)
    ctx->pc = 0x1407a4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x1407a8: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1407a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1407ac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1407acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1407b0: 0x1062fff8  beq         $v1, $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1407B0u;
    {
        const bool branch_taken_0x1407b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1407b0) {
            ctx->pc = 0x140794u;
            return;
        }
    }
    ctx->pc = 0x1407B8u;
}
