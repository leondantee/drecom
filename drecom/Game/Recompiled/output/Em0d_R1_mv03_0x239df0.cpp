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

// Function: Em0d_R1_mv03
// Address: 0x239df0 - 0x23a138
void Em0d_R1_mv03_0x239df0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em0d_R1_mv03_0x239df0");
#endif

    switch (ctx->pc) {
        case 0x239e60u: goto label_239e60;
        case 0x239f08u: goto label_239f08;
        case 0x239f24u: goto label_239f24;
        case 0x239f3cu: goto label_239f3c;
        case 0x239f48u: goto label_239f48;
        case 0x239f78u: goto label_239f78;
        case 0x239fb8u: goto label_239fb8;
        case 0x239fd4u: goto label_239fd4;
        default: break;
    }

    ctx->pc = 0x239df0u;

    // 0x239df0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x239df0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x239df4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x239df4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x239df8: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x239df8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
    // 0x239dfc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x239dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x239e00: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x239e00u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x239e04: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x239e04u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x239e08: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x239e08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x239e0c: 0x1083005f  beq         $a0, $v1, . + 4 + (0x5F << 2)
    ctx->pc = 0x239E0Cu;
    {
        const bool branch_taken_0x239e0c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x239e0c) {
            ctx->pc = 0x239F8Cu;
            goto label_239f8c;
        }
    }
    ctx->pc = 0x239E14u;
    // 0x239e14: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x239e14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x239e18: 0x10830030  beq         $a0, $v1, . + 4 + (0x30 << 2)
    ctx->pc = 0x239E18u;
    {
        const bool branch_taken_0x239e18 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x239e18) {
            ctx->pc = 0x239EDCu;
            goto label_239edc;
        }
    }
    ctx->pc = 0x239E20u;
    // 0x239e20: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x239E20u;
    {
        const bool branch_taken_0x239e20 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x239e20) {
            ctx->pc = 0x239E30u;
            goto label_239e30;
        }
    }
    ctx->pc = 0x239E28u;
    // 0x239e28: 0x1000006c  b           . + 4 + (0x6C << 2)
    ctx->pc = 0x239E28u;
    {
        const bool branch_taken_0x239e28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x239e28) {
            ctx->pc = 0x239FDCu;
            goto label_239fdc;
        }
    }
    ctx->pc = 0x239E30u;
label_239e30:
    // 0x239e30: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x239e30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x239e34: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x239e34u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x239e38: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x239e38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x239e3c: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x239e3cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x239e40: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x239e40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x239e44: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x239e44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x239e48: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x239e48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x239e4c: 0x3406f000  ori         $a2, $zero, 0xF000
    ctx->pc = 0x239e4cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)61440);
    // 0x239e50: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x239e50u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x239e54: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x239e54u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x239e58: 0xc0965d0  jal         func_259740
    ctx->pc = 0x239E58u;
    SET_GPR_U32(ctx, 31, 0x239E60u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x239E58u, 0x239E60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239E60u;
label_239e60:
    // 0x239e60: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x239e60u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x239e64: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x239e64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x239e68: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x239e68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x239e6c: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x239e6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x239e70: 0x3c02c0e0  lui         $v0, 0xC0E0
    ctx->pc = 0x239e70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49376 << 16));
    // 0x239e74: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x239e74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x239e78: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x239e78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x239e7c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x239e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x239e80: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x239e80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x239e84: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x239e84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x239e88: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x239e88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x239e8c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x239e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x239e90: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x239e90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x239e94: 0xe4400020  swc1        $f0, 0x20($v0)
    ctx->pc = 0x239e94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
    // 0x239e98: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x239e98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x239e9c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x239e9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x239ea0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x239ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x239ea4: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x239ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x239ea8: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x239ea8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    // 0x239eac: 0x3c023cc9  lui         $v0, 0x3CC9
    ctx->pc = 0x239eacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15561 << 16));
    // 0x239eb0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x239eb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x239eb4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x239eb4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x239eb8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x239eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x239ebc: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x239ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x239ec0: 0xe440003c  swc1        $f0, 0x3C($v0)
    ctx->pc = 0x239ec0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 60), bits); }
    // 0x239ec4: 0x3c023bc9  lui         $v0, 0x3BC9
    ctx->pc = 0x239ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15305 << 16));
    // 0x239ec8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x239ec8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x239ecc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x239eccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x239ed0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x239ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x239ed4: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x239ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x239ed8: 0xe4400058  swc1        $f0, 0x58($v0)
    ctx->pc = 0x239ed8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 88), bits); }
