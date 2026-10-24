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

// Function: entry_001e3808
// Address: 0x1e3808 - 0x1e383c
void entry_001e3808_0x1e3808(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e3808_0x1e3808");
#endif

    ctx->pc = 0x1e3808u;

    // 0x1e3808: 0x26100110  addiu       $s0, $s0, 0x110
    ctx->pc = 0x1e3808u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
    // 0x1e380c: 0x26f7ffff  addiu       $s7, $s7, -0x1
    ctx->pc = 0x1e380cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 4294967295));
    // 0x1e3810: 0x16e0fef1  bnez        $s7, . + 4 + (-0x10F << 2)
    ctx->pc = 0x1E3810u;
    {
        const bool branch_taken_0x1e3810 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e3810) {
            ctx->pc = 0x1E33D8u;
            return;
        }
    }
    ctx->pc = 0x1E3818u;
    // 0x1e3818: 0x8fa301e8  lw          $v1, 0x1E8($sp)
    ctx->pc = 0x1e3818u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x1e381c: 0x8c63006c  lw          $v1, 0x6C($v1)
    ctx->pc = 0x1e381cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
    // 0x1e3820: 0x16c30006  bne         $s6, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E3820u;
    {
        const bool branch_taken_0x1e3820 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 3));
        if (branch_taken_0x1e3820) {
            ctx->pc = 0x1E383Cu;
            return;
        }
    }
    ctx->pc = 0x1E3828u;
    // 0x1e3828: 0x8fa501e8  lw          $a1, 0x1E8($sp)
    ctx->pc = 0x1e3828u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x1e382c: 0x8ca40024  lw          $a0, 0x24($a1)
    ctx->pc = 0x1e382cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
    // 0x1e3830: 0x2403fffb  addiu       $v1, $zero, -0x5
    ctx->pc = 0x1e3830u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x1e3834: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1e3834u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1e3838: 0xaca30024  sw          $v1, 0x24($a1)
    ctx->pc = 0x1e3838u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 36), GPR_U32(ctx, 3));
    ctx->pc = 0x1e383cu;
}
