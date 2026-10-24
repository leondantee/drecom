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

// Function: Em18_lightning_move
// Address: 0x2daca0 - 0x2dae44
void Em18_lightning_move_0x2daca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em18_lightning_move_0x2daca0");
#endif

    switch (ctx->pc) {
        case 0x2dad14u: goto label_2dad14;
        case 0x2dad2cu: goto label_2dad2c;
        case 0x2dad44u: goto label_2dad44;
        case 0x2dad5cu: goto label_2dad5c;
        case 0x2dad74u: goto label_2dad74;
        case 0x2dad9cu: goto label_2dad9c;
        case 0x2dadbcu: goto label_2dadbc;
        case 0x2dae2cu: goto label_2dae2c;
        default: break;
    }

    ctx->pc = 0x2daca0u;

    // 0x2daca0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2daca0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2daca4: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x2daca4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x2daca8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2daca8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2dacac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2dacacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2dacb0: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x2dacb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
    // 0x2dacb4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2dacb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2dacb8: 0x24501330  addiu       $s0, $v0, 0x1330
    ctx->pc = 0x2dacb8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2dacbc: 0x920200db  lbu         $v0, 0xDB($s0)
    ctx->pc = 0x2dacbcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 219)));
    // 0x2dacc0: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2dacc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2dacc4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2dacc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2dacc8: 0x10620026  beq         $v1, $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x2DACC8u;
    {
        const bool branch_taken_0x2dacc8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2dacc8) {
            ctx->pc = 0x2DAD64u;
            goto label_2dad64;
        }
    }
    ctx->pc = 0x2DACD0u;
    // 0x2dacd0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2dacd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2dacd4: 0x1062001d  beq         $v1, $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x2DACD4u;
    {
        const bool branch_taken_0x2dacd4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2dacd4) {
            ctx->pc = 0x2DAD4Cu;
            goto label_2dad4c;
        }
    }
    ctx->pc = 0x2DACDCu;
    // 0x2dacdc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2dacdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2dace0: 0x10620014  beq         $v1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2DACE0u;
    {
        const bool branch_taken_0x2dace0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2dace0) {
            ctx->pc = 0x2DAD34u;
            goto label_2dad34;
        }
    }
    ctx->pc = 0x2DACE8u;
    // 0x2dace8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2dace8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2dacec: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2DACECu;
    {
        const bool branch_taken_0x2dacec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2dacec) {
            ctx->pc = 0x2DAD1Cu;
            goto label_2dad1c;
        }
    }
    ctx->pc = 0x2DACF4u;
    // 0x2dacf4: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2DACF4u;
    {
        const bool branch_taken_0x2dacf4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dacf4) {
            ctx->pc = 0x2DAD04u;
            goto label_2dad04;
        }
    }
    ctx->pc = 0x2DACFCu;
    // 0x2dacfc: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x2DACFCu;
    {
        const bool branch_taken_0x2dacfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dacfc) {
            ctx->pc = 0x2DAD64u;
            goto label_2dad64;
        }
    }
    ctx->pc = 0x2DAD04u;
label_2dad04:
    // 0x2dad04: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2dad04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2dad08: 0x240500c8  addiu       $a1, $zero, 0xC8
    ctx->pc = 0x2dad08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    // 0x2dad0c: 0xc0c8fbc  jal         func_323EF0
    ctx->pc = 0x2DAD0Cu;
    SET_GPR_U32(ctx, 31, 0x2DAD14u);
    ctx->pc = 0x323EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323EF0u, 0x2DAD0Cu, 0x2DAD14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DAD14u;
label_2dad14:
    // 0x2dad14: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x2DAD14u;
    {
        const bool branch_taken_0x2dad14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dad14) {
            ctx->pc = 0x2DAD74u;
            goto label_2dad74;
        }
    }
    ctx->pc = 0x2DAD1Cu;
label_2dad1c:
    // 0x2dad1c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2dad1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2dad20: 0x240500dc  addiu       $a1, $zero, 0xDC
    ctx->pc = 0x2dad20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 220));
    // 0x2dad24: 0xc0c8fbc  jal         func_323EF0
    ctx->pc = 0x2DAD24u;
    SET_GPR_U32(ctx, 31, 0x2DAD2Cu);
    ctx->pc = 0x323EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323EF0u, 0x2DAD24u, 0x2DAD2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DAD2Cu;
label_2dad2c:
    // 0x2dad2c: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x2DAD2Cu;
    {
        const bool branch_taken_0x2dad2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dad2c) {
            ctx->pc = 0x2DAD74u;
            goto label_2dad74;
        }
    }
    ctx->pc = 0x2DAD34u;
label_2dad34:
    // 0x2dad34: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2dad34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2dad38: 0x240500e6  addiu       $a1, $zero, 0xE6
    ctx->pc = 0x2dad38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 230));
    // 0x2dad3c: 0xc0c8fbc  jal         func_323EF0
    ctx->pc = 0x2DAD3Cu;
    SET_GPR_U32(ctx, 31, 0x2DAD44u);
    ctx->pc = 0x323EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323EF0u, 0x2DAD3Cu, 0x2DAD44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DAD44u;
