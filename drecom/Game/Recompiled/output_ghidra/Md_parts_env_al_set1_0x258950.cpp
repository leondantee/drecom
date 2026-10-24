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

// Function: Md_parts_env_al_set1
// Address: 0x258950 - 0x258994
void Md_parts_env_al_set1_0x258950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Md_parts_env_al_set1_0x258950");
#endif

    ctx->pc = 0x258950u;

    // 0x258950: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x258950u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x258954: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x258954u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x258958: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x258958u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x25895c: 0xa3a50020  sb          $a1, 0x20($sp)
    ctx->pc = 0x25895cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 5));
    // 0x258960: 0xafa60028  sw          $a2, 0x28($sp)
    ctx->pc = 0x258960u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 6));
    // 0x258964: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x258964u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x258968: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x258968u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x25896c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x25896cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x258970: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x258970u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x258974: 0x8c700024  lw          $s0, 0x24($v1)
    ctx->pc = 0x258974u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x258978: 0x93a30020  lbu         $v1, 0x20($sp)
    ctx->pc = 0x258978u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25897c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x25897cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x258980: 0xae030024  sw          $v1, 0x24($s0)
    ctx->pc = 0x258980u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 3));
    // 0x258984: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x258984u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x258988: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x258988u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x25898c: 0x3e00008  jr          $ra
    ctx->pc = 0x25898Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25898Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x258994u;
}
