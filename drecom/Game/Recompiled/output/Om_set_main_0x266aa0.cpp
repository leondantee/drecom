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

// Function: Om_set_main
// Address: 0x266aa0 - 0x2670c0
void Om_set_main_0x266aa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Om_set_main_0x266aa0");
#endif

    switch (ctx->pc) {
        case 0x266b1cu: goto label_266b1c;
        case 0x266b94u: goto label_266b94;
        case 0x266bdcu: goto label_266bdc;
        case 0x266becu: goto label_266bec;
        case 0x266c30u: goto label_266c30;
        case 0x266c48u: goto label_266c48;
        case 0x266c64u: goto label_266c64;
        case 0x266c78u: goto label_266c78;
        case 0x266f0cu: goto label_266f0c;
        case 0x266f48u: goto label_266f48;
        case 0x266f80u: goto label_266f80;
        case 0x266f8cu: goto label_266f8c;
        case 0x266fb8u: goto label_266fb8;
        case 0x266fd8u: goto label_266fd8;
        case 0x267040u: goto label_267040;
        case 0x26704cu: goto label_26704c;
        default: break;
    }

    ctx->pc = 0x266aa0u;

    // 0x266aa0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x266aa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x266aa4: 0x7fbf0070  sq          $ra, 0x70($sp)
    ctx->pc = 0x266aa4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 31));
    // 0x266aa8: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x266aa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x266aac: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x266aacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x266ab0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x266ab0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x266ab4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x266ab4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x266ab8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x266ab8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x266abc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x266abcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x266ac0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x266ac0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x266ac4: 0xafa40098  sw          $a0, 0x98($sp)
    ctx->pc = 0x266ac4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 4));
    // 0x266ac8: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x266ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x266acc: 0x24710080  addiu       $s1, $v1, 0x80
    ctx->pc = 0x266accu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
    // 0x266ad0: 0x72209628  paddub      $s2, $s1, $zero
    ctx->pc = 0x266ad0u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x266ad4: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x266ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x266ad8: 0x2476fe10  addiu       $s6, $v1, -0x1F0
    ctx->pc = 0x266ad8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966800));
    // 0x266adc: 0x7000a628  paddub      $s4, $zero, $zero
    ctx->pc = 0x266adcu;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x266ae0: 0x8e441a14  lw          $a0, 0x1A14($s2)
    ctx->pc = 0x266ae0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 6676)));
    // 0x266ae4: 0x8c830048  lw          $v1, 0x48($a0)
    ctx->pc = 0x266ae4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x266ae8: 0x1060016a  beqz        $v1, . + 4 + (0x16A << 2)
    ctx->pc = 0x266AE8u;
    {
        const bool branch_taken_0x266ae8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x266ae8) {
            ctx->pc = 0x267094u;
            goto label_267094;
        }
    }
    ctx->pc = 0x266AF0u;
    // 0x266af0: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x266af0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x266af4: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x266af4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x266af8: 0x70608e28  paddub      $s1, $v1, $zero
    ctx->pc = 0x266af8u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x266afc: 0x8e430a68  lw          $v1, 0xA68($s2)
    ctx->pc = 0x266afcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2664)));
    // 0x266b00: 0x2464000f  addiu       $a0, $v1, 0xF
    ctx->pc = 0x266b00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x266b04: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x266b04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x266b08: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x266b08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x266b0c: 0xae430a68  sw          $v1, 0xA68($s2)
    ctx->pc = 0x266b0cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2664), GPR_U32(ctx, 3));
    // 0x266b10: 0x7000ae28  paddub      $s5, $zero, $zero
    ctx->pc = 0x266b10u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x266b14: 0x10000154  b           . + 4 + (0x154 << 2)
    ctx->pc = 0x266B14u;
    {
        const bool branch_taken_0x266b14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x266b14) {
            ctx->pc = 0x267068u;
            goto label_267068;
        }
    }
    ctx->pc = 0x266B1Cu;
