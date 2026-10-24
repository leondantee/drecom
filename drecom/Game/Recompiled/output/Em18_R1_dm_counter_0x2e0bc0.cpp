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

// Function: Em18_R1_dm_counter
// Address: 0x2e0bc0 - 0x2e0e24
void Em18_R1_dm_counter_0x2e0bc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em18_R1_dm_counter_0x2e0bc0");
#endif

    switch (ctx->pc) {
        case 0x2e0c3cu: goto label_2e0c3c;
        case 0x2e0c94u: goto label_2e0c94;
        case 0x2e0cc0u: goto label_2e0cc0;
        case 0x2e0cd8u: goto label_2e0cd8;
        case 0x2e0ce4u: goto label_2e0ce4;
        case 0x2e0cf4u: goto label_2e0cf4;
        case 0x2e0d00u: goto label_2e0d00;
        case 0x2e0d0cu: goto label_2e0d0c;
        case 0x2e0d78u: goto label_2e0d78;
        case 0x2e0dacu: goto label_2e0dac;
        case 0x2e0dc8u: goto label_2e0dc8;
        default: break;
    }

    ctx->pc = 0x2e0bc0u;

    // 0x2e0bc0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2e0bc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2e0bc4: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x2e0bc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x2e0bc8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2e0bc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2e0bcc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2e0bccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2e0bd0: 0xafa40048  sw          $a0, 0x48($sp)
    ctx->pc = 0x2e0bd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 4));
    // 0x2e0bd4: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x2e0bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x2e0bd8: 0x24710080  addiu       $s1, $v1, 0x80
    ctx->pc = 0x2e0bd8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
    // 0x2e0bdc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2e0bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2e0be0: 0x24701330  addiu       $s0, $v1, 0x1330
    ctx->pc = 0x2e0be0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2e0be4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2e0be4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2e0be8: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x2e0be8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2e0bec: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2e0becu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2e0bf0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2e0bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e0bf4: 0x1083001b  beq         $a0, $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x2E0BF4u;
    {
        const bool branch_taken_0x2e0bf4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2e0bf4) {
            ctx->pc = 0x2E0C64u;
            goto label_2e0c64;
        }
    }
    ctx->pc = 0x2E0BFCu;
    // 0x2e0bfc: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E0BFCu;
    {
        const bool branch_taken_0x2e0bfc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e0bfc) {
            ctx->pc = 0x2E0C0Cu;
            goto label_2e0c0c;
        }
    }
    ctx->pc = 0x2E0C04u;
    // 0x2e0c04: 0x10000081  b           . + 4 + (0x81 << 2)
    ctx->pc = 0x2E0C04u;
    {
        const bool branch_taken_0x2e0c04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e0c04) {
            ctx->pc = 0x2E0E0Cu;
            goto label_2e0e0c;
        }
    }
    ctx->pc = 0x2E0C0Cu;
label_2e0c0c:
    // 0x2e0c0c: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x2e0c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x2e0c10: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2e0c10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2e0c14: 0xa04310a8  sb          $v1, 0x10A8($v0)
    ctx->pc = 0x2e0c14u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4264), (uint8_t)GPR_U32(ctx, 3));
    // 0x2e0c18: 0xa20000d6  sb          $zero, 0xD6($s0)
    ctx->pc = 0x2e0c18u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 214), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e0c1c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2e0c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2e0c20: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2e0c20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2e0c24: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2e0c24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x2e0c28: 0x24060a40  addiu       $a2, $zero, 0xA40
    ctx->pc = 0x2e0c28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2624));
    // 0x2e0c2c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2e0c2cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e0c30: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2e0c30u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2e0c34: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2E0C34u;
    SET_GPR_U32(ctx, 31, 0x2E0C3Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2E0C34u, 0x2E0C3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E0C3Cu;
label_2e0c3c:
    // 0x2e0c3c: 0xa20000d5  sb          $zero, 0xD5($s0)
    ctx->pc = 0x2e0c3cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 213), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e0c40: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2e0c40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2e0c44: 0xa4401278  sh          $zero, 0x1278($v0)
    ctx->pc = 0x2e0c44u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 0));
    // 0x2e0c48: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2e0c48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e0c4c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2e0c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2e0c50: 0xa443127e  sh          $v1, 0x127E($v0)
    ctx->pc = 0x2e0c50u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4734), (uint16_t)GPR_U32(ctx, 3));
    // 0x2e0c54: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2e0c54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2e0c58: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x2e0c58u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2e0c5c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2e0c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2e0c60: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x2e0c60u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_2e0c64:
    // 0x2e0c64: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2e0c64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2e0c68: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x2e0c68u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x2e0c6c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2e0c6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2e0c70: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x2e0c70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x2e0c74: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2E0C74u;
    {
        const bool branch_taken_0x2e0c74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e0c74) {
            ctx->pc = 0x2E0CC8u;
            goto label_2e0cc8;
        }
    }
    ctx->pc = 0x2E0C7Cu;
    // 0x2e0c7c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2e0c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2e0c80: 0x24440120  addiu       $a0, $v0, 0x120
    ctx->pc = 0x2e0c80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x2e0c84: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x2e0c84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x2e0c88: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x2e0c88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x2e0c8c: 0xc05ccfc  jal         func_1733F0
    ctx->pc = 0x2E0C8Cu;
    SET_GPR_U32(ctx, 31, 0x2E0C94u);
    ctx->pc = 0x1733F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1733F0u, 0x2E0C8Cu, 0x2E0C94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E0C94u;
