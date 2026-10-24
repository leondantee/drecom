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

// Function: Door_ke_draw
// Address: 0x35fbb0 - 0x35fc00
void Door_ke_draw_0x35fbb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Door_ke_draw_0x35fbb0");
#endif

    ctx->pc = 0x35fbb0u;

    // 0x35fbb0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x35fbb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x35fbb4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x35fbb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x35fbb8: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x35fbb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x35fbbc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x35fbbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35fbc0: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x35fbc0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x35fbc4: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x35fbc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x35fbc8: 0x2463e650  addiu       $v1, $v1, -0x19B0
    ctx->pc = 0x35fbc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294960720));
    // 0x35fbcc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x35fbccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x35fbd0: 0x8c701390  lw          $s0, 0x1390($v1)
    ctx->pc = 0x35fbd0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 5008)));
    // 0x35fbd4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x35fbd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35fbd8: 0xa2030000  sb          $v1, 0x0($s0)
    ctx->pc = 0x35fbd8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x35fbdc: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x35fbdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x35fbe0: 0xa2030001  sb          $v1, 0x1($s0)
    ctx->pc = 0x35fbe0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x35fbe4: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x35fbe4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x35fbe8: 0xa2000003  sb          $zero, 0x3($s0)
    ctx->pc = 0x35fbe8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x35fbec: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x35fbecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x35fbf0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x35fbf0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35fbf4: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x35fbf4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x35fbf8: 0x3e00008  jr          $ra
    ctx->pc = 0x35FBF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35FBF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35FC00u;
}