label_266b1c:
    // 0x266b1c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x266b1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x266b20: 0x9022e652  lbu         $v0, -0x19AE($at)
    ctx->pc = 0x266b20u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x61E652u));
    // 0x266b24: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x266b24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x266b28: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x266b28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x266b2c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x266b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x266b30: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x266b30u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x266b34: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x266b34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x266b38: 0x2442e650  addiu       $v0, $v0, -0x19B0
    ctx->pc = 0x266b38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960720));
    // 0x266b3c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x266b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x266b40: 0x8c501390  lw          $s0, 0x1390($v0)
    ctx->pc = 0x266b40u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5008)));
    // 0x266b44: 0x9222000d  lbu         $v0, 0xD($s1)
    ctx->pc = 0x266b44u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 13)));
    // 0x266b48: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x266b48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x266b4c: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x266b4cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
    // 0x266b50: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x266b50u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x266b54: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x266b54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x266b58: 0x24420080  addiu       $v0, $v0, 0x80
    ctx->pc = 0x266b58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x266b5c: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x266b5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x266b60: 0x9222000d  lbu         $v0, 0xD($s1)
    ctx->pc = 0x266b60u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 13)));
    // 0x266b64: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x266b64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x266b68: 0x3043001f  andi        $v1, $v0, 0x1F
    ctx->pc = 0x266b68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x266b6c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x266b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x266b70: 0x621806  srlv        $v1, $v0, $v1
    ctx->pc = 0x266b70u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x266b74: 0x8c821a84  lw          $v0, 0x1A84($a0)
    ctx->pc = 0x266b74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 6788)));
    // 0x266b78: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x266b78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x266b7c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x266B7Cu;
    {
        const bool branch_taken_0x266b7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x266b7c) {
            ctx->pc = 0x266BA0u;
            goto label_266ba0;
        }
    }
    ctx->pc = 0x266B84u;
    // 0x266b84: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x266b84u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x266b88: 0x3405ffff  ori         $a1, $zero, 0xFFFF
    ctx->pc = 0x266b88u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x266b8c: 0xc0d85c4  jal         func_361710
    ctx->pc = 0x266B8Cu;
    SET_GPR_U32(ctx, 31, 0x266B94u);
    ctx->pc = 0x361710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x361710u, 0x266B8Cu, 0x266B94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266B94u;
label_266b94:
    // 0x266b94: 0x26310040  addiu       $s1, $s1, 0x40
    ctx->pc = 0x266b94u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    // 0x266b98: 0x1000012f  b           . + 4 + (0x12F << 2)
    ctx->pc = 0x266B98u;
    {
        const bool branch_taken_0x266b98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x266b98) {
            ctx->pc = 0x267058u;
            goto label_267058;
        }
    }
    ctx->pc = 0x266BA0u;
label_266ba0:
    // 0x266ba0: 0x96220008  lhu         $v0, 0x8($s1)
    ctx->pc = 0x266ba0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x266ba4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x266ba4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x266ba8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x266ba8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x266bac: 0xae021338  sw          $v0, 0x1338($s0)
    ctx->pc = 0x266bacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4920), GPR_U32(ctx, 2));
    // 0x266bb0: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x266bb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x266bb4: 0x9022e652  lbu         $v0, -0x19AE($at)
    ctx->pc = 0x266bb4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x61E652u));
    // 0x266bb8: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x266bb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x266bbc: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x266bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x266bc0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x266bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x266bc4: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x266bc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x266bc8: 0xa60210a4  sh          $v0, 0x10A4($s0)
    ctx->pc = 0x266bc8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4260), (uint16_t)GPR_U32(ctx, 2));
    // 0x266bcc: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x266bccu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x266bd0: 0x8e450a68  lw          $a1, 0xA68($s2)
    ctx->pc = 0x266bd0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2664)));
    // 0x266bd4: 0xc095228  jal         func_2548A0
    ctx->pc = 0x266BD4u;
    SET_GPR_U32(ctx, 31, 0x266BDCu);
    ctx->pc = 0x2548A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2548A0u, 0x266BD4u, 0x266BDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266BDCu;
label_266bdc:
    // 0x266bdc: 0xae420a68  sw          $v0, 0xA68($s2)
    ctx->pc = 0x266bdcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2664), GPR_U32(ctx, 2));
    // 0x266be0: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x266be0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x266be4: 0xc096558  jal         func_259560
    ctx->pc = 0x266BE4u;
    SET_GPR_U32(ctx, 31, 0x266BECu);
    ctx->pc = 0x259560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259560u, 0x266BE4u, 0x266BECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266BECu;
label_266bec:
    // 0x266bec: 0x8e02133c  lw          $v0, 0x133C($s0)
    ctx->pc = 0x266becu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4924)));
    // 0x266bf0: 0x3043000f  andi        $v1, $v0, 0xF
    ctx->pc = 0x266bf0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x266bf4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x266bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x266bf8: 0x10620015  beq         $v1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x266BF8u;
    {
        const bool branch_taken_0x266bf8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x266bf8) {
            ctx->pc = 0x266C50u;
            goto label_266c50;
        }
    }
    ctx->pc = 0x266C00u;
    // 0x266c00: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x266c00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x266c04: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x266C04u;
    {
        const bool branch_taken_0x266c04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x266c04) {
            ctx->pc = 0x266C38u;
            goto label_266c38;
        }
    }
    ctx->pc = 0x266C0Cu;
    // 0x266c0c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x266c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x266c10: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x266C10u;
    {
        const bool branch_taken_0x266c10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x266c10) {
            ctx->pc = 0x266C20u;
            goto label_266c20;
        }
    }
    ctx->pc = 0x266C18u;
    // 0x266c18: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x266C18u;
    {
        const bool branch_taken_0x266c18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x266c18) {
            ctx->pc = 0x266C78u;
            goto label_266c78;
        }
    }
    ctx->pc = 0x266C20u;
