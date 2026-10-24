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

// Function: Em0d_R1_mv01
// Address: 0x238ef0 - 0x23923c
void Em0d_R1_mv01_0x238ef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em0d_R1_mv01_0x238ef0");
#endif

    switch (ctx->pc) {
        case 0x238fe0u: goto label_238fe0;
        case 0x23900cu: goto label_23900c;
        case 0x239028u: goto label_239028;
        case 0x239040u: goto label_239040;
        case 0x23904cu: goto label_23904c;
        case 0x23907cu: goto label_23907c;
        case 0x2390bcu: goto label_2390bc;
        case 0x2390d8u: goto label_2390d8;
        case 0x2390f0u: goto label_2390f0;
        case 0x2390fcu: goto label_2390fc;
        case 0x23912cu: goto label_23912c;
        default: break;
    }

    ctx->pc = 0x238ef0u;

    // 0x238ef0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x238ef0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x238ef4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x238ef4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x238ef8: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x238ef8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
    // 0x238efc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x238efcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x238f00: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x238f00u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x238f04: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x238f04u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x238f08: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x238f08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x238f0c: 0x10830060  beq         $a0, $v1, . + 4 + (0x60 << 2)
    ctx->pc = 0x238F0Cu;
    {
        const bool branch_taken_0x238f0c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x238f0c) {
            ctx->pc = 0x239090u;
            goto label_239090;
        }
    }
    ctx->pc = 0x238F14u;
    // 0x238f14: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x238f14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x238f18: 0x10830031  beq         $a0, $v1, . + 4 + (0x31 << 2)
    ctx->pc = 0x238F18u;
    {
        const bool branch_taken_0x238f18 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x238f18) {
            ctx->pc = 0x238FE0u;
            goto label_238fe0;
        }
    }
    ctx->pc = 0x238F20u;
    // 0x238f20: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x238F20u;
    {
        const bool branch_taken_0x238f20 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x238f20) {
            ctx->pc = 0x238F30u;
            goto label_238f30;
        }
    }
    ctx->pc = 0x238F28u;
    // 0x238f28: 0x10000080  b           . + 4 + (0x80 << 2)
    ctx->pc = 0x238F28u;
    {
        const bool branch_taken_0x238f28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x238f28) {
            ctx->pc = 0x23912Cu;
            goto label_23912c;
        }
    }
    ctx->pc = 0x238F30u;
