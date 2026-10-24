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

// Function: entry_001d8868
// Address: 0x1d8868 - 0x1d8880
void entry_001d8868_0x1d8868(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d8868_0x1d8868");
#endif

    ctx->pc = 0x1d8868u;

    // 0x1d8868: 0x8e0302a8  lw          $v1, 0x2A8($s0)
    ctx->pc = 0x1d8868u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 680)));
    // 0x1d886c: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x1d886cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x1d8870: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D8870u;
    {
        const bool branch_taken_0x1d8870 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d8870) {
            ctx->pc = 0x1D8880u;
            return;
        }
    }
    ctx->pc = 0x1D8878u;
    // 0x1d8878: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1d8878u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d887c: 0xae030070  sw          $v1, 0x70($s0)
    ctx->pc = 0x1d887cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 3));
    ctx->pc = 0x1d8880u;
}
