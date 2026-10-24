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

// Function: Em1b_R1_atk_punch
// Address: 0x36cf30 - 0x36d05c
void Em1b_R1_atk_punch_0x36cf30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em1b_R1_atk_punch_0x36cf30");
#endif

    switch (ctx->pc) {
        case 0x36cf84u: goto label_36cf84;
        case 0x36cfc8u: goto label_36cfc8;
        case 0x36cfdcu: goto label_36cfdc;
        case 0x36cff4u: goto label_36cff4;
        case 0x36d000u: goto label_36d000;
        case 0x36d00cu: goto label_36d00c;
        default: break;
    }

    ctx->pc = 0x36cf30u;

    // 0x36cf30: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x36cf30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x36cf34: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x36cf34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x36cf38: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x36cf38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x36cf3c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x36cf3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36cf40: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x36cf40u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x36cf44: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x36cf44u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x36cf48: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x36cf48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36cf4c: 0x10830013  beq         $a0, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x36CF4Cu;
    {
        const bool branch_taken_0x36cf4c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x36cf4c) {
            ctx->pc = 0x36CF9Cu;
            goto label_36cf9c;
        }
    }
    ctx->pc = 0x36CF54u;
    // 0x36cf54: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x36CF54u;
    {
        const bool branch_taken_0x36cf54 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x36cf54) {
            ctx->pc = 0x36CF64u;
            goto label_36cf64;
        }
    }
    ctx->pc = 0x36CF5Cu;
    // 0x36cf5c: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x36CF5Cu;
    {
        const bool branch_taken_0x36cf5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x36cf5c) {
            ctx->pc = 0x36D04Cu;
            goto label_36d04c;
        }
    }
    ctx->pc = 0x36CF64u;
label_36cf64:
    // 0x36cf64: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x36cf64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36cf68: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x36cf68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36cf6c: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x36cf6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x36cf70: 0x24065a0d  addiu       $a2, $zero, 0x5A0D
    ctx->pc = 0x36cf70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 23053));
    // 0x36cf74: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x36cf74u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36cf78: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x36cf78u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x36cf7c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x36CF7Cu;
    SET_GPR_U32(ctx, 31, 0x36CF84u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x36CF7Cu, 0x36CF84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36CF84u;
label_36cf84:
    // 0x36cf84: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x36cf84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36cf88: 0xa4401278  sh          $zero, 0x1278($v0)
    ctx->pc = 0x36cf88u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 0));
    // 0x36cf8c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x36cf8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36cf90: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x36cf90u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x36cf94: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x36cf94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x36cf98: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x36cf98u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_36cf9c:
    // 0x36cf9c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x36cf9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36cfa0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x36cfa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36cfa4: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x36cfa4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
    // 0x36cfa8: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x36cfa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x36cfac: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x36cfacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x36cfb0: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x36cfb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x36cfb4: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x36cfb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x36cfb8: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x36cfb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x36cfbc: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x36cfbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x36cfc0: 0xc05c848  jal         func_172120
    ctx->pc = 0x36CFC0u;
    SET_GPR_U32(ctx, 31, 0x36CFC8u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x36CFC0u, 0x36CFC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36CFC8u;
label_36cfc8:
    // 0x36cfc8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x36cfc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36cfcc: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x36cfccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36cfd0: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x36cfd0u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x36cfd4: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x36CFD4u;
    SET_GPR_U32(ctx, 31, 0x36CFDCu);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x36CFD4u, 0x36CFDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36CFDCu;
label_36cfdc:
    // 0x36cfdc: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x36cfdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36cfe0: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x36cfe0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x36cfe4: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x36cfe4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36cfe8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x36cfe8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x36cfec: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x36CFECu;
    SET_GPR_U32(ctx, 31, 0x36CFF4u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x36CFECu, 0x36CFF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36CFF4u;
label_36cff4:
    // 0x36cff4: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x36cff4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36cff8: 0xc05cd10  jal         func_173440
    ctx->pc = 0x36CFF8u;
    SET_GPR_U32(ctx, 31, 0x36D000u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x36CFF8u, 0x36D000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36D000u;
label_36d000:
    // 0x36d000: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x36d000u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36d004: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x36D004u;
    SET_GPR_U32(ctx, 31, 0x36D00Cu);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x36D004u, 0x36D00Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36D00Cu;
label_36d00c:
    // 0x36d00c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x36d00cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36d010: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x36d010u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x36d014: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x36D014u;
    {
        const bool branch_taken_0x36d014 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x36d014) {
            ctx->pc = 0x36D04Cu;
            goto label_36d04c;
        }
    }
    ctx->pc = 0x36D01Cu;
    // 0x36d01c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x36d01cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36d020: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x36d020u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36d024: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x36d024u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x36d028: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x36d028u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x36d02c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x36d02cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36d030: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x36d030u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x36d034: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x36d034u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36d038: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x36d038u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x36d03c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x36d03cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36d040: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x36d040u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x36d044: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x36d044u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36d048: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x36d048u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_36d04c:
    // 0x36d04c: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x36d04cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36d050: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x36d050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x36d054: 0x3e00008  jr          $ra
    ctx->pc = 0x36D054u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36D054u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36D05Cu;
}
