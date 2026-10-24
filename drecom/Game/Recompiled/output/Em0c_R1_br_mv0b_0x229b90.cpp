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

// Function: Em0c_R1_br_mv0b
// Address: 0x229b90 - 0x229c90
void Em0c_R1_br_mv0b_0x229b90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em0c_R1_br_mv0b_0x229b90");
#endif

    switch (ctx->pc) {
        case 0x229bf4u: goto label_229bf4;
        default: break;
    }

    ctx->pc = 0x229b90u;

    // 0x229b90: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x229b90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x229b94: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x229b94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x229b98: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x229b98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x229b9c: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x229b9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
    // 0x229ba0: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x229ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x229ba4: 0x2470dbc0  addiu       $s0, $v1, -0x2440
    ctx->pc = 0x229ba4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958016));
    // 0x229ba8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x229ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x229bac: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x229bacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x229bb0: 0x3c0344e1  lui         $v1, 0x44E1
    ctx->pc = 0x229bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17633 << 16));
    // 0x229bb4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x229bb4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x229bb8: 0x0  nop
    ctx->pc = 0x229bb8u;
    // NOP
    // 0x229bbc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x229bbcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x229bc0: 0x0  nop
    ctx->pc = 0x229bc0u;
    // NOP
    // 0x229bc4: 0x4500002d  bc1f        . + 4 + (0x2D << 2)
    ctx->pc = 0x229BC4u;
    {
        const bool branch_taken_0x229bc4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x229bc4) {
            ctx->pc = 0x229C7Cu;
            goto label_229c7c;
        }
    }
    ctx->pc = 0x229BCCu;
    // 0x229bcc: 0x3c023f86  lui         $v0, 0x3F86
    ctx->pc = 0x229bccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16262 << 16));
    // 0x229bd0: 0x34420a92  ori         $v0, $v0, 0xA92
    ctx->pc = 0x229bd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2706);
    // 0x229bd4: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x229bd4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x229bd8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x229bd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x229bdc: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x229bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x229be0: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x229be0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x229be4: 0xc44c00d4  lwc1        $f12, 0xD4($v0)
    ctx->pc = 0x229be4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x229be8: 0x26050120  addiu       $a1, $s0, 0x120
    ctx->pc = 0x229be8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    // 0x229bec: 0xc05caf8  jal         func_172BE0
    ctx->pc = 0x229BECu;
    SET_GPR_U32(ctx, 31, 0x229BF4u);
    ctx->pc = 0x172BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172BE0u, 0x229BECu, 0x229BF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229BF4u;
label_229bf4:
    // 0x229bf4: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x229BF4u;
    {
        const bool branch_taken_0x229bf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x229bf4) {
            ctx->pc = 0x229C7Cu;
            goto label_229c7c;
        }
    }
    ctx->pc = 0x229BFCu;
    // 0x229bfc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x229bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x229c00: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x229c00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x229c04: 0x84630094  lh          $v1, 0x94($v1)
    ctx->pc = 0x229c04u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 148)));
    // 0x229c08: 0x1460001c  bnez        $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x229C08u;
    {
        const bool branch_taken_0x229c08 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x229c08) {
            ctx->pc = 0x229C7Cu;
            goto label_229c7c;
        }
    }
    ctx->pc = 0x229C10u;
    // 0x229c10: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x229c10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x229c14: 0xc4610188  lwc1        $f1, 0x188($v1)
    ctx->pc = 0x229c14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x229c18: 0x3c0341f0  lui         $v1, 0x41F0
    ctx->pc = 0x229c18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16880 << 16));
    // 0x229c1c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x229c1cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x229c20: 0x0  nop
    ctx->pc = 0x229c20u;
    // NOP
    // 0x229c24: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x229c24u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x229c28: 0x0  nop
    ctx->pc = 0x229c28u;
    // NOP
    // 0x229c2c: 0x45000013  bc1f        . + 4 + (0x13 << 2)
    ctx->pc = 0x229C2Cu;
    {
        const bool branch_taken_0x229c2c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x229c2c) {
            ctx->pc = 0x229C7Cu;
            goto label_229c7c;
        }
    }
    ctx->pc = 0x229C34u;
    // 0x229c34: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x229c34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x229c38: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x229c38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x229c3c: 0x8c630030  lw          $v1, 0x30($v1)
    ctx->pc = 0x229c3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x229c40: 0x30630400  andi        $v1, $v1, 0x400
    ctx->pc = 0x229c40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1024);
    // 0x229c44: 0x1460000d  bnez        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x229C44u;
    {
        const bool branch_taken_0x229c44 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x229c44) {
            ctx->pc = 0x229C7Cu;
            goto label_229c7c;
        }
    }
    ctx->pc = 0x229C4Cu;
    // 0x229c4c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x229c4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x229c50: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x229c50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x229c54: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x229c54u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x229c58: 0x2404000d  addiu       $a0, $zero, 0xD
    ctx->pc = 0x229c58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x229c5c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x229c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x229c60: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x229c60u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x229c64: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x229c64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x229c68: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x229c68u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x229c6c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x229c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x229c70: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x229c70u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x229c74: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x229c74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x229c78: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x229c78u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_229c7c:
    // 0x229c7c: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x229c7cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x229c80: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x229c80u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x229c84: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x229c84u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x229c88: 0x3e00008  jr          $ra
    ctx->pc = 0x229C88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x229C88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x229C90u;
}
