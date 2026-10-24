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

// Function: sending_req
// Address: 0x33ab50 - 0x33b0c4
void sending_req_0x33ab50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sending_req_0x33ab50");
#endif

    switch (ctx->pc) {
        case 0x33ac40u: goto label_33ac40;
        case 0x33ac68u: goto label_33ac68;
        case 0x33ac84u: goto label_33ac84;
        case 0x33acd0u: goto label_33acd0;
        case 0x33acecu: goto label_33acec;
        case 0x33ad44u: goto label_33ad44;
        case 0x33adc0u: goto label_33adc0;
        case 0x33adf4u: goto label_33adf4;
        case 0x33ae54u: goto label_33ae54;
        case 0x33ae98u: goto label_33ae98;
        case 0x33aeb8u: goto label_33aeb8;
        case 0x33aed4u: goto label_33aed4;
        case 0x33af38u: goto label_33af38;
        case 0x33af60u: goto label_33af60;
        case 0x33af94u: goto label_33af94;
        case 0x33afd4u: goto label_33afd4;
        case 0x33b00cu: goto label_33b00c;
        case 0x33b058u: goto label_33b058;
        case 0x33b074u: goto label_33b074;
        case 0x33b090u: goto label_33b090;
        case 0x33b0a8u: goto label_33b0a8;
        default: break;
    }

    ctx->pc = 0x33ab50u;

    // 0x33ab50: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x33ab50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x33ab54: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x33ab54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x33ab58: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x33ab58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x33ab5c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x33ab5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x33ab60: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x33ab60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
    // 0x33ab64: 0x8fb10038  lw          $s1, 0x38($sp)
    ctx->pc = 0x33ab64u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x33ab68: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x33ab68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x33ab6c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x33ab6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x33ab70: 0x28603  sra         $s0, $v0, 24
    ctx->pc = 0x33ab70u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 2), 24));
    // 0x33ab74: 0x2402007f  addiu       $v0, $zero, 0x7F
    ctx->pc = 0x33ab74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x33ab78: 0x16020004  bne         $s0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x33AB78u;
    {
        const bool branch_taken_0x33ab78 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x33ab78) {
            ctx->pc = 0x33AB8Cu;
            goto label_33ab8c;
        }
    }
    ctx->pc = 0x33AB80u;
    // 0x33ab80: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x33ab80u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x33ab84: 0x10000149  b           . + 4 + (0x149 << 2)
    ctx->pc = 0x33AB84u;
    {
        const bool branch_taken_0x33ab84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33ab84) {
            ctx->pc = 0x33B0ACu;
            goto label_33b0ac;
        }
    }
    ctx->pc = 0x33AB8Cu;
label_33ab8c:
    // 0x33ab8c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x33ab8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x33ab90: 0x16020004  bne         $s0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x33AB90u;
    {
        const bool branch_taken_0x33ab90 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x33ab90) {
            ctx->pc = 0x33ABA4u;
            goto label_33aba4;
        }
    }
    ctx->pc = 0x33AB98u;
    // 0x33ab98: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x33ab98u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x33ab9c: 0x10000143  b           . + 4 + (0x143 << 2)
    ctx->pc = 0x33AB9Cu;
    {
        const bool branch_taken_0x33ab9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33ab9c) {
            ctx->pc = 0x33B0ACu;
            goto label_33b0ac;
        }
    }
    ctx->pc = 0x33ABA4u;
label_33aba4:
    // 0x33aba4: 0x320300f0  andi        $v1, $s0, 0xF0
    ctx->pc = 0x33aba4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)240);
    // 0x33aba8: 0x24020050  addiu       $v0, $zero, 0x50
    ctx->pc = 0x33aba8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x33abac: 0x10620133  beq         $v1, $v0, . + 4 + (0x133 << 2)
    ctx->pc = 0x33ABACu;
    {
        const bool branch_taken_0x33abac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x33abac) {
            ctx->pc = 0x33B07Cu;
            goto label_33b07c;
        }
    }
    ctx->pc = 0x33ABB4u;
    // 0x33abb4: 0x24020060  addiu       $v0, $zero, 0x60
    ctx->pc = 0x33abb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x33abb8: 0x10620130  beq         $v1, $v0, . + 4 + (0x130 << 2)
    ctx->pc = 0x33ABB8u;
    {
        const bool branch_taken_0x33abb8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x33abb8) {
            ctx->pc = 0x33B07Cu;
            goto label_33b07c;
        }
    }
    ctx->pc = 0x33ABC0u;
    // 0x33abc0: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x33abc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x33abc4: 0x106200c5  beq         $v1, $v0, . + 4 + (0xC5 << 2)
    ctx->pc = 0x33ABC4u;
    {
        const bool branch_taken_0x33abc4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x33abc4) {
            ctx->pc = 0x33AEDCu;
            goto label_33aedc;
        }
    }
    ctx->pc = 0x33ABCCu;
    // 0x33abcc: 0x24020070  addiu       $v0, $zero, 0x70
    ctx->pc = 0x33abccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x33abd0: 0x10620048  beq         $v1, $v0, . + 4 + (0x48 << 2)
    ctx->pc = 0x33ABD0u;
    {
        const bool branch_taken_0x33abd0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x33abd0) {
            ctx->pc = 0x33ACF4u;
            goto label_33acf4;
        }
    }
    ctx->pc = 0x33ABD8u;
    // 0x33abd8: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x33abd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x33abdc: 0x10620045  beq         $v1, $v0, . + 4 + (0x45 << 2)
    ctx->pc = 0x33ABDCu;
    {
        const bool branch_taken_0x33abdc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x33abdc) {
            ctx->pc = 0x33ACF4u;
            goto label_33acf4;
        }
    }
    ctx->pc = 0x33ABE4u;
    // 0x33abe4: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x33abe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x33abe8: 0x10620028  beq         $v1, $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x33ABE8u;
    {
        const bool branch_taken_0x33abe8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x33abe8) {
            ctx->pc = 0x33AC8Cu;
            goto label_33ac8c;
        }
    }
    ctx->pc = 0x33ABF0u;
    // 0x33abf0: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x33abf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x33abf4: 0x10620014  beq         $v1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x33ABF4u;
    {
        const bool branch_taken_0x33abf4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x33abf4) {
            ctx->pc = 0x33AC48u;
            goto label_33ac48;
        }
    }
    ctx->pc = 0x33ABFCu;
    // 0x33abfc: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x33ABFCu;
    {
        const bool branch_taken_0x33abfc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x33abfc) {
            ctx->pc = 0x33AC0Cu;
            goto label_33ac0c;
        }
    }
    ctx->pc = 0x33AC04u;
    // 0x33ac04: 0x10000124  b           . + 4 + (0x124 << 2)
    ctx->pc = 0x33AC04u;
    {
        const bool branch_taken_0x33ac04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33ac04) {
            ctx->pc = 0x33B098u;
            goto label_33b098;
        }
    }
    ctx->pc = 0x33AC0Cu;
