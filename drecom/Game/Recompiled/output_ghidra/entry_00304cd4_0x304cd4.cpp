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

// Function: entry_00304cd4
// Address: 0x304cd4 - 0x304d58
void entry_00304cd4_0x304cd4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00304cd4_0x304cd4");
#endif

    switch (ctx->pc) {
        case 0x304d50u: goto label_304d50;
        default: break;
    }

    ctx->pc = 0x304cd4u;

    // 0x304cd4: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x304cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x304cd8: 0x8442127a  lh          $v0, 0x127A($v0)
    ctx->pc = 0x304cd8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4730)));
    // 0x304cdc: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x304CDCu;
    {
        const bool branch_taken_0x304cdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x304cdc) {
            ctx->pc = 0x304D58u;
            return;
        }
    }
    ctx->pc = 0x304CE4u;
    // 0x304ce4: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x304ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x304ce8: 0x24429570  addiu       $v0, $v0, -0x6A90
    ctx->pc = 0x304ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940016));
    // 0x304cec: 0x27a30050  addiu       $v1, $sp, 0x50
    ctx->pc = 0x304cecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x304cf0: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x304cf0u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x399570u));
    // 0x304cf4: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x304cf4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x304cf8: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x304cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x304cfc: 0x24429580  addiu       $v0, $v0, -0x6A80
    ctx->pc = 0x304cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940032));
    // 0x304d00: 0x27a30060  addiu       $v1, $sp, 0x60
    ctx->pc = 0x304d00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x304d04: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x304d04u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x399580u));
    // 0x304d08: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x304d08u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x304d0c: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x304d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x304d10: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x304d10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x304d14: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x304d14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x304d18: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x304d18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x304d1c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x304d1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x304d20: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x304d20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x304d24: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x304d24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x304d28: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x304d28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x304d2c: 0x34440106  ori         $a0, $v0, 0x106
    ctx->pc = 0x304d2cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)262);
    // 0x304d30: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x304d30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x304d34: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x304d34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x304d38: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x304d38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x304d3c: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x304d3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x304d40: 0x24470300  addiu       $a3, $v0, 0x300
    ctx->pc = 0x304d40u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 768));
    // 0x304d44: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x304d44u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x304d48: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x304D48u;
    SET_GPR_U32(ctx, 31, 0x304D50u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x304D48u, 0x304D50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304D50u;
label_304d50:
    // 0x304d50: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x304d50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x304d54: 0xa440127a  sh          $zero, 0x127A($v0)
    ctx->pc = 0x304d54u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 0));
    ctx->pc = 0x304d58u;
}
