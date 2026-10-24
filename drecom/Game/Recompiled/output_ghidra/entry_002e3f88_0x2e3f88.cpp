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

// Function: entry_002e3f88
// Address: 0x2e3f88 - 0x2e3fa0
void entry_002e3f88_0x2e3f88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002e3f88_0x2e3f88");
#endif

    ctx->pc = 0x2e3f88u;

    // 0x2e3f88: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2e3f88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2e3f8c: 0x946310a4  lhu         $v1, 0x10A4($v1)
    ctx->pc = 0x2e3f8cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4260)));
    // 0x2e3f90: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x2e3f90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2e3f94: 0x263182a  slt         $v1, $s3, $v1
    ctx->pc = 0x2e3f94u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2e3f98: 0x1460ffcc  bnez        $v1, . + 4 + (-0x34 << 2)
    ctx->pc = 0x2E3F98u;
    {
        const bool branch_taken_0x2e3f98 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e3f98) {
            ctx->pc = 0x2E3ECCu;
            return;
        }
    }
    ctx->pc = 0x2E3FA0u;
}
