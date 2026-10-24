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

// Function: Md_draw_entry
// Address: 0x257af0 - 0x257b5c
void Md_draw_entry_0x257af0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Md_draw_entry_0x257af0");
#endif

    switch (ctx->pc) {
        case 0x257b14u: goto label_257b14;
        case 0x257b20u: goto label_257b20;
        default: break;
    }

    ctx->pc = 0x257af0u;

    // 0x257af0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x257af0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x257af4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x257af4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x257af8: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x257af8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x257afc: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x257afcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x257b00: 0x34449000  ori         $a0, $v0, 0x9000
    ctx->pc = 0x257b00u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36864);
    // 0x257b04: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x257b04u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x257b08: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x257b08u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x257b0c: 0xc0409c6  jal         func_102718
    ctx->pc = 0x257B0Cu;
    SET_GPR_U32(ctx, 31, 0x257B14u);
    ctx->pc = 0x102718u;
    {
        ctx->pc = 0x257B14u;
        ps2_stubs::sceDmaSync(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x257B14u) { return; }
    ctx->pc = 0x257B14u;
label_257b14:
    // 0x257b14: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x257b14u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x257b18: 0xc084b28  jal         func_212CA0
    ctx->pc = 0x257B18u;
    SET_GPR_U32(ctx, 31, 0x257B20u);
    ctx->pc = 0x212CA0u;
    {
        ctx->pc = 0x257B20u;
        ps2_syscalls::FlushCache(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x257B20u) { return; }
    ctx->pc = 0x257B20u;
label_257b20:
    // 0x257b20: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x257b20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x257b24: 0x34639020  ori         $v1, $v1, 0x9020
    ctx->pc = 0x257b24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)36896);
    // 0x257b28: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x257b28u;
    runtime->Store32(rdram, ctx, 0x10009020u, GPR_U32(ctx, 0)); // MMIO: 0x10009020
    // 0x257b2c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x257b2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x257b30: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x257b30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x257b34: 0x34639030  ori         $v1, $v1, 0x9030
    ctx->pc = 0x257b34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)36912);
    // 0x257b38: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x257b38u;
    runtime->Store32(rdram, ctx, 0x10009030u, GPR_U32(ctx, 4)); // MMIO: 0x10009030
    // 0x257b3c: 0x24040145  addiu       $a0, $zero, 0x145
    ctx->pc = 0x257b3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 325));
    // 0x257b40: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x257b40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x257b44: 0x34639000  ori         $v1, $v1, 0x9000
    ctx->pc = 0x257b44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)36864);
    // 0x257b48: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x257b48u;
    runtime->Store32(rdram, ctx, 0x10009000u, GPR_U32(ctx, 4)); // MMIO: 0x10009000
    // 0x257b4c: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x257b4cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x257b50: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x257b50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x257b54: 0x3e00008  jr          $ra
    ctx->pc = 0x257B54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x257B54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x257B5Cu;
}
