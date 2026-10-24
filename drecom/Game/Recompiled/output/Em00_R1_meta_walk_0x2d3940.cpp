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

// Function: Em00_R1_meta_walk
// Address: 0x2d3940 - 0x2d3b54
void Em00_R1_meta_walk_0x2d3940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em00_R1_meta_walk_0x2d3940");
#endif

    switch (ctx->pc) {
        case 0x2d39acu: goto label_2d39ac;
        case 0x2d39f0u: goto label_2d39f0;
        case 0x2d3a04u: goto label_2d3a04;
        case 0x2d3a2cu: goto label_2d3a2c;
        case 0x2d3a38u: goto label_2d3a38;
        case 0x2d3a48u: goto label_2d3a48;
        case 0x2d3a54u: goto label_2d3a54;
        case 0x2d3a9cu: goto label_2d3a9c;
        case 0x2d3ae0u: goto label_2d3ae0;
        case 0x2d3af4u: goto label_2d3af4;
        case 0x2d3b1cu: goto label_2d3b1c;
        case 0x2d3b28u: goto label_2d3b28;
        case 0x2d3b38u: goto label_2d3b38;
        case 0x2d3b44u: goto label_2d3b44;
        default: break;
    }

    ctx->pc = 0x2d3940u;

    // 0x2d3940: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2d3940u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2d3944: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2d3944u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2d3948: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2d3948u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2d394c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d394cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d3950: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x2d3950u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2d3954: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2d3954u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2d3958: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2d3958u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2d395c: 0x10830055  beq         $a0, $v1, . + 4 + (0x55 << 2)
    ctx->pc = 0x2D395Cu;
    {
        const bool branch_taken_0x2d395c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2d395c) {
            ctx->pc = 0x2D3AB4u;
            goto label_2d3ab4;
        }
    }
    ctx->pc = 0x2D3964u;
    // 0x2d3964: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2d3964u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2d3968: 0x10830044  beq         $a0, $v1, . + 4 + (0x44 << 2)
    ctx->pc = 0x2D3968u;
    {
        const bool branch_taken_0x2d3968 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2d3968) {
            ctx->pc = 0x2D3A7Cu;
            goto label_2d3a7c;
        }
    }
    ctx->pc = 0x2D3970u;
    // 0x2d3970: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2d3970u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d3974: 0x10830013  beq         $a0, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x2D3974u;
    {
        const bool branch_taken_0x2d3974 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2d3974) {
            ctx->pc = 0x2D39C4u;
            goto label_2d39c4;
        }
    }
    ctx->pc = 0x2D397Cu;
    // 0x2d397c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D397Cu;
    {
        const bool branch_taken_0x2d397c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d397c) {
            ctx->pc = 0x2D398Cu;
            goto label_2d398c;
        }
    }
    ctx->pc = 0x2D3984u;
    // 0x2d3984: 0x1000006f  b           . + 4 + (0x6F << 2)
    ctx->pc = 0x2D3984u;
    {
        const bool branch_taken_0x2d3984 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d3984) {
            ctx->pc = 0x2D3B44u;
            goto label_2d3b44;
        }
    }
    ctx->pc = 0x2D398Cu;
