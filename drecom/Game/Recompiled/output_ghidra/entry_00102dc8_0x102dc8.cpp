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

// Function: entry_00102dc8
// Address: 0x102dc8 - 0x102de4
void entry_00102dc8_0x102dc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00102dc8_0x102dc8");
#endif

    ctx->pc = 0x102dc8u;

label_102dc8:
    // 0x102dc8: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x102dc8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x102dcc: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x102dccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x102dd0: 0x30a2000c  andi        $v0, $a1, 0xC
    ctx->pc = 0x102dd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)12);
    // 0x102dd4: 0x0  nop
    ctx->pc = 0x102dd4u;
    // NOP
    // 0x102dd8: 0x0  nop
    ctx->pc = 0x102dd8u;
    // NOP
    // 0x102ddc: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x102DDCu;
    {
        const bool branch_taken_0x102ddc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x102ddc) {
            ctx->pc = 0x102DC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_102dc8;
        }
    }
    ctx->pc = 0x102DE4u;
}