label_2e0c94:
    // 0x2e0c94: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2e0c94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2e0c98: 0xe4401290  swc1        $f0, 0x1290($v0)
    ctx->pc = 0x2e0c98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4752), bits); }
    // 0x2e0c9c: 0x3c023ec9  lui         $v0, 0x3EC9
    ctx->pc = 0x2e0c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16073 << 16));
    // 0x2e0ca0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x2e0ca0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x2e0ca4: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x2e0ca4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2e0ca8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2e0ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2e0cac: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2e0cacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2e0cb0: 0xc46c1290  lwc1        $f12, 0x1290($v1)
    ctx->pc = 0x2e0cb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2e0cb4: 0xc44d00d4  lwc1        $f13, 0xD4($v0)
    ctx->pc = 0x2e0cb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2e0cb8: 0xc058f50  jal         func_163D40
    ctx->pc = 0x2E0CB8u;
    SET_GPR_U32(ctx, 31, 0x2E0CC0u);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x2E0CB8u, 0x2E0CC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E0CC0u;
label_2e0cc0:
    // 0x2e0cc0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2e0cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2e0cc4: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x2e0cc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
label_2e0cc8:
    // 0x2e0cc8: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2e0cc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2e0ccc: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2e0cccu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2e0cd0: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x2E0CD0u;
    SET_GPR_U32(ctx, 31, 0x2E0CD8u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2E0CD0u, 0x2E0CD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E0CD8u;
label_2e0cd8:
    // 0x2e0cd8: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2e0cd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2e0cdc: 0xc05cd10  jal         func_173440
    ctx->pc = 0x2E0CDCu;
    SET_GPR_U32(ctx, 31, 0x2E0CE4u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x2E0CDCu, 0x2E0CE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E0CE4u;
label_2e0ce4:
    // 0x2e0ce4: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2e0ce4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2e0ce8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2e0ce8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2e0cec: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x2E0CECu;
    SET_GPR_U32(ctx, 31, 0x2E0CF4u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x2E0CECu, 0x2E0CF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E0CF4u;
label_2e0cf4:
    // 0x2e0cf4: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2e0cf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2e0cf8: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x2E0CF8u;
    SET_GPR_U32(ctx, 31, 0x2E0D00u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x2E0CF8u, 0x2E0D00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E0D00u;
label_2e0d00:
    // 0x2e0d00: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2e0d00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2e0d04: 0xc0c8ed4  jal         func_323B50
    ctx->pc = 0x2E0D04u;
    SET_GPR_U32(ctx, 31, 0x2E0D0Cu);
    ctx->pc = 0x323B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323B50u, 0x2E0D04u, 0x2E0D0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E0D0Cu;
label_2e0d0c:
    // 0x2e0d0c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2e0d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2e0d10: 0x84631278  lh          $v1, 0x1278($v1)
    ctx->pc = 0x2e0d10u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x2e0d14: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x2E0D14u;
    {
        const bool branch_taken_0x2e0d14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e0d14) {
            ctx->pc = 0x2E0D44u;
            goto label_2e0d44;
        }
    }
    ctx->pc = 0x2E0D1Cu;
    // 0x2e0d1c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2e0d1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2e0d20: 0x84831278  lh          $v1, 0x1278($a0)
    ctx->pc = 0x2e0d20u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4728)));
    // 0x2e0d24: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2e0d24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2e0d28: 0xa4831278  sh          $v1, 0x1278($a0)
    ctx->pc = 0x2e0d28u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x2e0d2c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2e0d2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2e0d30: 0x948309e0  lhu         $v1, 0x9E0($a0)
    ctx->pc = 0x2e0d30u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2528)));
    // 0x2e0d34: 0x34630100  ori         $v1, $v1, 0x100
    ctx->pc = 0x2e0d34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)256);
    // 0x2e0d38: 0xa48309e0  sh          $v1, 0x9E0($a0)
    ctx->pc = 0x2e0d38u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2528), (uint16_t)GPR_U32(ctx, 3));
    // 0x2e0d3c: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x2E0D3Cu;
    {
        const bool branch_taken_0x2e0d3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e0d3c) {
            ctx->pc = 0x2E0DD0u;
            goto label_2e0dd0;
        }
    }
    ctx->pc = 0x2E0D44u;