label_238f30:
    // 0x238f30: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x238f30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x238f34: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x238f34u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x238f38: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x238f38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x238f3c: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x238f3cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x238f40: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x238f40u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x238f44: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x238f44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x238f48: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x238f48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x238f4c: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x238f4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x238f50: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x238f50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x238f54: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x238f54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x238f58: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x238f58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x238f5c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x238f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x238f60: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x238f60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x238f64: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x238f64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x238f68: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x238f68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x238f6c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x238f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x238f70: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x238f70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x238f74: 0xe4400020  swc1        $f0, 0x20($v0)
    ctx->pc = 0x238f74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
    // 0x238f78: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x238f78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
    // 0x238f7c: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x238f7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x238f80: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x238f80u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x238f84: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x238f84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x238f88: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x238f88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x238f8c: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x238f8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    // 0x238f90: 0x3c023b0e  lui         $v0, 0x3B0E
    ctx->pc = 0x238f90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15118 << 16));
    // 0x238f94: 0x3442fa35  ori         $v0, $v0, 0xFA35
    ctx->pc = 0x238f94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
    // 0x238f98: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x238f98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x238f9c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x238f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x238fa0: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x238fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x238fa4: 0xe440003c  swc1        $f0, 0x3C($v0)
    ctx->pc = 0x238fa4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 60), bits); }
    // 0x238fa8: 0x3c023998  lui         $v0, 0x3998
    ctx->pc = 0x238fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14744 << 16));
    // 0x238fac: 0x3442825b  ori         $v0, $v0, 0x825B
    ctx->pc = 0x238facu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)33371);
    // 0x238fb0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x238fb0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x238fb4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x238fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x238fb8: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x238fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x238fbc: 0xe4400058  swc1        $f0, 0x58($v0)
    ctx->pc = 0x238fbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 88), bits); }
    // 0x238fc0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x238fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x238fc4: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x238fc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x238fc8: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x238fc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x238fcc: 0x3406b404  ori         $a2, $zero, 0xB404
    ctx->pc = 0x238fccu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)46084);
    // 0x238fd0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x238fd0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x238fd4: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x238fd4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x238fd8: 0xc0965d0  jal         func_259740
    ctx->pc = 0x238FD8u;
    SET_GPR_U32(ctx, 31, 0x238FE0u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x238FD8u, 0x238FE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238FE0u;
label_238fe0:
    // 0x238fe0: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x238fe0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x238fe4: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x238fe4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x238fe8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x238fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x238fec: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x238fecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x238ff0: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x238ff0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x238ff4: 0xc4ac00d4  lwc1        $f12, 0xD4($a1)
    ctx->pc = 0x238ff4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x238ff8: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x238ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x238ffc: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x238ffcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x239000: 0xc46d003c  lwc1        $f13, 0x3C($v1)
    ctx->pc = 0x239000u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x239004: 0xc05c848  jal         func_172120
    ctx->pc = 0x239004u;
    SET_GPR_U32(ctx, 31, 0x23900Cu);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x239004u, 0x23900Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23900Cu;
label_23900c:
    // 0x23900c: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x23900cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x239010: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x239010u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x239014: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x239014u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x239018: 0xc7a0001c  lwc1        $f0, 0x1C($sp)
    ctx->pc = 0x239018u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23901c: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x23901cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x239020: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x239020u;
    SET_GPR_U32(ctx, 31, 0x239028u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x239020u, 0x239028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239028u;
label_239028:
    // 0x239028: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x239028u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23902c: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x23902cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x239030: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x239030u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x239034: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x239034u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x239038: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x239038u;
    SET_GPR_U32(ctx, 31, 0x239040u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x239038u, 0x239040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239040u;
label_239040:
    // 0x239040: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x239040u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x239044: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x239044u;
    SET_GPR_U32(ctx, 31, 0x23904Cu);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x239044u, 0x23904Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23904Cu;
label_23904c:
    // 0x23904c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x23904cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x239050: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x239050u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x239054: 0x10600035  beqz        $v1, . + 4 + (0x35 << 2)
    ctx->pc = 0x239054u;
    {
        const bool branch_taken_0x239054 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x239054) {
            ctx->pc = 0x23912Cu;
            goto label_23912c;
        }
    }
    ctx->pc = 0x23905Cu;
    // 0x23905c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x23905cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x239060: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x239060u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x239064: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x239064u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x239068: 0x3406f005  ori         $a2, $zero, 0xF005
    ctx->pc = 0x239068u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)61445);
    // 0x23906c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x23906cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x239070: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x239070u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x239074: 0xc0965d0  jal         func_259740
    ctx->pc = 0x239074u;
    SET_GPR_U32(ctx, 31, 0x23907Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x239074u, 0x23907Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23907Cu;
label_23907c:
    // 0x23907c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x23907cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x239080: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x239080u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x239084: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x239084u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x239088: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x239088u;
    {
        const bool branch_taken_0x239088 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x239088) {
            ctx->pc = 0x23912Cu;
            goto label_23912c;
        }
    }
    ctx->pc = 0x239090u;
label_239090:
    // 0x239090: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x239090u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x239094: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x239094u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x239098: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x239098u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23909c: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x23909cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2390a0: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x2390a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x2390a4: 0xc4ac00d4  lwc1        $f12, 0xD4($a1)
    ctx->pc = 0x2390a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2390a8: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x2390a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x2390ac: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x2390acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x2390b0: 0xc46d003c  lwc1        $f13, 0x3C($v1)
    ctx->pc = 0x2390b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2390b4: 0xc05c848  jal         func_172120
    ctx->pc = 0x2390B4u;
    SET_GPR_U32(ctx, 31, 0x2390BCu);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x2390B4u, 0x2390BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2390BCu;
