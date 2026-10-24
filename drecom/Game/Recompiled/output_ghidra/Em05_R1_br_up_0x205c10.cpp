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

// Function: Em05_R1_br_up
// Address: 0x205c10 - 0x205c98
void Em05_R1_br_up_0x205c10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em05_R1_br_up_0x205c10");
#endif

    ctx->pc = 0x205c10u;

    // 0x205c10: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x205c10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x205c14: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x205c14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x205c18: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x205c18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x205c1c: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x205c1cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x205c20: 0x1060001a  beqz        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x205C20u;
    {
        const bool branch_taken_0x205c20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x205c20) {
            ctx->pc = 0x205C8Cu;
            goto label_205c8c;
        }
    }
    ctx->pc = 0x205C28u;
    // 0x205c28: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x205c28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x205c2c: 0xc4610124  lwc1        $f1, 0x124($v1)
    ctx->pc = 0x205c2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x205c30: 0x3c0345fa  lui         $v1, 0x45FA
    ctx->pc = 0x205c30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17914 << 16));
    // 0x205c34: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x205c34u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x205c38: 0x0  nop
    ctx->pc = 0x205c38u;
    // NOP
    // 0x205c3c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x205c3cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x205c40: 0x0  nop
    ctx->pc = 0x205c40u;
    // NOP
    // 0x205c44: 0x45010011  bc1t        . + 4 + (0x11 << 2)
    ctx->pc = 0x205C44u;
    {
        const bool branch_taken_0x205c44 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x205c44) {
            ctx->pc = 0x205C8Cu;
            goto label_205c8c;
        }
    }
    ctx->pc = 0x205C4Cu;
    // 0x205c4c: 0x3c0345fa  lui         $v1, 0x45FA
    ctx->pc = 0x205c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17914 << 16));
    // 0x205c50: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x205c50u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x205c54: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x205c54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x205c58: 0xe4600124  swc1        $f0, 0x124($v1)
    ctx->pc = 0x205c58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 292), bits); }
    // 0x205c5c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x205c5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x205c60: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x205c60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x205c64: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x205c64u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x205c68: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x205c68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x205c6c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x205c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x205c70: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x205c70u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x205c74: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x205c74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x205c78: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x205c78u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x205c7c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x205c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x205c80: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x205c80u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x205c84: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x205c84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x205c88: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x205c88u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_205c8c:
    // 0x205c8c: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x205c8cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x205c90: 0x3e00008  jr          $ra
    ctx->pc = 0x205C90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x205C90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x205C98u;
}
