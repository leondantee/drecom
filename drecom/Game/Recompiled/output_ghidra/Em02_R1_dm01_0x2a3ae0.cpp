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

// Function: Em02_R1_dm01
// Address: 0x2a3ae0 - 0x2a4780
void Em02_R1_dm01_0x2a3ae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em02_R1_dm01_0x2a3ae0");
#endif

    switch (ctx->pc) {
        case 0x2a3b70u: goto label_2a3b70;
        case 0x2a3b9cu: goto label_2a3b9c;
        case 0x2a3bb8u: goto label_2a3bb8;
        case 0x2a3c24u: goto label_2a3c24;
        case 0x2a3c7cu: goto label_2a3c7c;
        case 0x2a3cb0u: goto label_2a3cb0;
        case 0x2a3cf4u: goto label_2a3cf4;
        case 0x2a3cfcu: goto label_2a3cfc;
        case 0x2a3d30u: goto label_2a3d30;
        case 0x2a3d80u: goto label_2a3d80;
        case 0x2a3d88u: goto label_2a3d88;
        case 0x2a3dbcu: goto label_2a3dbc;
        case 0x2a3e00u: goto label_2a3e00;
        case 0x2a3e30u: goto label_2a3e30;
        case 0x2a3e3cu: goto label_2a3e3c;
        case 0x2a3e48u: goto label_2a3e48;
        case 0x2a3f04u: goto label_2a3f04;
        case 0x2a3f44u: goto label_2a3f44;
        case 0x2a3f7cu: goto label_2a3f7c;
        case 0x2a3fbcu: goto label_2a3fbc;
        case 0x2a3ff4u: goto label_2a3ff4;
        case 0x2a402cu: goto label_2a402c;
        case 0x2a4040u: goto label_2a4040;
        case 0x2a4058u: goto label_2a4058;
        case 0x2a4070u: goto label_2a4070;
        case 0x2a4088u: goto label_2a4088;
        case 0x2a40a0u: goto label_2a40a0;
        case 0x2a40d0u: goto label_2a40d0;
        case 0x2a40ecu: goto label_2a40ec;
        case 0x2a4104u: goto label_2a4104;
        case 0x2a4124u: goto label_2a4124;
        case 0x2a4134u: goto label_2a4134;
        case 0x2a4140u: goto label_2a4140;
        case 0x2a414cu: goto label_2a414c;
        case 0x2a41c0u: goto label_2a41c0;
        case 0x2a41dcu: goto label_2a41dc;
        case 0x2a4208u: goto label_2a4208;
        case 0x2a4218u: goto label_2a4218;
        case 0x2a4228u: goto label_2a4228;
        case 0x2a4280u: goto label_2a4280;
        case 0x2a429cu: goto label_2a429c;
        case 0x2a42a8u: goto label_2a42a8;
        case 0x2a42b4u: goto label_2a42b4;
        case 0x2a4378u: goto label_2a4378;
        case 0x2a43b0u: goto label_2a43b0;
        case 0x2a43e8u: goto label_2a43e8;
        case 0x2a442cu: goto label_2a442c;
        case 0x2a4448u: goto label_2a4448;
        case 0x2a4468u: goto label_2a4468;
        case 0x2a4480u: goto label_2a4480;
        case 0x2a4498u: goto label_2a4498;
        case 0x2a44c4u: goto label_2a44c4;
        case 0x2a44e4u: goto label_2a44e4;
        case 0x2a4510u: goto label_2a4510;
        case 0x2a4528u: goto label_2a4528;
        case 0x2a4534u: goto label_2a4534;
        case 0x2a45a0u: goto label_2a45a0;
        case 0x2a45ccu: goto label_2a45cc;
        case 0x2a45e4u: goto label_2a45e4;
        case 0x2a45f0u: goto label_2a45f0;
        case 0x2a4638u: goto label_2a4638;
        case 0x2a46c0u: goto label_2a46c0;
        case 0x2a4710u: goto label_2a4710;
        default: break;
    }

    ctx->pc = 0x2a3ae0u;

    // 0x2a3ae0: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x2a3ae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
    // 0x2a3ae4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2a3ae4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2a3ae8: 0xafa40108  sw          $a0, 0x108($sp)
    ctx->pc = 0x2a3ae8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 264), GPR_U32(ctx, 4));
    // 0x2a3aec: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2a3aecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a3af0: 0x8fa30108  lw          $v1, 0x108($sp)
    ctx->pc = 0x2a3af0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a3af4: 0xa06410a8  sb          $a0, 0x10A8($v1)
    ctx->pc = 0x2a3af4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 4));
    // 0x2a3af8: 0x8fa30108  lw          $v1, 0x108($sp)
    ctx->pc = 0x2a3af8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a3afc: 0x90640002  lbu         $a0, 0x2($v1)
    ctx->pc = 0x2a3afcu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2a3b00: 0x308500ff  andi        $a1, $a0, 0xFF
    ctx->pc = 0x2a3b00u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x2a3b04: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x2a3b04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2a3b08: 0x10a602a8  beq         $a1, $a2, . + 4 + (0x2A8 << 2)
    ctx->pc = 0x2A3B08u;
    {
        const bool branch_taken_0x2a3b08 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 6));
        if (branch_taken_0x2a3b08) {
            ctx->pc = 0x2A45ACu;
            goto label_2a45ac;
        }
    }
    ctx->pc = 0x2A3B10u;
    // 0x2a3b10: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x2a3b10u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2a3b14: 0x10a7026e  beq         $a1, $a3, . + 4 + (0x26E << 2)
    ctx->pc = 0x2A3B14u;
    {
        const bool branch_taken_0x2a3b14 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 7));
        if (branch_taken_0x2a3b14) {
            ctx->pc = 0x2A44D0u;
            goto label_2a44d0;
        }
    }
    ctx->pc = 0x2A3B1Cu;
    // 0x2a3b1c: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x2a3b1cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a3b20: 0x10a801aa  beq         $a1, $t0, . + 4 + (0x1AA << 2)
    ctx->pc = 0x2A3B20u;
    {
        const bool branch_taken_0x2a3b20 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 8));
        if (branch_taken_0x2a3b20) {
            ctx->pc = 0x2A41CCu;
            goto label_2a41cc;
        }
    }
    ctx->pc = 0x2A3B28u;
    // 0x2a3b28: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2a3b28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a3b2c: 0x10a3015d  beq         $a1, $v1, . + 4 + (0x15D << 2)
    ctx->pc = 0x2A3B2Cu;
    {
        const bool branch_taken_0x2a3b2c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x2a3b2c) {
            ctx->pc = 0x2A40A4u;
            goto label_2a40a4;
        }
    }
    ctx->pc = 0x2A3B34u;
    // 0x2a3b34: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A3B34u;
    {
        const bool branch_taken_0x2a3b34 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a3b34) {
            ctx->pc = 0x2A3B44u;
            goto label_2a3b44;
        }
    }
    ctx->pc = 0x2A3B3Cu;
    // 0x2a3b3c: 0x1000030c  b           . + 4 + (0x30C << 2)
    ctx->pc = 0x2A3B3Cu;
    {
        const bool branch_taken_0x2a3b3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a3b3c) {
            ctx->pc = 0x2A4770u;
            goto label_2a4770;
        }
    }
    ctx->pc = 0x2A3B44u;
label_2a3b44:
    // 0x2a3b44: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2a3b44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a3b48: 0x8fa50108  lw          $a1, 0x108($sp)
    ctx->pc = 0x2a3b48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a3b4c: 0xa0a40002  sb          $a0, 0x2($a1)
    ctx->pc = 0x2a3b4cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x2a3b50: 0x8fa20108  lw          $v0, 0x108($sp)
    ctx->pc = 0x2a3b50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a3b54: 0x8fa40108  lw          $a0, 0x108($sp)
    ctx->pc = 0x2a3b54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a3b58: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2a3b58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x2a3b5c: 0x24060409  addiu       $a2, $zero, 0x409
    ctx->pc = 0x2a3b5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1033));
    // 0x2a3b60: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2a3b60u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a3b64: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2a3b64u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2a3b68: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2A3B68u;
    SET_GPR_U32(ctx, 31, 0x2A3B70u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2A3B68u, 0x2A3B70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3B70u;
label_2a3b70:
    // 0x2a3b70: 0x3c043e0e  lui         $a0, 0x3E0E
    ctx->pc = 0x2a3b70u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15886 << 16));
    // 0x2a3b74: 0x3482fa35  ori         $v0, $a0, 0xFA35
    ctx->pc = 0x2a3b74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)64053);
    // 0x2a3b78: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2a3b78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2a3b7c: 0x8fa20108  lw          $v0, 0x108($sp)
    ctx->pc = 0x2a3b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a3b80: 0x8fa30108  lw          $v1, 0x108($sp)
    ctx->pc = 0x2a3b80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a3b84: 0x24440120  addiu       $a0, $v0, 0x120
    ctx->pc = 0x2a3b84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x2a3b88: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x2a3b88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2a3b8c: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x2a3b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x2a3b90: 0x2465dce0  addiu       $a1, $v1, -0x2320
    ctx->pc = 0x2a3b90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958304));
    // 0x2a3b94: 0xc05c848  jal         func_172120
    ctx->pc = 0x2A3B94u;
    SET_GPR_U32(ctx, 31, 0x2A3B9Cu);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x2A3B94u, 0x2A3B9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3B9Cu;
