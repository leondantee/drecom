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

// Function: entry_001e3280
// Address: 0x1e3280 - 0x1e32bc
void entry_001e3280_0x1e3280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e3280_0x1e3280");
#endif

    ctx->pc = 0x1e3280u;

    // 0x1e3280: 0x8fa301cc  lw          $v1, 0x1CC($sp)
    ctx->pc = 0x1e3280u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 460)));
    // 0x1e3284: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1e3284u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1e3288: 0xafa301cc  sw          $v1, 0x1CC($sp)
    ctx->pc = 0x1e3288u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 460), GPR_U32(ctx, 3));
    // 0x1e328c: 0x1460fe22  bnez        $v1, . + 4 + (-0x1DE << 2)
    ctx->pc = 0x1E328Cu;
    {
        const bool branch_taken_0x1e328c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e328c) {
            ctx->pc = 0x1E2B18u;
            return;
        }
    }
    ctx->pc = 0x1E3294u;
    // 0x1e3294: 0x8fa401dc  lw          $a0, 0x1DC($sp)
    ctx->pc = 0x1e3294u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 476)));
    // 0x1e3298: 0x8fa301f8  lw          $v1, 0x1F8($sp)
    ctx->pc = 0x1e3298u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 504)));
    // 0x1e329c: 0x8c63006c  lw          $v1, 0x6C($v1)
    ctx->pc = 0x1e329cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
    // 0x1e32a0: 0x14830006  bne         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E32A0u;
    {
        const bool branch_taken_0x1e32a0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1e32a0) {
            ctx->pc = 0x1E32BCu;
            return;
        }
    }
    ctx->pc = 0x1E32A8u;
    // 0x1e32a8: 0x8fa501f8  lw          $a1, 0x1F8($sp)
    ctx->pc = 0x1e32a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 504)));
    // 0x1e32ac: 0x8ca40024  lw          $a0, 0x24($a1)
    ctx->pc = 0x1e32acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
    // 0x1e32b0: 0x2403fffb  addiu       $v1, $zero, -0x5
    ctx->pc = 0x1e32b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x1e32b4: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1e32b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1e32b8: 0xaca30024  sw          $v1, 0x24($a1)
    ctx->pc = 0x1e32b8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 36), GPR_U32(ctx, 3));
    ctx->pc = 0x1e32bcu;
}
