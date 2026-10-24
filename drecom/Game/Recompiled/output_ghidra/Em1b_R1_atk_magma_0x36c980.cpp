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

// Function: Em1b_R1_atk_magma
// Address: 0x36c980 - 0x36cdd8
void Em1b_R1_atk_magma_0x36c980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em1b_R1_atk_magma_0x36c980");
#endif

    switch (ctx->pc) {
        case 0x36ca48u: goto label_36ca48;
        case 0x36ca70u: goto label_36ca70;
        case 0x36cab8u: goto label_36cab8;
        case 0x36cc50u: goto label_36cc50;
        case 0x36cd58u: goto label_36cd58;
        case 0x36cd64u: goto label_36cd64;
        case 0x36cd74u: goto label_36cd74;
        case 0x36cd80u: goto label_36cd80;
        default: break;
    }

    ctx->pc = 0x36c980u;

    // 0x36c980: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x36c980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x36c984: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x36c984u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x36c988: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x36c988u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x36c98c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x36c98cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x36c990: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x36c990u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
    // 0x36c994: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x36c994u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x36c998: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x36c998u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x36c99c: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x36c99cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x36c9a0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x36c9a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36c9a4: 0x10830036  beq         $a0, $v1, . + 4 + (0x36 << 2)
    ctx->pc = 0x36C9A4u;
    {
        const bool branch_taken_0x36c9a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x36c9a4) {
            ctx->pc = 0x36CA80u;
            goto label_36ca80;
        }
    }
    ctx->pc = 0x36C9ACu;
    // 0x36c9ac: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x36C9ACu;
    {
        const bool branch_taken_0x36c9ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x36c9ac) {
            ctx->pc = 0x36C9BCu;
            goto label_36c9bc;
        }
    }
    ctx->pc = 0x36C9B4u;
    // 0x36c9b4: 0x10000102  b           . + 4 + (0x102 << 2)
    ctx->pc = 0x36C9B4u;
    {
        const bool branch_taken_0x36c9b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x36c9b4) {
            ctx->pc = 0x36CDC0u;
            goto label_36cdc0;
        }
    }
    ctx->pc = 0x36C9BCu;
label_36c9bc:
    // 0x36c9bc: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x36c9bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x36c9c0: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x36c9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x36c9c4: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x36c9c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x36c9c8: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x36c9c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x36c9cc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x36c9ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x36c9d0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x36c9d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x36c9d4: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x36c9d4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x36c9d8: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x36c9d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x36c9dc: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x36c9dcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x36c9e0: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x36c9e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x36c9e4: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x36c9e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x36c9e8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x36c9e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x36c9ec: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x36c9ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x36c9f0: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x36c9f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x36c9f4: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x36c9f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x36c9f8: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x36c9f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x36c9fc: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x36c9fcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x36ca00: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x36ca00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x36ca04: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x36ca04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x36ca08: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x36ca08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x36ca0c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x36ca0cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x36ca10: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x36ca10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x36ca14: 0xa443127a  sh          $v1, 0x127A($v0)
    ctx->pc = 0x36ca14u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 3));
    // 0x36ca18: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x36ca18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x36ca1c: 0x8442127a  lh          $v0, 0x127A($v0)
    ctx->pc = 0x36ca1cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4730)));
    // 0x36ca20: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x36CA20u;
    {
        const bool branch_taken_0x36ca20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x36ca20) {
            ctx->pc = 0x36CA50u;
            goto label_36ca50;
        }
    }
    ctx->pc = 0x36CA28u;
    // 0x36ca28: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x36ca28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x36ca2c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x36ca2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x36ca30: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x36ca30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x36ca34: 0x24065a0b  addiu       $a2, $zero, 0x5A0B
    ctx->pc = 0x36ca34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 23051));
    // 0x36ca38: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x36ca38u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36ca3c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x36ca3cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x36ca40: 0xc0965d0  jal         func_259740
    ctx->pc = 0x36CA40u;
    SET_GPR_U32(ctx, 31, 0x36CA48u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x36CA40u, 0x36CA48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36CA48u;
label_36ca48:
    // 0x36ca48: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x36CA48u;
    {
        const bool branch_taken_0x36ca48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x36ca48) {
            ctx->pc = 0x36CA70u;
            goto label_36ca70;
        }
    }
    ctx->pc = 0x36CA50u;