label_239edc:
    // 0x239edc: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x239edcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x239ee0: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x239ee0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x239ee4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x239ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x239ee8: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x239ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x239eec: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x239eecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x239ef0: 0xc4ac00d4  lwc1        $f12, 0xD4($a1)
    ctx->pc = 0x239ef0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x239ef4: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x239ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x239ef8: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x239ef8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x239efc: 0xc46d0038  lwc1        $f13, 0x38($v1)
    ctx->pc = 0x239efcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x239f00: 0xc05c848  jal         func_172120
    ctx->pc = 0x239F00u;
    SET_GPR_U32(ctx, 31, 0x239F08u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x239F00u, 0x239F08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239F08u;
label_239f08:
    // 0x239f08: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x239f08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x239f0c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x239f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x239f10: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x239f10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x239f14: 0xc7a0001c  lwc1        $f0, 0x1C($sp)
    ctx->pc = 0x239f14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x239f18: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x239f18u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x239f1c: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x239F1Cu;
    SET_GPR_U32(ctx, 31, 0x239F24u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x239F1Cu, 0x239F24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239F24u;
label_239f24:
    // 0x239f24: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x239f24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x239f28: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x239f28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x239f2c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x239f2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x239f30: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x239f30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x239f34: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x239F34u;
    SET_GPR_U32(ctx, 31, 0x239F3Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x239F34u, 0x239F3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239F3Cu;
label_239f3c:
    // 0x239f3c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x239f3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x239f40: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x239F40u;
    SET_GPR_U32(ctx, 31, 0x239F48u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x239F40u, 0x239F48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239F48u;
label_239f48:
    // 0x239f48: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x239f48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x239f4c: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x239f4cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x239f50: 0x10600022  beqz        $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x239F50u;
    {
        const bool branch_taken_0x239f50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x239f50) {
            ctx->pc = 0x239FDCu;
            goto label_239fdc;
        }
    }
    ctx->pc = 0x239F58u;
    // 0x239f58: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x239f58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x239f5c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x239f5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x239f60: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x239f60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x239f64: 0x3406f000  ori         $a2, $zero, 0xF000
    ctx->pc = 0x239f64u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)61440);
    // 0x239f68: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x239f68u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x239f6c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x239f6cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x239f70: 0xc0965d0  jal         func_259740
    ctx->pc = 0x239F70u;
    SET_GPR_U32(ctx, 31, 0x239F78u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x239F70u, 0x239F78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239F78u;
label_239f78:
    // 0x239f78: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x239f78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x239f7c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x239f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x239f80: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x239f80u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x239f84: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x239F84u;
    {
        const bool branch_taken_0x239f84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x239f84) {
            ctx->pc = 0x239FDCu;
            goto label_239fdc;
        }
    }
    ctx->pc = 0x239F8Cu;
label_239f8c:
    // 0x239f8c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x239f8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x239f90: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x239f90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x239f94: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x239f94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x239f98: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x239f98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x239f9c: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x239f9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x239fa0: 0xc4ac00d4  lwc1        $f12, 0xD4($a1)
    ctx->pc = 0x239fa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x239fa4: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x239fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x239fa8: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x239fa8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x239fac: 0xc46d0038  lwc1        $f13, 0x38($v1)
    ctx->pc = 0x239facu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x239fb0: 0xc05c848  jal         func_172120
    ctx->pc = 0x239FB0u;
    SET_GPR_U32(ctx, 31, 0x239FB8u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x239FB0u, 0x239FB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239FB8u;
label_239fb8:
    // 0x239fb8: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x239fb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x239fbc: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x239fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x239fc0: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x239fc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x239fc4: 0xc7a0001c  lwc1        $f0, 0x1C($sp)
    ctx->pc = 0x239fc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x239fc8: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x239fc8u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x239fcc: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x239FCCu;
    SET_GPR_U32(ctx, 31, 0x239FD4u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x239FCCu, 0x239FD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239FD4u;
label_239fd4:
    // 0x239fd4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x239fd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x239fd8: 0xe46000d4  swc1        $f0, 0xD4($v1)
    ctx->pc = 0x239fd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 212), bits); }
label_239fdc:
    // 0x239fdc: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x239fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x239fe0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x239fe0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x239fe4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x239fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x239fe8: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x239fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x239fec: 0xe4600024  swc1        $f0, 0x24($v1)
    ctx->pc = 0x239fecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 36), bits); }
    // 0x239ff0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x239ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x239ff4: 0xc4610188  lwc1        $f1, 0x188($v1)
    ctx->pc = 0x239ff4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x239ff8: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x239ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x239ffc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x239ffcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23a000: 0x0  nop
    ctx->pc = 0x23a000u;
    // NOP
    // 0x23a004: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x23a004u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23a008: 0x0  nop
    ctx->pc = 0x23a008u;
    // NOP
    // 0x23a00c: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x23A00Cu;
    {
        const bool branch_taken_0x23a00c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x23a00c) {
            ctx->pc = 0x23A028u;
            goto label_23a028;
        }
    }
    ctx->pc = 0x23A014u;
    // 0x23a014: 0x3c034020  lui         $v1, 0x4020
    ctx->pc = 0x23a014u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16416 << 16));
    // 0x23a018: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x23a018u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23a01c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x23a01cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23a020: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x23a020u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x23a024: 0xe4600024  swc1        $f0, 0x24($v1)
    ctx->pc = 0x23a024u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 36), bits); }
