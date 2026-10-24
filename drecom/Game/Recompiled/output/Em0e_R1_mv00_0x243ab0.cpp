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

// Function: Em0e_R1_mv00
// Address: 0x243ab0 - 0x243b88
void Em0e_R1_mv00_0x243ab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em0e_R1_mv00_0x243ab0");
#endif

    switch (ctx->pc) {
        case 0x243b5cu: goto label_243b5c;
        case 0x243b6cu: goto label_243b6c;
        case 0x243b78u: goto label_243b78;
        default: break;
    }

    ctx->pc = 0x243ab0u;

    // 0x243ab0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x243ab0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x243ab4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x243ab4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x243ab8: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x243ab8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x243abc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x243abcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x243ac0: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x243ac0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x243ac4: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x243ac4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x243ac8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x243ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x243acc: 0x10830023  beq         $a0, $v1, . + 4 + (0x23 << 2)
    ctx->pc = 0x243ACCu;
    {
        const bool branch_taken_0x243acc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x243acc) {
            ctx->pc = 0x243B5Cu;
            goto label_243b5c;
        }
    }
    ctx->pc = 0x243AD4u;
    // 0x243ad4: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x243AD4u;
    {
        const bool branch_taken_0x243ad4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x243ad4) {
            ctx->pc = 0x243AE4u;
            goto label_243ae4;
        }
    }
    ctx->pc = 0x243ADCu;
    // 0x243adc: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x243ADCu;
    {
        const bool branch_taken_0x243adc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x243adc) {
            ctx->pc = 0x243B78u;
            goto label_243b78;
        }
    }
    ctx->pc = 0x243AE4u;
label_243ae4:
    // 0x243ae4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x243ae4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x243ae8: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x243ae8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x243aec: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x243aecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x243af0: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x243af0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x243af4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x243af4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x243af8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x243af8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x243afc: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x243afcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x243b00: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x243b00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x243b04: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x243b04u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x243b08: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x243b08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x243b0c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x243b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x243b10: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x243b10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x243b14: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x243b14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x243b18: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x243b18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x243b1c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x243b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x243b20: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x243b20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x243b24: 0xe4400020  swc1        $f0, 0x20($v0)
    ctx->pc = 0x243b24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
    // 0x243b28: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x243b28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x243b2c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x243b2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x243b30: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x243b30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x243b34: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x243b34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x243b38: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x243b38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    // 0x243b3c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x243b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x243b40: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x243b40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x243b44: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x243b44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x243b48: 0x3406be00  ori         $a2, $zero, 0xBE00
    ctx->pc = 0x243b48u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)48640);
    // 0x243b4c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x243b4cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x243b50: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x243b50u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x243b54: 0xc0965d0  jal         func_259740
    ctx->pc = 0x243B54u;
    SET_GPR_U32(ctx, 31, 0x243B5Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x243B54u, 0x243B5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243B5Cu;
label_243b5c:
    // 0x243b5c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x243b5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x243b60: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x243b60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x243b64: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x243B64u;
    SET_GPR_U32(ctx, 31, 0x243B6Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x243B64u, 0x243B6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243B6Cu;
label_243b6c:
    // 0x243b6c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x243b6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x243b70: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x243B70u;
    SET_GPR_U32(ctx, 31, 0x243B78u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x243B70u, 0x243B78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243B78u;
label_243b78:
    // 0x243b78: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x243b78u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x243b7c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x243b7cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x243b80: 0x3e00008  jr          $ra
    ctx->pc = 0x243B80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x243B80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x243B88u;
}
