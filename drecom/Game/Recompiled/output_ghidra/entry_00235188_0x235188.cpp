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

// Function: entry_00235188
// Address: 0x235188 - 0x2351b4
void entry_00235188_0x235188(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00235188_0x235188");
#endif

    ctx->pc = 0x235188u;

    // 0x235188: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x235188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x23518c: 0x24441330  addiu       $a0, $v0, 0x1330
    ctx->pc = 0x23518cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x235190: 0x8c820030  lw          $v0, 0x30($a0)
    ctx->pc = 0x235190u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x235194: 0x30450040  andi        $a1, $v0, 0x40
    ctx->pc = 0x235194u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x235198: 0x14a00006  bnez        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x235198u;
    {
        const bool branch_taken_0x235198 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x235198) {
            ctx->pc = 0x2351B4u;
            return;
        }
    }
    ctx->pc = 0x2351A0u;
    // 0x2351a0: 0x8fa60118  lw          $a2, 0x118($sp)
    ctx->pc = 0x2351a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x2351a4: 0x24c710b0  addiu       $a3, $a2, 0x10B0
    ctx->pc = 0x2351a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 4272));
    // 0x2351a8: 0x70e02628  paddub      $a0, $a3, $zero
    ctx->pc = 0x2351a8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x2351ac: 0xc0624b4  jal         func_1892D0
    ctx->pc = 0x2351ACu;
    SET_GPR_U32(ctx, 31, 0x2351B4u);
    ctx->pc = 0x1892D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1892D0u, 0x2351ACu, 0x2351B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2351B4u;
}