label_36ca50:
    // 0x36ca50: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x36ca50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x36ca54: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x36ca54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x36ca58: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x36ca58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x36ca5c: 0x24065a0a  addiu       $a2, $zero, 0x5A0A
    ctx->pc = 0x36ca5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 23050));
    // 0x36ca60: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x36ca60u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36ca64: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x36ca64u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x36ca68: 0xc0965d0  jal         func_259740
    ctx->pc = 0x36CA68u;
    SET_GPR_U32(ctx, 31, 0x36CA70u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x36CA68u, 0x36CA70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36CA70u;
label_36ca70:
    // 0x36ca70: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x36ca70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x36ca74: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x36ca74u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x36ca78: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x36ca78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x36ca7c: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x36ca7cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_36ca80:
    // 0x36ca80: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x36ca80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x36ca84: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x36ca84u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x36ca88: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x36ca88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x36ca8c: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x36ca8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x36ca90: 0x104000ad  beqz        $v0, . + 4 + (0xAD << 2)
    ctx->pc = 0x36CA90u;
    {
        const bool branch_taken_0x36ca90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x36ca90) {
            ctx->pc = 0x36CD48u;
            goto label_36cd48;
        }
    }
    ctx->pc = 0x36CA98u;
    // 0x36ca98: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x36ca98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x36ca9c: 0x8442127a  lh          $v0, 0x127A($v0)
    ctx->pc = 0x36ca9cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4730)));
    // 0x36caa0: 0x10400054  beqz        $v0, . + 4 + (0x54 << 2)
    ctx->pc = 0x36CAA0u;
    {
        const bool branch_taken_0x36caa0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x36caa0) {
            ctx->pc = 0x36CBF4u;
            goto label_36cbf4;
        }
    }
    ctx->pc = 0x36CAA8u;
    // 0x36caa8: 0x24110003  addiu       $s1, $zero, 0x3
    ctx->pc = 0x36caa8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x36caac: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x36caacu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x36cab0: 0x1000004b  b           . + 4 + (0x4B << 2)
    ctx->pc = 0x36CAB0u;
    {
        const bool branch_taken_0x36cab0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x36cab0) {
            ctx->pc = 0x36CBE0u;
            goto label_36cbe0;
        }
    }
    ctx->pc = 0x36CAB8u;
label_36cab8:
    // 0x36cab8: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x36cab8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x36cabc: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x36CABCu;
    {
        const bool branch_taken_0x36cabc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x36cabc) {
            ctx->pc = 0x36CAF4u;
            goto label_36caf4;
        }
    }
    ctx->pc = 0x36CAC4u;
    // 0x36cac4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x36cac4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x36cac8: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x36cac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x36cacc: 0x24420530  addiu       $v0, $v0, 0x530
    ctx->pc = 0x36caccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1328));
    // 0x36cad0: 0x78440000  lq          $a0, 0x0($v0)
    ctx->pc = 0x36cad0u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x36cad4: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x36cad4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x36cad8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x36cad8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x36cadc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x36cadcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x36cae0: 0x8c4201ac  lw          $v0, 0x1AC($v0)
    ctx->pc = 0x36cae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 428)));
    // 0x36cae4: 0x24420120  addiu       $v0, $v0, 0x120
    ctx->pc = 0x36cae4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x36cae8: 0x7c440000  sq          $a0, 0x0($v0)
    ctx->pc = 0x36cae8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 4));
    // 0x36caec: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x36CAECu;
    {
        const bool branch_taken_0x36caec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x36caec) {
            ctx->pc = 0x36CB20u;
            goto label_36cb20;
        }
    }
    ctx->pc = 0x36CAF4u;
