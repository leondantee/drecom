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

// Function: entry_00215ed0
// Address: 0x215ed0 - 0x215ef0
void entry_00215ed0_0x215ed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00215ed0_0x215ed0");
#endif

    ctx->pc = 0x215ed0u;

label_215ed0:
    // 0x215ed0: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x215ed0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215ed4: 0x8ca20038  lw          $v0, 0x38($a1)
    ctx->pc = 0x215ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 56)));
    // 0x215ed8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x215ed8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215edc: 0x0  nop
    ctx->pc = 0x215edcu;
    // NOP
    // 0x215ee0: 0x0  nop
    ctx->pc = 0x215ee0u;
    // NOP
    // 0x215ee4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x215EE4u;
    {
        const bool branch_taken_0x215ee4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x215ee4) {
            ctx->pc = 0x215ED0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_215ed0;
        }
    }
    ctx->pc = 0x215EECu;
    // 0x215eec: 0xaca40038  sw          $a0, 0x38($a1)
    ctx->pc = 0x215eecu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 56), GPR_U32(ctx, 4));
    ctx->pc = 0x215ef0u;
}
