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

// Function: caseD_8
// Address: 0x123e40 - 0x123e58
void caseD_8_0x123e40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_8_0x123e40");
#endif

    ctx->pc = 0x123e40u;

    // 0x123e40: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x123e40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x123e44: 0x9482000e  lhu         $v0, 0xE($a0)
    ctx->pc = 0x123e44u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 14)));
    // 0x123e48: 0x34438000  ori         $v1, $v0, 0x8000
    ctx->pc = 0x123e48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x123e4c: 0xa483000e  sh          $v1, 0xE($a0)
    ctx->pc = 0x123e4cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 14), (uint16_t)GPR_U32(ctx, 3));
    // 0x123e50: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x123E50u;
    {
        const bool branch_taken_0x123e50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x123e50) {
            ctx->pc = 0x123E68u;
            return;
        }
    }
    ctx->pc = 0x123E58u;
}
