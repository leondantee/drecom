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

// Function: Em01_R1_run
// Address: 0x302b30 - 0x303058
void Em01_R1_run_0x302b30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em01_R1_run_0x302b30");
#endif

    switch (ctx->pc) {
        case 0x302b74u: goto label_302b74;
        case 0x302b80u: goto label_302b80;
        case 0x302bb8u: goto label_302bb8;
        case 0x302bc4u: goto label_302bc4;
        case 0x302c24u: goto label_302c24;
        case 0x302c80u: goto label_302c80;
        case 0x302c94u: goto label_302c94;
        case 0x302cd0u: goto label_302cd0;
        case 0x302ce4u: goto label_302ce4;
        case 0x302d0cu: goto label_302d0c;
        case 0x302d18u: goto label_302d18;
        case 0x302d28u: goto label_302d28;
        case 0x302d34u: goto label_302d34;
        case 0x302d60u: goto label_302d60;
        case 0x302d80u: goto label_302d80;
        case 0x302da0u: goto label_302da0;
        case 0x302dfcu: goto label_302dfc;
        case 0x302e08u: goto label_302e08;
        case 0x302e18u: goto label_302e18;
        case 0x302e24u: goto label_302e24;
        case 0x302eccu: goto label_302ecc;
        case 0x302f80u: goto label_302f80;
        case 0x303010u: goto label_303010;
        default: break;
    }

    ctx->pc = 0x302b30u;

    // 0x302b30: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x302b30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x302b34: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x302b34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x302b38: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x302b38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x302b3c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x302b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x302b40: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x302b40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x302b44: 0x244205c0  addiu       $v0, $v0, 0x5C0
    ctx->pc = 0x302b44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1472));
    // 0x302b48: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x302b48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x302b4c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x302b4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x302b50: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x302b50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x302b54: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x302b54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x302b58: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x302b58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x302b5c: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x302b5cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x302b60: 0x24040406  addiu       $a0, $zero, 0x406
    ctx->pc = 0x302b60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1030));
    // 0x302b64: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x302b64u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x302b68: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x302b68u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x302b6c: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x302B6Cu;
    SET_GPR_U32(ctx, 31, 0x302B74u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x302B6Cu, 0x302B74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x302B74u;
label_302b74:
    // 0x302b74: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x302b74u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x302b78: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x302B78u;
    SET_GPR_U32(ctx, 31, 0x302B80u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x302B78u, 0x302B80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x302B80u;
label_302b80:
    // 0x302b80: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x302b80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x302b84: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x302b84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x302b88: 0x244206c0  addiu       $v0, $v0, 0x6C0
    ctx->pc = 0x302b88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1728));
    // 0x302b8c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x302b8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x302b90: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x302b90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x302b94: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x302b94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x302b98: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x302b98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x302b9c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x302b9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x302ba0: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x302ba0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x302ba4: 0x24040406  addiu       $a0, $zero, 0x406
    ctx->pc = 0x302ba4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1030));
    // 0x302ba8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x302ba8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x302bac: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x302bacu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x302bb0: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x302BB0u;
    SET_GPR_U32(ctx, 31, 0x302BB8u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x302BB0u, 0x302BB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x302BB8u;
label_302bb8:
    // 0x302bb8: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x302bb8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x302bbc: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x302BBCu;
    SET_GPR_U32(ctx, 31, 0x302BC4u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x302BBCu, 0x302BC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x302BC4u;
label_302bc4:
    // 0x302bc4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x302bc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x302bc8: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x302bc8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x302bcc: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x302bccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x302bd0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x302bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x302bd4: 0x10830081  beq         $a0, $v1, . + 4 + (0x81 << 2)
    ctx->pc = 0x302BD4u;
    {
        const bool branch_taken_0x302bd4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x302bd4) {
            ctx->pc = 0x302DDCu;
            goto label_302ddc;
        }
    }
    ctx->pc = 0x302BDCu;
    // 0x302bdc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x302bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x302be0: 0x10830057  beq         $a0, $v1, . + 4 + (0x57 << 2)
    ctx->pc = 0x302BE0u;
    {
        const bool branch_taken_0x302be0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x302be0) {
            ctx->pc = 0x302D40u;
            goto label_302d40;
        }
    }
    ctx->pc = 0x302BE8u;
    // 0x302be8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x302be8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x302bec: 0x10830013  beq         $a0, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x302BECu;
    {
        const bool branch_taken_0x302bec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x302bec) {
            ctx->pc = 0x302C3Cu;
            goto label_302c3c;
        }
    }
    ctx->pc = 0x302BF4u;
    // 0x302bf4: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x302BF4u;
    {
        const bool branch_taken_0x302bf4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x302bf4) {
            ctx->pc = 0x302C04u;
            goto label_302c04;
        }
    }
    ctx->pc = 0x302BFCu;
    // 0x302bfc: 0x10000112  b           . + 4 + (0x112 << 2)
    ctx->pc = 0x302BFCu;
    {
        const bool branch_taken_0x302bfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x302bfc) {
            ctx->pc = 0x303048u;
            goto label_303048;
        }
    }
    ctx->pc = 0x302C04u;