label_2d398c:
    // 0x2d398c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2d398cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d3990: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2d3990u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d3994: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2d3994u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x2d3998: 0x24065a23  addiu       $a2, $zero, 0x5A23
    ctx->pc = 0x2d3998u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 23075));
    // 0x2d399c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2d399cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d39a0: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2d39a0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2d39a4: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2D39A4u;
    SET_GPR_U32(ctx, 31, 0x2D39ACu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2D39A4u, 0x2D39ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D39ACu;
label_2d39ac:
    // 0x2d39ac: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2d39acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d39b0: 0xa4401278  sh          $zero, 0x1278($v0)
    ctx->pc = 0x2d39b0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 0));
    // 0x2d39b4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d39b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d39b8: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x2d39b8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2d39bc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2d39bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2d39c0: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x2d39c0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_2d39c4:
    // 0x2d39c4: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2d39c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d39c8: 0x8fa50018  lw          $a1, 0x18($sp)
    ctx->pc = 0x2d39c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d39cc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d39ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d39d0: 0x3c023c83  lui         $v0, 0x3C83
    ctx->pc = 0x2d39d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15491 << 16));
    // 0x2d39d4: 0x3442126f  ori         $v0, $v0, 0x126F
    ctx->pc = 0x2d39d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4719);
    // 0x2d39d8: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2d39d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2d39dc: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x2d39dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x2d39e0: 0xc4ac00d4  lwc1        $f12, 0xD4($a1)
    ctx->pc = 0x2d39e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2d39e4: 0x24651240  addiu       $a1, $v1, 0x1240
    ctx->pc = 0x2d39e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4672));
    // 0x2d39e8: 0xc05c848  jal         func_172120
    ctx->pc = 0x2D39E8u;
    SET_GPR_U32(ctx, 31, 0x2D39F0u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x2D39E8u, 0x2D39F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D39F0u;
label_2d39f0:
    // 0x2d39f0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2d39f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d39f4: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x2d39f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d39f8: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x2d39f8u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2d39fc: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x2D39FCu;
    SET_GPR_U32(ctx, 31, 0x2D3A04u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2D39FCu, 0x2D3A04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3A04u;
label_2d3a04:
    // 0x2d3a04: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2d3a04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d3a08: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x2d3a08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x2d3a0c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d3a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d3a10: 0x84621278  lh          $v0, 0x1278($v1)
    ctx->pc = 0x2d3a10u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x2d3a14: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2d3a14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2d3a18: 0xa4621278  sh          $v0, 0x1278($v1)
    ctx->pc = 0x2d3a18u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 2));
    // 0x2d3a1c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2d3a1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d3a20: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2d3a20u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2d3a24: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x2D3A24u;
    SET_GPR_U32(ctx, 31, 0x2D3A2Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2D3A24u, 0x2D3A2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3A2Cu;
label_2d3a2c:
    // 0x2d3a2c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2d3a2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d3a30: 0xc05cd10  jal         func_173440
    ctx->pc = 0x2D3A30u;
    SET_GPR_U32(ctx, 31, 0x2D3A38u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x2D3A30u, 0x2D3A38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3A38u;
label_2d3a38:
    // 0x2d3a38: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2d3a38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d3a3c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2d3a3cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2d3a40: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x2D3A40u;
    SET_GPR_U32(ctx, 31, 0x2D3A48u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x2D3A40u, 0x2D3A48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3A48u;
label_2d3a48:
    // 0x2d3a48: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2d3a48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d3a4c: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x2D3A4Cu;
    SET_GPR_U32(ctx, 31, 0x2D3A54u);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x2D3A4Cu, 0x2D3A54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3A54u;
label_2d3a54:
    // 0x2d3a54: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d3a54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d3a58: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x2d3a58u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x2d3a5c: 0x10600039  beqz        $v1, . + 4 + (0x39 << 2)
    ctx->pc = 0x2D3A5Cu;
    {
        const bool branch_taken_0x2d3a5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d3a5c) {
            ctx->pc = 0x2D3B44u;
            goto label_2d3b44;
        }
    }
    ctx->pc = 0x2D3A64u;
    // 0x2d3a64: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2d3a64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d3a68: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x2d3a68u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x2d3a6c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2d3a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2d3a70: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x2d3a70u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x2d3a74: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x2D3A74u;
    {
        const bool branch_taken_0x2d3a74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d3a74) {
            ctx->pc = 0x2D3B44u;
            goto label_2d3b44;
        }
    }
    ctx->pc = 0x2D3A7Cu;
label_2d3a7c:
    // 0x2d3a7c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2d3a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d3a80: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2d3a80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d3a84: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2d3a84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x2d3a88: 0x24065a27  addiu       $a2, $zero, 0x5A27
    ctx->pc = 0x2d3a88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 23079));
    // 0x2d3a8c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2d3a8cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d3a90: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2d3a90u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2d3a94: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2D3A94u;
    SET_GPR_U32(ctx, 31, 0x2D3A9Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2D3A94u, 0x2D3A9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3A9Cu;
label_2d3a9c:
    // 0x2d3a9c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2d3a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d3aa0: 0xa4401278  sh          $zero, 0x1278($v0)
    ctx->pc = 0x2d3aa0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 0));
    // 0x2d3aa4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d3aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d3aa8: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x2d3aa8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2d3aac: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2d3aacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2d3ab0: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x2d3ab0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_2d3ab4:
    // 0x2d3ab4: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2d3ab4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d3ab8: 0x8fa50018  lw          $a1, 0x18($sp)
    ctx->pc = 0x2d3ab8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d3abc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d3abcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d3ac0: 0x3c023c83  lui         $v0, 0x3C83
    ctx->pc = 0x2d3ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15491 << 16));
    // 0x2d3ac4: 0x3442126f  ori         $v0, $v0, 0x126F
    ctx->pc = 0x2d3ac4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4719);
    // 0x2d3ac8: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2d3ac8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2d3acc: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x2d3accu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x2d3ad0: 0xc4ac00d4  lwc1        $f12, 0xD4($a1)
    ctx->pc = 0x2d3ad0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2d3ad4: 0x24651240  addiu       $a1, $v1, 0x1240
    ctx->pc = 0x2d3ad4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4672));
    // 0x2d3ad8: 0xc05c848  jal         func_172120
    ctx->pc = 0x2D3AD8u;
    SET_GPR_U32(ctx, 31, 0x2D3AE0u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x2D3AD8u, 0x2D3AE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3AE0u;
label_2d3ae0:
    // 0x2d3ae0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2d3ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d3ae4: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x2d3ae4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d3ae8: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x2d3ae8u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2d3aec: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x2D3AECu;
    SET_GPR_U32(ctx, 31, 0x2D3AF4u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2D3AECu, 0x2D3AF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3AF4u;
label_2d3af4:
    // 0x2d3af4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2d3af4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d3af8: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x2d3af8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x2d3afc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d3afcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d3b00: 0x84621278  lh          $v0, 0x1278($v1)
    ctx->pc = 0x2d3b00u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x2d3b04: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2d3b04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2d3b08: 0xa4621278  sh          $v0, 0x1278($v1)
    ctx->pc = 0x2d3b08u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 2));
    // 0x2d3b0c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2d3b0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d3b10: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2d3b10u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2d3b14: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x2D3B14u;
    SET_GPR_U32(ctx, 31, 0x2D3B1Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2D3B14u, 0x2D3B1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3B1Cu;
label_2d3b1c:
    // 0x2d3b1c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2d3b1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d3b20: 0xc05cd10  jal         func_173440
    ctx->pc = 0x2D3B20u;
    SET_GPR_U32(ctx, 31, 0x2D3B28u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x2D3B20u, 0x2D3B28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3B28u;
label_2d3b28:
    // 0x2d3b28: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2d3b28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d3b2c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2d3b2cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2d3b30: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x2D3B30u;
    SET_GPR_U32(ctx, 31, 0x2D3B38u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x2D3B30u, 0x2D3B38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3B38u;
label_2d3b38:
    // 0x2d3b38: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2d3b38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d3b3c: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x2D3B3Cu;
    SET_GPR_U32(ctx, 31, 0x2D3B44u);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x2D3B3Cu, 0x2D3B44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3B44u;
label_2d3b44:
    // 0x2d3b44: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2d3b44u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d3b48: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2d3b48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2d3b4c: 0x3e00008  jr          $ra
    ctx->pc = 0x2D3B4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D3B4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D3B54u;
}