label_36caf4:
    // 0x36caf4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x36caf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x36caf8: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x36caf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x36cafc: 0x244204b0  addiu       $v0, $v0, 0x4B0
    ctx->pc = 0x36cafcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1200));
    // 0x36cb00: 0x78440000  lq          $a0, 0x0($v0)
    ctx->pc = 0x36cb00u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x36cb04: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x36cb04u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x36cb08: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x36cb08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x36cb0c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x36cb0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x36cb10: 0x8c4201ac  lw          $v0, 0x1AC($v0)
    ctx->pc = 0x36cb10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 428)));
    // 0x36cb14: 0x24420120  addiu       $v0, $v0, 0x120
    ctx->pc = 0x36cb14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x36cb18: 0x7c440000  sq          $a0, 0x0($v0)
    ctx->pc = 0x36cb18u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 4));
    // 0x36cb1c: 0x0  nop
    ctx->pc = 0x36cb1cu;
    // NOP
label_36cb20:
    // 0x36cb20: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x36cb20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36cb24: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x36cb24u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x36cb28: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x36cb28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x36cb2c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x36cb2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x36cb30: 0x8c4201ac  lw          $v0, 0x1AC($v0)
    ctx->pc = 0x36cb30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 428)));
    // 0x36cb34: 0xa0440001  sb          $a0, 0x1($v0)
    ctx->pc = 0x36cb34u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x36cb38: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x36cb38u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x36cb3c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x36cb3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x36cb40: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x36cb40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x36cb44: 0x8c4201ac  lw          $v0, 0x1AC($v0)
    ctx->pc = 0x36cb44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 428)));
    // 0x36cb48: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x36cb48u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x36cb4c: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x36cb4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x36cb50: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x36cb50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x36cb54: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x36cb54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x36cb58: 0x8c4201ac  lw          $v0, 0x1AC($v0)
    ctx->pc = 0x36cb58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 428)));
    // 0x36cb5c: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x36cb5cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x36cb60: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x36cb60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x36cb64: 0xc44200d4  lwc1        $f2, 0xD4($v0)
    ctx->pc = 0x36cb64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x36cb68: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x36cb68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x36cb6c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x36cb6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x36cb70: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x36cb70u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x36cb74: 0x6000006  bltz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x36CB74u;
    {
        const bool branch_taken_0x36cb74 = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x36cb74) {
            ctx->pc = 0x36CB90u;
            goto label_36cb90;
        }
    }
    ctx->pc = 0x36CB7Cu;
    // 0x36cb7c: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x36cb7cu;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x36cb80: 0x0  nop
    ctx->pc = 0x36cb80u;
    // NOP
    // 0x36cb84: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x36cb84u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x36cb88: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x36CB88u;
    {
        const bool branch_taken_0x36cb88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x36cb88) {
            ctx->pc = 0x36CBACu;
            goto label_36cbac;
        }
    }
    ctx->pc = 0x36CB90u;
label_36cb90:
    // 0x36cb90: 0x101842  srl         $v1, $s0, 1
    ctx->pc = 0x36cb90u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
    // 0x36cb94: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x36cb94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x36cb98: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x36cb98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x36cb9c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x36cb9cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x36cba0: 0x0  nop
    ctx->pc = 0x36cba0u;
    // NOP
    // 0x36cba4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x36cba4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x36cba8: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x36cba8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_36cbac:
    // 0x36cbac: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x36cbacu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x36cbb0: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x36cbb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x36cbb4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x36cbb4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x36cbb8: 0x0  nop
    ctx->pc = 0x36cbb8u;
    // NOP
    // 0x36cbbc: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x36cbbcu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x36cbc0: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x36cbc0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x36cbc4: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x36cbc4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x36cbc8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x36cbc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x36cbcc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x36cbccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x36cbd0: 0x8c4201ac  lw          $v0, 0x1AC($v0)
    ctx->pc = 0x36cbd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 428)));
    // 0x36cbd4: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x36cbd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x36cbd8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x36cbd8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x36cbdc: 0x0  nop
    ctx->pc = 0x36cbdcu;
    // NOP