label_266c20:
    // 0x266c20: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x266c20u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x266c24: 0x8e0500a8  lw          $a1, 0xA8($s0)
    ctx->pc = 0x266c24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 168)));
    // 0x266c28: 0xc05be64  jal         func_16F990
    ctx->pc = 0x266C28u;
    SET_GPR_U32(ctx, 31, 0x266C30u);
    ctx->pc = 0x16F990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F990u, 0x266C28u, 0x266C30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266C30u;
label_266c30:
    // 0x266c30: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x266C30u;
    {
        const bool branch_taken_0x266c30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x266c30) {
            ctx->pc = 0x266C78u;
            goto label_266c78;
        }
    }
    ctx->pc = 0x266C38u;
label_266c38:
    // 0x266c38: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x266c38u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x266c3c: 0x2605124c  addiu       $a1, $s0, 0x124C
    ctx->pc = 0x266c3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4684));
    // 0x266c40: 0xc099934  jal         func_2664D0
    ctx->pc = 0x266C40u;
    SET_GPR_U32(ctx, 31, 0x266C48u);
    ctx->pc = 0x2664D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2664D0u, 0x266C40u, 0x266C48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266C48u;
label_266c48:
    // 0x266c48: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x266C48u;
    {
        const bool branch_taken_0x266c48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x266c48) {
            ctx->pc = 0x266C78u;
            goto label_266c78;
        }
    }
    ctx->pc = 0x266C50u;
label_266c50:
    // 0x266c50: 0x8e04009c  lw          $a0, 0x9C($s0)
    ctx->pc = 0x266c50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
    // 0x266c54: 0x26450a68  addiu       $a1, $s2, 0xA68
    ctx->pc = 0x266c54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 2664));
    // 0x266c58: 0x27a60088  addiu       $a2, $sp, 0x88
    ctx->pc = 0x266c58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
    // 0x266c5c: 0xc0506e8  jal         func_141BA0
    ctx->pc = 0x266C5Cu;
    SET_GPR_U32(ctx, 31, 0x266C64u);
    ctx->pc = 0x141BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x141BA0u, 0x266C5Cu, 0x266C64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266C64u;
label_266c64:
    // 0x266c64: 0xae021248  sw          $v0, 0x1248($s0)
    ctx->pc = 0x266c64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4680), GPR_U32(ctx, 2));
    // 0x266c68: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x266c68u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x266c6c: 0x27a50088  addiu       $a1, $sp, 0x88
    ctx->pc = 0x266c6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
    // 0x266c70: 0xc099a54  jal         func_266950
    ctx->pc = 0x266C70u;
    SET_GPR_U32(ctx, 31, 0x266C78u);
    ctx->pc = 0x266950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x266950u, 0x266C70u, 0x266C78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266C78u;