label_2a3b9c:
    // 0x2a3b9c: 0xe7a000fc  swc1        $f0, 0xFC($sp)
    ctx->pc = 0x2a3b9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 252), bits); }
    // 0x2a3ba0: 0x8fa30108  lw          $v1, 0x108($sp)
    ctx->pc = 0x2a3ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a3ba4: 0xc46100d4  lwc1        $f1, 0xD4($v1)
    ctx->pc = 0x2a3ba4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a3ba8: 0xc7a000fc  lwc1        $f0, 0xFC($sp)
    ctx->pc = 0x2a3ba8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a3bac: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x2a3bacu;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2a3bb0: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x2A3BB0u;
    SET_GPR_U32(ctx, 31, 0x2A3BB8u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2A3BB0u, 0x2A3BB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3BB8u;
label_2a3bb8:
    // 0x2a3bb8: 0x8fa30108  lw          $v1, 0x108($sp)
    ctx->pc = 0x2a3bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a3bbc: 0xe46000d4  swc1        $f0, 0xD4($v1)
    ctx->pc = 0x2a3bbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 212), bits); }
    // 0x2a3bc0: 0x8fa20108  lw          $v0, 0x108($sp)
    ctx->pc = 0x2a3bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a3bc4: 0xc4410120  lwc1        $f1, 0x120($v0)
    ctx->pc = 0x2a3bc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a3bc8: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2a3bc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2a3bcc: 0xc420dce0  lwc1        $f0, -0x2320($at)
    ctx->pc = 0x2a3bccu;
    { uint32_t bits = FAST_READ32(0x3EDCE0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a3bd0: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2a3bd0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2a3bd4: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x2a3bd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2a3bd8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2a3bd8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a3bdc: 0x0  nop
    ctx->pc = 0x2a3bdcu;
    // NOP
    // 0x2a3be0: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x2a3be0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2a3be4: 0x8fa20108  lw          $v0, 0x108($sp)
    ctx->pc = 0x2a3be4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a3be8: 0xc4410128  lwc1        $f1, 0x128($v0)
    ctx->pc = 0x2a3be8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a3bec: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2a3becu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2a3bf0: 0xc420dce8  lwc1        $f0, -0x2318($at)
    ctx->pc = 0x2a3bf0u;
    { uint32_t bits = FAST_READ32(0x3EDCE8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a3bf4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2a3bf4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2a3bf8: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x2a3bf8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2a3bfc: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x2a3bfcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x2a3c00: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2a3c00u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a3c04: 0x0  nop
    ctx->pc = 0x2a3c04u;
    // NOP
    // 0x2a3c08: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x2a3c08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x2a3c0c: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x2a3c0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2a3c10: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x2a3c10u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x2a3c14: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x2a3c14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2a3c18: 0x70c02e28  paddub      $a1, $a2, $zero
    ctx->pc = 0x2a3c18u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x2a3c1c: 0xc040c24  jal         func_103090
    ctx->pc = 0x2A3C1Cu;
    SET_GPR_U32(ctx, 31, 0x2A3C24u);
    ctx->pc = 0x103090u;
    {
        ctx->pc = 0x2A3C24u;
        ps2_stubs::sceVu0Normalize(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2A3C24u) { return; }
    ctx->pc = 0x2A3C24u;
label_2a3c24:
    // 0x2a3c24: 0x3c08c302  lui         $t0, 0xC302
    ctx->pc = 0x2a3c24u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)49922 << 16));
    // 0x2a3c28: 0x44880800  mtc1        $t0, $f1
    ctx->pc = 0x2a3c28u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2a3c2c: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x2a3c2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a3c30: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2a3c30u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2a3c34: 0x8fa20108  lw          $v0, 0x108($sp)
    ctx->pc = 0x2a3c34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a3c38: 0xe4400180  swc1        $f0, 0x180($v0)
    ctx->pc = 0x2a3c38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 384), bits); }
    // 0x2a3c3c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2a3c3cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a3c40: 0x8fa20108  lw          $v0, 0x108($sp)
    ctx->pc = 0x2a3c40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a3c44: 0xe4400184  swc1        $f0, 0x184($v0)
    ctx->pc = 0x2a3c44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 388), bits); }
    // 0x2a3c48: 0x3c02c302  lui         $v0, 0xC302
    ctx->pc = 0x2a3c48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49922 << 16));
    // 0x2a3c4c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2a3c4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2a3c50: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x2a3c50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a3c54: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2a3c54u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2a3c58: 0x8fa40108  lw          $a0, 0x108($sp)
    ctx->pc = 0x2a3c58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a3c5c: 0xe4800188  swc1        $f0, 0x188($a0)
    ctx->pc = 0x2a3c5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 392), bits); }
    // 0x2a3c60: 0x8fa20108  lw          $v0, 0x108($sp)
    ctx->pc = 0x2a3c60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a3c64: 0x244400d0  addiu       $a0, $v0, 0xD0
    ctx->pc = 0x2a3c64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 208));
    // 0x2a3c68: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x2a3c68u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2a3c6c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x2a3c6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2a3c70: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x2a3c70u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x2a3c74: 0xc067648  jal         func_19D920
    ctx->pc = 0x2A3C74u;
    SET_GPR_U32(ctx, 31, 0x2A3C7Cu);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2A3C74u, 0x2A3C7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3C7Cu;
label_2a3c7c:
    // 0x2a3c7c: 0x3c023c8e  lui         $v0, 0x3C8E
    ctx->pc = 0x2a3c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15502 << 16));
    // 0x2a3c80: 0x3442fa35  ori         $v0, $v0, 0xFA35
    ctx->pc = 0x2a3c80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
    // 0x2a3c84: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2a3c84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2a3c88: 0x0  nop
    ctx->pc = 0x2a3c88u;
    // NOP
    // 0x2a3c8c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2a3c8cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2a3c90: 0x3c0242b4  lui         $v0, 0x42B4
    ctx->pc = 0x2a3c90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17076 << 16));
    // 0x2a3c94: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a3c94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a3c98: 0x0  nop
    ctx->pc = 0x2a3c98u;
    // NOP
    // 0x2a3c9c: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x2a3c9cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2a3ca0: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x2a3ca0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a3ca4: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x2a3ca4u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2a3ca8: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x2A3CA8u;
    SET_GPR_U32(ctx, 31, 0x2A3CB0u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2A3CA8u, 0x2A3CB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3CB0u;
label_2a3cb0:
    // 0x2a3cb0: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x2a3cb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x2a3cb4: 0x8fa20108  lw          $v0, 0x108($sp)
    ctx->pc = 0x2a3cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a3cb8: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2a3cb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2a3cbc: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2a3cbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2a3cc0: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2a3cc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2a3cc4: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2a3cc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2a3cc8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2a3cc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2a3ccc: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2a3cccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2a3cd0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2a3cd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2a3cd4: 0x34440008  ori         $a0, $v0, 0x8
    ctx->pc = 0x2a3cd4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x2a3cd8: 0x8fa20108  lw          $v0, 0x108($sp)
    ctx->pc = 0x2a3cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a3cdc: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2a3cdcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2a3ce0: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x2a3ce0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2a3ce4: 0x8c470130  lw          $a3, 0x130($v0)
    ctx->pc = 0x2a3ce4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2a3ce8: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x2a3ce8u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2a3cec: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x2A3CECu;
    SET_GPR_U32(ctx, 31, 0x2A3CF4u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x2A3CECu, 0x2A3CF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3CF4u;
label_2a3cf4:
    // 0x2a3cf4: 0xc067648  jal         func_19D920
    ctx->pc = 0x2A3CF4u;
    SET_GPR_U32(ctx, 31, 0x2A3CFCu);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2A3CF4u, 0x2A3CFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3CFCu;
label_2a3cfc:
    // 0x2a3cfc: 0x3c093c8e  lui         $t1, 0x3C8E
    ctx->pc = 0x2a3cfcu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)15502 << 16));
    // 0x2a3d00: 0x3528fa35  ori         $t0, $t1, 0xFA35
    ctx->pc = 0x2a3d00u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)64053);
    // 0x2a3d04: 0x44880800  mtc1        $t0, $f1
    ctx->pc = 0x2a3d04u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2a3d08: 0x0  nop
    ctx->pc = 0x2a3d08u;
    // NOP
    // 0x2a3d0c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2a3d0cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2a3d10: 0x3c0a42b4  lui         $t2, 0x42B4
    ctx->pc = 0x2a3d10u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)17076 << 16));
    // 0x2a3d14: 0x448a0000  mtc1        $t2, $f0
    ctx->pc = 0x2a3d14u;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a3d18: 0x0  nop
    ctx->pc = 0x2a3d18u;
    // NOP
    // 0x2a3d1c: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x2a3d1cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2a3d20: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x2a3d20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a3d24: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x2a3d24u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2a3d28: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x2A3D28u;
    SET_GPR_U32(ctx, 31, 0x2A3D30u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2A3D28u, 0x2A3D30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3D30u;
label_2a3d30:
    // 0x2a3d30: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x2a3d30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x2a3d34: 0x8fa20108  lw          $v0, 0x108($sp)
    ctx->pc = 0x2a3d34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a3d38: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2a3d38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2a3d3c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2a3d3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2a3d40: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2a3d40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2a3d44: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2a3d44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2a3d48: 0x3444ffff  ori         $a0, $v0, 0xFFFF
    ctx->pc = 0x2a3d48u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2a3d4c: 0x642824  and         $a1, $v1, $a0
    ctx->pc = 0x2a3d4cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2a3d50: 0x5303c  dsll32      $a2, $a1, 0
    ctx->pc = 0x2a3d50u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) << (32 + 0));
    // 0x2a3d54: 0x34c70008  ori         $a3, $a2, 0x8
    ctx->pc = 0x2a3d54u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)8);
    // 0x2a3d58: 0x8fa80108  lw          $t0, 0x108($sp)
    ctx->pc = 0x2a3d58u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a3d5c: 0x70e02628  paddub      $a0, $a3, $zero
    ctx->pc = 0x2a3d5cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x2a3d60: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2a3d60u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2a3d64: 0x27a90020  addiu       $t1, $sp, 0x20
    ctx->pc = 0x2a3d64u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2a3d68: 0x71203628  paddub      $a2, $t1, $zero
    ctx->pc = 0x2a3d68u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
    // 0x2a3d6c: 0x8d0a0130  lw          $t2, 0x130($t0)
    ctx->pc = 0x2a3d6cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 304)));
    // 0x2a3d70: 0x71403e28  paddub      $a3, $t2, $zero
    ctx->pc = 0x2a3d70u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x2a3d74: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x2a3d74u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2a3d78: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x2A3D78u;
    SET_GPR_U32(ctx, 31, 0x2A3D80u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x2A3D78u, 0x2A3D80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3D80u;
label_2a3d80:
    // 0x2a3d80: 0xc067648  jal         func_19D920
    ctx->pc = 0x2A3D80u;
    SET_GPR_U32(ctx, 31, 0x2A3D88u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2A3D80u, 0x2A3D88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3D88u;
label_2a3d88:
    // 0x2a3d88: 0x3c023c8e  lui         $v0, 0x3C8E
    ctx->pc = 0x2a3d88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15502 << 16));
    // 0x2a3d8c: 0x3442fa35  ori         $v0, $v0, 0xFA35
    ctx->pc = 0x2a3d8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
    // 0x2a3d90: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2a3d90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2a3d94: 0x0  nop
    ctx->pc = 0x2a3d94u;
    // NOP
    // 0x2a3d98: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2a3d98u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2a3d9c: 0x3c0242b4  lui         $v0, 0x42B4
    ctx->pc = 0x2a3d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17076 << 16));
    // 0x2a3da0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a3da0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a3da4: 0x0  nop
    ctx->pc = 0x2a3da4u;
    // NOP
    // 0x2a3da8: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x2a3da8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2a3dac: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x2a3dacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a3db0: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x2a3db0u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2a3db4: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x2A3DB4u;
    SET_GPR_U32(ctx, 31, 0x2A3DBCu);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2A3DB4u, 0x2A3DBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3DBCu;
