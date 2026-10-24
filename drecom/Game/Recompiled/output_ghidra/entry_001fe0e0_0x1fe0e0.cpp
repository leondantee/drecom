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

// Function: entry_001fe0e0
// Address: 0x1fe0e0 - 0x1fe14c
void entry_001fe0e0_0x1fe0e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fe0e0_0x1fe0e0");
#endif

    switch (ctx->pc) {
        case 0x1fe100u: goto label_1fe100;
        case 0x1fe124u: goto label_1fe124;
        default: break;
    }

    ctx->pc = 0x1fe0e0u;

    // 0x1fe0e0: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1fe0e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fe0e4: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x1fe0e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fe0e8: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1fe0e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fe0ec: 0x248402f0  addiu       $a0, $a0, 0x2F0
    ctx->pc = 0x1fe0ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 752));
    // 0x1fe0f0: 0x24a502f0  addiu       $a1, $a1, 0x2F0
    ctx->pc = 0x1fe0f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 752));
    // 0x1fe0f4: 0x24660300  addiu       $a2, $v1, 0x300
    ctx->pc = 0x1fe0f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 768));
    // 0x1fe0f8: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x1FE0F8u;
    SET_GPR_U32(ctx, 31, 0x1FE100u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x1FE0F8u, 0x1FE100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE100u;
label_1fe100:
    // 0x1fe100: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1fe100u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1fe104: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1fe104u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fe108: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x1fe108u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fe10c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1fe10cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fe110: 0x248402b0  addiu       $a0, $a0, 0x2B0
    ctx->pc = 0x1fe110u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 688));
    // 0x1fe114: 0x24a502f0  addiu       $a1, $a1, 0x2F0
    ctx->pc = 0x1fe114u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 752));
    // 0x1fe118: 0x246602b0  addiu       $a2, $v1, 0x2B0
    ctx->pc = 0x1fe118u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 688));
    // 0x1fe11c: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x1FE11Cu;
    SET_GPR_U32(ctx, 31, 0x1FE124u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x1FE11Cu, 0x1FE124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE124u;
label_1fe124:
    // 0x1fe124: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1fe124u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1fe128: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x1fe128u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x1fe12c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1fe12cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fe130: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1fe130u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fe134: 0xe46002bc  swc1        $f0, 0x2BC($v1)
    ctx->pc = 0x1fe134u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 700), bits); }
    // 0x1fe138: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1fe138u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fe13c: 0x246302b0  addiu       $v1, $v1, 0x2B0
    ctx->pc = 0x1fe13cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 688));
    // 0x1fe140: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x1fe140u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1fe144: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1fe144u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fe148: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x1fe148u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    ctx->pc = 0x1fe14cu;
}