label_2390bc:
    // 0x2390bc: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x2390bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x2390c0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2390c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2390c4: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x2390c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2390c8: 0xc7a0001c  lwc1        $f0, 0x1C($sp)
    ctx->pc = 0x2390c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2390cc: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x2390ccu;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2390d0: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x2390D0u;
    SET_GPR_U32(ctx, 31, 0x2390D8u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2390D0u, 0x2390D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2390D8u;
label_2390d8:
    // 0x2390d8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2390d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2390dc: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x2390dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x2390e0: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2390e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2390e4: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2390e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2390e8: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x2390E8u;
    SET_GPR_U32(ctx, 31, 0x2390F0u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2390E8u, 0x2390F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2390F0u;
label_2390f0:
    // 0x2390f0: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2390f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2390f4: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x2390F4u;
    SET_GPR_U32(ctx, 31, 0x2390FCu);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x2390F4u, 0x2390FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2390FCu;
label_2390fc:
    // 0x2390fc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2390fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x239100: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x239100u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x239104: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x239104u;
    {
        const bool branch_taken_0x239104 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x239104) {
            ctx->pc = 0x23912Cu;
            goto label_23912c;
        }
    }
    ctx->pc = 0x23910Cu;
    // 0x23910c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x23910cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x239110: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x239110u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x239114: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x239114u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x239118: 0x24061e05  addiu       $a2, $zero, 0x1E05
    ctx->pc = 0x239118u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7685));
    // 0x23911c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x23911cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x239120: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x239120u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x239124: 0xc0965d0  jal         func_259740
    ctx->pc = 0x239124u;
    SET_GPR_U32(ctx, 31, 0x23912Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x239124u, 0x23912Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23912Cu;
label_23912c:
    // 0x23912c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x23912cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x239130: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x239130u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x239134: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x239134u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x239138: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x239138u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23913c: 0x0  nop
    ctx->pc = 0x23913cu;
    // NOP
    // 0x239140: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x239140u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x239144: 0x0  nop
    ctx->pc = 0x239144u;
    // NOP
    // 0x239148: 0x45010038  bc1t        . + 4 + (0x38 << 2)
    ctx->pc = 0x239148u;
    {
        const bool branch_taken_0x239148 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x239148) {
            ctx->pc = 0x23922Cu;
            goto label_23922c;
        }
    }
    ctx->pc = 0x239150u;
    // 0x239150: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x239150u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x239154: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x239154u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x239158: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x239158u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23915c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23915cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x239160: 0x0  nop
    ctx->pc = 0x239160u;
    // NOP
    // 0x239164: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x239164u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x239168: 0x0  nop
    ctx->pc = 0x239168u;
    // NOP
    // 0x23916c: 0x45010019  bc1t        . + 4 + (0x19 << 2)
    ctx->pc = 0x23916Cu;
    {
        const bool branch_taken_0x23916c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x23916c) {
            ctx->pc = 0x2391D4u;
            goto label_2391d4;
        }
    }
    ctx->pc = 0x239174u;
    // 0x239174: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x239174u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x239178: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x239178u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x23917c: 0xc481000c  lwc1        $f1, 0xC($a0)
    ctx->pc = 0x23917cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x239180: 0x3c033cc9  lui         $v1, 0x3CC9
    ctx->pc = 0x239180u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15561 << 16));
    // 0x239184: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x239184u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x239188: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x239188u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23918c: 0x0  nop
    ctx->pc = 0x23918cu;
    // NOP
    // 0x239190: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x239190u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x239194: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x239194u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x239198: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x239198u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23919c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x23919cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2391a0: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x2391a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2391a4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2391a4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2391a8: 0x0  nop
    ctx->pc = 0x2391a8u;
    // NOP
    // 0x2391ac: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2391acu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2391b0: 0x0  nop
    ctx->pc = 0x2391b0u;
    // NOP
    // 0x2391b4: 0x4500001d  bc1f        . + 4 + (0x1D << 2)
    ctx->pc = 0x2391B4u;
    {
        const bool branch_taken_0x2391b4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2391b4) {
            ctx->pc = 0x23922Cu;
            goto label_23922c;
        }
    }
    ctx->pc = 0x2391BCu;
    // 0x2391bc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2391bcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2391c0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2391c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2391c4: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2391c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2391c8: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x2391c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x2391cc: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x2391CCu;
    {
        const bool branch_taken_0x2391cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2391cc) {
            ctx->pc = 0x23922Cu;
            goto label_23922c;
        }
    }
    ctx->pc = 0x2391D4u;
label_2391d4:
    // 0x2391d4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2391d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2391d8: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x2391d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2391dc: 0xc481000c  lwc1        $f1, 0xC($a0)
    ctx->pc = 0x2391dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2391e0: 0x3c033cc9  lui         $v1, 0x3CC9
    ctx->pc = 0x2391e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15561 << 16));
    // 0x2391e4: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x2391e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x2391e8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2391e8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2391ec: 0x0  nop
    ctx->pc = 0x2391ecu;
    // NOP
    // 0x2391f0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2391f0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2391f4: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x2391f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x2391f8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2391f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2391fc: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2391fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x239200: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x239200u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x239204: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x239204u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x239208: 0x0  nop
    ctx->pc = 0x239208u;
    // NOP
    // 0x23920c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x23920cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x239210: 0x0  nop
    ctx->pc = 0x239210u;
    // NOP
    // 0x239214: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x239214u;
    {
        const bool branch_taken_0x239214 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x239214) {
            ctx->pc = 0x23922Cu;
            goto label_23922c;
        }
    }
    ctx->pc = 0x23921Cu;
    // 0x23921c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23921cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x239220: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x239220u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x239224: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x239224u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x239228: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x239228u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
label_23922c:
    // 0x23922c: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x23922cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x239230: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x239230u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x239234: 0x3e00008  jr          $ra
    ctx->pc = 0x239234u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x239234u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23923Cu;
}
