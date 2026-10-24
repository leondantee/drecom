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

// Function: entry_002aa66c
// Address: 0x2aa66c - 0x2aa6bc
void entry_002aa66c_0x2aa66c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002aa66c_0x2aa66c");
#endif

    ctx->pc = 0x2aa66cu;

    // 0x2aa66c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2aa66cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2aa670: 0xa060011d  sb          $zero, 0x11D($v1)
    ctx->pc = 0x2aa670u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 285), (uint8_t)GPR_U32(ctx, 0));
    // 0x2aa674: 0x24040022  addiu       $a0, $zero, 0x22
    ctx->pc = 0x2aa674u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x2aa678: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2aa678u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2aa67c: 0xac640100  sw          $a0, 0x100($v1)
    ctx->pc = 0x2aa67cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 256), GPR_U32(ctx, 4));
    // 0x2aa680: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2aa680u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2aa684: 0xa0600138  sb          $zero, 0x138($v1)
    ctx->pc = 0x2aa684u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 312), (uint8_t)GPR_U32(ctx, 0));
    // 0x2aa688: 0x3c034316  lui         $v1, 0x4316
    ctx->pc = 0x2aa688u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17174 << 16));
    // 0x2aa68c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2aa68cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2aa690: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2aa690u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2aa694: 0xe4600104  swc1        $f0, 0x104($v1)
    ctx->pc = 0x2aa694u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 260), bits); }
    // 0x2aa698: 0x3c03ba83  lui         $v1, 0xBA83
    ctx->pc = 0x2aa698u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)47747 << 16));
    // 0x2aa69c: 0x3463126f  ori         $v1, $v1, 0x126F
    ctx->pc = 0x2aa69cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4719);
    // 0x2aa6a0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2aa6a0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2aa6a4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2aa6a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2aa6a8: 0xe46000f4  swc1        $f0, 0xF4($v1)
    ctx->pc = 0x2aa6a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 244), bits); }
    // 0x2aa6ac: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2aa6acu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2aa6b0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2aa6b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2aa6b4: 0x3e00008  jr          $ra
    ctx->pc = 0x2AA6B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AA6B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AA6BCu;
}