label_2a3dbc:
    // 0x2a3dbc: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x2a3dbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x2a3dc0: 0x8fa40108  lw          $a0, 0x108($sp)
    ctx->pc = 0x2a3dc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a3dc4: 0x4283c  dsll32      $a1, $a0, 0
    ctx->pc = 0x2a3dc4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 0));
    // 0x2a3dc8: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x2a3dc8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x2a3dcc: 0x3406ffff  ori         $a2, $zero, 0xFFFF
    ctx->pc = 0x2a3dccu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2a3dd0: 0x63c38  dsll        $a3, $a2, 16
    ctx->pc = 0x2a3dd0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) << 16);
    // 0x2a3dd4: 0x34e8ffff  ori         $t0, $a3, 0xFFFF
    ctx->pc = 0x2a3dd4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x2a3dd8: 0xa84824  and         $t1, $a1, $t0
    ctx->pc = 0x2a3dd8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 5) & GPR_U64(ctx, 8));
    // 0x2a3ddc: 0x9503c  dsll32      $t2, $t1, 0
    ctx->pc = 0x2a3ddcu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 9) << (32 + 0));
    // 0x2a3de0: 0x35440008  ori         $a0, $t2, 0x8
    ctx->pc = 0x2a3de0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)8);
    // 0x2a3de4: 0x8fa20108  lw          $v0, 0x108($sp)
    ctx->pc = 0x2a3de4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a3de8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2a3de8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2a3dec: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x2a3decu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2a3df0: 0x8c470130  lw          $a3, 0x130($v0)
    ctx->pc = 0x2a3df0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2a3df4: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x2a3df4u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2a3df8: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x2A3DF8u;
    SET_GPR_U32(ctx, 31, 0x2A3E00u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x2A3DF8u, 0x2A3E00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3E00u;
label_2a3e00:
    // 0x2a3e00: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2a3e00u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a3e04: 0x8fa50108  lw          $a1, 0x108($sp)
    ctx->pc = 0x2a3e04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a3e08: 0x24a61330  addiu       $a2, $a1, 0x1330
    ctx->pc = 0x2a3e08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 4912));
    // 0x2a3e0c: 0xe4c00018  swc1        $f0, 0x18($a2)
    ctx->pc = 0x2a3e0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 24), bits); }
    // 0x2a3e10: 0x8fa70108  lw          $a3, 0x108($sp)
    ctx->pc = 0x2a3e10u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a3e14: 0x8ce80030  lw          $t0, 0x30($a3)
    ctx->pc = 0x2a3e14u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 48)));
    // 0x2a3e18: 0x15000086  bnez        $t0, . + 4 + (0x86 << 2)
    ctx->pc = 0x2A3E18u;
    {
        const bool branch_taken_0x2a3e18 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a3e18) {
            ctx->pc = 0x2A4034u;
            goto label_2a4034;
        }
    }
    ctx->pc = 0x2A3E20u;
    // 0x2a3e20: 0x27a90040  addiu       $t1, $sp, 0x40
    ctx->pc = 0x2a3e20u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2a3e24: 0x71202628  paddub      $a0, $t1, $zero
    ctx->pc = 0x2a3e24u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
    // 0x2a3e28: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x2A3E28u;
    SET_GPR_U32(ctx, 31, 0x2A3E30u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x2A3E28u, 0x2A3E30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3E30u;
label_2a3e30:
    // 0x2a3e30: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x2a3e30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2a3e34: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x2A3E34u;
    SET_GPR_U32(ctx, 31, 0x2A3E3Cu);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x2A3E34u, 0x2A3E3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3E3Cu;
label_2a3e3c:
    // 0x2a3e3c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x2a3e3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2a3e40: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x2A3E40u;
    SET_GPR_U32(ctx, 31, 0x2A3E48u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x2A3E40u, 0x2A3E48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3E48u;
label_2a3e48:
    // 0x2a3e48: 0x3c064200  lui         $a2, 0x4200
    ctx->pc = 0x2a3e48u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16896 << 16));
    // 0x2a3e4c: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x2a3e4cu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a3e50: 0x0  nop
    ctx->pc = 0x2a3e50u;
    // NOP
    // 0x2a3e54: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x2a3e54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x2a3e58: 0x3c0741c0  lui         $a3, 0x41C0
    ctx->pc = 0x2a3e58u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16832 << 16));
    // 0x2a3e5c: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x2a3e5cu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a3e60: 0x0  nop
    ctx->pc = 0x2a3e60u;
    // NOP
    // 0x2a3e64: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x2a3e64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x2a3e68: 0x3c024180  lui         $v0, 0x4180
    ctx->pc = 0x2a3e68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16768 << 16));
    // 0x2a3e6c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a3e6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a3e70: 0x0  nop
    ctx->pc = 0x2a3e70u;
    // NOP
    // 0x2a3e74: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x2a3e74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x2a3e78: 0x3c044300  lui         $a0, 0x4300
    ctx->pc = 0x2a3e78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17152 << 16));
    // 0x2a3e7c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2a3e7cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a3e80: 0x0  nop
    ctx->pc = 0x2a3e80u;
    // NOP
    // 0x2a3e84: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x2a3e84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x2a3e88: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x2a3e88u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x2a3e8c: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x2a3e8cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a3e90: 0x0  nop
    ctx->pc = 0x2a3e90u;
    // NOP
    // 0x2a3e94: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x2a3e94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x2a3e98: 0x3c063f80  lui         $a2, 0x3F80
    ctx->pc = 0x2a3e98u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16256 << 16));
    // 0x2a3e9c: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x2a3e9cu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a3ea0: 0x0  nop
    ctx->pc = 0x2a3ea0u;
    // NOP
    // 0x2a3ea4: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x2a3ea4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x2a3ea8: 0x3c073f80  lui         $a3, 0x3F80
    ctx->pc = 0x2a3ea8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16256 << 16));
    // 0x2a3eac: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x2a3eacu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a3eb0: 0x0  nop
    ctx->pc = 0x2a3eb0u;
    // NOP
    // 0x2a3eb4: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x2a3eb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x2a3eb8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2a3eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2a3ebc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a3ebcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a3ec0: 0x0  nop
    ctx->pc = 0x2a3ec0u;
    // NOP
    // 0x2a3ec4: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x2a3ec4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x2a3ec8: 0x3c044396  lui         $a0, 0x4396
    ctx->pc = 0x2a3ec8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17302 << 16));
    // 0x2a3ecc: 0x44846000  mtc1        $a0, $f12
    ctx->pc = 0x2a3eccu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2a3ed0: 0x3c063c23  lui         $a2, 0x3C23
    ctx->pc = 0x2a3ed0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)15395 << 16));
    // 0x2a3ed4: 0x34c5d70a  ori         $a1, $a2, 0xD70A
    ctx->pc = 0x2a3ed4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)55050);
    // 0x2a3ed8: 0x44856800  mtc1        $a1, $f13
    ctx->pc = 0x2a3ed8u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2a3edc: 0x8fa70108  lw          $a3, 0x108($sp)
    ctx->pc = 0x2a3edcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a3ee0: 0x70e02628  paddub      $a0, $a3, $zero
    ctx->pc = 0x2a3ee0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x2a3ee4: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x2a3ee4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2a3ee8: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x2a3ee8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2a3eec: 0x27a70030  addiu       $a3, $sp, 0x30
    ctx->pc = 0x2a3eecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2a3ef0: 0x27a80050  addiu       $t0, $sp, 0x50
    ctx->pc = 0x2a3ef0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2a3ef4: 0x27a90060  addiu       $t1, $sp, 0x60
    ctx->pc = 0x2a3ef4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2a3ef8: 0x27aa0070  addiu       $t2, $sp, 0x70
    ctx->pc = 0x2a3ef8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2a3efc: 0xc086970  jal         func_21A5C0
    ctx->pc = 0x2A3EFCu;
    SET_GPR_U32(ctx, 31, 0x2A3F04u);
    ctx->pc = 0x21A5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A5C0u, 0x2A3EFCu, 0x2A3F04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3F04u;
label_2a3f04:
    // 0x2a3f04: 0x3c054396  lui         $a1, 0x4396
    ctx->pc = 0x2a3f04u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17302 << 16));
    // 0x2a3f08: 0x44856000  mtc1        $a1, $f12
    ctx->pc = 0x2a3f08u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2a3f0c: 0x3c043c23  lui         $a0, 0x3C23
    ctx->pc = 0x2a3f0cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15395 << 16));
    // 0x2a3f10: 0x3482d70a  ori         $v0, $a0, 0xD70A
    ctx->pc = 0x2a3f10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)55050);
    // 0x2a3f14: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2a3f14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2a3f18: 0x8fa30108  lw          $v1, 0x108($sp)
    ctx->pc = 0x2a3f18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a3f1c: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x2a3f1cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x2a3f20: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x2a3f20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x2a3f24: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x2a3f24u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a3f28: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x2a3f28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2a3f2c: 0x27a70030  addiu       $a3, $sp, 0x30
    ctx->pc = 0x2a3f2cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2a3f30: 0x27a80050  addiu       $t0, $sp, 0x50
    ctx->pc = 0x2a3f30u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2a3f34: 0x27a90060  addiu       $t1, $sp, 0x60
    ctx->pc = 0x2a3f34u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2a3f38: 0x27aa0070  addiu       $t2, $sp, 0x70
    ctx->pc = 0x2a3f38u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2a3f3c: 0xc086970  jal         func_21A5C0
    ctx->pc = 0x2A3F3Cu;
    SET_GPR_U32(ctx, 31, 0x2A3F44u);
    ctx->pc = 0x21A5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A5C0u, 0x2A3F3Cu, 0x2A3F44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3F44u;
