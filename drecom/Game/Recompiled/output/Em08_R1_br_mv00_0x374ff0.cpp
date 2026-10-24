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

// Function: Em08_R1_br_mv00
// Address: 0x374ff0 - 0x3750a8
void Em08_R1_br_mv00_0x374ff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em08_R1_br_mv00_0x374ff0");
#endif

    switch (ctx->pc) {
        case 0x375058u: goto label_375058;
        default: break;
    }

    ctx->pc = 0x374ff0u;

    // 0x374ff0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x374ff0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x374ff4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x374ff4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x374ff8: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x374ff8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x374ffc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x374ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x375000: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x375000u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x375004: 0x3c034496  lui         $v1, 0x4496
    ctx->pc = 0x375004u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17558 << 16));
    // 0x375008: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x375008u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x37500c: 0x0  nop
    ctx->pc = 0x37500cu;
    // NOP
    // 0x375010: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x375010u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x375014: 0x0  nop
    ctx->pc = 0x375014u;
    // NOP
    // 0x375018: 0x4500001f  bc1f        . + 4 + (0x1F << 2)
    ctx->pc = 0x375018u;
    {
        const bool branch_taken_0x375018 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x375018) {
            ctx->pc = 0x375098u;
            goto label_375098;
        }
    }
    ctx->pc = 0x375020u;
    // 0x375020: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x375020u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x375024: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x375024u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x375028: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x375028u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x37502c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x37502cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x375030: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x375030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x375034: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x375034u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x375038: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x375038u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x37503c: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x37503cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x375040: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x375040u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x375044: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x375044u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x375048: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x375048u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x37504c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x37504cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x375050: 0xc067694  jal         func_19DA50
    ctx->pc = 0x375050u;
    SET_GPR_U32(ctx, 31, 0x375058u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x375050u, 0x375058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x375058u;
label_375058:
    // 0x375058: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x375058u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x37505c: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x37505cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x375060: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x375060u;
    {
        const bool branch_taken_0x375060 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x375060) {
            ctx->pc = 0x375098u;
            goto label_375098;
        }
    }
    ctx->pc = 0x375068u;
    // 0x375068: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x375068u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x37506c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x37506cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x375070: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x375070u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x375074: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x375074u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x375078: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x375078u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x37507c: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x37507cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x375080: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x375080u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x375084: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x375084u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x375088: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x375088u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x37508c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x37508cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x375090: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x375090u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x375094: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x375094u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_375098:
    // 0x375098: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x375098u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37509c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x37509cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3750a0: 0x3e00008  jr          $ra
    ctx->pc = 0x3750A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3750A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3750A8u;
}
