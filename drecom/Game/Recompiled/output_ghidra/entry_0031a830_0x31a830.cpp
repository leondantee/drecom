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

// Function: entry_0031a830
// Address: 0x31a830 - 0x31a858
void entry_0031a830_0x31a830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0031a830_0x31a830");
#endif

    ctx->pc = 0x31a830u;

    // 0x31a830: 0x2e030008  sltiu       $v1, $s0, 0x8
    ctx->pc = 0x31a830u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x31a834: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x31A834u;
    {
        const bool branch_taken_0x31a834 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x31a834) {
            ctx->pc = 0x31A818u;
            return;
        }
    }
    ctx->pc = 0x31A83Cu;
    // 0x31a83c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x31a83cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31a840: 0x8fa60088  lw          $a2, 0x88($sp)
    ctx->pc = 0x31a840u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x31a844: 0xa4c410a6  sh          $a0, 0x10A6($a2)
    ctx->pc = 0x31a844u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 4262), (uint16_t)GPR_U32(ctx, 4));
    // 0x31a848: 0x8fa50088  lw          $a1, 0x88($sp)
    ctx->pc = 0x31a848u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x31a84c: 0xa0a011ee  sb          $zero, 0x11EE($a1)
    ctx->pc = 0x31a84cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 4590), (uint8_t)GPR_U32(ctx, 0));
    // 0x31a850: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x31a850u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x31a854: 0xa06010a8  sb          $zero, 0x10A8($v1)
    ctx->pc = 0x31a854u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 0));
    ctx->pc = 0x31a858u;
}
