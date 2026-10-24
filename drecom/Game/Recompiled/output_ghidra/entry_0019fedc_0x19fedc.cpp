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

// Function: entry_0019fedc
// Address: 0x19fedc - 0x19ff28
void entry_0019fedc_0x19fedc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019fedc_0x19fedc");
#endif

    ctx->pc = 0x19fedcu;

label_19fedc:
    // 0x19fedc: 0x72201e28  paddub      $v1, $s1, $zero
    ctx->pc = 0x19fedcu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x19fee0: 0x24710010  addiu       $s1, $v1, 0x10
    ctx->pc = 0x19fee0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x19fee4: 0x7c600000  sq          $zero, 0x0($v1)
    ctx->pc = 0x19fee4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 0));
    // 0x19fee8: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x19fee8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x19feec: 0x1600fffb  bnez        $s0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x19FEECu;
    {
        const bool branch_taken_0x19feec = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x19feec) {
            ctx->pc = 0x19FEDCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19fedc;
        }
    }
    ctx->pc = 0x19FEF4u;
    // 0x19fef4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x19fef4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x19fef8: 0x8c231a94  lw          $v1, 0x1A94($at)
    ctx->pc = 0x19fef8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A94u));
    // 0x19fefc: 0x8c63003c  lw          $v1, 0x3C($v1)
    ctx->pc = 0x19fefcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
    // 0x19ff00: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x19FF00u;
    {
        const bool branch_taken_0x19ff00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x19ff00) {
            ctx->pc = 0x19FF28u;
            return;
        }
    }
    ctx->pc = 0x19FF08u;
    // 0x19ff08: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x19ff08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x19ff0c: 0x8c231a94  lw          $v1, 0x1A94($at)
    ctx->pc = 0x19ff0cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A94u));
    // 0x19ff10: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x19ff10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x19ff14: 0x24441bd0  addiu       $a0, $v0, 0x1BD0
    ctx->pc = 0x19ff14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 7120));
    // 0x19ff18: 0x8c65003c  lw          $a1, 0x3C($v1)
    ctx->pc = 0x19ff18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
    // 0x19ff1c: 0x24060900  addiu       $a2, $zero, 0x900
    ctx->pc = 0x19ff1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2304));
    // 0x19ff20: 0xc0462a6  jal         func_118A98
    ctx->pc = 0x19FF20u;
    SET_GPR_U32(ctx, 31, 0x19FF28u);
    ctx->pc = 0x118A98u;
    {
        ctx->pc = 0x19FF28u;
        ps2_stubs::memcpy(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x19FF28u) { return; }
    ctx->pc = 0x19FF28u;
}
