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

// Function: entry_001195a8
// Address: 0x1195a8 - 0x1195c4
void entry_001195a8_0x1195a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001195a8_0x1195a8");
#endif

    ctx->pc = 0x1195a8u;

label_1195a8:
    // 0x1195a8: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x1195a8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
    // 0x1195ac: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x1195acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x1195b0: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x1195b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x1195b4: 0x0  nop
    ctx->pc = 0x1195b4u;
    // NOP
    // 0x1195b8: 0x0  nop
    ctx->pc = 0x1195b8u;
    // NOP
    // 0x1195bc: 0x14e0fffa  bnez        $a3, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1195BCu;
    {
        const bool branch_taken_0x1195bc = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x1195bc) {
            ctx->pc = 0x1195A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1195a8;
        }
    }
    ctx->pc = 0x1195C4u;
}