label_302c04:
    // 0x302c04: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x302c04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x302c08: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x302c08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x302c0c: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x302c0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x302c10: 0x24061e02  addiu       $a2, $zero, 0x1E02
    ctx->pc = 0x302c10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7682));
    // 0x302c14: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x302c14u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x302c18: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x302c18u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x302c1c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x302C1Cu;
    SET_GPR_U32(ctx, 31, 0x302C24u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x302C1Cu, 0x302C24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x302C24u;
label_302c24:
    // 0x302c24: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x302c24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x302c28: 0xa4401278  sh          $zero, 0x1278($v0)
    ctx->pc = 0x302c28u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 0));
    // 0x302c2c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x302c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x302c30: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x302c30u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x302c34: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x302c34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x302c38: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x302c38u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_302c3c:
    // 0x302c3c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x302c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x302c40: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x302c40u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x302c44: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x302c44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x302c48: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x302c48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x302c4c: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x302C4Cu;
    {
        const bool branch_taken_0x302c4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x302c4c) {
            ctx->pc = 0x302CA4u;
            goto label_302ca4;
        }
    }
    ctx->pc = 0x302C54u;
    // 0x302c54: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x302c54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
    // 0x302c58: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x302c58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x302c5c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x302c5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x302c60: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x302c60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x302c64: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x302c64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x302c68: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x302c68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x302c6c: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x302c6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x302c70: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x302c70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x302c74: 0x24451240  addiu       $a1, $v0, 0x1240
    ctx->pc = 0x302c74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4672));
    // 0x302c78: 0xc05c848  jal         func_172120
    ctx->pc = 0x302C78u;
    SET_GPR_U32(ctx, 31, 0x302C80u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x302C78u, 0x302C80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x302C80u;
label_302c80:
    // 0x302c80: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x302c80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x302c84: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x302c84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x302c88: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x302c88u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x302c8c: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x302C8Cu;
    SET_GPR_U32(ctx, 31, 0x302C94u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x302C8Cu, 0x302C94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x302C94u;
label_302c94:
    // 0x302c94: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x302c94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x302c98: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x302c98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x302c9c: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x302C9Cu;
    {
        const bool branch_taken_0x302c9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x302c9c) {
            ctx->pc = 0x302CECu;
            goto label_302cec;
        }
    }
    ctx->pc = 0x302CA4u;
label_302ca4:
    // 0x302ca4: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x302ca4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x302ca8: 0x8fa50018  lw          $a1, 0x18($sp)
    ctx->pc = 0x302ca8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x302cac: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x302cacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x302cb0: 0x3c023b83  lui         $v0, 0x3B83
    ctx->pc = 0x302cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15235 << 16));
    // 0x302cb4: 0x3442126f  ori         $v0, $v0, 0x126F
    ctx->pc = 0x302cb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4719);
    // 0x302cb8: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x302cb8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x302cbc: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x302cbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x302cc0: 0xc4ac00d4  lwc1        $f12, 0xD4($a1)
    ctx->pc = 0x302cc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x302cc4: 0x24651240  addiu       $a1, $v1, 0x1240
    ctx->pc = 0x302cc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4672));
    // 0x302cc8: 0xc05c848  jal         func_172120
    ctx->pc = 0x302CC8u;
    SET_GPR_U32(ctx, 31, 0x302CD0u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x302CC8u, 0x302CD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x302CD0u;
label_302cd0:
    // 0x302cd0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x302cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x302cd4: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x302cd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x302cd8: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x302cd8u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x302cdc: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x302CDCu;
    SET_GPR_U32(ctx, 31, 0x302CE4u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x302CDCu, 0x302CE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x302CE4u;
label_302ce4:
    // 0x302ce4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x302ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x302ce8: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x302ce8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
label_302cec:
    // 0x302cec: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x302cecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x302cf0: 0x84621278  lh          $v0, 0x1278($v1)
    ctx->pc = 0x302cf0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x302cf4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x302cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x302cf8: 0xa4621278  sh          $v0, 0x1278($v1)
    ctx->pc = 0x302cf8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 2));
    // 0x302cfc: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x302cfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x302d00: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x302d00u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x302d04: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x302D04u;
    SET_GPR_U32(ctx, 31, 0x302D0Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x302D04u, 0x302D0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x302D0Cu;
label_302d0c:
    // 0x302d0c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x302d0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x302d10: 0xc05cd10  jal         func_173440
    ctx->pc = 0x302D10u;
    SET_GPR_U32(ctx, 31, 0x302D18u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x302D10u, 0x302D18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x302D18u;
label_302d18:
    // 0x302d18: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x302d18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x302d1c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x302d1cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x302d20: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x302D20u;
    SET_GPR_U32(ctx, 31, 0x302D28u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x302D20u, 0x302D28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x302D28u;
label_302d28:
    // 0x302d28: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x302d28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x302d2c: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x302D2Cu;
    SET_GPR_U32(ctx, 31, 0x302D34u);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x302D2Cu, 0x302D34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x302D34u;
label_302d34:
    // 0x302d34: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x302d34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x302d38: 0x100000c3  b           . + 4 + (0xC3 << 2)
    ctx->pc = 0x302D38u;
    {
        const bool branch_taken_0x302d38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x302d38) {
            ctx->pc = 0x303048u;
            goto label_303048;
        }
    }
    ctx->pc = 0x302D40u;
label_302d40:
    // 0x302d40: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x302d40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x302d44: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x302d44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x302d48: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x302d48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x302d4c: 0x24061402  addiu       $a2, $zero, 0x1402
    ctx->pc = 0x302d4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5122));
    // 0x302d50: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x302d50u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x302d54: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x302d54u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x302d58: 0xc0965d0  jal         func_259740
    ctx->pc = 0x302D58u;
    SET_GPR_U32(ctx, 31, 0x302D60u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x302D58u, 0x302D60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x302D60u;
label_302d60:
    // 0x302d60: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x302d60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x302d64: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x302d64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x302d68: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x302d68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x302d6c: 0x24421334  addiu       $v0, $v0, 0x1334
    ctx->pc = 0x302d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4916));
    // 0x302d70: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x302d70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x302d74: 0x46000b01  sub.s       $f12, $f1, $f0
    ctx->pc = 0x302d74u;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x302d78: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x302D78u;
    SET_GPR_U32(ctx, 31, 0x302D80u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x302D78u, 0x302D80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x302D80u;
label_302d80:
    // 0x302d80: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x302d80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x302d84: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x302d84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x302d88: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x302d88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x302d8c: 0x24421334  addiu       $v0, $v0, 0x1334
    ctx->pc = 0x302d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4916));
    // 0x302d90: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x302d90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x302d94: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x302d94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x302d98: 0xc0c2038  jal         func_3080E0
    ctx->pc = 0x302D98u;
    SET_GPR_U32(ctx, 31, 0x302DA0u);
    ctx->pc = 0x3080E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3080E0u, 0x302D98u, 0x302DA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x302DA0u;