label_2a3f44:
    // 0x2a3f44: 0x3c044396  lui         $a0, 0x4396
    ctx->pc = 0x2a3f44u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17302 << 16));
    // 0x2a3f48: 0x44846000  mtc1        $a0, $f12
    ctx->pc = 0x2a3f48u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2a3f4c: 0x3c033c23  lui         $v1, 0x3C23
    ctx->pc = 0x2a3f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15395 << 16));
    // 0x2a3f50: 0x3462d70a  ori         $v0, $v1, 0xD70A
    ctx->pc = 0x2a3f50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x2a3f54: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2a3f54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2a3f58: 0x8fa40108  lw          $a0, 0x108($sp)
    ctx->pc = 0x2a3f58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a3f5c: 0x24050012  addiu       $a1, $zero, 0x12
    ctx->pc = 0x2a3f5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x2a3f60: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x2a3f60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2a3f64: 0x27a70030  addiu       $a3, $sp, 0x30
    ctx->pc = 0x2a3f64u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2a3f68: 0x27a80050  addiu       $t0, $sp, 0x50
    ctx->pc = 0x2a3f68u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2a3f6c: 0x27a90060  addiu       $t1, $sp, 0x60
    ctx->pc = 0x2a3f6cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2a3f70: 0x27aa0070  addiu       $t2, $sp, 0x70
    ctx->pc = 0x2a3f70u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2a3f74: 0xc086970  jal         func_21A5C0
    ctx->pc = 0x2A3F74u;
    SET_GPR_U32(ctx, 31, 0x2A3F7Cu);
    ctx->pc = 0x21A5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A5C0u, 0x2A3F74u, 0x2A3F7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3F7Cu;
label_2a3f7c:
    // 0x2a3f7c: 0x3c044396  lui         $a0, 0x4396
    ctx->pc = 0x2a3f7cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17302 << 16));
    // 0x2a3f80: 0x44846000  mtc1        $a0, $f12
    ctx->pc = 0x2a3f80u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2a3f84: 0x3c063c23  lui         $a2, 0x3C23
    ctx->pc = 0x2a3f84u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)15395 << 16));
    // 0x2a3f88: 0x34c5d70a  ori         $a1, $a2, 0xD70A
    ctx->pc = 0x2a3f88u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)55050);
    // 0x2a3f8c: 0x44856800  mtc1        $a1, $f13
    ctx->pc = 0x2a3f8cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2a3f90: 0x8fa70108  lw          $a3, 0x108($sp)
    ctx->pc = 0x2a3f90u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a3f94: 0x70e02628  paddub      $a0, $a3, $zero
    ctx->pc = 0x2a3f94u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x2a3f98: 0x24080016  addiu       $t0, $zero, 0x16
    ctx->pc = 0x2a3f98u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x2a3f9c: 0x71002e28  paddub      $a1, $t0, $zero
    ctx->pc = 0x2a3f9cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x2a3fa0: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x2a3fa0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2a3fa4: 0x27a70030  addiu       $a3, $sp, 0x30
    ctx->pc = 0x2a3fa4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2a3fa8: 0x27a80050  addiu       $t0, $sp, 0x50
    ctx->pc = 0x2a3fa8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2a3fac: 0x27a90060  addiu       $t1, $sp, 0x60
    ctx->pc = 0x2a3facu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2a3fb0: 0x27aa0070  addiu       $t2, $sp, 0x70
    ctx->pc = 0x2a3fb0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2a3fb4: 0xc086970  jal         func_21A5C0
    ctx->pc = 0x2A3FB4u;
    SET_GPR_U32(ctx, 31, 0x2A3FBCu);
    ctx->pc = 0x21A5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A5C0u, 0x2A3FB4u, 0x2A3FBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3FBCu;
label_2a3fbc:
    // 0x2a3fbc: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x2a3fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
    // 0x2a3fc0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2a3fc0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2a3fc4: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x2a3fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
    // 0x2a3fc8: 0x3444d70a  ori         $a0, $v0, 0xD70A
    ctx->pc = 0x2a3fc8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x2a3fcc: 0x44846800  mtc1        $a0, $f13
    ctx->pc = 0x2a3fccu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2a3fd0: 0x8fa40108  lw          $a0, 0x108($sp)
    ctx->pc = 0x2a3fd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a3fd4: 0x2405001b  addiu       $a1, $zero, 0x1B
    ctx->pc = 0x2a3fd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x2a3fd8: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x2a3fd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2a3fdc: 0x27a70030  addiu       $a3, $sp, 0x30
    ctx->pc = 0x2a3fdcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2a3fe0: 0x27a80050  addiu       $t0, $sp, 0x50
    ctx->pc = 0x2a3fe0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2a3fe4: 0x27a90060  addiu       $t1, $sp, 0x60
    ctx->pc = 0x2a3fe4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2a3fe8: 0x27aa0070  addiu       $t2, $sp, 0x70
    ctx->pc = 0x2a3fe8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2a3fec: 0xc086970  jal         func_21A5C0
    ctx->pc = 0x2A3FECu;
    SET_GPR_U32(ctx, 31, 0x2A3FF4u);
    ctx->pc = 0x21A5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A5C0u, 0x2A3FECu, 0x2A3FF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3FF4u;
label_2a3ff4:
    // 0x2a3ff4: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x2a3ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
    // 0x2a3ff8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2a3ff8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2a3ffc: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x2a3ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
    // 0x2a4000: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x2a4000u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x2a4004: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2a4004u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2a4008: 0x8fa40108  lw          $a0, 0x108($sp)
    ctx->pc = 0x2a4008u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a400c: 0x2405001f  addiu       $a1, $zero, 0x1F
    ctx->pc = 0x2a400cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x2a4010: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x2a4010u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2a4014: 0x27a70030  addiu       $a3, $sp, 0x30
    ctx->pc = 0x2a4014u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2a4018: 0x27a80050  addiu       $t0, $sp, 0x50
    ctx->pc = 0x2a4018u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2a401c: 0x27a90060  addiu       $t1, $sp, 0x60
    ctx->pc = 0x2a401cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2a4020: 0x27aa0070  addiu       $t2, $sp, 0x70
    ctx->pc = 0x2a4020u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2a4024: 0xc086970  jal         func_21A5C0
    ctx->pc = 0x2A4024u;
    SET_GPR_U32(ctx, 31, 0x2A402Cu);
    ctx->pc = 0x21A5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A5C0u, 0x2A4024u, 0x2A402Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A402Cu;
label_2a402c:
    // 0x2a402c: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x2A402Cu;
    {
        const bool branch_taken_0x2a402c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a402c) {
            ctx->pc = 0x2A40A4u;
            goto label_2a40a4;
        }
    }
    ctx->pc = 0x2A4034u;
label_2a4034:
    // 0x2a4034: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x2a4034u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2a4038: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x2A4038u;
    SET_GPR_U32(ctx, 31, 0x2A4040u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x2A4038u, 0x2A4040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4040u;
label_2a4040:
    // 0x2a4040: 0x8fa40108  lw          $a0, 0x108($sp)
    ctx->pc = 0x2a4040u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a4044: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x2a4044u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2a4048: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x2a4048u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2a404c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2a404cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a4050: 0xc086b14  jal         func_21AC50
    ctx->pc = 0x2A4050u;
    SET_GPR_U32(ctx, 31, 0x2A4058u);
    ctx->pc = 0x21AC50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21AC50u, 0x2A4050u, 0x2A4058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4058u;
label_2a4058:
    // 0x2a4058: 0x8fa40108  lw          $a0, 0x108($sp)
    ctx->pc = 0x2a4058u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a405c: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x2a405cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x2a4060: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x2a4060u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2a4064: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2a4064u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a4068: 0xc086b14  jal         func_21AC50
    ctx->pc = 0x2A4068u;
    SET_GPR_U32(ctx, 31, 0x2A4070u);
    ctx->pc = 0x21AC50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21AC50u, 0x2A4068u, 0x2A4070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4070u;
label_2a4070:
    // 0x2a4070: 0x8fa40108  lw          $a0, 0x108($sp)
    ctx->pc = 0x2a4070u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a4074: 0x24050012  addiu       $a1, $zero, 0x12
    ctx->pc = 0x2a4074u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x2a4078: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x2a4078u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2a407c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2a407cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a4080: 0xc086b14  jal         func_21AC50
    ctx->pc = 0x2A4080u;
    SET_GPR_U32(ctx, 31, 0x2A4088u);
    ctx->pc = 0x21AC50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21AC50u, 0x2A4080u, 0x2A4088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4088u;
label_2a4088:
    // 0x2a4088: 0x8fa40108  lw          $a0, 0x108($sp)
    ctx->pc = 0x2a4088u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a408c: 0x2405001f  addiu       $a1, $zero, 0x1F
    ctx->pc = 0x2a408cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x2a4090: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x2a4090u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2a4094: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2a4094u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a4098: 0xc086b14  jal         func_21AC50
    ctx->pc = 0x2A4098u;
    SET_GPR_U32(ctx, 31, 0x2A40A0u);
    ctx->pc = 0x21AC50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21AC50u, 0x2A4098u, 0x2A40A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A40A0u;
label_2a40a0:
    // 0x2a40a0: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2a40a0u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2a40a4:
    // 0x2a40a4: 0x3c033d0e  lui         $v1, 0x3D0E
    ctx->pc = 0x2a40a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15630 << 16));
    // 0x2a40a8: 0x3463fa35  ori         $v1, $v1, 0xFA35
    ctx->pc = 0x2a40a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64053);
    // 0x2a40ac: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x2a40acu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2a40b0: 0x8fa40108  lw          $a0, 0x108($sp)
    ctx->pc = 0x2a40b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a40b4: 0x8fa30108  lw          $v1, 0x108($sp)
    ctx->pc = 0x2a40b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a40b8: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x2a40b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x2a40bc: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x2a40bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2a40c0: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x2a40c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x2a40c4: 0x2465dce0  addiu       $a1, $v1, -0x2320
    ctx->pc = 0x2a40c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958304));
    // 0x2a40c8: 0xc05c848  jal         func_172120
    ctx->pc = 0x2A40C8u;
    SET_GPR_U32(ctx, 31, 0x2A40D0u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x2A40C8u, 0x2A40D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A40D0u;
label_2a40d0:
    // 0x2a40d0: 0xe7a000fc  swc1        $f0, 0xFC($sp)
    ctx->pc = 0x2a40d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 252), bits); }
    // 0x2a40d4: 0x8fa30108  lw          $v1, 0x108($sp)
    ctx->pc = 0x2a40d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a40d8: 0xc46100d4  lwc1        $f1, 0xD4($v1)
    ctx->pc = 0x2a40d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a40dc: 0xc7a000fc  lwc1        $f0, 0xFC($sp)
    ctx->pc = 0x2a40dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a40e0: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x2a40e0u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2a40e4: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x2A40E4u;
    SET_GPR_U32(ctx, 31, 0x2A40ECu);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2A40E4u, 0x2A40ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A40ECu;