label_33ac0c:
    // 0x33ac0c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x33ac0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x33ac10: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x33ac10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x33ac14: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x33ac14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x33ac18: 0x80420004  lb          $v0, 0x4($v0)
    ctx->pc = 0x33ac18u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x33ac1c: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x33ac1cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x33ac20: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x33ac20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x33ac24: 0x80420005  lb          $v0, 0x5($v0)
    ctx->pc = 0x33ac24u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 5)));
    // 0x33ac28: 0x304600ff  andi        $a2, $v0, 0xFF
    ctx->pc = 0x33ac28u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x33ac2c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x33ac2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x33ac30: 0x84420006  lh          $v0, 0x6($v0)
    ctx->pc = 0x33ac30u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x33ac34: 0x3047ffff  andi        $a3, $v0, 0xFFFF
    ctx->pc = 0x33ac34u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x33ac38: 0xc0ce914  jal         func_33A450
    ctx->pc = 0x33AC38u;
    SET_GPR_U32(ctx, 31, 0x33AC40u);
    ctx->pc = 0x33A450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33A450u, 0x33AC38u, 0x33AC40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33AC40u;
label_33ac40:
    // 0x33ac40: 0x1000011a  b           . + 4 + (0x11A << 2)
    ctx->pc = 0x33AC40u;
    {
        const bool branch_taken_0x33ac40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33ac40) {
            ctx->pc = 0x33B0ACu;
            goto label_33b0ac;
        }
    }
    ctx->pc = 0x33AC48u;
label_33ac48:
    // 0x33ac48: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x33ac48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x33ac4c: 0x16020008  bne         $s0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x33AC4Cu;
    {
        const bool branch_taken_0x33ac4c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x33ac4c) {
            ctx->pc = 0x33AC70u;
            goto label_33ac70;
        }
    }
    ctx->pc = 0x33AC54u;
    // 0x33ac54: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x33ac54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x33ac58: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x33ac58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x33ac5c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x33ac5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x33ac60: 0xc0cea54  jal         func_33A950
    ctx->pc = 0x33AC60u;
    SET_GPR_U32(ctx, 31, 0x33AC68u);
    ctx->pc = 0x33A950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33A950u, 0x33AC60u, 0x33AC68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33AC68u;
label_33ac68:
    // 0x33ac68: 0x10000110  b           . + 4 + (0x110 << 2)
    ctx->pc = 0x33AC68u;
    {
        const bool branch_taken_0x33ac68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33ac68) {
            ctx->pc = 0x33B0ACu;
            goto label_33b0ac;
        }
    }
    ctx->pc = 0x33AC70u;
label_33ac70:
    // 0x33ac70: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x33ac70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x33ac74: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x33ac74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x33ac78: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x33ac78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33ac7c: 0xc0cea54  jal         func_33A950
    ctx->pc = 0x33AC7Cu;
    SET_GPR_U32(ctx, 31, 0x33AC84u);
    ctx->pc = 0x33A950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33A950u, 0x33AC7Cu, 0x33AC84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33AC84u;
label_33ac84:
    // 0x33ac84: 0x10000109  b           . + 4 + (0x109 << 2)
    ctx->pc = 0x33AC84u;
    {
        const bool branch_taken_0x33ac84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33ac84) {
            ctx->pc = 0x33B0ACu;
            goto label_33b0ac;
        }
    }
    ctx->pc = 0x33AC8Cu;