label_302da0:
    // 0x302da0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x302da0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x302da4: 0xa4401278  sh          $zero, 0x1278($v0)
    ctx->pc = 0x302da4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 0));
    // 0x302da8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x302da8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x302dac: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x302dacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x302db0: 0x8c421310  lw          $v0, 0x1310($v0)
    ctx->pc = 0x302db0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4880)));
    // 0x302db4: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x302db4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x302db8: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x302db8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x302dbc: 0x8c831338  lw          $v1, 0x1338($a0)
    ctx->pc = 0x302dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4920)));
    // 0x302dc0: 0x2402efff  addiu       $v0, $zero, -0x1001
    ctx->pc = 0x302dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x302dc4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x302dc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x302dc8: 0xac821338  sw          $v0, 0x1338($a0)
    ctx->pc = 0x302dc8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4920), GPR_U32(ctx, 2));
    // 0x302dcc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x302dccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x302dd0: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x302dd0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x302dd4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x302dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x302dd8: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x302dd8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_302ddc:
    // 0x302ddc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x302ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x302de0: 0x84621278  lh          $v0, 0x1278($v1)
    ctx->pc = 0x302de0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x302de4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x302de4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x302de8: 0xa4621278  sh          $v0, 0x1278($v1)
    ctx->pc = 0x302de8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 2));
    // 0x302dec: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x302decu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x302df0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x302df0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x302df4: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x302DF4u;
    SET_GPR_U32(ctx, 31, 0x302DFCu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x302DF4u, 0x302DFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x302DFCu;
label_302dfc:
    // 0x302dfc: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x302dfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x302e00: 0xc05cd10  jal         func_173440
    ctx->pc = 0x302E00u;
    SET_GPR_U32(ctx, 31, 0x302E08u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x302E00u, 0x302E08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x302E08u;
label_302e08:
    // 0x302e08: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x302e08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x302e0c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x302e0cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x302e10: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x302E10u;
    SET_GPR_U32(ctx, 31, 0x302E18u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x302E10u, 0x302E18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x302E18u;
label_302e18:
    // 0x302e18: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x302e18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x302e1c: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x302E1Cu;
    SET_GPR_U32(ctx, 31, 0x302E24u);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x302E1Cu, 0x302E24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x302E24u;
label_302e24:
    // 0x302e24: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x302e24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x302e28: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x302e28u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x302e2c: 0x10600086  beqz        $v1, . + 4 + (0x86 << 2)
    ctx->pc = 0x302E2Cu;
    {
        const bool branch_taken_0x302e2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x302e2c) {
            ctx->pc = 0x303048u;
            goto label_303048;
        }
    }
    ctx->pc = 0x302E34u;
    // 0x302e34: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x302e34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x302e38: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x302e38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x302e3c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x302e3cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x302e40: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x302e40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x302e44: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x302e44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x302e48: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x302e48u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x302e4c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x302e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x302e50: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x302e50u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x302e54: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x302e54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x302e58: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x302e58u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x302e5c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x302e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x302e60: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x302e60u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x302e64: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x302e64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x302e68: 0x8c631338  lw          $v1, 0x1338($v1)
    ctx->pc = 0x302e68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4920)));
    // 0x302e6c: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x302e6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x302e70: 0x14600075  bnez        $v1, . + 4 + (0x75 << 2)
    ctx->pc = 0x302E70u;
    {
        const bool branch_taken_0x302e70 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x302e70) {
            ctx->pc = 0x303048u;
            goto label_303048;
        }
    }
    ctx->pc = 0x302E78u;
    // 0x302e78: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x302e78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x302e7c: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x302e7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x302e80: 0x3c034448  lui         $v1, 0x4448
    ctx->pc = 0x302e80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17480 << 16));
    // 0x302e84: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x302e84u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x302e88: 0x0  nop
    ctx->pc = 0x302e88u;
    // NOP
    // 0x302e8c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x302e8cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x302e90: 0x0  nop
    ctx->pc = 0x302e90u;
    // NOP
    // 0x302e94: 0x4500001b  bc1f        . + 4 + (0x1B << 2)
    ctx->pc = 0x302E94u;
    {
        const bool branch_taken_0x302e94 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x302e94) {
            ctx->pc = 0x302F04u;
            goto label_302f04;
        }
    }
    ctx->pc = 0x302E9Cu;
    // 0x302e9c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x302e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x302ea0: 0x8c440130  lw          $a0, 0x130($v0)
    ctx->pc = 0x302ea0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x302ea4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x302ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x302ea8: 0x3c023e49  lui         $v0, 0x3E49
    ctx->pc = 0x302ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15945 << 16));
    // 0x302eac: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x302eacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x302eb0: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x302eb0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x302eb4: 0x24840030  addiu       $a0, $a0, 0x30
    ctx->pc = 0x302eb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x302eb8: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x302eb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x302ebc: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x302ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x302ec0: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x302ec0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x302ec4: 0xc05caf8  jal         func_172BE0
    ctx->pc = 0x302EC4u;
    SET_GPR_U32(ctx, 31, 0x302ECCu);
    ctx->pc = 0x172BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172BE0u, 0x302EC4u, 0x302ECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x302ECCu;