label_2a40ec:
    // 0x2a40ec: 0x8fa30108  lw          $v1, 0x108($sp)
    ctx->pc = 0x2a40ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a40f0: 0xe46000d4  swc1        $f0, 0xD4($v1)
    ctx->pc = 0x2a40f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 212), bits); }
    // 0x2a40f4: 0x8fa40108  lw          $a0, 0x108($sp)
    ctx->pc = 0x2a40f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a40f8: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2a40f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2a40fc: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x2A40FCu;
    SET_GPR_U32(ctx, 31, 0x2A4104u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2A40FCu, 0x2A4104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4104u;
label_2a4104:
    // 0x2a4104: 0x8fa40108  lw          $a0, 0x108($sp)
    ctx->pc = 0x2a4104u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a4108: 0x8fa30108  lw          $v1, 0x108($sp)
    ctx->pc = 0x2a4108u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a410c: 0x8fa20108  lw          $v0, 0x108($sp)
    ctx->pc = 0x2a410cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a4110: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x2a4110u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x2a4114: 0x24650120  addiu       $a1, $v1, 0x120
    ctx->pc = 0x2a4114u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x2a4118: 0x24460180  addiu       $a2, $v0, 0x180
    ctx->pc = 0x2a4118u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 384));
    // 0x2a411c: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x2A411Cu;
    SET_GPR_U32(ctx, 31, 0x2A4124u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x2A411Cu, 0x2A4124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4124u;
label_2a4124:
    // 0x2a4124: 0x8fa40108  lw          $a0, 0x108($sp)
    ctx->pc = 0x2a4124u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a4128: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2a4128u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2a412c: 0xc0a748c  jal         func_29D230
    ctx->pc = 0x2A412Cu;
    SET_GPR_U32(ctx, 31, 0x2A4134u);
    ctx->pc = 0x29D230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29D230u, 0x2A412Cu, 0x2A4134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4134u;
label_2a4134:
    // 0x2a4134: 0x8fa40108  lw          $a0, 0x108($sp)
    ctx->pc = 0x2a4134u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a4138: 0xc0b3764  jal         func_2CDD90
    ctx->pc = 0x2A4138u;
    SET_GPR_U32(ctx, 31, 0x2A4140u);
    ctx->pc = 0x2CDD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CDD90u, 0x2A4138u, 0x2A4140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4140u;
label_2a4140:
    // 0x2a4140: 0x8fa40108  lw          $a0, 0x108($sp)
    ctx->pc = 0x2a4140u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a4144: 0xc0aa354  jal         func_2A8D50
    ctx->pc = 0x2A4144u;
    SET_GPR_U32(ctx, 31, 0x2A414Cu);
    ctx->pc = 0x2A8D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8D50u, 0x2A4144u, 0x2A414Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A414Cu;
label_2a414c:
    // 0x2a414c: 0x8fa40108  lw          $a0, 0x108($sp)
    ctx->pc = 0x2a414cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a4150: 0x3c033f73  lui         $v1, 0x3F73
    ctx->pc = 0x2a4150u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16243 << 16));
    // 0x2a4154: 0x34633333  ori         $v1, $v1, 0x3333
    ctx->pc = 0x2a4154u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)13107);
    // 0x2a4158: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2a4158u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2a415c: 0xc4800180  lwc1        $f0, 0x180($a0)
    ctx->pc = 0x2a415cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a4160: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2a4160u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2a4164: 0xe4800180  swc1        $f0, 0x180($a0)
    ctx->pc = 0x2a4164u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 384), bits); }
    // 0x2a4168: 0x8fa40108  lw          $a0, 0x108($sp)
    ctx->pc = 0x2a4168u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a416c: 0x3c033f73  lui         $v1, 0x3F73
    ctx->pc = 0x2a416cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16243 << 16));
    // 0x2a4170: 0x34633333  ori         $v1, $v1, 0x3333
    ctx->pc = 0x2a4170u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)13107);
    // 0x2a4174: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2a4174u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2a4178: 0xc4800188  lwc1        $f0, 0x188($a0)
    ctx->pc = 0x2a4178u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a417c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2a417cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2a4180: 0xe4800188  swc1        $f0, 0x188($a0)
    ctx->pc = 0x2a4180u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 392), bits); }
    // 0x2a4184: 0x8fa30108  lw          $v1, 0x108($sp)
    ctx->pc = 0x2a4184u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a4188: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x2a4188u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x2a418c: 0x10600178  beqz        $v1, . + 4 + (0x178 << 2)
    ctx->pc = 0x2A418Cu;
    {
        const bool branch_taken_0x2a418c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a418c) {
            ctx->pc = 0x2A4770u;
            goto label_2a4770;
        }
    }
    ctx->pc = 0x2A4194u;
    // 0x2a4194: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2a4194u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a4198: 0x8fa30108  lw          $v1, 0x108($sp)
    ctx->pc = 0x2a4198u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a419c: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x2a419cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x2a41a0: 0x8fa30108  lw          $v1, 0x108($sp)
    ctx->pc = 0x2a41a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a41a4: 0x8fa40108  lw          $a0, 0x108($sp)
    ctx->pc = 0x2a41a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a41a8: 0x8c650368  lw          $a1, 0x368($v1)
    ctx->pc = 0x2a41a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 872)));
    // 0x2a41ac: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x2a41acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2a41b0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2a41b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a41b4: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2a41b4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2a41b8: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2A41B8u;
    SET_GPR_U32(ctx, 31, 0x2A41C0u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2A41B8u, 0x2A41C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A41C0u;
label_2a41c0:
    // 0x2a41c0: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2a41c0u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a41c4: 0x1000016a  b           . + 4 + (0x16A << 2)
    ctx->pc = 0x2A41C4u;
    {
        const bool branch_taken_0x2a41c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a41c4) {
            ctx->pc = 0x2A4770u;
            goto label_2a4770;
        }
    }
    ctx->pc = 0x2A41CCu;
label_2a41cc:
    // 0x2a41cc: 0x8fa40108  lw          $a0, 0x108($sp)
    ctx->pc = 0x2a41ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a41d0: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2a41d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2a41d4: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x2A41D4u;
    SET_GPR_U32(ctx, 31, 0x2A41DCu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2A41D4u, 0x2A41DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A41DCu;
label_2a41dc:
    // 0x2a41dc: 0x8fa40108  lw          $a0, 0x108($sp)
    ctx->pc = 0x2a41dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a41e0: 0x8fa50108  lw          $a1, 0x108($sp)
    ctx->pc = 0x2a41e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a41e4: 0x8fa60108  lw          $a2, 0x108($sp)
    ctx->pc = 0x2a41e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a41e8: 0x24870120  addiu       $a3, $a0, 0x120
    ctx->pc = 0x2a41e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x2a41ec: 0x70e02628  paddub      $a0, $a3, $zero
    ctx->pc = 0x2a41ecu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x2a41f0: 0x24a80120  addiu       $t0, $a1, 0x120
    ctx->pc = 0x2a41f0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), 288));
    // 0x2a41f4: 0x71002e28  paddub      $a1, $t0, $zero
    ctx->pc = 0x2a41f4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x2a41f8: 0x24c20180  addiu       $v0, $a2, 0x180
    ctx->pc = 0x2a41f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 384));
    // 0x2a41fc: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x2a41fcu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a4200: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x2A4200u;
    SET_GPR_U32(ctx, 31, 0x2A4208u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x2A4200u, 0x2A4208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4208u;
label_2a4208:
    // 0x2a4208: 0x8fa40108  lw          $a0, 0x108($sp)
    ctx->pc = 0x2a4208u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a420c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2a420cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2a4210: 0xc0a748c  jal         func_29D230
    ctx->pc = 0x2A4210u;
    SET_GPR_U32(ctx, 31, 0x2A4218u);
    ctx->pc = 0x29D230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29D230u, 0x2A4210u, 0x2A4218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4218u;
label_2a4218:
    // 0x2a4218: 0x8fa30108  lw          $v1, 0x108($sp)
    ctx->pc = 0x2a4218u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a421c: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x2a421cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x2a4220: 0xc0b3764  jal         func_2CDD90
    ctx->pc = 0x2A4220u;
    SET_GPR_U32(ctx, 31, 0x2A4228u);
    ctx->pc = 0x2CDD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CDD90u, 0x2A4220u, 0x2A4228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4228u;
label_2a4228:
    // 0x2a4228: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2a4228u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a422c: 0x8fa30108  lw          $v1, 0x108($sp)
    ctx->pc = 0x2a422cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a4230: 0x24651330  addiu       $a1, $v1, 0x1330
    ctx->pc = 0x2a4230u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2a4234: 0xc4a10020  lwc1        $f1, 0x20($a1)
    ctx->pc = 0x2a4234u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a4238: 0x8fa30108  lw          $v1, 0x108($sp)
    ctx->pc = 0x2a4238u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a423c: 0xc4600124  lwc1        $f0, 0x124($v1)
    ctx->pc = 0x2a423cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a4240: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x2a4240u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a4244: 0x0  nop
    ctx->pc = 0x2a4244u;
    // NOP
    // 0x2a4248: 0x45000149  bc1f        . + 4 + (0x149 << 2)
    ctx->pc = 0x2A4248u;
    {
        const bool branch_taken_0x2a4248 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a4248) {
            ctx->pc = 0x2A4770u;
            goto label_2a4770;
        }
    }
    ctx->pc = 0x2A4250u;
    // 0x2a4250: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2a4250u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2a4254: 0x8fa20108  lw          $v0, 0x108($sp)
    ctx->pc = 0x2a4254u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a4258: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x2a4258u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x2a425c: 0x8fa20108  lw          $v0, 0x108($sp)
    ctx->pc = 0x2a425cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a4260: 0x8fa40108  lw          $a0, 0x108($sp)
    ctx->pc = 0x2a4260u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a4264: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2a4264u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x2a4268: 0x2406000b  addiu       $a2, $zero, 0xB
    ctx->pc = 0x2a4268u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x2a426c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2a426cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a4270: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x2a4270u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a4274: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2a4274u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2a4278: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2A4278u;
    SET_GPR_U32(ctx, 31, 0x2A4280u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2A4278u, 0x2A4280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4280u;
label_2a4280:
    // 0x2a4280: 0x8fa20108  lw          $v0, 0x108($sp)
    ctx->pc = 0x2a4280u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a4284: 0x8c420030  lw          $v0, 0x30($v0)
    ctx->pc = 0x2a4284u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x2a4288: 0x1440006b  bnez        $v0, . + 4 + (0x6B << 2)
    ctx->pc = 0x2A4288u;
    {
        const bool branch_taken_0x2a4288 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a4288) {
            ctx->pc = 0x2A4438u;
            goto label_2a4438;
        }
    }
    ctx->pc = 0x2A4290u;
    // 0x2a4290: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x2a4290u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2a4294: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x2A4294u;
    SET_GPR_U32(ctx, 31, 0x2A429Cu);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x2A4294u, 0x2A429Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A429Cu;