label_33ac8c:
    // 0x33ac8c: 0x24020022  addiu       $v0, $zero, 0x22
    ctx->pc = 0x33ac8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x33ac90: 0x1202000a  beq         $s0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x33AC90u;
    {
        const bool branch_taken_0x33ac90 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x33ac90) {
            ctx->pc = 0x33ACBCu;
            goto label_33acbc;
        }
    }
    ctx->pc = 0x33AC98u;
    // 0x33ac98: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x33ac98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x33ac9c: 0x12020007  beq         $s0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x33AC9Cu;
    {
        const bool branch_taken_0x33ac9c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x33ac9c) {
            ctx->pc = 0x33ACBCu;
            goto label_33acbc;
        }
    }
    ctx->pc = 0x33ACA4u;
    // 0x33aca4: 0x24020024  addiu       $v0, $zero, 0x24
    ctx->pc = 0x33aca4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x33aca8: 0x12020004  beq         $s0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x33ACA8u;
    {
        const bool branch_taken_0x33aca8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x33aca8) {
            ctx->pc = 0x33ACBCu;
            goto label_33acbc;
        }
    }
    ctx->pc = 0x33ACB0u;
    // 0x33acb0: 0x24020023  addiu       $v0, $zero, 0x23
    ctx->pc = 0x33acb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x33acb4: 0x16020008  bne         $s0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x33ACB4u;
    {
        const bool branch_taken_0x33acb4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x33acb4) {
            ctx->pc = 0x33ACD8u;
            goto label_33acd8;
        }
    }
    ctx->pc = 0x33ACBCu;
label_33acbc:
    // 0x33acbc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x33acbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x33acc0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x33acc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x33acc4: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x33acc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x33acc8: 0xc0cea54  jal         func_33A950
    ctx->pc = 0x33ACC8u;
    SET_GPR_U32(ctx, 31, 0x33ACD0u);
    ctx->pc = 0x33A950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33A950u, 0x33ACC8u, 0x33ACD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33ACD0u;
label_33acd0:
    // 0x33acd0: 0x100000f6  b           . + 4 + (0xF6 << 2)
    ctx->pc = 0x33ACD0u;
    {
        const bool branch_taken_0x33acd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33acd0) {
            ctx->pc = 0x33B0ACu;
            goto label_33b0ac;
        }
    }
    ctx->pc = 0x33ACD8u;
label_33acd8:
    // 0x33acd8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x33acd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x33acdc: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x33acdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x33ace0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x33ace0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x33ace4: 0xc0cea54  jal         func_33A950
    ctx->pc = 0x33ACE4u;
    SET_GPR_U32(ctx, 31, 0x33ACECu);
    ctx->pc = 0x33A950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33A950u, 0x33ACE4u, 0x33ACECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33ACECu;
label_33acec:
    // 0x33acec: 0x100000ef  b           . + 4 + (0xEF << 2)
    ctx->pc = 0x33ACECu;
    {
        const bool branch_taken_0x33acec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33acec) {
            ctx->pc = 0x33B0ACu;
            goto label_33b0ac;
        }
    }
    ctx->pc = 0x33ACF4u;
label_33acf4:
    // 0x33acf4: 0x24020031  addiu       $v0, $zero, 0x31
    ctx->pc = 0x33acf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
    // 0x33acf8: 0x1202000d  beq         $s0, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x33ACF8u;
    {
        const bool branch_taken_0x33acf8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x33acf8) {
            ctx->pc = 0x33AD30u;
            goto label_33ad30;
        }
    }
    ctx->pc = 0x33AD00u;
    // 0x33ad00: 0x24020038  addiu       $v0, $zero, 0x38
    ctx->pc = 0x33ad00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x33ad04: 0x1202000a  beq         $s0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x33AD04u;
    {
        const bool branch_taken_0x33ad04 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x33ad04) {
            ctx->pc = 0x33AD30u;
            goto label_33ad30;
        }
    }
    ctx->pc = 0x33AD0Cu;
    // 0x33ad0c: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x33ad0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x33ad10: 0x12020007  beq         $s0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x33AD10u;
    {
        const bool branch_taken_0x33ad10 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x33ad10) {
            ctx->pc = 0x33AD30u;
            goto label_33ad30;
        }
    }
    ctx->pc = 0x33AD18u;
    // 0x33ad18: 0x24020071  addiu       $v0, $zero, 0x71
    ctx->pc = 0x33ad18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 113));
    // 0x33ad1c: 0x12020004  beq         $s0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x33AD1Cu;
    {
        const bool branch_taken_0x33ad1c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x33ad1c) {
            ctx->pc = 0x33AD30u;
            goto label_33ad30;
        }
    }
    ctx->pc = 0x33AD24u;
    // 0x33ad24: 0x24020073  addiu       $v0, $zero, 0x73
    ctx->pc = 0x33ad24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 115));
    // 0x33ad28: 0x16020008  bne         $s0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x33AD28u;
    {
        const bool branch_taken_0x33ad28 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x33ad28) {
            ctx->pc = 0x33AD4Cu;
            goto label_33ad4c;
        }
    }
    ctx->pc = 0x33AD30u;
label_33ad30:
    // 0x33ad30: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x33ad30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x33ad34: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x33ad34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x33ad38: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x33ad38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x33ad3c: 0xc0cea54  jal         func_33A950
    ctx->pc = 0x33AD3Cu;
    SET_GPR_U32(ctx, 31, 0x33AD44u);
    ctx->pc = 0x33A950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33A950u, 0x33AD3Cu, 0x33AD44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33AD44u;