label_266c78:
    // 0x266c78: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x266c78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x266c7c: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x266c7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x266c80: 0x9622000a  lhu         $v0, 0xA($s1)
    ctx->pc = 0x266c80u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 10)));
    // 0x266c84: 0xa602000e  sh          $v0, 0xE($s0)
    ctx->pc = 0x266c84u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x266c88: 0x26220010  addiu       $v0, $s1, 0x10
    ctx->pc = 0x266c88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x266c8c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x266c8cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x266c90: 0x260200d0  addiu       $v0, $s0, 0xD0
    ctx->pc = 0x266c90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 208));
    // 0x266c94: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x266c94u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x266c98: 0x26220020  addiu       $v0, $s1, 0x20
    ctx->pc = 0x266c98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x266c9c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x266c9cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x266ca0: 0x26020120  addiu       $v0, $s0, 0x120
    ctx->pc = 0x266ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    // 0x266ca4: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x266ca4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x266ca8: 0xc6200030  lwc1        $f0, 0x30($s1)
    ctx->pc = 0x266ca8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x266cac: 0xe60001a0  swc1        $f0, 0x1A0($s0)
    ctx->pc = 0x266cacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 416), bits); }
    // 0x266cb0: 0xc6200034  lwc1        $f0, 0x34($s1)
    ctx->pc = 0x266cb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x266cb4: 0xe60001a4  swc1        $f0, 0x1A4($s0)
    ctx->pc = 0x266cb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 420), bits); }
    // 0x266cb8: 0xc6200038  lwc1        $f0, 0x38($s1)
    ctx->pc = 0x266cb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x266cbc: 0xe60001a8  swc1        $f0, 0x1A8($s0)
    ctx->pc = 0x266cbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 424), bits); }
    // 0x266cc0: 0x9222000d  lbu         $v0, 0xD($s1)
    ctx->pc = 0x266cc0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 13)));
    // 0x266cc4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x266cc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x266cc8: 0xa6020010  sh          $v0, 0x10($s0)
    ctx->pc = 0x266cc8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 16), (uint16_t)GPR_U32(ctx, 2));
    // 0x266ccc: 0x8e021338  lw          $v0, 0x1338($s0)
    ctx->pc = 0x266cccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4920)));
    // 0x266cd0: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x266cd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x266cd4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x266CD4u;
    {
        const bool branch_taken_0x266cd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x266cd4) {
            ctx->pc = 0x266CE8u;
            goto label_266ce8;
        }
    }
    ctx->pc = 0x266CDCu;
    // 0x266cdc: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x266cdcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x266ce0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x266CE0u;
    {
        const bool branch_taken_0x266ce0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x266ce0) {
            ctx->pc = 0x266CF0u;
            goto label_266cf0;
        }
    }
    ctx->pc = 0x266CE8u;
label_266ce8:
    // 0x266ce8: 0x70009e28  paddub      $s3, $zero, $zero
    ctx->pc = 0x266ce8u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x266cec: 0x0  nop
    ctx->pc = 0x266cecu;
    // NOP
label_266cf0:
    // 0x266cf0: 0x8e021338  lw          $v0, 0x1338($s0)
    ctx->pc = 0x266cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4920)));
    // 0x266cf4: 0x3042007f  andi        $v0, $v0, 0x7F
    ctx->pc = 0x266cf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)127);
    // 0x266cf8: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x266cf8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x266cfc: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x266cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x266d00: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x266d00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x266d04: 0x2442bbf0  addiu       $v0, $v0, -0x4410
    ctx->pc = 0x266d04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949872));
    // 0x266d08: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x266d08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x266d0c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x266d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x266d10: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x266d10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x266d14: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x266d14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x266d18: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x266d18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x266d1c: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x266D1Cu;
    {
        const bool branch_taken_0x266d1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x266d1c) {
            ctx->pc = 0x266D80u;
            goto label_266d80;
        }
    }
    ctx->pc = 0x266D24u;
    // 0x266d24: 0x8e03005c  lw          $v1, 0x5C($s0)
    ctx->pc = 0x266d24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x266d28: 0x90620003  lbu         $v0, 0x3($v1)
    ctx->pc = 0x266d28u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x266d2c: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x266d2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x266d30: 0xa0620003  sb          $v0, 0x3($v1)
    ctx->pc = 0x266d30u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x266d34: 0x9602000c  lhu         $v0, 0xC($s0)
    ctx->pc = 0x266d34u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x266d38: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x266d38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x266d3c: 0xa602000c  sh          $v0, 0xC($s0)
    ctx->pc = 0x266d3cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x266d40: 0x8e021338  lw          $v0, 0x1338($s0)
    ctx->pc = 0x266d40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4920)));
    // 0x266d44: 0x3042007f  andi        $v0, $v0, 0x7F
    ctx->pc = 0x266d44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)127);
    // 0x266d48: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x266d48u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x266d4c: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x266d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x266d50: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x266d50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x266d54: 0x2442bbf0  addiu       $v0, $v0, -0x4410
    ctx->pc = 0x266d54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949872));
    // 0x266d58: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x266d58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x266d5c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x266d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x266d60: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x266d60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x266d64: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x266d64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x266d68: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x266d68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x266d6c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x266D6Cu;
    {
        const bool branch_taken_0x266d6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x266d6c) {
            ctx->pc = 0x266D80u;
            goto label_266d80;
        }
    }
    ctx->pc = 0x266D74u;
    // 0x266d74: 0x9602000c  lhu         $v0, 0xC($s0)
    ctx->pc = 0x266d74u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x266d78: 0x34420800  ori         $v0, $v0, 0x800
    ctx->pc = 0x266d78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2048);
    // 0x266d7c: 0xa602000c  sh          $v0, 0xC($s0)
    ctx->pc = 0x266d7cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
