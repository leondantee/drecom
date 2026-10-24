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

// Function: entry_001cffe8
// Address: 0x1cffe8 - 0x1d0010
void entry_001cffe8_0x1cffe8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cffe8_0x1cffe8");
#endif

    ctx->pc = 0x1cffe8u;

    // 0x1cffe8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1cffe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1cffec: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x1cffecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x1cfff0: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1cfff0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1cfff4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1cfff4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cfff8: 0x1083001b  beq         $a0, $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x1CFFF8u;
    {
        const bool branch_taken_0x1cfff8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1cfff8) {
            ctx->pc = 0x1D0068u;
            return;
        }
    }
    ctx->pc = 0x1D0000u;
    // 0x1d0000: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D0000u;
    {
        const bool branch_taken_0x1d0000 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d0000) {
            ctx->pc = 0x1D0010u;
            return;
        }
    }
    ctx->pc = 0x1D0008u;
    // 0x1d0008: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x1D0008u;
    {
        const bool branch_taken_0x1d0008 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d0008) {
            ctx->pc = 0x1D00FCu;
            return;
        }
    }
    ctx->pc = 0x1D0010u;
}