label_33ad44:
    // 0x33ad44: 0x100000d9  b           . + 4 + (0xD9 << 2)
    ctx->pc = 0x33AD44u;
    {
        const bool branch_taken_0x33ad44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33ad44) {
            ctx->pc = 0x33B0ACu;
            goto label_33b0ac;
        }
    }
    ctx->pc = 0x33AD4Cu;
label_33ad4c:
    // 0x33ad4c: 0x24020037  addiu       $v0, $zero, 0x37
    ctx->pc = 0x33ad4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    // 0x33ad50: 0x12020016  beq         $s0, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x33AD50u;
    {
        const bool branch_taken_0x33ad50 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x33ad50) {
            ctx->pc = 0x33ADACu;
            goto label_33adac;
        }
    }
    ctx->pc = 0x33AD58u;
    // 0x33ad58: 0x24020039  addiu       $v0, $zero, 0x39
    ctx->pc = 0x33ad58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
    // 0x33ad5c: 0x12020013  beq         $s0, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x33AD5Cu;
    {
        const bool branch_taken_0x33ad5c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x33ad5c) {
            ctx->pc = 0x33ADACu;
            goto label_33adac;
        }
    }
    ctx->pc = 0x33AD64u;
    // 0x33ad64: 0x2402003b  addiu       $v0, $zero, 0x3B
    ctx->pc = 0x33ad64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x33ad68: 0x12020010  beq         $s0, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x33AD68u;
    {
        const bool branch_taken_0x33ad68 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x33ad68) {
            ctx->pc = 0x33ADACu;
            goto label_33adac;
        }
    }
    ctx->pc = 0x33AD70u;
    // 0x33ad70: 0x2402003a  addiu       $v0, $zero, 0x3A
    ctx->pc = 0x33ad70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
    // 0x33ad74: 0x1202000d  beq         $s0, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x33AD74u;
    {
        const bool branch_taken_0x33ad74 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x33ad74) {
            ctx->pc = 0x33ADACu;
            goto label_33adac;
        }
    }
    ctx->pc = 0x33AD7Cu;
    // 0x33ad7c: 0x2402003d  addiu       $v0, $zero, 0x3D
    ctx->pc = 0x33ad7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
    // 0x33ad80: 0x1202000a  beq         $s0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x33AD80u;
    {
        const bool branch_taken_0x33ad80 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x33ad80) {
            ctx->pc = 0x33ADACu;
            goto label_33adac;
        }
    }
    ctx->pc = 0x33AD88u;
    // 0x33ad88: 0x24020072  addiu       $v0, $zero, 0x72
    ctx->pc = 0x33ad88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 114));
    // 0x33ad8c: 0x12020007  beq         $s0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x33AD8Cu;
    {
        const bool branch_taken_0x33ad8c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x33ad8c) {
            ctx->pc = 0x33ADACu;
            goto label_33adac;
        }
    }
    ctx->pc = 0x33AD94u;
    // 0x33ad94: 0x24020078  addiu       $v0, $zero, 0x78
    ctx->pc = 0x33ad94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x33ad98: 0x12020004  beq         $s0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x33AD98u;
    {
        const bool branch_taken_0x33ad98 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x33ad98) {
            ctx->pc = 0x33ADACu;
            goto label_33adac;
        }
    }
    ctx->pc = 0x33ADA0u;
    // 0x33ada0: 0x24020075  addiu       $v0, $zero, 0x75
    ctx->pc = 0x33ada0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 117));
    // 0x33ada4: 0x16020008  bne         $s0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x33ADA4u;
    {
        const bool branch_taken_0x33ada4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x33ada4) {
            ctx->pc = 0x33ADC8u;
            goto label_33adc8;
        }
    }
    ctx->pc = 0x33ADACu;
label_33adac:
    // 0x33adac: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x33adacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x33adb0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x33adb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x33adb4: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x33adb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x33adb8: 0xc0cea54  jal         func_33A950
    ctx->pc = 0x33ADB8u;
    SET_GPR_U32(ctx, 31, 0x33ADC0u);
    ctx->pc = 0x33A950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33A950u, 0x33ADB8u, 0x33ADC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33ADC0u;
label_33adc0:
    // 0x33adc0: 0x100000ba  b           . + 4 + (0xBA << 2)
    ctx->pc = 0x33ADC0u;
    {
        const bool branch_taken_0x33adc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33adc0) {
            ctx->pc = 0x33B0ACu;
            goto label_33b0ac;
        }
    }
    ctx->pc = 0x33ADC8u;
label_33adc8:
    // 0x33adc8: 0x24020036  addiu       $v0, $zero, 0x36
    ctx->pc = 0x33adc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
    // 0x33adcc: 0x12020004  beq         $s0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x33ADCCu;
    {
        const bool branch_taken_0x33adcc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x33adcc) {
            ctx->pc = 0x33ADE0u;
            goto label_33ade0;
        }
    }
    ctx->pc = 0x33ADD4u;
    // 0x33add4: 0x24020074  addiu       $v0, $zero, 0x74
    ctx->pc = 0x33add4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 116));
    // 0x33add8: 0x16020008  bne         $s0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x33ADD8u;
    {
        const bool branch_taken_0x33add8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x33add8) {
            ctx->pc = 0x33ADFCu;
            goto label_33adfc;
        }
    }
    ctx->pc = 0x33ADE0u;
