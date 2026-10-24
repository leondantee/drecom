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

// Function: Em00_R1_meta_def_walk
// Address: 0x2d3d30 - 0x2d3f44
void Em00_R1_meta_def_walk_0x2d3d30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em00_R1_meta_def_walk_0x2d3d30");
#endif

    switch (ctx->pc) {
        case 0x2d3d9cu: goto label_2d3d9c;
        case 0x2d3de0u: goto label_2d3de0;
        case 0x2d3df4u: goto label_2d3df4;
        case 0x2d3e1cu: goto label_2d3e1c;
        case 0x2d3e28u: goto label_2d3e28;
        case 0x2d3e38u: goto label_2d3e38;
        case 0x2d3e44u: goto label_2d3e44;
        case 0x2d3e8cu: goto label_2d3e8c;
        case 0x2d3ed0u: goto label_2d3ed0;
        case 0x2d3ee4u: goto label_2d3ee4;
        case 0x2d3f0cu: goto label_2d3f0c;
        case 0x2d3f18u: goto label_2d3f18;
        case 0x2d3f28u: goto label_2d3f28;
        case 0x2d3f34u: goto label_2d3f34;
        default: break;
    }

    ctx->pc = 0x2d3d30u;

    // 0x2d3d30: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2d3d30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2d3d34: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2d3d34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2d3d38: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2d3d38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2d3d3c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d3d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d3d40: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x2d3d40u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2d3d44: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2d3d44u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2d3d48: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2d3d48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2d3d4c: 0x10830055  beq         $a0, $v1, . + 4 + (0x55 << 2)
    ctx->pc = 0x2D3D4Cu;
    {
        const bool branch_taken_0x2d3d4c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2d3d4c) {
            ctx->pc = 0x2D3EA4u;
            goto label_2d3ea4;
        }
    }
    ctx->pc = 0x2D3D54u;
    // 0x2d3d54: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2d3d54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2d3d58: 0x10830044  beq         $a0, $v1, . + 4 + (0x44 << 2)
    ctx->pc = 0x2D3D58u;
    {
        const bool branch_taken_0x2d3d58 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2d3d58) {
            ctx->pc = 0x2D3E6Cu;
            goto label_2d3e6c;
        }
    }
    ctx->pc = 0x2D3D60u;
    // 0x2d3d60: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2d3d60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d3d64: 0x10830013  beq         $a0, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x2D3D64u;
    {
        const bool branch_taken_0x2d3d64 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2d3d64) {
            ctx->pc = 0x2D3DB4u;
            goto label_2d3db4;
        }
    }
    ctx->pc = 0x2D3D6Cu;
    // 0x2d3d6c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D3D6Cu;
    {
        const bool branch_taken_0x2d3d6c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d3d6c) {
            ctx->pc = 0x2D3D7Cu;
            goto label_2d3d7c;
        }
    }
    ctx->pc = 0x2D3D74u;
    // 0x2d3d74: 0x1000006f  b           . + 4 + (0x6F << 2)
    ctx->pc = 0x2D3D74u;
    {
        const bool branch_taken_0x2d3d74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d3d74) {
            ctx->pc = 0x2D3F34u;
            goto label_2d3f34;
        }
    }
    ctx->pc = 0x2D3D7Cu;