label_302ecc:
    // 0x302ecc: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x302ECCu;
    {
        const bool branch_taken_0x302ecc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x302ecc) {
            ctx->pc = 0x302F04u;
            goto label_302f04;
        }
    }
    ctx->pc = 0x302ED4u;
    // 0x302ed4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x302ed4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x302ed8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x302ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x302edc: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x302edcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x302ee0: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x302ee0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x302ee4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x302ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x302ee8: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x302ee8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x302eec: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x302eecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x302ef0: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x302ef0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x302ef4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x302ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x302ef8: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x302ef8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x302efc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x302efcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x302f00: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x302f00u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_302f04:
    // 0x302f04: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x302f04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x302f08: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x302f08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x302f0c: 0x3c0344fa  lui         $v1, 0x44FA
    ctx->pc = 0x302f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17658 << 16));
    // 0x302f10: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x302f10u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x302f14: 0x0  nop
    ctx->pc = 0x302f14u;
    // NOP
    // 0x302f18: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x302f18u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x302f1c: 0x0  nop
    ctx->pc = 0x302f1cu;
    // NOP
    // 0x302f20: 0x45010025  bc1t        . + 4 + (0x25 << 2)
    ctx->pc = 0x302F20u;
    {
        const bool branch_taken_0x302f20 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x302f20) {
            ctx->pc = 0x302FB8u;
            goto label_302fb8;
        }
    }
    ctx->pc = 0x302F28u;
    // 0x302f28: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x302f28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x302f2c: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x302f2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x302f30: 0x3c03453b  lui         $v1, 0x453B
    ctx->pc = 0x302f30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17723 << 16));
    // 0x302f34: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x302f34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x302f38: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x302f38u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x302f3c: 0x0  nop
    ctx->pc = 0x302f3cu;
    // NOP
    // 0x302f40: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x302f40u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x302f44: 0x0  nop
    ctx->pc = 0x302f44u;
    // NOP
    // 0x302f48: 0x4500001b  bc1f        . + 4 + (0x1B << 2)
    ctx->pc = 0x302F48u;
    {
        const bool branch_taken_0x302f48 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x302f48) {
            ctx->pc = 0x302FB8u;
            goto label_302fb8;
        }
    }
    ctx->pc = 0x302F50u;
    // 0x302f50: 0x3c023e49  lui         $v0, 0x3E49
    ctx->pc = 0x302f50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15945 << 16));
    // 0x302f54: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x302f54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x302f58: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x302f58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x302f5c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x302f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x302f60: 0x8c430130  lw          $v1, 0x130($v0)
    ctx->pc = 0x302f60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x302f64: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x302f64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x302f68: 0x24640030  addiu       $a0, $v1, 0x30
    ctx->pc = 0x302f68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x302f6c: 0xc44c00d4  lwc1        $f12, 0xD4($v0)
    ctx->pc = 0x302f6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x302f70: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x302f70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x302f74: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x302f74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x302f78: 0xc05caf8  jal         func_172BE0
    ctx->pc = 0x302F78u;
    SET_GPR_U32(ctx, 31, 0x302F80u);
    ctx->pc = 0x172BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172BE0u, 0x302F78u, 0x302F80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x302F80u;