label_2a429c:
    // 0x2a429c: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x2a429cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2a42a0: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x2A42A0u;
    SET_GPR_U32(ctx, 31, 0x2A42A8u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x2A42A0u, 0x2A42A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A42A8u;
label_2a42a8:
    // 0x2a42a8: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x2a42a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2a42ac: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x2A42ACu;
    SET_GPR_U32(ctx, 31, 0x2A42B4u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x2A42ACu, 0x2A42B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A42B4u;
label_2a42b4:
    // 0x2a42b4: 0x3c024200  lui         $v0, 0x4200
    ctx->pc = 0x2a42b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16896 << 16));
    // 0x2a42b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a42b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a42bc: 0x0  nop
    ctx->pc = 0x2a42bcu;
    // NOP
    // 0x2a42c0: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x2a42c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x2a42c4: 0x3c0241c0  lui         $v0, 0x41C0
    ctx->pc = 0x2a42c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16832 << 16));
    // 0x2a42c8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a42c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a42cc: 0x0  nop
    ctx->pc = 0x2a42ccu;
    // NOP
    // 0x2a42d0: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x2a42d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x2a42d4: 0x3c024180  lui         $v0, 0x4180
    ctx->pc = 0x2a42d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16768 << 16));
    // 0x2a42d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a42d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a42dc: 0x0  nop
    ctx->pc = 0x2a42dcu;
    // NOP
    // 0x2a42e0: 0xe7a000c8  swc1        $f0, 0xC8($sp)
    ctx->pc = 0x2a42e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x2a42e4: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x2a42e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x2a42e8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2a42e8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a42ec: 0x0  nop
    ctx->pc = 0x2a42ecu;
    // NOP
    // 0x2a42f0: 0xe7a000cc  swc1        $f0, 0xCC($sp)
    ctx->pc = 0x2a42f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
    // 0x2a42f4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2a42f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2a42f8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a42f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a42fc: 0x0  nop
    ctx->pc = 0x2a42fcu;
    // NOP
    // 0x2a4300: 0xe7a000d0  swc1        $f0, 0xD0($sp)
    ctx->pc = 0x2a4300u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x2a4304: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2a4304u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2a4308: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a4308u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a430c: 0x0  nop
    ctx->pc = 0x2a430cu;
    // NOP
    // 0x2a4310: 0xe7a000d4  swc1        $f0, 0xD4($sp)
    ctx->pc = 0x2a4310u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
    // 0x2a4314: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2a4314u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2a4318: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a4318u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a431c: 0x0  nop
    ctx->pc = 0x2a431cu;
    // NOP
    // 0x2a4320: 0xe7a000d8  swc1        $f0, 0xD8($sp)
    ctx->pc = 0x2a4320u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x2a4324: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2a4324u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2a4328: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a4328u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a432c: 0x0  nop
    ctx->pc = 0x2a432cu;
    // NOP
    // 0x2a4330: 0xe7a000dc  swc1        $f0, 0xDC($sp)
    ctx->pc = 0x2a4330u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
    // 0x2a4334: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x2a4334u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
    // 0x2a4338: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2a4338u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2a433c: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x2a433cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
    // 0x2a4340: 0x3444d70a  ori         $a0, $v0, 0xD70A
    ctx->pc = 0x2a4340u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x2a4344: 0x44846800  mtc1        $a0, $f13
    ctx->pc = 0x2a4344u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2a4348: 0x8fa60108  lw          $a2, 0x108($sp)
    ctx->pc = 0x2a4348u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a434c: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x2a434cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x2a4350: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2a4350u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2a4354: 0x27a700a0  addiu       $a3, $sp, 0xA0
    ctx->pc = 0x2a4354u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2a4358: 0x70e03628  paddub      $a2, $a3, $zero
    ctx->pc = 0x2a4358u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x2a435c: 0x27a20090  addiu       $v0, $sp, 0x90
    ctx->pc = 0x2a435cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2a4360: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x2a4360u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a4364: 0x27a800b0  addiu       $t0, $sp, 0xB0
    ctx->pc = 0x2a4364u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2a4368: 0x27a900c0  addiu       $t1, $sp, 0xC0
    ctx->pc = 0x2a4368u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2a436c: 0x27aa00d0  addiu       $t2, $sp, 0xD0
    ctx->pc = 0x2a436cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x2a4370: 0xc086970  jal         func_21A5C0
    ctx->pc = 0x2A4370u;
    SET_GPR_U32(ctx, 31, 0x2A4378u);
    ctx->pc = 0x21A5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A5C0u, 0x2A4370u, 0x2A4378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4378u;
label_2a4378:
    // 0x2a4378: 0x3c034396  lui         $v1, 0x4396
    ctx->pc = 0x2a4378u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17302 << 16));
    // 0x2a437c: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x2a437cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2a4380: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x2a4380u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
    // 0x2a4384: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x2a4384u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x2a4388: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2a4388u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2a438c: 0x8fa40108  lw          $a0, 0x108($sp)
    ctx->pc = 0x2a438cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a4390: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2a4390u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a4394: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x2a4394u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2a4398: 0x27a70090  addiu       $a3, $sp, 0x90
    ctx->pc = 0x2a4398u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2a439c: 0x27a800b0  addiu       $t0, $sp, 0xB0
    ctx->pc = 0x2a439cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2a43a0: 0x27a900c0  addiu       $t1, $sp, 0xC0
    ctx->pc = 0x2a43a0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2a43a4: 0x27aa00d0  addiu       $t2, $sp, 0xD0
    ctx->pc = 0x2a43a4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x2a43a8: 0xc086970  jal         func_21A5C0
    ctx->pc = 0x2A43A8u;
    SET_GPR_U32(ctx, 31, 0x2A43B0u);
    ctx->pc = 0x21A5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A5C0u, 0x2A43A8u, 0x2A43B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A43B0u;
label_2a43b0:
    // 0x2a43b0: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x2a43b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
    // 0x2a43b4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2a43b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2a43b8: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x2a43b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
    // 0x2a43bc: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x2a43bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x2a43c0: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2a43c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2a43c4: 0x8fa40108  lw          $a0, 0x108($sp)
    ctx->pc = 0x2a43c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a43c8: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x2a43c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2a43cc: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x2a43ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2a43d0: 0x27a70090  addiu       $a3, $sp, 0x90
    ctx->pc = 0x2a43d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2a43d4: 0x27a800b0  addiu       $t0, $sp, 0xB0
    ctx->pc = 0x2a43d4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2a43d8: 0x27a900c0  addiu       $t1, $sp, 0xC0
    ctx->pc = 0x2a43d8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2a43dc: 0x27aa00d0  addiu       $t2, $sp, 0xD0
    ctx->pc = 0x2a43dcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x2a43e0: 0xc086970  jal         func_21A5C0
    ctx->pc = 0x2A43E0u;
    SET_GPR_U32(ctx, 31, 0x2A43E8u);
    ctx->pc = 0x21A5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A5C0u, 0x2A43E0u, 0x2A43E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A43E8u;
label_2a43e8:
    // 0x2a43e8: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2a43e8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a43ec: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x2a43ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
    // 0x2a43f0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2a43f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2a43f4: 0x3c073c23  lui         $a3, 0x3C23
    ctx->pc = 0x2a43f4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)15395 << 16));
    // 0x2a43f8: 0x34e6d70a  ori         $a2, $a3, 0xD70A
    ctx->pc = 0x2a43f8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)55050);
    // 0x2a43fc: 0x44866800  mtc1        $a2, $f13
    ctx->pc = 0x2a43fcu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2a4400: 0x8fa20108  lw          $v0, 0x108($sp)
    ctx->pc = 0x2a4400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a4404: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2a4404u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a4408: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x2a4408u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x2a440c: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x2a440cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2a4410: 0x27a70090  addiu       $a3, $sp, 0x90
    ctx->pc = 0x2a4410u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2a4414: 0x27a800b0  addiu       $t0, $sp, 0xB0
    ctx->pc = 0x2a4414u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2a4418: 0x27a900c0  addiu       $t1, $sp, 0xC0
    ctx->pc = 0x2a4418u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2a441c: 0x27a200d0  addiu       $v0, $sp, 0xD0
    ctx->pc = 0x2a441cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x2a4420: 0x70405628  paddub      $t2, $v0, $zero
    ctx->pc = 0x2a4420u;
    SET_GPR_VEC(ctx, 10, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a4424: 0xc086970  jal         func_21A5C0
    ctx->pc = 0x2A4424u;
    SET_GPR_U32(ctx, 31, 0x2A442Cu);
    ctx->pc = 0x21A5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A5C0u, 0x2A4424u, 0x2A442Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A442Cu;
label_2a442c:
    // 0x2a442c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2a442cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a4430: 0x100000cf  b           . + 4 + (0xCF << 2)
    ctx->pc = 0x2A4430u;
    {
        const bool branch_taken_0x2a4430 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a4430) {
            ctx->pc = 0x2A4770u;
            goto label_2a4770;
        }
    }
    ctx->pc = 0x2A4438u;