label_33ade0:
    // 0x33ade0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x33ade0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x33ade4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x33ade4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x33ade8: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x33ade8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x33adec: 0xc0cea54  jal         func_33A950
    ctx->pc = 0x33ADECu;
    SET_GPR_U32(ctx, 31, 0x33ADF4u);
    ctx->pc = 0x33A950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33A950u, 0x33ADECu, 0x33ADF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33ADF4u;
label_33adf4:
    // 0x33adf4: 0x100000ad  b           . + 4 + (0xAD << 2)
    ctx->pc = 0x33ADF4u;
    {
        const bool branch_taken_0x33adf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33adf4) {
            ctx->pc = 0x33B0ACu;
            goto label_33b0ac;
        }
    }
    ctx->pc = 0x33ADFCu;
label_33adfc:
    // 0x33adfc: 0x24020077  addiu       $v0, $zero, 0x77
    ctx->pc = 0x33adfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 119));
    // 0x33ae00: 0x1202000a  beq         $s0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x33AE00u;
    {
        const bool branch_taken_0x33ae00 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x33ae00) {
            ctx->pc = 0x33AE2Cu;
            goto label_33ae2c;
        }
    }
    ctx->pc = 0x33AE08u;
    // 0x33ae08: 0x2402003c  addiu       $v0, $zero, 0x3C
    ctx->pc = 0x33ae08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x33ae0c: 0x12020007  beq         $s0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x33AE0Cu;
    {
        const bool branch_taken_0x33ae0c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x33ae0c) {
            ctx->pc = 0x33AE2Cu;
            goto label_33ae2c;
        }
    }
    ctx->pc = 0x33AE14u;
    // 0x33ae14: 0x24020079  addiu       $v0, $zero, 0x79
    ctx->pc = 0x33ae14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 121));
    // 0x33ae18: 0x12020004  beq         $s0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x33AE18u;
    {
        const bool branch_taken_0x33ae18 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x33ae18) {
            ctx->pc = 0x33AE2Cu;
            goto label_33ae2c;
        }
    }
    ctx->pc = 0x33AE20u;
    // 0x33ae20: 0x2402003e  addiu       $v0, $zero, 0x3E
    ctx->pc = 0x33ae20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
    // 0x33ae24: 0x1602000d  bne         $s0, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x33AE24u;
    {
        const bool branch_taken_0x33ae24 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x33ae24) {
            ctx->pc = 0x33AE5Cu;
            goto label_33ae5c;
        }
    }
    ctx->pc = 0x33AE2Cu;
label_33ae2c:
    // 0x33ae2c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x33ae2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x33ae30: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x33ae30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x33ae34: 0x82220004  lb          $v0, 0x4($s1)
    ctx->pc = 0x33ae34u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x33ae38: 0x304600ff  andi        $a2, $v0, 0xFF
    ctx->pc = 0x33ae38u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x33ae3c: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x33ae3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x33ae40: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x33ae40u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x33ae44: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x33ae44u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x33ae48: 0x70004e28  paddub      $t1, $zero, $zero
    ctx->pc = 0x33ae48u;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x33ae4c: 0xc0ce9cc  jal         func_33A730
    ctx->pc = 0x33AE4Cu;
    SET_GPR_U32(ctx, 31, 0x33AE54u);
    ctx->pc = 0x33A730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33A730u, 0x33AE4Cu, 0x33AE54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33AE54u;
label_33ae54:
    // 0x33ae54: 0x10000095  b           . + 4 + (0x95 << 2)
    ctx->pc = 0x33AE54u;
    {
        const bool branch_taken_0x33ae54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33ae54) {
            ctx->pc = 0x33B0ACu;
            goto label_33b0ac;
        }
    }
    ctx->pc = 0x33AE5Cu;
label_33ae5c:
    // 0x33ae5c: 0x2402003f  addiu       $v0, $zero, 0x3F
    ctx->pc = 0x33ae5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x33ae60: 0x1602000f  bne         $s0, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x33AE60u;
    {
        const bool branch_taken_0x33ae60 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x33ae60) {
            ctx->pc = 0x33AEA0u;
            goto label_33aea0;
        }
    }
    ctx->pc = 0x33AE68u;
    // 0x33ae68: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x33ae68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x33ae6c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x33ae6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x33ae70: 0x82220004  lb          $v0, 0x4($s1)
    ctx->pc = 0x33ae70u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x33ae74: 0x304600ff  andi        $a2, $v0, 0xFF
    ctx->pc = 0x33ae74u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x33ae78: 0x82220005  lb          $v0, 0x5($s1)
    ctx->pc = 0x33ae78u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 5)));
    // 0x33ae7c: 0x304700ff  andi        $a3, $v0, 0xFF
    ctx->pc = 0x33ae7cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x33ae80: 0x82220006  lb          $v0, 0x6($s1)
    ctx->pc = 0x33ae80u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 6)));
    // 0x33ae84: 0x304800ff  andi        $t0, $v0, 0xFF
    ctx->pc = 0x33ae84u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x33ae88: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x33ae88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x33ae8c: 0x70004e28  paddub      $t1, $zero, $zero
    ctx->pc = 0x33ae8cu;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x33ae90: 0xc0ce9cc  jal         func_33A730
    ctx->pc = 0x33AE90u;
    SET_GPR_U32(ctx, 31, 0x33AE98u);
    ctx->pc = 0x33A730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33A730u, 0x33AE90u, 0x33AE98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33AE98u;
