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

// Function: entry_001ccf48
// Address: 0x1ccf48 - 0x1ccf90
void entry_001ccf48_0x1ccf48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ccf48_0x1ccf48");
#endif

    switch (ctx->pc) {
        case 0x1ccf74u: goto label_1ccf74;
        default: break;
    }

    ctx->pc = 0x1ccf48u;

    // 0x1ccf48: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1ccf48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ccf4c: 0x84431278  lh          $v1, 0x1278($v0)
    ctx->pc = 0x1ccf4cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4728)));
    // 0x1ccf50: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x1CCF50u;
    {
        const bool branch_taken_0x1ccf50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ccf50) {
            ctx->pc = 0x1CCF90u;
            return;
        }
    }
    ctx->pc = 0x1CCF58u;
    // 0x1ccf58: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1ccf58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1ccf5c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1ccf5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1ccf60: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1ccf60u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1ccf64: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1ccf64u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1ccf68: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1ccf68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ccf6c: 0xc0561d4  jal         func_158750
    ctx->pc = 0x1CCF6Cu;
    SET_GPR_U32(ctx, 31, 0x1CCF74u);
    ctx->pc = 0x158750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158750u, 0x1CCF6Cu, 0x1CCF74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCF74u;
label_1ccf74:
    // 0x1ccf74: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1ccf74u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1ccf78: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x1ccf78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ccf7c: 0x84a21278  lh          $v0, 0x1278($a1)
    ctx->pc = 0x1ccf7cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4728)));
    // 0x1ccf80: 0x2444ffff  addiu       $a0, $v0, -0x1
    ctx->pc = 0x1ccf80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1ccf84: 0xa4a41278  sh          $a0, 0x1278($a1)
    ctx->pc = 0x1ccf84u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4728), (uint16_t)GPR_U32(ctx, 4));
    // 0x1ccf88: 0x10000078  b           . + 4 + (0x78 << 2)
    ctx->pc = 0x1CCF88u;
    {
        const bool branch_taken_0x1ccf88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ccf88) {
            ctx->pc = 0x1CD16Cu;
            return;
        }
    }
    ctx->pc = 0x1CCF90u;
}
