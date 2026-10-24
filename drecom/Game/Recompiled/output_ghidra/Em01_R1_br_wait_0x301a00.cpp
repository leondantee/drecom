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

// Function: Em01_R1_br_wait
// Address: 0x301a00 - 0x301a60
void Em01_R1_br_wait_0x301a00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em01_R1_br_wait_0x301a00");
#endif

    ctx->pc = 0x301a00u;

    // 0x301a00: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x301a00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x301a04: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x301a04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x301a08: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x301a08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x301a0c: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x301a0cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x301a10: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x301a10u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x301a14: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x301a14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x301a18: 0x1483000e  bne         $a0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x301A18u;
    {
        const bool branch_taken_0x301a18 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x301a18) {
            ctx->pc = 0x301A54u;
            goto label_301a54;
        }
    }
    ctx->pc = 0x301A20u;
    // 0x301a20: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x301a20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x301a24: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x301a24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x301a28: 0x3c03451c  lui         $v1, 0x451C
    ctx->pc = 0x301a28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17692 << 16));
    // 0x301a2c: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x301a2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x301a30: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x301a30u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x301a34: 0x0  nop
    ctx->pc = 0x301a34u;
    // NOP
    // 0x301a38: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x301a38u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x301a3c: 0x0  nop
    ctx->pc = 0x301a3cu;
    // NOP
    // 0x301a40: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x301A40u;
    {
        const bool branch_taken_0x301a40 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x301a40) {
            ctx->pc = 0x301A54u;
            goto label_301a54;
        }
    }
    ctx->pc = 0x301A48u;
    // 0x301a48: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x301a48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x301a4c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x301a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x301a50: 0xa4641278  sh          $a0, 0x1278($v1)
    ctx->pc = 0x301a50u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 4));
label_301a54:
    // 0x301a54: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x301a54u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x301a58: 0x3e00008  jr          $ra
    ctx->pc = 0x301A58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x301A58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x301A60u;
}
