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

// Function: entry_00170578
// Address: 0x170578 - 0x170598
void entry_00170578_0x170578(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00170578_0x170578");
#endif

    ctx->pc = 0x170578u;

    // 0x170578: 0x8fa30168  lw          $v1, 0x168($sp)
    ctx->pc = 0x170578u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x17057c: 0x70608e28  paddub      $s1, $v1, $zero
    ctx->pc = 0x17057cu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x170580: 0x6810005  bgez        $s4, . + 4 + (0x5 << 2)
    ctx->pc = 0x170580u;
    {
        const bool branch_taken_0x170580 = (GPR_S32(ctx, 20) >= 0);
        if (branch_taken_0x170580) {
            ctx->pc = 0x170598u;
            return;
        }
    }
    ctx->pc = 0x170588u;
    // 0x170588: 0x2402003f  addiu       $v0, $zero, 0x3F
    ctx->pc = 0x170588u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x17058c: 0xafa2016c  sw          $v0, 0x16C($sp)
    ctx->pc = 0x17058cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 364), GPR_U32(ctx, 2));
    // 0x170590: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x170590u;
    {
        const bool branch_taken_0x170590 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x170590) {
            ctx->pc = 0x17059Cu;
            return;
        }
    }
    ctx->pc = 0x170598u;
}