label_266d80:
    // 0x266d80: 0x8e021338  lw          $v0, 0x1338($s0)
    ctx->pc = 0x266d80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4920)));
    // 0x266d84: 0x3042007f  andi        $v0, $v0, 0x7F
    ctx->pc = 0x266d84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)127);
    // 0x266d88: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x266d88u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x266d8c: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x266d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x266d90: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x266d90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x266d94: 0x2442bbf0  addiu       $v0, $v0, -0x4410
    ctx->pc = 0x266d94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949872));
    // 0x266d98: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x266d98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x266d9c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x266d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x266da0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x266da0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x266da4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x266da4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x266da8: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x266da8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x266dac: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x266DACu;
    {
        const bool branch_taken_0x266dac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x266dac) {
            ctx->pc = 0x266DD0u;
            goto label_266dd0;
        }
    }
    ctx->pc = 0x266DB4u;
    // 0x266db4: 0x8e03005c  lw          $v1, 0x5C($s0)
    ctx->pc = 0x266db4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x266db8: 0x90620003  lbu         $v0, 0x3($v1)
    ctx->pc = 0x266db8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x266dbc: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x266dbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x266dc0: 0xa0620003  sb          $v0, 0x3($v1)
    ctx->pc = 0x266dc0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x266dc4: 0x9602000c  lhu         $v0, 0xC($s0)
    ctx->pc = 0x266dc4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x266dc8: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x266dc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x266dcc: 0xa602000c  sh          $v0, 0xC($s0)
    ctx->pc = 0x266dccu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
label_266dd0:
    // 0x266dd0: 0x8e021338  lw          $v0, 0x1338($s0)
    ctx->pc = 0x266dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4920)));
    // 0x266dd4: 0x3042007f  andi        $v0, $v0, 0x7F
    ctx->pc = 0x266dd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)127);
    // 0x266dd8: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x266dd8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x266ddc: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x266ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x266de0: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x266de0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x266de4: 0x2442bbf0  addiu       $v0, $v0, -0x4410
    ctx->pc = 0x266de4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949872));
    // 0x266de8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x266de8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x266dec: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x266decu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x266df0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x266df0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x266df4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x266df4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x266df8: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x266df8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x266dfc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x266DFCu;
    {
        const bool branch_taken_0x266dfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x266dfc) {
            ctx->pc = 0x266E10u;
            goto label_266e10;
        }
    }
    ctx->pc = 0x266E04u;
    // 0x266e04: 0x9602000c  lhu         $v0, 0xC($s0)
    ctx->pc = 0x266e04u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x266e08: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x266e08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x266e0c: 0xa602000c  sh          $v0, 0xC($s0)
    ctx->pc = 0x266e0cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
label_266e10:
    // 0x266e10: 0x8e021338  lw          $v0, 0x1338($s0)
    ctx->pc = 0x266e10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4920)));
    // 0x266e14: 0x3042007f  andi        $v0, $v0, 0x7F
    ctx->pc = 0x266e14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)127);
    // 0x266e18: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x266e18u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x266e1c: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x266e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x266e20: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x266e20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x266e24: 0x2442bbf0  addiu       $v0, $v0, -0x4410
    ctx->pc = 0x266e24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949872));
    // 0x266e28: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x266e28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x266e2c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x266e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x266e30: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x266e30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x266e34: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x266e34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x266e38: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x266e38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x266e3c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x266E3Cu;
    {
        const bool branch_taken_0x266e3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x266e3c) {
            ctx->pc = 0x266E50u;
            goto label_266e50;
        }
    }
    ctx->pc = 0x266E44u;
    // 0x266e44: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x266e44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x266e48: 0x34420400  ori         $v0, $v0, 0x400
    ctx->pc = 0x266e48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1024);
    // 0x266e4c: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x266e4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_266e50:
    // 0x266e50: 0x8e021338  lw          $v0, 0x1338($s0)
    ctx->pc = 0x266e50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4920)));
    // 0x266e54: 0x3042007f  andi        $v0, $v0, 0x7F
    ctx->pc = 0x266e54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)127);
    // 0x266e58: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x266e58u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x266e5c: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x266e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x266e60: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x266e60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x266e64: 0x2442bbf0  addiu       $v0, $v0, -0x4410
    ctx->pc = 0x266e64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949872));
    // 0x266e68: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x266e68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x266e6c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x266e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x266e70: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x266e70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x266e74: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x266e74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x266e78: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x266e78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x266e7c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x266E7Cu;
    {
        const bool branch_taken_0x266e7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x266e7c) {
            ctx->pc = 0x266E90u;
            goto label_266e90;
        }
    }
    ctx->pc = 0x266E84u;
    // 0x266e84: 0x9602000c  lhu         $v0, 0xC($s0)
    ctx->pc = 0x266e84u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x266e88: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x266e88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x266e8c: 0xa602000c  sh          $v0, 0xC($s0)
    ctx->pc = 0x266e8cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
