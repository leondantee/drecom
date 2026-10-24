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

// Function: Em05_R1_br_down
// Address: 0x205a20 - 0x205a98
void Em05_R1_br_down_0x205a20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em05_R1_br_down_0x205a20");
#endif

    ctx->pc = 0x205a20u;

    // 0x205a20: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x205a20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x205a24: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x205a24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x205a28: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x205a28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x205a2c: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x205a2cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x205a30: 0x10600016  beqz        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x205A30u;
    {
        const bool branch_taken_0x205a30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x205a30) {
            ctx->pc = 0x205A8Cu;
            goto label_205a8c;
        }
    }
    ctx->pc = 0x205A38u;
    // 0x205a38: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x205a38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x205a3c: 0xc4610124  lwc1        $f1, 0x124($v1)
    ctx->pc = 0x205a3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x205a40: 0x3c03c53b  lui         $v1, 0xC53B
    ctx->pc = 0x205a40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)50491 << 16));
    // 0x205a44: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x205a44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x205a48: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x205a48u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x205a4c: 0x0  nop
    ctx->pc = 0x205a4cu;
    // NOP
    // 0x205a50: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x205a50u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x205a54: 0x0  nop
    ctx->pc = 0x205a54u;
    // NOP
    // 0x205a58: 0x4500000c  bc1f        . + 4 + (0xC << 2)
    ctx->pc = 0x205A58u;
    {
        const bool branch_taken_0x205a58 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x205a58) {
            ctx->pc = 0x205A8Cu;
            goto label_205a8c;
        }
    }
    ctx->pc = 0x205A60u;
    // 0x205a60: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x205a60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x205a64: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x205a64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x205a68: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x205a68u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x205a6c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x205a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x205a70: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x205a70u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x205a74: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x205a74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x205a78: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x205a78u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x205a7c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x205a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x205a80: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x205a80u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x205a84: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x205a84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x205a88: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x205a88u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_205a8c:
    // 0x205a8c: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x205a8cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x205a90: 0x3e00008  jr          $ra
    ctx->pc = 0x205A90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x205A90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x205A98u;
}
