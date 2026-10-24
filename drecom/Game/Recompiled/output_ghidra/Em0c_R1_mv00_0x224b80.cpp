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

// Function: Em0c_R1_mv00
// Address: 0x224b80 - 0x224c58
void Em0c_R1_mv00_0x224b80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em0c_R1_mv00_0x224b80");
#endif

    switch (ctx->pc) {
        case 0x224c2cu: goto label_224c2c;
        case 0x224c3cu: goto label_224c3c;
        case 0x224c48u: goto label_224c48;
        default: break;
    }

    ctx->pc = 0x224b80u;

    // 0x224b80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x224b80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x224b84: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x224b84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x224b88: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x224b88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x224b8c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x224b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x224b90: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x224b90u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x224b94: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x224b94u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x224b98: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x224b98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x224b9c: 0x10830023  beq         $a0, $v1, . + 4 + (0x23 << 2)
    ctx->pc = 0x224B9Cu;
    {
        const bool branch_taken_0x224b9c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x224b9c) {
            ctx->pc = 0x224C2Cu;
            goto label_224c2c;
        }
    }
    ctx->pc = 0x224BA4u;
    // 0x224ba4: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x224BA4u;
    {
        const bool branch_taken_0x224ba4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x224ba4) {
            ctx->pc = 0x224BB4u;
            goto label_224bb4;
        }
    }
    ctx->pc = 0x224BACu;
    // 0x224bac: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x224BACu;
    {
        const bool branch_taken_0x224bac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x224bac) {
            ctx->pc = 0x224C48u;
            goto label_224c48;
        }
    }
    ctx->pc = 0x224BB4u;
label_224bb4:
    // 0x224bb4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x224bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x224bb8: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x224bb8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x224bbc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x224bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x224bc0: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x224bc0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x224bc4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x224bc4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x224bc8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x224bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x224bcc: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x224bccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x224bd0: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x224bd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x224bd4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x224bd4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x224bd8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x224bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x224bdc: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x224bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x224be0: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x224be0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x224be4: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x224be4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x224be8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x224be8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x224bec: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x224becu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x224bf0: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x224bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x224bf4: 0xe4400020  swc1        $f0, 0x20($v0)
    ctx->pc = 0x224bf4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
    // 0x224bf8: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x224bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x224bfc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x224bfcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x224c00: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x224c00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x224c04: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x224c04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x224c08: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x224c08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    // 0x224c0c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x224c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x224c10: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x224c10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x224c14: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x224c14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x224c18: 0x3406be00  ori         $a2, $zero, 0xBE00
    ctx->pc = 0x224c18u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)48640);
    // 0x224c1c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x224c1cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x224c20: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x224c20u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x224c24: 0xc0965d0  jal         func_259740
    ctx->pc = 0x224C24u;
    SET_GPR_U32(ctx, 31, 0x224C2Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x224C24u, 0x224C2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224C2Cu;
label_224c2c:
    // 0x224c2c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x224c2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x224c30: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x224c30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x224c34: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x224C34u;
    SET_GPR_U32(ctx, 31, 0x224C3Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x224C34u, 0x224C3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224C3Cu;
label_224c3c:
    // 0x224c3c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x224c3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x224c40: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x224C40u;
    SET_GPR_U32(ctx, 31, 0x224C48u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x224C40u, 0x224C48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224C48u;
label_224c48:
    // 0x224c48: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x224c48u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x224c4c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x224c4cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x224c50: 0x3e00008  jr          $ra
    ctx->pc = 0x224C50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x224C50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x224C58u;
}