label_36cbe0:
    // 0x36cbe0: 0x211102b  sltu        $v0, $s0, $s1
    ctx->pc = 0x36cbe0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x36cbe4: 0x1440ffb4  bnez        $v0, . + 4 + (-0x4C << 2)
    ctx->pc = 0x36CBE4u;
    {
        const bool branch_taken_0x36cbe4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x36cbe4) {
            ctx->pc = 0x36CAB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_36cab8;
        }
    }
    ctx->pc = 0x36CBECu;
    // 0x36cbec: 0x10000056  b           . + 4 + (0x56 << 2)
    ctx->pc = 0x36CBECu;
    {
        const bool branch_taken_0x36cbec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x36cbec) {
            ctx->pc = 0x36CD48u;
            goto label_36cd48;
        }
    }
    ctx->pc = 0x36CBF4u;
label_36cbf4:
    // 0x36cbf4: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x36cbf4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x36cbf8: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x36cbf8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x36cbfc: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x36cbfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x36cc00: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x36cc00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x36cc04: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x36cc04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x36cc08: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x36cc08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x36cc0c: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x36cc0cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x36cc10: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x36cc10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x36cc14: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x36cc14u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x36cc18: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x36cc18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x36cc1c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x36cc1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x36cc20: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x36cc20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x36cc24: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x36cc24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x36cc28: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x36cc28u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x36cc2c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x36cc2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x36cc30: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x36cc30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x36cc34: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x36cc34u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x36cc38: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x36cc38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x36cc3c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x36cc3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x36cc40: 0x24510001  addiu       $s1, $v0, 0x1
    ctx->pc = 0x36cc40u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x36cc44: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x36cc44u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x36cc48: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x36CC48u;
    {
        const bool branch_taken_0x36cc48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x36cc48) {
            ctx->pc = 0x36CD38u;
            goto label_36cd38;
        }
    }
    ctx->pc = 0x36CC50u;
label_36cc50:
    // 0x36cc50: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x36cc50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x36cc54: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x36cc54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x36cc58: 0x244204b0  addiu       $v0, $v0, 0x4B0
    ctx->pc = 0x36cc58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1200));
    // 0x36cc5c: 0x78440000  lq          $a0, 0x0($v0)
    ctx->pc = 0x36cc5cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x36cc60: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x36cc60u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x36cc64: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x36cc64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x36cc68: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x36cc68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x36cc6c: 0x8c4201ac  lw          $v0, 0x1AC($v0)
    ctx->pc = 0x36cc6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 428)));
    // 0x36cc70: 0x24420120  addiu       $v0, $v0, 0x120
    ctx->pc = 0x36cc70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x36cc74: 0x7c440000  sq          $a0, 0x0($v0)
    ctx->pc = 0x36cc74u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 4));
    // 0x36cc78: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x36cc78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36cc7c: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x36cc7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x36cc80: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x36cc80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x36cc84: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x36cc84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x36cc88: 0x8c4201ac  lw          $v0, 0x1AC($v0)
    ctx->pc = 0x36cc88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 428)));
    // 0x36cc8c: 0xa0440001  sb          $a0, 0x1($v0)
    ctx->pc = 0x36cc8cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x36cc90: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x36cc90u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x36cc94: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x36cc94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x36cc98: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x36cc98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x36cc9c: 0x8c4201ac  lw          $v0, 0x1AC($v0)
    ctx->pc = 0x36cc9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 428)));
    // 0x36cca0: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x36cca0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x36cca4: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x36cca4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x36cca8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x36cca8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x36ccac: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x36ccacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x36ccb0: 0x8c4201ac  lw          $v0, 0x1AC($v0)
    ctx->pc = 0x36ccb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 428)));
    // 0x36ccb4: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x36ccb4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x36ccb8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x36ccb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x36ccbc: 0xc44200d4  lwc1        $f2, 0xD4($v0)
    ctx->pc = 0x36ccbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x36ccc0: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x36ccc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x36ccc4: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x36ccc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x36ccc8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x36ccc8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x36cccc: 0x6000006  bltz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x36CCCCu;
    {
        const bool branch_taken_0x36cccc = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x36cccc) {
            ctx->pc = 0x36CCE8u;
            goto label_36cce8;
        }
    }
    ctx->pc = 0x36CCD4u;
    // 0x36ccd4: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x36ccd4u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x36ccd8: 0x0  nop
    ctx->pc = 0x36ccd8u;
    // NOP
    // 0x36ccdc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x36ccdcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x36cce0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x36CCE0u;
    {
        const bool branch_taken_0x36cce0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x36cce0) {
            ctx->pc = 0x36CD04u;
            goto label_36cd04;
        }
    }
    ctx->pc = 0x36CCE8u;
