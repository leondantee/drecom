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

// Function: Om97_R1_mv02
// Address: 0x35f7a0 - 0x35f864
void Om97_R1_mv02_0x35f7a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Om97_R1_mv02_0x35f7a0");
#endif

    ctx->pc = 0x35f7a0u;

    // 0x35f7a0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x35f7a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x35f7a4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x35f7a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x35f7a8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x35f7a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x35f7ac: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x35f7acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
    // 0x35f7b0: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x35f7b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x35f7b4: 0x2463ab20  addiu       $v1, $v1, -0x54E0
    ctx->pc = 0x35f7b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294945568));
    // 0x35f7b8: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x35f7b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x35f7bc: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x35f7bcu;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x3AAB20u));
    // 0x35f7c0: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x35f7c0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x35f7c4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x35f7c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x35f7c8: 0x8c710058  lw          $s1, 0x58($v1)
    ctx->pc = 0x35f7c8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x35f7cc: 0x8e300034  lw          $s0, 0x34($s1)
    ctx->pc = 0x35f7ccu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x35f7d0: 0x8e04005c  lw          $a0, 0x5C($s0)
    ctx->pc = 0x35f7d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x35f7d4: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x35f7d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x35f7d8: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x35f7d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x35f7dc: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x35f7dcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x35f7e0: 0x8e040058  lw          $a0, 0x58($s0)
    ctx->pc = 0x35f7e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x35f7e4: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x35f7e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x35f7e8: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x35f7e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x35f7ec: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x35f7ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x35f7f0: 0x8e04005c  lw          $a0, 0x5C($s0)
    ctx->pc = 0x35f7f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x35f7f4: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x35f7f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x35f7f8: 0x30631fff  andi        $v1, $v1, 0x1FFF
    ctx->pc = 0x35f7f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8191);
    // 0x35f7fc: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x35f7fcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x35f800: 0x8e040058  lw          $a0, 0x58($s0)
    ctx->pc = 0x35f800u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x35f804: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x35f804u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x35f808: 0x30631fff  andi        $v1, $v1, 0x1FFF
    ctx->pc = 0x35f808u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8191);
    // 0x35f80c: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x35f80cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x35f810: 0x8e040058  lw          $a0, 0x58($s0)
    ctx->pc = 0x35f810u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x35f814: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x35f814u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x35f818: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x35f818u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x35f81c: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x35f81cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x35f820: 0x8e04005c  lw          $a0, 0x5C($s0)
    ctx->pc = 0x35f820u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x35f824: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x35f824u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x35f828: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x35f828u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x35f82c: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x35f82cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x35f830: 0x8e04005c  lw          $a0, 0x5C($s0)
    ctx->pc = 0x35f830u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x35f834: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x35f834u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x35f838: 0x30631fff  andi        $v1, $v1, 0x1FFF
    ctx->pc = 0x35f838u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8191);
    // 0x35f83c: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x35f83cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x35f840: 0x8e040058  lw          $a0, 0x58($s0)
    ctx->pc = 0x35f840u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x35f844: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x35f844u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x35f848: 0x30631fff  andi        $v1, $v1, 0x1FFF
    ctx->pc = 0x35f848u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8191);
    // 0x35f84c: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x35f84cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x35f850: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x35f850u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35f854: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x35f854u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35f858: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x35f858u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x35f85c: 0x3e00008  jr          $ra
    ctx->pc = 0x35F85Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35F85Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35F864u;
}