label_23a028:
    // 0x23a028: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x23a028u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23a02c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x23a02cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x23a030: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x23a030u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23a034: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23a034u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23a038: 0x0  nop
    ctx->pc = 0x23a038u;
    // NOP
    // 0x23a03c: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x23a03cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23a040: 0x0  nop
    ctx->pc = 0x23a040u;
    // NOP
    // 0x23a044: 0x45010038  bc1t        . + 4 + (0x38 << 2)
    ctx->pc = 0x23A044u;
    {
        const bool branch_taken_0x23a044 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x23a044) {
            ctx->pc = 0x23A128u;
            goto label_23a128;
        }
    }
    ctx->pc = 0x23A04Cu;
    // 0x23a04c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x23a04cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23a050: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x23a050u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x23a054: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x23a054u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23a058: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23a058u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23a05c: 0x0  nop
    ctx->pc = 0x23a05cu;
    // NOP
    // 0x23a060: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x23a060u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23a064: 0x0  nop
    ctx->pc = 0x23a064u;
    // NOP
    // 0x23a068: 0x45010019  bc1t        . + 4 + (0x19 << 2)
    ctx->pc = 0x23A068u;
    {
        const bool branch_taken_0x23a068 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x23a068) {
            ctx->pc = 0x23A0D0u;
            goto label_23a0d0;
        }
    }
    ctx->pc = 0x23A070u;
    // 0x23a070: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x23a070u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23a074: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x23a074u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x23a078: 0xc481000c  lwc1        $f1, 0xC($a0)
    ctx->pc = 0x23a078u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23a07c: 0x3c033d49  lui         $v1, 0x3D49
    ctx->pc = 0x23a07cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15689 << 16));
    // 0x23a080: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x23a080u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x23a084: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x23a084u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23a088: 0x0  nop
    ctx->pc = 0x23a088u;
    // NOP
    // 0x23a08c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x23a08cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x23a090: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x23a090u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x23a094: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x23a094u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23a098: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x23a098u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x23a09c: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x23a09cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23a0a0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23a0a0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23a0a4: 0x0  nop
    ctx->pc = 0x23a0a4u;
    // NOP
    // 0x23a0a8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x23a0a8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23a0ac: 0x0  nop
    ctx->pc = 0x23a0acu;
    // NOP
    // 0x23a0b0: 0x4500001d  bc1f        . + 4 + (0x1D << 2)
    ctx->pc = 0x23A0B0u;
    {
        const bool branch_taken_0x23a0b0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x23a0b0) {
            ctx->pc = 0x23A128u;
            goto label_23a128;
        }
    }
    ctx->pc = 0x23A0B8u;
    // 0x23a0b8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23a0b8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23a0bc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x23a0bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23a0c0: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x23a0c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x23a0c4: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x23a0c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x23a0c8: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x23A0C8u;
    {
        const bool branch_taken_0x23a0c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23a0c8) {
            ctx->pc = 0x23A128u;
            goto label_23a128;
        }
    }
    ctx->pc = 0x23A0D0u;
label_23a0d0:
    // 0x23a0d0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x23a0d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23a0d4: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x23a0d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x23a0d8: 0xc481000c  lwc1        $f1, 0xC($a0)
    ctx->pc = 0x23a0d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23a0dc: 0x3c033d49  lui         $v1, 0x3D49
    ctx->pc = 0x23a0dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15689 << 16));
    // 0x23a0e0: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x23a0e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x23a0e4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x23a0e4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23a0e8: 0x0  nop
    ctx->pc = 0x23a0e8u;
    // NOP
    // 0x23a0ec: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x23a0ecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x23a0f0: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x23a0f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x23a0f4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x23a0f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23a0f8: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x23a0f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x23a0fc: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x23a0fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23a100: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23a100u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23a104: 0x0  nop
    ctx->pc = 0x23a104u;
    // NOP
    // 0x23a108: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x23a108u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23a10c: 0x0  nop
    ctx->pc = 0x23a10cu;
    // NOP
    // 0x23a110: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x23A110u;
    {
        const bool branch_taken_0x23a110 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x23a110) {
            ctx->pc = 0x23A128u;
            goto label_23a128;
        }
    }
    ctx->pc = 0x23A118u;
    // 0x23a118: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23a118u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23a11c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x23a11cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23a120: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x23a120u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x23a124: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x23a124u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
label_23a128:
    // 0x23a128: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x23a128u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23a12c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x23a12cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x23a130: 0x3e00008  jr          $ra
    ctx->pc = 0x23A130u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23A130u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23A138u;
}