label_266e90:
    // 0x266e90: 0x8e021338  lw          $v0, 0x1338($s0)
    ctx->pc = 0x266e90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4920)));
    // 0x266e94: 0x3042007f  andi        $v0, $v0, 0x7F
    ctx->pc = 0x266e94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)127);
    // 0x266e98: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x266e98u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x266e9c: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x266e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x266ea0: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x266ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x266ea4: 0x2442bbf0  addiu       $v0, $v0, -0x4410
    ctx->pc = 0x266ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949872));
    // 0x266ea8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x266ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x266eac: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x266eacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x266eb0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x266eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x266eb4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x266eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x266eb8: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x266eb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x266ebc: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x266EBCu;
    {
        const bool branch_taken_0x266ebc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x266ebc) {
            ctx->pc = 0x266EC8u;
            goto label_266ec8;
        }
    }
    ctx->pc = 0x266EC4u;
    // 0x266ec4: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x266ec4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_266ec8:
    // 0x266ec8: 0x9222000c  lbu         $v0, 0xC($s1)
    ctx->pc = 0x266ec8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x266ecc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x266eccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x266ed0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x266ed0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x266ed4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x266ED4u;
    {
        const bool branch_taken_0x266ed4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x266ed4) {
            ctx->pc = 0x266EF8u;
            goto label_266ef8;
        }
    }
    ctx->pc = 0x266EDCu;
    // 0x266edc: 0x8e03005c  lw          $v1, 0x5C($s0)
    ctx->pc = 0x266edcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x266ee0: 0x90620003  lbu         $v0, 0x3($v1)
    ctx->pc = 0x266ee0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x266ee4: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x266ee4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x266ee8: 0xa0620003  sb          $v0, 0x3($v1)
    ctx->pc = 0x266ee8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x266eec: 0x9602000c  lhu         $v0, 0xC($s0)
    ctx->pc = 0x266eecu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x266ef0: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x266ef0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x266ef4: 0xa602000c  sh          $v0, 0xC($s0)
    ctx->pc = 0x266ef4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
label_266ef8:
    // 0x266ef8: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x266ef8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x266efc: 0x8e05005c  lw          $a1, 0x5C($s0)
    ctx->pc = 0x266efcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x266f00: 0x8e460a68  lw          $a2, 0xA68($s2)
    ctx->pc = 0x266f00u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2664)));
    // 0x266f04: 0xc0767a0  jal         func_1D9E80
    ctx->pc = 0x266F04u;
    SET_GPR_U32(ctx, 31, 0x266F0Cu);
    ctx->pc = 0x1D9E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9E80u, 0x266F04u, 0x266F0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266F0Cu;
label_266f0c:
    // 0x266f0c: 0xae420a68  sw          $v0, 0xA68($s2)
    ctx->pc = 0x266f0cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2664), GPR_U32(ctx, 2));
    // 0x266f10: 0x8e420a68  lw          $v0, 0xA68($s2)
    ctx->pc = 0x266f10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2664)));
    // 0x266f14: 0x2443000f  addiu       $v1, $v0, 0xF
    ctx->pc = 0x266f14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x266f18: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x266f18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x266f1c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x266f1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x266f20: 0xae420a68  sw          $v0, 0xA68($s2)
    ctx->pc = 0x266f20u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2664), GPR_U32(ctx, 2));
    // 0x266f24: 0x8e02133c  lw          $v0, 0x133C($s0)
    ctx->pc = 0x266f24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4924)));
    // 0x266f28: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x266f28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x266f2c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x266F2Cu;
    {
        const bool branch_taken_0x266f2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x266f2c) {
            ctx->pc = 0x266F50u;
            goto label_266f50;
        }
    }
    ctx->pc = 0x266F34u;
    // 0x266f34: 0x8e460a68  lw          $a2, 0xA68($s2)
    ctx->pc = 0x266f34u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2664)));
    // 0x266f38: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x266f38u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x266f3c: 0x8e0500a8  lw          $a1, 0xA8($s0)
    ctx->pc = 0x266f3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 168)));
    // 0x266f40: 0xc0998dc  jal         func_266370
    ctx->pc = 0x266F40u;
    SET_GPR_U32(ctx, 31, 0x266F48u);
    ctx->pc = 0x266370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x266370u, 0x266F40u, 0x266F48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266F48u;
label_266f48:
    // 0x266f48: 0xae420a68  sw          $v0, 0xA68($s2)
    ctx->pc = 0x266f48u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2664), GPR_U32(ctx, 2));
    // 0x266f4c: 0x0  nop
    ctx->pc = 0x266f4cu;
    // NOP
