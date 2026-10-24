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

// Function: entry_001a4e0c
// Address: 0x1a4e0c - 0x1a4e34
void entry_001a4e0c_0x1a4e0c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a4e0c_0x1a4e0c");
#endif

    ctx->pc = 0x1a4e0cu;

    // 0x1a4e0c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x1a4e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a4e10: 0x80630304  lb          $v1, 0x304($v1)
    ctx->pc = 0x1a4e10u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 772)));
    // 0x1a4e14: 0x31e3c  dsll32      $v1, $v1, 24
    ctx->pc = 0x1a4e14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 24));
    // 0x1a4e18: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x1a4e18u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x1a4e1c: 0x28610008  slti        $at, $v1, 0x8
    ctx->pc = 0x1a4e1cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x1a4e20: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A4E20u;
    {
        const bool branch_taken_0x1a4e20 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a4e20) {
            ctx->pc = 0x1A4E34u;
            return;
        }
    }
    ctx->pc = 0x1A4E28u;
    // 0x1a4e28: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x1a4e28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1a4e2c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x1a4e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a4e30: 0xa0640304  sb          $a0, 0x304($v1)
    ctx->pc = 0x1a4e30u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 772), (uint8_t)GPR_U32(ctx, 4));
    ctx->pc = 0x1a4e34u;
}