label_2e0d44:
    // 0x2e0d44: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2e0d44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2e0d48: 0x948309e0  lhu         $v1, 0x9E0($a0)
    ctx->pc = 0x2e0d48u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2528)));
    // 0x2e0d4c: 0x3063feff  andi        $v1, $v1, 0xFEFF
    ctx->pc = 0x2e0d4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65279);
    // 0x2e0d50: 0xa48309e0  sh          $v1, 0x9E0($a0)
    ctx->pc = 0x2e0d50u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2528), (uint16_t)GPR_U32(ctx, 3));
    // 0x2e0d54: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2e0d54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2e0d58: 0x906309df  lbu         $v1, 0x9DF($v1)
    ctx->pc = 0x2e0d58u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2527)));
    // 0x2e0d5c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2e0d5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2e0d60: 0x30630080  andi        $v1, $v1, 0x80
    ctx->pc = 0x2e0d60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x2e0d64: 0x1060001a  beqz        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x2E0D64u;
    {
        const bool branch_taken_0x2e0d64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e0d64) {
            ctx->pc = 0x2E0DD0u;
            goto label_2e0dd0;
        }
    }
    ctx->pc = 0x2E0D6Cu;
    // 0x2e0d6c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x2e0d6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2e0d70: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x2E0D70u;
    SET_GPR_U32(ctx, 31, 0x2E0D78u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x2E0D70u, 0x2E0D78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E0D78u;
label_2e0d78:
    // 0x2e0d78: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2e0d78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2e0d7c: 0x8463127e  lh          $v1, 0x127E($v1)
    ctx->pc = 0x2e0d7cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4734)));
    // 0x2e0d80: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x2E0D80u;
    {
        const bool branch_taken_0x2e0d80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e0d80) {
            ctx->pc = 0x2E0DD0u;
            goto label_2e0dd0;
        }
    }
    ctx->pc = 0x2E0D88u;
    // 0x2e0d88: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2e0d88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2e0d8c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2e0d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2e0d90: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x2e0d90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2e0d94: 0x24450580  addiu       $a1, $v0, 0x580
    ctx->pc = 0x2e0d94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1408));
    // 0x2e0d98: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x2e0d98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2e0d9c: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x2e0d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x2e0da0: 0x24478ddc  addiu       $a3, $v0, -0x7224
    ctx->pc = 0x2e0da0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938076));
    // 0x2e0da4: 0xc06d02c  jal         func_1B40B0
    ctx->pc = 0x2E0DA4u;
    SET_GPR_U32(ctx, 31, 0x2E0DACu);
    ctx->pc = 0x1B40B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B40B0u, 0x2E0DA4u, 0x2E0DACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E0DACu;
label_2e0dac:
    // 0x2e0dac: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2E0DACu;
    {
        const bool branch_taken_0x2e0dac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e0dac) {
            ctx->pc = 0x2E0DD0u;
            goto label_2e0dd0;
        }
    }
    ctx->pc = 0x2E0DB4u;
    // 0x2e0db4: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x2e0db4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2e0db8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2e0db8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2e0dbc: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x2e0dbcu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x2e0dc0: 0xc0b6534  jal         func_2D94D0
    ctx->pc = 0x2E0DC0u;
    SET_GPR_U32(ctx, 31, 0x2E0DC8u);
    ctx->pc = 0x2D94D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D94D0u, 0x2E0DC0u, 0x2E0DC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E0DC8u;
label_2e0dc8:
    // 0x2e0dc8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2e0dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2e0dcc: 0xa460127e  sh          $zero, 0x127E($v1)
    ctx->pc = 0x2e0dccu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4734), (uint16_t)GPR_U32(ctx, 0));
label_2e0dd0:
    // 0x2e0dd0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2e0dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2e0dd4: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x2e0dd4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x2e0dd8: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x2E0DD8u;
    {
        const bool branch_taken_0x2e0dd8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e0dd8) {
            ctx->pc = 0x2E0E0Cu;
            goto label_2e0e0c;
        }
    }
    ctx->pc = 0x2E0DE0u;
    // 0x2e0de0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2e0de0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e0de4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2e0de4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2e0de8: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2e0de8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2e0dec: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2e0decu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2e0df0: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x2e0df0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e0df4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2e0df4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2e0df8: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2e0df8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e0dfc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2e0dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2e0e00: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2e0e00u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e0e04: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2e0e04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2e0e08: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2e0e08u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_2e0e0c:
    // 0x2e0e0c: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x2e0e0cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e0e10: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2e0e10u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e0e14: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2e0e14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e0e18: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x2e0e18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2e0e1c: 0x3e00008  jr          $ra
    ctx->pc = 0x2E0E1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E0E1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E0E24u;
}