label_33ae98:
    // 0x33ae98: 0x10000084  b           . + 4 + (0x84 << 2)
    ctx->pc = 0x33AE98u;
    {
        const bool branch_taken_0x33ae98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33ae98) {
            ctx->pc = 0x33B0ACu;
            goto label_33b0ac;
        }
    }
    ctx->pc = 0x33AEA0u;
label_33aea0:
    // 0x33aea0: 0x24020035  addiu       $v0, $zero, 0x35
    ctx->pc = 0x33aea0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    // 0x33aea4: 0x16020006  bne         $s0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x33AEA4u;
    {
        const bool branch_taken_0x33aea4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x33aea4) {
            ctx->pc = 0x33AEC0u;
            goto label_33aec0;
        }
    }
    ctx->pc = 0x33AEACu;
    // 0x33aeac: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x33aeacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x33aeb0: 0xc0ce984  jal         func_33A610
    ctx->pc = 0x33AEB0u;
    SET_GPR_U32(ctx, 31, 0x33AEB8u);
    ctx->pc = 0x33A610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33A610u, 0x33AEB0u, 0x33AEB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33AEB8u;
label_33aeb8:
    // 0x33aeb8: 0x1000007c  b           . + 4 + (0x7C << 2)
    ctx->pc = 0x33AEB8u;
    {
        const bool branch_taken_0x33aeb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33aeb8) {
            ctx->pc = 0x33B0ACu;
            goto label_33b0ac;
        }
    }
    ctx->pc = 0x33AEC0u;
label_33aec0:
    // 0x33aec0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x33aec0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x33aec4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x33aec4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x33aec8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x33aec8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33aecc: 0xc0cea54  jal         func_33A950
    ctx->pc = 0x33AECCu;
    SET_GPR_U32(ctx, 31, 0x33AED4u);
    ctx->pc = 0x33A950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33A950u, 0x33AECCu, 0x33AED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33AED4u;
label_33aed4:
    // 0x33aed4: 0x10000075  b           . + 4 + (0x75 << 2)
    ctx->pc = 0x33AED4u;
    {
        const bool branch_taken_0x33aed4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33aed4) {
            ctx->pc = 0x33B0ACu;
            goto label_33b0ac;
        }
    }
    ctx->pc = 0x33AEDCu;
label_33aedc:
    // 0x33aedc: 0x24020047  addiu       $v0, $zero, 0x47
    ctx->pc = 0x33aedcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x33aee0: 0x12020010  beq         $s0, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x33AEE0u;
    {
        const bool branch_taken_0x33aee0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x33aee0) {
            ctx->pc = 0x33AF24u;
            goto label_33af24;
        }
    }
    ctx->pc = 0x33AEE8u;
    // 0x33aee8: 0x24020048  addiu       $v0, $zero, 0x48
    ctx->pc = 0x33aee8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x33aeec: 0x1202000d  beq         $s0, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x33AEECu;
    {
        const bool branch_taken_0x33aeec = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x33aeec) {
            ctx->pc = 0x33AF24u;
            goto label_33af24;
        }
    }
    ctx->pc = 0x33AEF4u;
    // 0x33aef4: 0x2402004a  addiu       $v0, $zero, 0x4A
    ctx->pc = 0x33aef4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 74));
    // 0x33aef8: 0x1202000a  beq         $s0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x33AEF8u;
    {
        const bool branch_taken_0x33aef8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x33aef8) {
            ctx->pc = 0x33AF24u;
            goto label_33af24;
        }
    }
    ctx->pc = 0x33AF00u;
    // 0x33af00: 0x24020049  addiu       $v0, $zero, 0x49
    ctx->pc = 0x33af00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 73));
    // 0x33af04: 0x12020007  beq         $s0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x33AF04u;
    {
        const bool branch_taken_0x33af04 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x33af04) {
            ctx->pc = 0x33AF24u;
            goto label_33af24;
        }
    }
    ctx->pc = 0x33AF0Cu;
    // 0x33af0c: 0x24020041  addiu       $v0, $zero, 0x41
    ctx->pc = 0x33af0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x33af10: 0x12020004  beq         $s0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x33AF10u;
    {
        const bool branch_taken_0x33af10 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x33af10) {
            ctx->pc = 0x33AF24u;
            goto label_33af24;
        }
    }
    ctx->pc = 0x33AF18u;
    // 0x33af18: 0x24020042  addiu       $v0, $zero, 0x42
    ctx->pc = 0x33af18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x33af1c: 0x16020008  bne         $s0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x33AF1Cu;
    {
        const bool branch_taken_0x33af1c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x33af1c) {
            ctx->pc = 0x33AF40u;
            goto label_33af40;
        }
    }
    ctx->pc = 0x33AF24u;
label_33af24:
    // 0x33af24: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x33af24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x33af28: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x33af28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x33af2c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x33af2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x33af30: 0xc0cea54  jal         func_33A950
    ctx->pc = 0x33AF30u;
    SET_GPR_U32(ctx, 31, 0x33AF38u);
    ctx->pc = 0x33A950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33A950u, 0x33AF30u, 0x33AF38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33AF38u;