label_2dad44:
    // 0x2dad44: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2DAD44u;
    {
        const bool branch_taken_0x2dad44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dad44) {
            ctx->pc = 0x2DAD74u;
            goto label_2dad74;
        }
    }
    ctx->pc = 0x2DAD4Cu;
label_2dad4c:
    // 0x2dad4c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2dad4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2dad50: 0x240500f0  addiu       $a1, $zero, 0xF0
    ctx->pc = 0x2dad50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
    // 0x2dad54: 0xc0c8fbc  jal         func_323EF0
    ctx->pc = 0x2DAD54u;
    SET_GPR_U32(ctx, 31, 0x2DAD5Cu);
    ctx->pc = 0x323EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323EF0u, 0x2DAD54u, 0x2DAD5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DAD5Cu;
label_2dad5c:
    // 0x2dad5c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2DAD5Cu;
    {
        const bool branch_taken_0x2dad5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dad5c) {
            ctx->pc = 0x2DAD74u;
            goto label_2dad74;
        }
    }
    ctx->pc = 0x2DAD64u;
label_2dad64:
    // 0x2dad64: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2dad64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2dad68: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x2dad68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2dad6c: 0xc0c8fbc  jal         func_323EF0
    ctx->pc = 0x2DAD6Cu;
    SET_GPR_U32(ctx, 31, 0x2DAD74u);
    ctx->pc = 0x323EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323EF0u, 0x2DAD6Cu, 0x2DAD74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DAD74u;
label_2dad74:
    // 0x2dad74: 0x860300c0  lh          $v1, 0xC0($s0)
    ctx->pc = 0x2dad74u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x2dad78: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2DAD78u;
    {
        const bool branch_taken_0x2dad78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dad78) {
            ctx->pc = 0x2DAD94u;
            goto label_2dad94;
        }
    }
    ctx->pc = 0x2DAD80u;
    // 0x2dad80: 0x860300c0  lh          $v1, 0xC0($s0)
    ctx->pc = 0x2dad80u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x2dad84: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2dad84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2dad88: 0xa60300c0  sh          $v1, 0xC0($s0)
    ctx->pc = 0x2dad88u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 192), (uint16_t)GPR_U32(ctx, 3));
    // 0x2dad8c: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x2DAD8Cu;
    {
        const bool branch_taken_0x2dad8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dad8c) {
            ctx->pc = 0x2DAE2Cu;
            goto label_2dae2c;
        }
    }
    ctx->pc = 0x2DAD94u;
label_2dad94:
    // 0x2dad94: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2DAD94u;
    SET_GPR_U32(ctx, 31, 0x2DAD9Cu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2DAD94u, 0x2DAD9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DAD9Cu;
label_2dad9c:
    // 0x2dad9c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2dad9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2dada0: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x2dada0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x2dada4: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x2dada4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x2dada8: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x2dada8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2dadac: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2dadacu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2dadb0: 0xa60200c0  sh          $v0, 0xC0($s0)
    ctx->pc = 0x2dadb0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 192), (uint16_t)GPR_U32(ctx, 2));
    // 0x2dadb4: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2DADB4u;
    SET_GPR_U32(ctx, 31, 0x2DADBCu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2DADB4u, 0x2DADBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DADBCu;
label_2dadbc:
    // 0x2dadbc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2dadbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2dadc0: 0x30430001  andi        $v1, $v0, 0x1
    ctx->pc = 0x2dadc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2dadc4: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x2dadc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x2dadc8: 0x24428b20  addiu       $v0, $v0, -0x74E0
    ctx->pc = 0x2dadc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937376));
    // 0x2dadcc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2dadccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2dadd0: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x2dadd0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2dadd4: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x2dadd4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2dadd8: 0x322200ff  andi        $v0, $s1, 0xFF
    ctx->pc = 0x2dadd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x2daddc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2daddcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2dade0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2dade0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2dade4: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2dade4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2dade8: 0x21238  dsll        $v0, $v0, 8
    ctx->pc = 0x2dade8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 8);
    // 0x2dadec: 0x3444000a  ori         $a0, $v0, 0xA
    ctx->pc = 0x2dadecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)10);
    // 0x2dadf0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2dadf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2dadf4: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2dadf4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2dadf8: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2dadf8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2dadfc: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2dadfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2dae00: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2dae00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2dae04: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2dae04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2dae08: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2dae08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2dae0c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2dae0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2dae10: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x2dae10u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x2dae14: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2dae14u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2dae18: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x2dae18u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2dae1c: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x2dae1cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2dae20: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x2dae20u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2dae24: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x2DAE24u;
    SET_GPR_U32(ctx, 31, 0x2DAE2Cu);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x2DAE24u, 0x2DAE2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DAE2Cu;
label_2dae2c:
    // 0x2dae2c: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x2dae2cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2dae30: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2dae30u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2dae34: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2dae34u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2dae38: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x2dae38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2dae3c: 0x3e00008  jr          $ra
    ctx->pc = 0x2DAE3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DAE3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DAE44u;
}