label_2a4438:
    // 0x2a4438: 0x27a200e0  addiu       $v0, $sp, 0xE0
    ctx->pc = 0x2a4438u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x2a443c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2a443cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a4440: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x2A4440u;
    SET_GPR_U32(ctx, 31, 0x2A4448u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x2A4440u, 0x2A4448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4448u;
label_2a4448:
    // 0x2a4448: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2a4448u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a444c: 0x8fa20108  lw          $v0, 0x108($sp)
    ctx->pc = 0x2a444cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a4450: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2a4450u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a4454: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2a4454u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2a4458: 0x27a600e0  addiu       $a2, $sp, 0xE0
    ctx->pc = 0x2a4458u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x2a445c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2a445cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a4460: 0xc086b14  jal         func_21AC50
    ctx->pc = 0x2A4460u;
    SET_GPR_U32(ctx, 31, 0x2A4468u);
    ctx->pc = 0x21AC50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21AC50u, 0x2A4460u, 0x2A4468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4468u;
label_2a4468:
    // 0x2a4468: 0x8fa40108  lw          $a0, 0x108($sp)
    ctx->pc = 0x2a4468u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a446c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2a446cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a4470: 0x27a600e0  addiu       $a2, $sp, 0xE0
    ctx->pc = 0x2a4470u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x2a4474: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2a4474u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a4478: 0xc086b14  jal         func_21AC50
    ctx->pc = 0x2A4478u;
    SET_GPR_U32(ctx, 31, 0x2A4480u);
    ctx->pc = 0x21AC50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21AC50u, 0x2A4478u, 0x2A4480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4480u;
label_2a4480:
    // 0x2a4480: 0x8fa40108  lw          $a0, 0x108($sp)
    ctx->pc = 0x2a4480u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a4484: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x2a4484u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2a4488: 0x27a600e0  addiu       $a2, $sp, 0xE0
    ctx->pc = 0x2a4488u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x2a448c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2a448cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a4490: 0xc086b14  jal         func_21AC50
    ctx->pc = 0x2A4490u;
    SET_GPR_U32(ctx, 31, 0x2A4498u);
    ctx->pc = 0x21AC50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21AC50u, 0x2A4490u, 0x2A4498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4498u;
label_2a4498:
    // 0x2a4498: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x2a4498u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a449c: 0x8fa60108  lw          $a2, 0x108($sp)
    ctx->pc = 0x2a449cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a44a0: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x2a44a0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x2a44a4: 0x2407000d  addiu       $a3, $zero, 0xD
    ctx->pc = 0x2a44a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x2a44a8: 0x70e02e28  paddub      $a1, $a3, $zero
    ctx->pc = 0x2a44a8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x2a44ac: 0x27a800e0  addiu       $t0, $sp, 0xE0
    ctx->pc = 0x2a44acu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x2a44b0: 0x71003628  paddub      $a2, $t0, $zero
    ctx->pc = 0x2a44b0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x2a44b4: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x2a44b4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a44b8: 0x71203e28  paddub      $a3, $t1, $zero
    ctx->pc = 0x2a44b8u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
    // 0x2a44bc: 0xc086b14  jal         func_21AC50
    ctx->pc = 0x2A44BCu;
    SET_GPR_U32(ctx, 31, 0x2A44C4u);
    ctx->pc = 0x21AC50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21AC50u, 0x2A44BCu, 0x2A44C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A44C4u;
label_2a44c4:
    // 0x2a44c4: 0x70405628  paddub      $t2, $v0, $zero
    ctx->pc = 0x2a44c4u;
    SET_GPR_VEC(ctx, 10, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a44c8: 0x100000a9  b           . + 4 + (0xA9 << 2)
    ctx->pc = 0x2A44C8u;
    {
        const bool branch_taken_0x2a44c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a44c8) {
            ctx->pc = 0x2A4770u;
            goto label_2a4770;
        }
    }
    ctx->pc = 0x2A44D0u;
label_2a44d0:
    // 0x2a44d0: 0x8fa20108  lw          $v0, 0x108($sp)
    ctx->pc = 0x2a44d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a44d4: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2a44d4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a44d8: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2a44d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2a44dc: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x2A44DCu;
    SET_GPR_U32(ctx, 31, 0x2A44E4u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2A44DCu, 0x2A44E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A44E4u;
label_2a44e4:
    // 0x2a44e4: 0x8fa40108  lw          $a0, 0x108($sp)
    ctx->pc = 0x2a44e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a44e8: 0x8fa30108  lw          $v1, 0x108($sp)
    ctx->pc = 0x2a44e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a44ec: 0x8fa20108  lw          $v0, 0x108($sp)
    ctx->pc = 0x2a44ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a44f0: 0x24860120  addiu       $a2, $a0, 0x120
    ctx->pc = 0x2a44f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x2a44f4: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x2a44f4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x2a44f8: 0x24670120  addiu       $a3, $v1, 0x120
    ctx->pc = 0x2a44f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x2a44fc: 0x70e02e28  paddub      $a1, $a3, $zero
    ctx->pc = 0x2a44fcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x2a4500: 0x24480180  addiu       $t0, $v0, 0x180
    ctx->pc = 0x2a4500u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 384));
    // 0x2a4504: 0x71003628  paddub      $a2, $t0, $zero
    ctx->pc = 0x2a4504u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x2a4508: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x2A4508u;
    SET_GPR_U32(ctx, 31, 0x2A4510u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x2A4508u, 0x2A4510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4510u;
label_2a4510:
    // 0x2a4510: 0x70404e28  paddub      $t1, $v0, $zero
    ctx->pc = 0x2a4510u;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a4514: 0x8faa0108  lw          $t2, 0x108($sp)
    ctx->pc = 0x2a4514u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a4518: 0x71402628  paddub      $a0, $t2, $zero
    ctx->pc = 0x2a4518u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x2a451c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2a451cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2a4520: 0xc0a748c  jal         func_29D230
    ctx->pc = 0x2A4520u;
    SET_GPR_U32(ctx, 31, 0x2A4528u);
    ctx->pc = 0x29D230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29D230u, 0x2A4520u, 0x2A4528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4528u;
label_2a4528:
    // 0x2a4528: 0x8fa40108  lw          $a0, 0x108($sp)
    ctx->pc = 0x2a4528u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a452c: 0xc0b3764  jal         func_2CDD90
    ctx->pc = 0x2A452Cu;
    SET_GPR_U32(ctx, 31, 0x2A4534u);
    ctx->pc = 0x2CDD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CDD90u, 0x2A452Cu, 0x2A4534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4534u;
label_2a4534:
    // 0x2a4534: 0x8fa30108  lw          $v1, 0x108($sp)
    ctx->pc = 0x2a4534u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a4538: 0x3c043f00  lui         $a0, 0x3F00
    ctx->pc = 0x2a4538u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16128 << 16));
    // 0x2a453c: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x2a453cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2a4540: 0xc4600180  lwc1        $f0, 0x180($v1)
    ctx->pc = 0x2a4540u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a4544: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2a4544u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2a4548: 0xe4600180  swc1        $f0, 0x180($v1)
    ctx->pc = 0x2a4548u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 384), bits); }
    // 0x2a454c: 0x8fa50108  lw          $a1, 0x108($sp)
    ctx->pc = 0x2a454cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a4550: 0x3c063f00  lui         $a2, 0x3F00
    ctx->pc = 0x2a4550u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16128 << 16));
    // 0x2a4554: 0x44860800  mtc1        $a2, $f1
    ctx->pc = 0x2a4554u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2a4558: 0xc4a00188  lwc1        $f0, 0x188($a1)
    ctx->pc = 0x2a4558u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a455c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2a455cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2a4560: 0xe4a00188  swc1        $f0, 0x188($a1)
    ctx->pc = 0x2a4560u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 392), bits); }
    // 0x2a4564: 0x8fa70108  lw          $a3, 0x108($sp)
    ctx->pc = 0x2a4564u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a4568: 0x90e809e7  lbu         $t0, 0x9E7($a3)
    ctx->pc = 0x2a4568u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 2535)));
    // 0x2a456c: 0x11000080  beqz        $t0, . + 4 + (0x80 << 2)
    ctx->pc = 0x2A456Cu;
    {
        const bool branch_taken_0x2a456c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a456c) {
            ctx->pc = 0x2A4770u;
            goto label_2a4770;
        }
    }
    ctx->pc = 0x2A4574u;
    // 0x2a4574: 0x24090004  addiu       $t1, $zero, 0x4
    ctx->pc = 0x2a4574u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2a4578: 0x8faa0108  lw          $t2, 0x108($sp)
    ctx->pc = 0x2a4578u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a457c: 0xa1490002  sb          $t1, 0x2($t2)
    ctx->pc = 0x2a457cu;
    WRITE8(ADD32(GPR_U32(ctx, 10), 2), (uint8_t)GPR_U32(ctx, 9));
    // 0x2a4580: 0x8fa20108  lw          $v0, 0x108($sp)
    ctx->pc = 0x2a4580u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a4584: 0x8fa40108  lw          $a0, 0x108($sp)
    ctx->pc = 0x2a4584u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a4588: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2a4588u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x2a458c: 0x2406000e  addiu       $a2, $zero, 0xE
    ctx->pc = 0x2a458cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x2a4590: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2a4590u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a4594: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2a4594u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2a4598: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2A4598u;
    SET_GPR_U32(ctx, 31, 0x2A45A0u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2A4598u, 0x2A45A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A45A0u;
label_2a45a0:
    // 0x2a45a0: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x2a45a0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a45a4: 0x10000072  b           . + 4 + (0x72 << 2)
    ctx->pc = 0x2A45A4u;
    {
        const bool branch_taken_0x2a45a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a45a4) {
            ctx->pc = 0x2A4770u;
            goto label_2a4770;
        }
    }
    ctx->pc = 0x2A45ACu;