label_36cce8:
    // 0x36cce8: 0x101842  srl         $v1, $s0, 1
    ctx->pc = 0x36cce8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
    // 0x36ccec: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x36ccecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x36ccf0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x36ccf0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x36ccf4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x36ccf4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x36ccf8: 0x0  nop
    ctx->pc = 0x36ccf8u;
    // NOP
    // 0x36ccfc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x36ccfcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x36cd00: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x36cd00u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_36cd04:
    // 0x36cd04: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x36cd04u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x36cd08: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x36cd08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x36cd0c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x36cd0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x36cd10: 0x0  nop
    ctx->pc = 0x36cd10u;
    // NOP
    // 0x36cd14: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x36cd14u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x36cd18: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x36cd18u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x36cd1c: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x36cd1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x36cd20: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x36cd20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x36cd24: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x36cd24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x36cd28: 0x8c4201ac  lw          $v0, 0x1AC($v0)
    ctx->pc = 0x36cd28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 428)));
    // 0x36cd2c: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x36cd2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x36cd30: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x36cd30u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x36cd34: 0x0  nop
    ctx->pc = 0x36cd34u;
    // NOP
label_36cd38:
    // 0x36cd38: 0x211102b  sltu        $v0, $s0, $s1
    ctx->pc = 0x36cd38u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x36cd3c: 0x1440ffc4  bnez        $v0, . + 4 + (-0x3C << 2)
    ctx->pc = 0x36CD3Cu;
    {
        const bool branch_taken_0x36cd3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x36cd3c) {
            ctx->pc = 0x36CC50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_36cc50;
        }
    }
    ctx->pc = 0x36CD44u;
    // 0x36cd44: 0x0  nop
    ctx->pc = 0x36cd44u;
    // NOP
label_36cd48:
    // 0x36cd48: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x36cd48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x36cd4c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x36cd4cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x36cd50: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x36CD50u;
    SET_GPR_U32(ctx, 31, 0x36CD58u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x36CD50u, 0x36CD58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36CD58u;
label_36cd58:
    // 0x36cd58: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x36cd58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x36cd5c: 0xc05cd10  jal         func_173440
    ctx->pc = 0x36CD5Cu;
    SET_GPR_U32(ctx, 31, 0x36CD64u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x36CD5Cu, 0x36CD64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36CD64u;
label_36cd64:
    // 0x36cd64: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x36cd64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x36cd68: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x36cd68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x36cd6c: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x36CD6Cu;
    SET_GPR_U32(ctx, 31, 0x36CD74u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x36CD6Cu, 0x36CD74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36CD74u;
label_36cd74:
    // 0x36cd74: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x36cd74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x36cd78: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x36CD78u;
    SET_GPR_U32(ctx, 31, 0x36CD80u);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x36CD78u, 0x36CD80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36CD80u;
label_36cd80:
    // 0x36cd80: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x36cd80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x36cd84: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x36cd84u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x36cd88: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x36CD88u;
    {
        const bool branch_taken_0x36cd88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x36cd88) {
            ctx->pc = 0x36CDC0u;
            goto label_36cdc0;
        }
    }
    ctx->pc = 0x36CD90u;
    // 0x36cd90: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x36cd90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36cd94: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x36cd94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x36cd98: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x36cd98u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x36cd9c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x36cd9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x36cda0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x36cda0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x36cda4: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x36cda4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x36cda8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x36cda8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x36cdac: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x36cdacu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x36cdb0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x36cdb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x36cdb4: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x36cdb4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x36cdb8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x36cdb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x36cdbc: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x36cdbcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_36cdc0:
    // 0x36cdc0: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x36cdc0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x36cdc4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x36cdc4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36cdc8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x36cdc8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36cdcc: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x36cdccu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x36cdd0: 0x3e00008  jr          $ra
    ctx->pc = 0x36CDD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36CDD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36CDD8u;
}