label_2d3d7c:
    // 0x2d3d7c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2d3d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d3d80: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2d3d80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d3d84: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2d3d84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x2d3d88: 0x24065a29  addiu       $a2, $zero, 0x5A29
    ctx->pc = 0x2d3d88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 23081));
    // 0x2d3d8c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2d3d8cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d3d90: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2d3d90u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2d3d94: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2D3D94u;
    SET_GPR_U32(ctx, 31, 0x2D3D9Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2D3D94u, 0x2D3D9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3D9Cu;
label_2d3d9c:
    // 0x2d3d9c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2d3d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d3da0: 0xa4401278  sh          $zero, 0x1278($v0)
    ctx->pc = 0x2d3da0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 0));
    // 0x2d3da4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d3da4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d3da8: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x2d3da8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2d3dac: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2d3dacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2d3db0: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x2d3db0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_2d3db4:
    // 0x2d3db4: 0x3c023c83  lui         $v0, 0x3C83
    ctx->pc = 0x2d3db4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15491 << 16));
    // 0x2d3db8: 0x3442126f  ori         $v0, $v0, 0x126F
    ctx->pc = 0x2d3db8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4719);
    // 0x2d3dbc: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2d3dbcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2d3dc0: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2d3dc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d3dc4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d3dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d3dc8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2d3dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d3dcc: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x2d3dccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x2d3dd0: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x2d3dd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2d3dd4: 0x24451240  addiu       $a1, $v0, 0x1240
    ctx->pc = 0x2d3dd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4672));
    // 0x2d3dd8: 0xc05c848  jal         func_172120
    ctx->pc = 0x2D3DD8u;
    SET_GPR_U32(ctx, 31, 0x2D3DE0u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x2D3DD8u, 0x2D3DE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3DE0u;
label_2d3de0:
    // 0x2d3de0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2d3de0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d3de4: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x2d3de4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d3de8: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x2d3de8u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2d3dec: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x2D3DECu;
    SET_GPR_U32(ctx, 31, 0x2D3DF4u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2D3DECu, 0x2D3DF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3DF4u;
label_2d3df4:
    // 0x2d3df4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2d3df4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d3df8: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x2d3df8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x2d3dfc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d3dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d3e00: 0x84621278  lh          $v0, 0x1278($v1)
    ctx->pc = 0x2d3e00u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x2d3e04: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2d3e04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2d3e08: 0xa4621278  sh          $v0, 0x1278($v1)
    ctx->pc = 0x2d3e08u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 2));
    // 0x2d3e0c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2d3e0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d3e10: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2d3e10u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2d3e14: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x2D3E14u;
    SET_GPR_U32(ctx, 31, 0x2D3E1Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2D3E14u, 0x2D3E1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3E1Cu;
label_2d3e1c:
    // 0x2d3e1c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2d3e1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d3e20: 0xc05cd10  jal         func_173440
    ctx->pc = 0x2D3E20u;
    SET_GPR_U32(ctx, 31, 0x2D3E28u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x2D3E20u, 0x2D3E28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3E28u;
label_2d3e28:
    // 0x2d3e28: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2d3e28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d3e2c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2d3e2cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2d3e30: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x2D3E30u;
    SET_GPR_U32(ctx, 31, 0x2D3E38u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x2D3E30u, 0x2D3E38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3E38u;
label_2d3e38:
    // 0x2d3e38: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2d3e38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d3e3c: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x2D3E3Cu;
    SET_GPR_U32(ctx, 31, 0x2D3E44u);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x2D3E3Cu, 0x2D3E44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3E44u;
label_2d3e44:
    // 0x2d3e44: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d3e44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d3e48: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x2d3e48u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x2d3e4c: 0x10600039  beqz        $v1, . + 4 + (0x39 << 2)
    ctx->pc = 0x2D3E4Cu;
    {
        const bool branch_taken_0x2d3e4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d3e4c) {
            ctx->pc = 0x2D3F34u;
            goto label_2d3f34;
        }
    }
    ctx->pc = 0x2D3E54u;
    // 0x2d3e54: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2d3e54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d3e58: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x2d3e58u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x2d3e5c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2d3e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2d3e60: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x2d3e60u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x2d3e64: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x2D3E64u;
    {
        const bool branch_taken_0x2d3e64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d3e64) {
            ctx->pc = 0x2D3F34u;
            goto label_2d3f34;
        }
    }
    ctx->pc = 0x2D3E6Cu;
label_2d3e6c:
    // 0x2d3e6c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2d3e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d3e70: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2d3e70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d3e74: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2d3e74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x2d3e78: 0x24065a2a  addiu       $a2, $zero, 0x5A2A
    ctx->pc = 0x2d3e78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 23082));
    // 0x2d3e7c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2d3e7cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d3e80: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2d3e80u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2d3e84: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2D3E84u;
    SET_GPR_U32(ctx, 31, 0x2D3E8Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2D3E84u, 0x2D3E8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3E8Cu;
label_2d3e8c:
    // 0x2d3e8c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2d3e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d3e90: 0xa4401278  sh          $zero, 0x1278($v0)
    ctx->pc = 0x2d3e90u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 0));
    // 0x2d3e94: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d3e94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d3e98: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x2d3e98u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2d3e9c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2d3e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2d3ea0: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x2d3ea0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_2d3ea4:
    // 0x2d3ea4: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2d3ea4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d3ea8: 0x8fa50018  lw          $a1, 0x18($sp)
    ctx->pc = 0x2d3ea8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d3eac: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d3eacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d3eb0: 0x3c023c83  lui         $v0, 0x3C83
    ctx->pc = 0x2d3eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15491 << 16));
    // 0x2d3eb4: 0x3442126f  ori         $v0, $v0, 0x126F
    ctx->pc = 0x2d3eb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4719);
    // 0x2d3eb8: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2d3eb8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2d3ebc: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x2d3ebcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x2d3ec0: 0xc4ac00d4  lwc1        $f12, 0xD4($a1)
    ctx->pc = 0x2d3ec0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2d3ec4: 0x24651240  addiu       $a1, $v1, 0x1240
    ctx->pc = 0x2d3ec4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4672));
    // 0x2d3ec8: 0xc05c848  jal         func_172120
    ctx->pc = 0x2D3EC8u;
    SET_GPR_U32(ctx, 31, 0x2D3ED0u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x2D3EC8u, 0x2D3ED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3ED0u;
label_2d3ed0:
    // 0x2d3ed0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2d3ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d3ed4: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x2d3ed4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d3ed8: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x2d3ed8u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2d3edc: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x2D3EDCu;
    SET_GPR_U32(ctx, 31, 0x2D3EE4u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2D3EDCu, 0x2D3EE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3EE4u;
label_2d3ee4:
    // 0x2d3ee4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2d3ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d3ee8: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x2d3ee8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x2d3eec: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d3eecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d3ef0: 0x84621278  lh          $v0, 0x1278($v1)
    ctx->pc = 0x2d3ef0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x2d3ef4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2d3ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2d3ef8: 0xa4621278  sh          $v0, 0x1278($v1)
    ctx->pc = 0x2d3ef8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 2));
    // 0x2d3efc: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2d3efcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d3f00: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2d3f00u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2d3f04: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x2D3F04u;
    SET_GPR_U32(ctx, 31, 0x2D3F0Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2D3F04u, 0x2D3F0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3F0Cu;
label_2d3f0c:
    // 0x2d3f0c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2d3f0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d3f10: 0xc05cd10  jal         func_173440
    ctx->pc = 0x2D3F10u;
    SET_GPR_U32(ctx, 31, 0x2D3F18u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x2D3F10u, 0x2D3F18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3F18u;
label_2d3f18:
    // 0x2d3f18: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2d3f18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d3f1c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2d3f1cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2d3f20: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x2D3F20u;
    SET_GPR_U32(ctx, 31, 0x2D3F28u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x2D3F20u, 0x2D3F28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3F28u;
label_2d3f28:
    // 0x2d3f28: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2d3f28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d3f2c: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x2D3F2Cu;
    SET_GPR_U32(ctx, 31, 0x2D3F34u);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x2D3F2Cu, 0x2D3F34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3F34u;
label_2d3f34:
    // 0x2d3f34: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2d3f34u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d3f38: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2d3f38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2d3f3c: 0x3e00008  jr          $ra
    ctx->pc = 0x2D3F3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D3F3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D3F44u;
}