label_2a45ac:
    // 0x2a45ac: 0x8fa70108  lw          $a3, 0x108($sp)
    ctx->pc = 0x2a45acu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a45b0: 0xa0e010a8  sb          $zero, 0x10A8($a3)
    ctx->pc = 0x2a45b0u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 4264), (uint8_t)GPR_U32(ctx, 0));
    // 0x2a45b4: 0x8fa80108  lw          $t0, 0x108($sp)
    ctx->pc = 0x2a45b4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a45b8: 0x71002628  paddub      $a0, $t0, $zero
    ctx->pc = 0x2a45b8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x2a45bc: 0x24090007  addiu       $t1, $zero, 0x7
    ctx->pc = 0x2a45bcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2a45c0: 0x71202e28  paddub      $a1, $t1, $zero
    ctx->pc = 0x2a45c0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
    // 0x2a45c4: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x2A45C4u;
    SET_GPR_U32(ctx, 31, 0x2A45CCu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2A45C4u, 0x2A45CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A45CCu;
label_2a45cc:
    // 0x2a45cc: 0x70405628  paddub      $t2, $v0, $zero
    ctx->pc = 0x2a45ccu;
    SET_GPR_VEC(ctx, 10, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a45d0: 0x8fa20108  lw          $v0, 0x108($sp)
    ctx->pc = 0x2a45d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a45d4: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2a45d4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a45d8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2a45d8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2a45dc: 0xc0a748c  jal         func_29D230
    ctx->pc = 0x2A45DCu;
    SET_GPR_U32(ctx, 31, 0x2A45E4u);
    ctx->pc = 0x29D230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29D230u, 0x2A45DCu, 0x2A45E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A45E4u;
label_2a45e4:
    // 0x2a45e4: 0x8fa40108  lw          $a0, 0x108($sp)
    ctx->pc = 0x2a45e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a45e8: 0xc0b3764  jal         func_2CDD90
    ctx->pc = 0x2A45E8u;
    SET_GPR_U32(ctx, 31, 0x2A45F0u);
    ctx->pc = 0x2CDD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CDD90u, 0x2A45E8u, 0x2A45F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A45F0u;
label_2a45f0:
    // 0x2a45f0: 0x8fa40108  lw          $a0, 0x108($sp)
    ctx->pc = 0x2a45f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a45f4: 0x908509e7  lbu         $a1, 0x9E7($a0)
    ctx->pc = 0x2a45f4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2535)));
    // 0x2a45f8: 0x10a0005d  beqz        $a1, . + 4 + (0x5D << 2)
    ctx->pc = 0x2A45F8u;
    {
        const bool branch_taken_0x2a45f8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a45f8) {
            ctx->pc = 0x2A4770u;
            goto label_2a4770;
        }
    }
    ctx->pc = 0x2A4600u;
    // 0x2a4600: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2a4600u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a4604: 0x8fa70108  lw          $a3, 0x108($sp)
    ctx->pc = 0x2a4604u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a4608: 0xa0e60000  sb          $a2, 0x0($a3)
    ctx->pc = 0x2a4608u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 6));
    // 0x2a460c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2a460cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a4610: 0x8fa90108  lw          $t1, 0x108($sp)
    ctx->pc = 0x2a4610u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a4614: 0xa1280001  sb          $t0, 0x1($t1)
    ctx->pc = 0x2a4614u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 1), (uint8_t)GPR_U32(ctx, 8));
    // 0x2a4618: 0x8faa0108  lw          $t2, 0x108($sp)
    ctx->pc = 0x2a4618u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a461c: 0xa1400002  sb          $zero, 0x2($t2)
    ctx->pc = 0x2a461cu;
    WRITE8(ADD32(GPR_U32(ctx, 10), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2a4620: 0x8fa20108  lw          $v0, 0x108($sp)
    ctx->pc = 0x2a4620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a4624: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x2a4624u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2a4628: 0x8fa20108  lw          $v0, 0x108($sp)
    ctx->pc = 0x2a4628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a462c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2a462cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x2a4630: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2A4630u;
    SET_GPR_U32(ctx, 31, 0x2A4638u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2A4630u, 0x2A4638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4638u;
label_2a4638:
    // 0x2a4638: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2a4638u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2a463c: 0x30440003  andi        $a0, $v0, 0x3
    ctx->pc = 0x2a463cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x2a4640: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2a4640u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a4644: 0x14850016  bne         $a0, $a1, . + 4 + (0x16 << 2)
    ctx->pc = 0x2A4644u;
    {
        const bool branch_taken_0x2a4644 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        if (branch_taken_0x2a4644) {
            ctx->pc = 0x2A46A0u;
            goto label_2a46a0;
        }
    }
    ctx->pc = 0x2A464Cu;
    // 0x2a464c: 0x8fa60108  lw          $a2, 0x108($sp)
    ctx->pc = 0x2a464cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a4650: 0xc4c11288  lwc1        $f1, 0x1288($a2)
    ctx->pc = 0x2a4650u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a4654: 0x3c07447a  lui         $a3, 0x447A
    ctx->pc = 0x2a4654u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)17530 << 16));
    // 0x2a4658: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x2a4658u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a465c: 0x0  nop
    ctx->pc = 0x2a465cu;
    // NOP
    // 0x2a4660: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2a4660u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a4664: 0x0  nop
    ctx->pc = 0x2a4664u;
    // NOP
    // 0x2a4668: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x2A4668u;
    {
        const bool branch_taken_0x2a4668 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a4668) {
            ctx->pc = 0x2A46A0u;
            goto label_2a46a0;
        }
    }
    ctx->pc = 0x2A4670u;
    // 0x2a4670: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2a4670u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a4674: 0x8fa90108  lw          $t1, 0x108($sp)
    ctx->pc = 0x2a4674u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a4678: 0xa1280000  sb          $t0, 0x0($t1)
    ctx->pc = 0x2a4678u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 0), (uint8_t)GPR_U32(ctx, 8));
    // 0x2a467c: 0x240a0006  addiu       $t2, $zero, 0x6
    ctx->pc = 0x2a467cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2a4680: 0x8fa20108  lw          $v0, 0x108($sp)
    ctx->pc = 0x2a4680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a4684: 0xa04a0001  sb          $t2, 0x1($v0)
    ctx->pc = 0x2a4684u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 10));
    // 0x2a4688: 0x8fa40108  lw          $a0, 0x108($sp)
    ctx->pc = 0x2a4688u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a468c: 0xa0800002  sb          $zero, 0x2($a0)
    ctx->pc = 0x2a468cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2a4690: 0x8fa20108  lw          $v0, 0x108($sp)
    ctx->pc = 0x2a4690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a4694: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x2a4694u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2a4698: 0x8fa40108  lw          $a0, 0x108($sp)
    ctx->pc = 0x2a4698u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a469c: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x2a469cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
label_2a46a0:
    // 0x2a46a0: 0x8fa50108  lw          $a1, 0x108($sp)
    ctx->pc = 0x2a46a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a46a4: 0x24a61330  addiu       $a2, $a1, 0x1330
    ctx->pc = 0x2a46a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 4912));
    // 0x2a46a8: 0x8cc70014  lw          $a3, 0x14($a2)
    ctx->pc = 0x2a46a8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
    // 0x2a46ac: 0x30e20004  andi        $v0, $a3, 0x4
    ctx->pc = 0x2a46acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)4);
    // 0x2a46b0: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x2A46B0u;
    {
        const bool branch_taken_0x2a46b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a46b0) {
            ctx->pc = 0x2A4708u;
            goto label_2a4708;
        }
    }
    ctx->pc = 0x2A46B8u;
    // 0x2a46b8: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2A46B8u;
    SET_GPR_U32(ctx, 31, 0x2A46C0u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2A46B8u, 0x2A46C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A46C0u;
label_2a46c0:
    // 0x2a46c0: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2a46c0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a46c4: 0x308500ff  andi        $a1, $a0, 0xFF
    ctx->pc = 0x2a46c4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x2a46c8: 0x30a60001  andi        $a2, $a1, 0x1
    ctx->pc = 0x2a46c8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x2a46cc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2a46ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a46d0: 0x14c7000d  bne         $a2, $a3, . + 4 + (0xD << 2)
    ctx->pc = 0x2A46D0u;
    {
        const bool branch_taken_0x2a46d0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 7));
        if (branch_taken_0x2a46d0) {
            ctx->pc = 0x2A4708u;
            goto label_2a4708;
        }
    }
    ctx->pc = 0x2A46D8u;
    // 0x2a46d8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2a46d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a46dc: 0x8fa40108  lw          $a0, 0x108($sp)
    ctx->pc = 0x2a46dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a46e0: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x2a46e0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x2a46e4: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x2a46e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2a46e8: 0x8fa60108  lw          $a2, 0x108($sp)
    ctx->pc = 0x2a46e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a46ec: 0xa0c50001  sb          $a1, 0x1($a2)
    ctx->pc = 0x2a46ecu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 1), (uint8_t)GPR_U32(ctx, 5));
    // 0x2a46f0: 0x8fa70108  lw          $a3, 0x108($sp)
    ctx->pc = 0x2a46f0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a46f4: 0xa0e00002  sb          $zero, 0x2($a3)
    ctx->pc = 0x2a46f4u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2a46f8: 0x8fa20108  lw          $v0, 0x108($sp)
    ctx->pc = 0x2a46f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a46fc: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x2a46fcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2a4700: 0x8fa40108  lw          $a0, 0x108($sp)
    ctx->pc = 0x2a4700u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a4704: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x2a4704u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
label_2a4708:
    // 0x2a4708: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2A4708u;
    SET_GPR_U32(ctx, 31, 0x2A4710u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2A4708u, 0x2A4710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4710u;
label_2a4710:
    // 0x2a4710: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x2a4710u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a4714: 0x30a600ff  andi        $a2, $a1, 0xFF
    ctx->pc = 0x2a4714u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x2a4718: 0x30c70003  andi        $a3, $a2, 0x3
    ctx->pc = 0x2a4718u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)3);
    // 0x2a471c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2a471cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a4720: 0x14e30013  bne         $a3, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x2A4720u;
    {
        const bool branch_taken_0x2a4720 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 3));
        if (branch_taken_0x2a4720) {
            ctx->pc = 0x2A4770u;
            goto label_2a4770;
        }
    }
    ctx->pc = 0x2A4728u;
    // 0x2a4728: 0x8fa30108  lw          $v1, 0x108($sp)
    ctx->pc = 0x2a4728u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a472c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2a472cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2a4730: 0x8c640014  lw          $a0, 0x14($v1)
    ctx->pc = 0x2a4730u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x2a4734: 0x30830004  andi        $v1, $a0, 0x4
    ctx->pc = 0x2a4734u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
    // 0x2a4738: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x2A4738u;
    {
        const bool branch_taken_0x2a4738 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a4738) {
            ctx->pc = 0x2A4770u;
            goto label_2a4770;
        }
    }
    ctx->pc = 0x2A4740u;
    // 0x2a4740: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2a4740u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a4744: 0x8fa30108  lw          $v1, 0x108($sp)
    ctx->pc = 0x2a4744u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a4748: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2a4748u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2a474c: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2a474cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2a4750: 0x8fa30108  lw          $v1, 0x108($sp)
    ctx->pc = 0x2a4750u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a4754: 0xa0650001  sb          $a1, 0x1($v1)
    ctx->pc = 0x2a4754u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 5));
    // 0x2a4758: 0x8fa30108  lw          $v1, 0x108($sp)
    ctx->pc = 0x2a4758u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a475c: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2a475cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2a4760: 0x8fa40108  lw          $a0, 0x108($sp)
    ctx->pc = 0x2a4760u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a4764: 0xa0800003  sb          $zero, 0x3($a0)
    ctx->pc = 0x2a4764u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2a4768: 0x8fa50108  lw          $a1, 0x108($sp)
    ctx->pc = 0x2a4768u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a476c: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x2a476cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
label_2a4770:
    // 0x2a4770: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2a4770u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a4774: 0x27bd0110  addiu       $sp, $sp, 0x110
    ctx->pc = 0x2a4774u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x2a4778: 0x3e00008  jr          $ra
    ctx->pc = 0x2A4778u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A4778u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A4780u;
}
