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

// Function: Md_set_meisai_rate
// Address: 0x258af0 - 0x258b30
void Md_set_meisai_rate_0x258af0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Md_set_meisai_rate_0x258af0");
#endif

    ctx->pc = 0x258af0u;

    // 0x258af0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x258af0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x258af4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x258af4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x258af8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x258af8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x258afc: 0xe7ac0018  swc1        $f12, 0x18($sp)
    ctx->pc = 0x258afcu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x258b00: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x258b00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x258b04: 0x8c230140  lw          $v1, 0x140($at)
    ctx->pc = 0x258b04u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0140u));
    // 0x258b08: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x258b08u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x258b0c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x258b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x258b10: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x258b10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x258b14: 0x8c700064  lw          $s0, 0x64($v1)
    ctx->pc = 0x258b14u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 100)));
    // 0x258b18: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x258b18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x258b1c: 0xe600008c  swc1        $f0, 0x8C($s0)
    ctx->pc = 0x258b1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 140), bits); }
    // 0x258b20: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x258b20u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x258b24: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x258b24u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x258b28: 0x3e00008  jr          $ra
    ctx->pc = 0x258B28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x258B28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x258B30u;
}
