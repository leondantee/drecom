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

// Function: entry_00298acc
// Address: 0x298acc - 0x298ae8
void entry_00298acc_0x298acc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00298acc_0x298acc");
#endif

    ctx->pc = 0x298accu;

    // 0x298acc: 0x16000006  bnez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x298ACCu;
    {
        const bool branch_taken_0x298acc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x298acc) {
            ctx->pc = 0x298AE8u;
            return;
        }
    }
    ctx->pc = 0x298AD4u;
    // 0x298ad4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x298ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x298ad8: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x298ad8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x298adc: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x298adcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x298ae0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x298ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x298ae4: 0xa46410a6  sh          $a0, 0x10A6($v1)
    ctx->pc = 0x298ae4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4262), (uint16_t)GPR_U32(ctx, 4));
    ctx->pc = 0x298ae8u;
}
