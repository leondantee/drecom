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

// Function: Md_set_meisai_rate_db
// Address: 0x258a00 - 0x258a40
void Md_set_meisai_rate_db_0x258a00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Md_set_meisai_rate_db_0x258a00");
#endif

    ctx->pc = 0x258a00u;

    // 0x258a00: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x258a00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x258a04: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x258a04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x258a08: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x258a08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x258a0c: 0xe7ac0020  swc1        $f12, 0x20($sp)
    ctx->pc = 0x258a0cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x258a10: 0xafa50028  sw          $a1, 0x28($sp)
    ctx->pc = 0x258a10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 5));
    // 0x258a14: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x258a14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x258a18: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x258a18u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x258a1c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x258a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x258a20: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x258a20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x258a24: 0x8c700064  lw          $s0, 0x64($v1)
    ctx->pc = 0x258a24u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 100)));
    // 0x258a28: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x258a28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x258a2c: 0xe600008c  swc1        $f0, 0x8C($s0)
    ctx->pc = 0x258a2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 140), bits); }
    // 0x258a30: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x258a30u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x258a34: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x258a34u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x258a38: 0x3e00008  jr          $ra
    ctx->pc = 0x258A38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x258A38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x258A40u;
}