label_33af38:
    // 0x33af38: 0x1000005c  b           . + 4 + (0x5C << 2)
    ctx->pc = 0x33AF38u;
    {
        const bool branch_taken_0x33af38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33af38) {
            ctx->pc = 0x33B0ACu;
            goto label_33b0ac;
        }
    }
    ctx->pc = 0x33AF40u;
label_33af40:
    // 0x33af40: 0x2402004b  addiu       $v0, $zero, 0x4B
    ctx->pc = 0x33af40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 75));
    // 0x33af44: 0x16020008  bne         $s0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x33AF44u;
    {
        const bool branch_taken_0x33af44 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x33af44) {
            ctx->pc = 0x33AF68u;
            goto label_33af68;
        }
    }
    ctx->pc = 0x33AF4Cu;
    // 0x33af4c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x33af4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x33af50: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x33af50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x33af54: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x33af54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x33af58: 0xc0cea54  jal         func_33A950
    ctx->pc = 0x33AF58u;
    SET_GPR_U32(ctx, 31, 0x33AF60u);
    ctx->pc = 0x33A950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33A950u, 0x33AF58u, 0x33AF60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33AF60u;
label_33af60:
    // 0x33af60: 0x10000052  b           . + 4 + (0x52 << 2)
    ctx->pc = 0x33AF60u;
    {
        const bool branch_taken_0x33af60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33af60) {
            ctx->pc = 0x33B0ACu;
            goto label_33b0ac;
        }
    }
    ctx->pc = 0x33AF68u;
label_33af68:
    // 0x33af68: 0x24020045  addiu       $v0, $zero, 0x45
    ctx->pc = 0x33af68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
    // 0x33af6c: 0x12020004  beq         $s0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x33AF6Cu;
    {
        const bool branch_taken_0x33af6c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x33af6c) {
            ctx->pc = 0x33AF80u;
            goto label_33af80;
        }
    }
    ctx->pc = 0x33AF74u;
    // 0x33af74: 0x2402004c  addiu       $v0, $zero, 0x4C
    ctx->pc = 0x33af74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x33af78: 0x16020008  bne         $s0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x33AF78u;
    {
        const bool branch_taken_0x33af78 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x33af78) {
            ctx->pc = 0x33AF9Cu;
            goto label_33af9c;
        }
    }
    ctx->pc = 0x33AF80u;
label_33af80:
    // 0x33af80: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x33af80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x33af84: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x33af84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x33af88: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x33af88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x33af8c: 0xc0cea54  jal         func_33A950
    ctx->pc = 0x33AF8Cu;
    SET_GPR_U32(ctx, 31, 0x33AF94u);
    ctx->pc = 0x33A950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33A950u, 0x33AF8Cu, 0x33AF94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33AF94u;
label_33af94:
    // 0x33af94: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x33AF94u;
    {
        const bool branch_taken_0x33af94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33af94) {
            ctx->pc = 0x33B0ACu;
            goto label_33b0ac;
        }
    }
    ctx->pc = 0x33AF9Cu;
label_33af9c:
    // 0x33af9c: 0x24020044  addiu       $v0, $zero, 0x44
    ctx->pc = 0x33af9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x33afa0: 0x1602000e  bne         $s0, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x33AFA0u;
    {
        const bool branch_taken_0x33afa0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x33afa0) {
            ctx->pc = 0x33AFDCu;
            goto label_33afdc;
        }
    }
    ctx->pc = 0x33AFA8u;
    // 0x33afa8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x33afa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x33afac: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x33afacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x33afb0: 0x82220004  lb          $v0, 0x4($s1)
    ctx->pc = 0x33afb0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x33afb4: 0x304600ff  andi        $a2, $v0, 0xFF
    ctx->pc = 0x33afb4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x33afb8: 0x82220005  lb          $v0, 0x5($s1)
    ctx->pc = 0x33afb8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 5)));
    // 0x33afbc: 0x304700ff  andi        $a3, $v0, 0xFF
    ctx->pc = 0x33afbcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x33afc0: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x33afc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x33afc4: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x33afc4u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x33afc8: 0x70004e28  paddub      $t1, $zero, $zero
    ctx->pc = 0x33afc8u;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x33afcc: 0xc0ce9cc  jal         func_33A730
    ctx->pc = 0x33AFCCu;
    SET_GPR_U32(ctx, 31, 0x33AFD4u);
    ctx->pc = 0x33A730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33A730u, 0x33AFCCu, 0x33AFD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33AFD4u;
label_33afd4:
    // 0x33afd4: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x33AFD4u;
    {
        const bool branch_taken_0x33afd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33afd4) {
            ctx->pc = 0x33B0ACu;
            goto label_33b0ac;
        }
    }
    ctx->pc = 0x33AFDCu;
