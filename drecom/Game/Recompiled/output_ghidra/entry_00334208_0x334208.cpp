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

// Function: entry_00334208
// Address: 0x334208 - 0x334248
void entry_00334208_0x334208(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00334208_0x334208");
#endif

    switch (ctx->pc) {
        case 0x334230u: goto label_334230;
        default: break;
    }

    ctx->pc = 0x334208u;

    // 0x334208: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x334208u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x33420c: 0x263102a  slt         $v0, $s3, $v1
    ctx->pc = 0x33420cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x334210: 0x1440feaa  bnez        $v0, . + 4 + (-0x156 << 2)
    ctx->pc = 0x334210u;
    {
        const bool branch_taken_0x334210 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x334210) {
            ctx->pc = 0x333CBCu;
            return;
        }
    }
    ctx->pc = 0x334218u;
    // 0x334218: 0x2642001c  addiu       $v0, $s2, 0x1C
    ctx->pc = 0x334218u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 28));
    // 0x33421c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x33421cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x334220: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x334220u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x334224: 0x70602e28  paddub      $a1, $v1, $zero
    ctx->pc = 0x334224u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x334228: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x334228u;
    SET_GPR_U32(ctx, 31, 0x334230u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x334228u, 0x334230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334230u;
label_334230:
    // 0x334230: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x334230u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x334234: 0x24439990  addiu       $v1, $v0, -0x6670
    ctx->pc = 0x334234u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941072));
    // 0x334238: 0x7060be28  paddub      $s7, $v1, $zero
    ctx->pc = 0x334238u;
    SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x33423c: 0x70009e28  paddub      $s3, $zero, $zero
    ctx->pc = 0x33423cu;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x334240: 0x10000119  b           . + 4 + (0x119 << 2)
    ctx->pc = 0x334240u;
    {
        const bool branch_taken_0x334240 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x334240) {
            ctx->pc = 0x3346A8u;
            return;
        }
    }
    ctx->pc = 0x334248u;
}