label_266f50:
    // 0x266f50: 0xfe000a08  sd          $zero, 0xA08($s0)
    ctx->pc = 0x266f50u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 2568), GPR_U64(ctx, 0));
    // 0x266f54: 0x8e030368  lw          $v1, 0x368($s0)
    ctx->pc = 0x266f54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 872)));
    // 0x266f58: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x266f58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x266f5c: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x266F5Cu;
    {
        const bool branch_taken_0x266f5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x266f5c) {
            ctx->pc = 0x266F80u;
            goto label_266f80;
        }
    }
    ctx->pc = 0x266F64u;
    // 0x266f64: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x266f64u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x266f68: 0x8e050368  lw          $a1, 0x368($s0)
    ctx->pc = 0x266f68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 872)));
    // 0x266f6c: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x266f6cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x266f70: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x266f70u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x266f74: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x266f74u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x266f78: 0xc0965d0  jal         func_259740
    ctx->pc = 0x266F78u;
    SET_GPR_U32(ctx, 31, 0x266F80u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x266F78u, 0x266F80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266F80u;
label_266f80:
    // 0x266f80: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x266f80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x266f84: 0xc095c7c  jal         func_2571F0
    ctx->pc = 0x266F84u;
    SET_GPR_U32(ctx, 31, 0x266F8Cu);
    ctx->pc = 0x2571F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2571F0u, 0x266F84u, 0x266F8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266F8Cu;
label_266f8c:
    // 0x266f8c: 0x8e031240  lw          $v1, 0x1240($s0)
    ctx->pc = 0x266f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4672)));
    // 0x266f90: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x266f90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x266f94: 0x10620018  beq         $v1, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x266F94u;
    {
        const bool branch_taken_0x266f94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x266f94) {
            ctx->pc = 0x266FF8u;
            goto label_266ff8;
        }
    }
    ctx->pc = 0x266F9Cu;
    // 0x266f9c: 0x12800009  beqz        $s4, . + 4 + (0x9 << 2)
    ctx->pc = 0x266F9Cu;
    {
        const bool branch_taken_0x266f9c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x266f9c) {
            ctx->pc = 0x266FC4u;
            goto label_266fc4;
        }
    }
    ctx->pc = 0x266FA4u;
    // 0x266fa4: 0x8e041240  lw          $a0, 0x1240($s0)
    ctx->pc = 0x266fa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4672)));
    // 0x266fa8: 0x260500e0  addiu       $a1, $s0, 0xE0
    ctx->pc = 0x266fa8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 224));
    // 0x266fac: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x266facu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x266fb0: 0xc05b4f8  jal         func_16D3E0
    ctx->pc = 0x266FB0u;
    SET_GPR_U32(ctx, 31, 0x266FB8u);
    ctx->pc = 0x16D3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D3E0u, 0x266FB0u, 0x266FB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266FB8u;
label_266fb8:
    // 0x266fb8: 0xae021240  sw          $v0, 0x1240($s0)
    ctx->pc = 0x266fb8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4672), GPR_U32(ctx, 2));
    // 0x266fbc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x266FBCu;
    {
        const bool branch_taken_0x266fbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x266fbc) {
            ctx->pc = 0x266FE0u;
            goto label_266fe0;
        }
    }
    ctx->pc = 0x266FC4u;
label_266fc4:
    // 0x266fc4: 0x8e041240  lw          $a0, 0x1240($s0)
    ctx->pc = 0x266fc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4672)));
    // 0x266fc8: 0x260500e0  addiu       $a1, $s0, 0xE0
    ctx->pc = 0x266fc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 224));
    // 0x266fcc: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x266fccu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x266fd0: 0xc05b4f8  jal         func_16D3E0
    ctx->pc = 0x266FD0u;
    SET_GPR_U32(ctx, 31, 0x266FD8u);
    ctx->pc = 0x16D3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D3E0u, 0x266FD0u, 0x266FD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266FD8u;
label_266fd8:
    // 0x266fd8: 0xae021240  sw          $v0, 0x1240($s0)
    ctx->pc = 0x266fd8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4672), GPR_U32(ctx, 2));
    // 0x266fdc: 0x0  nop
    ctx->pc = 0x266fdcu;
    // NOP