label_33afdc:
    // 0x33afdc: 0x2402004d  addiu       $v0, $zero, 0x4D
    ctx->pc = 0x33afdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x33afe0: 0x12020004  beq         $s0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x33AFE0u;
    {
        const bool branch_taken_0x33afe0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x33afe0) {
            ctx->pc = 0x33AFF4u;
            goto label_33aff4;
        }
    }
    ctx->pc = 0x33AFE8u;
    // 0x33afe8: 0x2402004e  addiu       $v0, $zero, 0x4E
    ctx->pc = 0x33afe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x33afec: 0x16020009  bne         $s0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x33AFECu;
    {
        const bool branch_taken_0x33afec = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x33afec) {
            ctx->pc = 0x33B014u;
            goto label_33b014;
        }
    }
    ctx->pc = 0x33AFF4u;
label_33aff4:
    // 0x33aff4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x33aff4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x33aff8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x33aff8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x33affc: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x33affcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x33b000: 0x24060015  addiu       $a2, $zero, 0x15
    ctx->pc = 0x33b000u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x33b004: 0xc0cea94  jal         func_33AA50
    ctx->pc = 0x33B004u;
    SET_GPR_U32(ctx, 31, 0x33B00Cu);
    ctx->pc = 0x33AA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33AA50u, 0x33B004u, 0x33B00Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33B00Cu;
label_33b00c:
    // 0x33b00c: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x33B00Cu;
    {
        const bool branch_taken_0x33b00c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33b00c) {
            ctx->pc = 0x33B0ACu;
            goto label_33b0ac;
        }
    }
    ctx->pc = 0x33B014u;
label_33b014:
    // 0x33b014: 0x2402004f  addiu       $v0, $zero, 0x4F
    ctx->pc = 0x33b014u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
    // 0x33b018: 0x16020011  bne         $s0, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x33B018u;
    {
        const bool branch_taken_0x33b018 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x33b018) {
            ctx->pc = 0x33B060u;
            goto label_33b060;
        }
    }
    ctx->pc = 0x33B020u;
    // 0x33b020: 0x26220004  addiu       $v0, $s1, 0x4
    ctx->pc = 0x33b020u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x33b024: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x33b024u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x33b028: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x33b028u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x33b02c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x33b02cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x33b030: 0x21203  sra         $v0, $v0, 8
    ctx->pc = 0x33b030u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
    // 0x33b034: 0x304600ff  andi        $a2, $v0, 0xFF
    ctx->pc = 0x33b034u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x33b038: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x33b038u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x33b03c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x33b03cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x33b040: 0x304700ff  andi        $a3, $v0, 0xFF
    ctx->pc = 0x33b040u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x33b044: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x33b044u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x33b048: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x33b048u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x33b04c: 0x70004e28  paddub      $t1, $zero, $zero
    ctx->pc = 0x33b04cu;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x33b050: 0xc0ce9cc  jal         func_33A730
    ctx->pc = 0x33B050u;
    SET_GPR_U32(ctx, 31, 0x33B058u);
    ctx->pc = 0x33A730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33A730u, 0x33B050u, 0x33B058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33B058u;
label_33b058:
    // 0x33b058: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x33B058u;
    {
        const bool branch_taken_0x33b058 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33b058) {
            ctx->pc = 0x33B0ACu;
            goto label_33b0ac;
        }
    }
    ctx->pc = 0x33B060u;
label_33b060:
    // 0x33b060: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x33b060u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x33b064: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x33b064u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x33b068: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x33b068u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33b06c: 0xc0cea54  jal         func_33A950
    ctx->pc = 0x33B06Cu;
    SET_GPR_U32(ctx, 31, 0x33B074u);
    ctx->pc = 0x33A950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33A950u, 0x33B06Cu, 0x33B074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33B074u;
label_33b074:
    // 0x33b074: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x33B074u;
    {
        const bool branch_taken_0x33b074 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33b074) {
            ctx->pc = 0x33B0ACu;
            goto label_33b0ac;
        }
    }
    ctx->pc = 0x33B07Cu;
label_33b07c:
    // 0x33b07c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x33b07cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x33b080: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x33b080u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x33b084: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x33b084u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x33b088: 0xc0cea54  jal         func_33A950
    ctx->pc = 0x33B088u;
    SET_GPR_U32(ctx, 31, 0x33B090u);
    ctx->pc = 0x33A950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33A950u, 0x33B088u, 0x33B090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33B090u;
label_33b090:
    // 0x33b090: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x33B090u;
    {
        const bool branch_taken_0x33b090 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33b090) {
            ctx->pc = 0x33B0ACu;
            goto label_33b0ac;
        }
    }
    ctx->pc = 0x33B098u;
label_33b098:
    // 0x33b098: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x33b098u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x33b09c: 0x244428f0  addiu       $a0, $v0, 0x28F0
    ctx->pc = 0x33b09cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 10480));
    // 0x33b0a0: 0xc046760  jal         func_119D80
    ctx->pc = 0x33B0A0u;
    SET_GPR_U32(ctx, 31, 0x33B0A8u);
    ctx->pc = 0x119D80u;
    {
        ctx->pc = 0x33B0A8u;
        ps2_stubs::printf(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x33B0A8u) { return; }
    ctx->pc = 0x33B0A8u;
label_33b0a8:
    // 0x33b0a8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x33b0a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_33b0ac:
    // 0x33b0ac: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x33b0acu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x33b0b0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x33b0b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x33b0b4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x33b0b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33b0b8: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x33b0b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x33b0bc: 0x3e00008  jr          $ra
    ctx->pc = 0x33B0BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33B0BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33B0C4u;
}
