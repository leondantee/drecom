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

// Function: Scr_parts_env_al_set1
// Address: 0x13d620 - 0x13d664
void Scr_parts_env_al_set1_0x13d620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Scr_parts_env_al_set1_0x13d620");
#endif

    ctx->pc = 0x13d620u;

    // 0x13d620: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x13d620u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x13d624: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13d624u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x13d628: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x13d628u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x13d62c: 0xa3a50020  sb          $a1, 0x20($sp)
    ctx->pc = 0x13d62cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 5));
    // 0x13d630: 0xafa60028  sw          $a2, 0x28($sp)
    ctx->pc = 0x13d630u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 6));
    // 0x13d634: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x13d634u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x13d638: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x13d638u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x13d63c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x13d63cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x13d640: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x13d640u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x13d644: 0x8c700024  lw          $s0, 0x24($v1)
    ctx->pc = 0x13d644u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x13d648: 0x93a30020  lbu         $v1, 0x20($sp)
    ctx->pc = 0x13d648u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13d64c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x13d64cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x13d650: 0xae030024  sw          $v1, 0x24($s0)
    ctx->pc = 0x13d650u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 3));
    // 0x13d654: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13d654u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13d658: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x13d658u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x13d65c: 0x3e00008  jr          $ra
    ctx->pc = 0x13D65Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13D65Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13D664u;
}
