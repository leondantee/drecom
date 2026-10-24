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

// Function: entry_0037a8a0
// Address: 0x37a8a0 - 0x37a8c0
void entry_0037a8a0_0x37a8a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0037a8a0_0x37a8a0");
#endif

    ctx->pc = 0x37a8a0u;

    // 0x37a8a0: 0x3c01009a  lui         $at, 0x9A
    ctx->pc = 0x37a8a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)154 << 16));
    // 0x37a8a4: 0x8c220580  lw          $v0, 0x580($at)
    ctx->pc = 0x37a8a4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x9A0580u));
    // 0x37a8a8: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x37a8a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x37a8ac: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x37A8ACu;
    {
        const bool branch_taken_0x37a8ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x37a8ac) {
            ctx->pc = 0x37A874u;
            return;
        }
    }
    ctx->pc = 0x37A8B4u;
    // 0x37a8b4: 0x70009e28  paddub      $s3, $zero, $zero
    ctx->pc = 0x37a8b4u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x37a8b8: 0x100000df  b           . + 4 + (0xDF << 2)
    ctx->pc = 0x37A8B8u;
    {
        const bool branch_taken_0x37a8b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x37a8b8) {
            ctx->pc = 0x37AC38u;
            return;
        }
    }
    ctx->pc = 0x37A8C0u;
}
