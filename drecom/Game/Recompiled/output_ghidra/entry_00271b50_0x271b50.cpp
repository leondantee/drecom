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

// Function: entry_00271b50
// Address: 0x271b50 - 0x271b70
void entry_00271b50_0x271b50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00271b50_0x271b50");
#endif

    ctx->pc = 0x271b50u;

    // 0x271b50: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x271b50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x271b54: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x271B54u;
    {
        const bool branch_taken_0x271b54 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x271b54) {
            ctx->pc = 0x271B70u;
            return;
        }
    }
    ctx->pc = 0x271B5Cu;
    // 0x271b5c: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x271b5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x271b60: 0x2403fffd  addiu       $v1, $zero, -0x3
    ctx->pc = 0x271b60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x271b64: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x271b64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x271b68: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x271b68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x271b6c: 0x0  nop
    ctx->pc = 0x271b6cu;
    // NOP
    ctx->pc = 0x271b70u;
}