label_266fe0:
    // 0x266fe0: 0x8e021240  lw          $v0, 0x1240($s0)
    ctx->pc = 0x266fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4672)));
    // 0x266fe4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x266FE4u;
    {
        const bool branch_taken_0x266fe4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x266fe4) {
            ctx->pc = 0x266FF8u;
            goto label_266ff8;
        }
    }
    ctx->pc = 0x266FECu;
    // 0x266fec: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x266fecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x266ff0: 0xae021240  sw          $v0, 0x1240($s0)
    ctx->pc = 0x266ff0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4672), GPR_U32(ctx, 2));
    // 0x266ff4: 0x0  nop
    ctx->pc = 0x266ff4u;
    // NOP
label_266ff8:
    // 0x266ff8: 0x7000a628  paddub      $s4, $zero, $zero
    ctx->pc = 0x266ff8u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x266ffc: 0x9222000e  lbu         $v0, 0xE($s1)
    ctx->pc = 0x266ffcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 14)));
    // 0x267000: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x267000u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x267004: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x267004u;
    {
        const bool branch_taken_0x267004 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x267004) {
            ctx->pc = 0x267040u;
            goto label_267040;
        }
    }
    ctx->pc = 0x26700Cu;
    // 0x26700c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x26700cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x267010: 0x9022e652  lbu         $v0, -0x19AE($at)
    ctx->pc = 0x267010u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x61E652u));
    // 0x267014: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x267014u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x267018: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x267018u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x26701c: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x26701cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x267020: 0x9222000e  lbu         $v0, 0xE($s1)
    ctx->pc = 0x267020u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 14)));
    // 0x267024: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x267024u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x267028: 0x9222000f  lbu         $v0, 0xF($s1)
    ctx->pc = 0x267028u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 15)));
    // 0x26702c: 0x304600ff  andi        $a2, $v0, 0xFF
    ctx->pc = 0x26702cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x267030: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x267030u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x267034: 0x26280020  addiu       $t0, $s1, 0x20
    ctx->pc = 0x267034u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x267038: 0xc0a1054  jal         func_284150
    ctx->pc = 0x267038u;
    SET_GPR_U32(ctx, 31, 0x267040u);
    ctx->pc = 0x284150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x284150u, 0x267038u, 0x267040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267040u;
label_267040:
    // 0x267040: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x267040u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x267044: 0xc097a68  jal         func_25E9A0
    ctx->pc = 0x267044u;
    SET_GPR_U32(ctx, 31, 0x26704Cu);
    ctx->pc = 0x25E9A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25E9A0u, 0x267044u, 0x26704Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26704Cu;
label_26704c:
    // 0x26704c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x26704cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x267050: 0x26310040  addiu       $s1, $s1, 0x40
    ctx->pc = 0x267050u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    // 0x267054: 0x0  nop
    ctx->pc = 0x267054u;
    // NOP
label_267058:
    // 0x267058: 0x26a30001  addiu       $v1, $s5, 0x1
    ctx->pc = 0x267058u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x26705c: 0x3076ffff  andi        $s6, $v1, 0xFFFF
    ctx->pc = 0x26705cu;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x267060: 0x72c0ae28  paddub      $s5, $s6, $zero
    ctx->pc = 0x267060u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 22), GPR_VEC(ctx, 0)));
    // 0x267064: 0x0  nop
    ctx->pc = 0x267064u;
    // NOP
label_267068:
    // 0x267068: 0x32a4ffff  andi        $a0, $s5, 0xFFFF
    ctx->pc = 0x267068u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)65535);
    // 0x26706c: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x26706cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x267070: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x267070u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x267074: 0x83182b  sltu        $v1, $a0, $v1
    ctx->pc = 0x267074u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x267078: 0x1460fea8  bnez        $v1, . + 4 + (-0x158 << 2)
    ctx->pc = 0x267078u;
    {
        const bool branch_taken_0x267078 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x267078) {
            ctx->pc = 0x266B1Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_266b1c;
        }
    }
    ctx->pc = 0x267080u;
    // 0x267080: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x267080u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x267084: 0x9023e650  lbu         $v1, -0x19B0($at)
    ctx->pc = 0x267084u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x61E650u));
    // 0x267088: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x267088u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x26708c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x26708cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x267090: 0xa024e650  sb          $a0, -0x19B0($at)
    ctx->pc = 0x267090u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x61E650u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x61E650u, _value); } while (0);
label_267094:
    // 0x267094: 0x7bbf0070  lq          $ra, 0x70($sp)
    ctx->pc = 0x267094u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x267098: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x267098u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x26709c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x26709cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2670a0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2670a0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2670a4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2670a4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2670a8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2670a8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2670ac: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2670acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2670b0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2670b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2670b4: 0x27bd00a0  addiu       $sp, $sp, 0xA0
    ctx->pc = 0x2670b4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2670b8: 0x3e00008  jr          $ra
    ctx->pc = 0x2670B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2670B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2670C0u;
}