label_302f80:
    // 0x302f80: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x302F80u;
    {
        const bool branch_taken_0x302f80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x302f80) {
            ctx->pc = 0x302FB8u;
            goto label_302fb8;
        }
    }
    ctx->pc = 0x302F88u;
    // 0x302f88: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x302f88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x302f8c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x302f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x302f90: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x302f90u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x302f94: 0x24040011  addiu       $a0, $zero, 0x11
    ctx->pc = 0x302f94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x302f98: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x302f98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x302f9c: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x302f9cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x302fa0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x302fa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x302fa4: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x302fa4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x302fa8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x302fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x302fac: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x302facu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x302fb0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x302fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x302fb4: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x302fb4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_302fb8:
    // 0x302fb8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x302fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x302fbc: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x302fbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x302fc0: 0x3c034489  lui         $v1, 0x4489
    ctx->pc = 0x302fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17545 << 16));
    // 0x302fc4: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x302fc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x302fc8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x302fc8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x302fcc: 0x0  nop
    ctx->pc = 0x302fccu;
    // NOP
    // 0x302fd0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x302fd0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x302fd4: 0x0  nop
    ctx->pc = 0x302fd4u;
    // NOP
    // 0x302fd8: 0x4500001b  bc1f        . + 4 + (0x1B << 2)
    ctx->pc = 0x302FD8u;
    {
        const bool branch_taken_0x302fd8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x302fd8) {
            ctx->pc = 0x303048u;
            goto label_303048;
        }
    }
    ctx->pc = 0x302FE0u;
    // 0x302fe0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x302fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x302fe4: 0x8c440130  lw          $a0, 0x130($v0)
    ctx->pc = 0x302fe4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x302fe8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x302fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x302fec: 0x3c023ec9  lui         $v0, 0x3EC9
    ctx->pc = 0x302fecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16073 << 16));
    // 0x302ff0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x302ff0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x302ff4: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x302ff4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x302ff8: 0x24840030  addiu       $a0, $a0, 0x30
    ctx->pc = 0x302ff8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x302ffc: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x302ffcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x303000: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x303000u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x303004: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x303004u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x303008: 0xc05caf8  jal         func_172BE0
    ctx->pc = 0x303008u;
    SET_GPR_U32(ctx, 31, 0x303010u);
    ctx->pc = 0x172BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172BE0u, 0x303008u, 0x303010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x303010u;
label_303010:
    // 0x303010: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x303010u;
    {
        const bool branch_taken_0x303010 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x303010) {
            ctx->pc = 0x303048u;
            goto label_303048;
        }
    }
    ctx->pc = 0x303018u;
    // 0x303018: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x303018u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30301c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x30301cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x303020: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x303020u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x303024: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x303024u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x303028: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x303028u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30302c: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x30302cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x303030: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x303030u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x303034: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x303034u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x303038: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x303038u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30303c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x30303cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x303040: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x303040u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x303044: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x303044u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_303048:
    // 0x303048: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x303048u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30304c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x30304cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x303050: 0x3e00008  jr          $ra
    ctx->pc = 0x303050u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x303050u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x303058u;
}
