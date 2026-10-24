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

// Function: entry_0031aa68
// Address: 0x31aa68 - 0x31aa90
void entry_0031aa68_0x31aa68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0031aa68_0x31aa68");
#endif

    ctx->pc = 0x31aa68u;

    // 0x31aa68: 0x2e030008  sltiu       $v1, $s0, 0x8
    ctx->pc = 0x31aa68u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x31aa6c: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x31AA6Cu;
    {
        const bool branch_taken_0x31aa6c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x31aa6c) {
            ctx->pc = 0x31AA50u;
            return;
        }
    }
    ctx->pc = 0x31AA74u;
    // 0x31aa74: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x31aa74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31aa78: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x31aa78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x31aa7c: 0xa46410a6  sh          $a0, 0x10A6($v1)
    ctx->pc = 0x31aa7cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4262), (uint16_t)GPR_U32(ctx, 4));
    // 0x31aa80: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x31aa80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x31aa84: 0xa06011ee  sb          $zero, 0x11EE($v1)
    ctx->pc = 0x31aa84u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4590), (uint8_t)GPR_U32(ctx, 0));
    // 0x31aa88: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x31aa88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x31aa8c: 0xa06010a8  sb          $zero, 0x10A8($v1)
    ctx->pc = 0x31aa8cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 0));
    ctx->pc = 0x31aa90u;
}
