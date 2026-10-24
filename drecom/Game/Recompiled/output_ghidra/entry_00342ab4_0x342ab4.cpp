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

// Function: entry_00342ab4
// Address: 0x342ab4 - 0x342fe0
void entry_00342ab4_0x342ab4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00342ab4_0x342ab4");
#endif

    switch (ctx->pc) {
        case 0x342adcu: goto label_342adc;
        case 0x342b44u: goto label_342b44;
        case 0x342b90u: goto label_342b90;
        case 0x342c04u: goto label_342c04;
        case 0x342c7cu: goto label_342c7c;
        case 0x342cbcu: goto label_342cbc;
        case 0x342d04u: goto label_342d04;
        case 0x342d74u: goto label_342d74;
        case 0x342decu: goto label_342dec;
        case 0x342e28u: goto label_342e28;
        case 0x342e58u: goto label_342e58;
        case 0x342e64u: goto label_342e64;
        case 0x342e88u: goto label_342e88;
        case 0x342ea4u: goto label_342ea4;
        case 0x342ed4u: goto label_342ed4;
        case 0x342f10u: goto label_342f10;
        case 0x342f2cu: goto label_342f2c;
        case 0x342f48u: goto label_342f48;
        case 0x342f64u: goto label_342f64;
        case 0x342facu: goto label_342fac;
        default: break;
    }

    ctx->pc = 0x342ab4u;

    // 0x342ab4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x342ab4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x342ab8: 0x8c250140  lw          $a1, 0x140($at)
    ctx->pc = 0x342ab8u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x5D0140u));
    // 0x342abc: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x342abcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x342ac0: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x342ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x342ac4: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x342ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x342ac8: 0x8fa40118  lw          $a0, 0x118($sp)
    ctx->pc = 0x342ac8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x342acc: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x342accu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x342ad0: 0x24440204  addiu       $a0, $v0, 0x204
    ctx->pc = 0x342ad0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 516));
    // 0x342ad4: 0xc06b0d4  jal         func_1AC350
    ctx->pc = 0x342AD4u;
    SET_GPR_U32(ctx, 31, 0x342ADCu);
    ctx->pc = 0x1AC350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AC350u, 0x342AD4u, 0x342ADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x342ADCu;
label_342adc:
    // 0x342adc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x342adcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x342ae0: 0x8c240140  lw          $a0, 0x140($at)
    ctx->pc = 0x342ae0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D0140u));
    // 0x342ae4: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x342ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x342ae8: 0x8fa40118  lw          $a0, 0x118($sp)
    ctx->pc = 0x342ae8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x342aec: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x342aecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x342af0: 0x8c44023c  lw          $a0, 0x23C($v0)
    ctx->pc = 0x342af0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 572)));
    // 0x342af4: 0x7080b628  paddub      $s6, $a0, $zero
    ctx->pc = 0x342af4u;
    SET_GPR_VEC(ctx, 22, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x342af8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x342af8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x342afc: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x342afcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0140u));
    // 0x342b00: 0x22040  sll         $a0, $v0, 1
    ctx->pc = 0x342b00u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x342b04: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x342b04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x342b08: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x342b08u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x342b0c: 0x8fa50118  lw          $a1, 0x118($sp)
    ctx->pc = 0x342b0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x342b10: 0xa41021  addu        $v0, $a1, $a0
    ctx->pc = 0x342b10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x342b14: 0xac40021c  sw          $zero, 0x21C($v0)
    ctx->pc = 0x342b14u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 540), GPR_U32(ctx, 0));
    // 0x342b18: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x342b18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x342b1c: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x342b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0140u));
    // 0x342b20: 0x22040  sll         $a0, $v0, 1
    ctx->pc = 0x342b20u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x342b24: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x342b24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x342b28: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x342b28u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x342b2c: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x342b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x342b30: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x342b30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x342b34: 0x2444021c  addiu       $a0, $v0, 0x21C
    ctx->pc = 0x342b34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 540));
    // 0x342b38: 0x72c02e28  paddub      $a1, $s6, $zero
    ctx->pc = 0x342b38u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 22), GPR_VEC(ctx, 0)));
    // 0x342b3c: 0xc06b06c  jal         func_1AC1B0
    ctx->pc = 0x342B3Cu;
    SET_GPR_U32(ctx, 31, 0x342B44u);
    ctx->pc = 0x1AC1B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AC1B0u, 0x342B3Cu, 0x342B44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x342B44u;
label_342b44:
    // 0x342b44: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x342b44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x342b48: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x342b48u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0140u));
    // 0x342b4c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x342b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x342b50: 0x8fa30118  lw          $v1, 0x118($sp)
    ctx->pc = 0x342b50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x342b54: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x342b54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x342b58: 0x8c53026c  lw          $s3, 0x26C($v0)
    ctx->pc = 0x342b58u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 620)));
    // 0x342b5c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x342b5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x342b60: 0x8c230140  lw          $v1, 0x140($at)
    ctx->pc = 0x342b60u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0140u));
    // 0x342b64: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x342b64u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x342b68: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x342b68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x342b6c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x342b6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x342b70: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x342b70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x342b74: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x342b74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x342b78: 0x8e650008  lw          $a1, 0x8($s3)
    ctx->pc = 0x342b78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x342b7c: 0x2444021c  addiu       $a0, $v0, 0x21C
    ctx->pc = 0x342b7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 540));
    // 0x342b80: 0x8e71000c  lw          $s1, 0xC($s3)
    ctx->pc = 0x342b80u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x342b84: 0x72203628  paddub      $a2, $s1, $zero
    ctx->pc = 0x342b84u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x342b88: 0xc06b07c  jal         func_1AC1F0
    ctx->pc = 0x342B88u;
    SET_GPR_U32(ctx, 31, 0x342B90u);
    ctx->pc = 0x1AC1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AC1F0u, 0x342B88u, 0x342B90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x342B90u;
label_342b90:
    // 0x342b90: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x342b90u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x342b94: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x342b94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x342b98: 0x8c53026c  lw          $s3, 0x26C($v0)
    ctx->pc = 0x342b98u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 620)));
    // 0x342b9c: 0x3c03c20a  lui         $v1, 0xC20A
    ctx->pc = 0x342b9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49674 << 16));
    // 0x342ba0: 0x34626666  ori         $v0, $v1, 0x6666
    ctx->pc = 0x342ba0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)26214);
    // 0x342ba4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x342ba4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x342ba8: 0x0  nop
    ctx->pc = 0x342ba8u;
    // NOP
    // 0x342bac: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x342bacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x342bb0: 0x3c02c215  lui         $v0, 0xC215
    ctx->pc = 0x342bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49685 << 16));
    // 0x342bb4: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x342bb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
    // 0x342bb8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x342bb8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x342bbc: 0x0  nop
    ctx->pc = 0x342bbcu;
    // NOP
    // 0x342bc0: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x342bc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x342bc4: 0x3c114308  lui         $s1, 0x4308
    ctx->pc = 0x342bc4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)17160 << 16));
    // 0x342bc8: 0x3622e666  ori         $v0, $s1, 0xE666
    ctx->pc = 0x342bc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)58982);
    // 0x342bcc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x342bccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x342bd0: 0x0  nop
    ctx->pc = 0x342bd0u;
    // NOP
    // 0x342bd4: 0xe7a00098  swc1        $f0, 0x98($sp)
    ctx->pc = 0x342bd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x342bd8: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x342bd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x342bdc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x342bdcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x342be0: 0x0  nop
    ctx->pc = 0x342be0u;
    // NOP
    // 0x342be4: 0xe7a0009c  swc1        $f0, 0x9C($sp)
    ctx->pc = 0x342be4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
    // 0x342be8: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x342be8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x342bec: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x342becu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x342bf0: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x342bf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x342bf4: 0x24450180  addiu       $a1, $v0, 0x180
    ctx->pc = 0x342bf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 384));
    // 0x342bf8: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x342bf8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x342bfc: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x342BFCu;
    SET_GPR_U32(ctx, 31, 0x342C04u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x342C04u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x342C04u) { return; }
    ctx->pc = 0x342C04u;
label_342c04:
    // 0x342c04: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x342c04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x342c08: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x342c08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x342c0c: 0x0  nop
    ctx->pc = 0x342c0cu;
    // NOP
    // 0x342c10: 0xe7a0009c  swc1        $f0, 0x9C($sp)
    ctx->pc = 0x342c10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
    // 0x342c14: 0x3c02c20a  lui         $v0, 0xC20A
    ctx->pc = 0x342c14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49674 << 16));
    // 0x342c18: 0x34436666  ori         $v1, $v0, 0x6666
    ctx->pc = 0x342c18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x342c1c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x342c1cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x342c20: 0x0  nop
    ctx->pc = 0x342c20u;
    // NOP
    // 0x342c24: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x342c24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x342c28: 0x3c02c255  lui         $v0, 0xC255
    ctx->pc = 0x342c28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49749 << 16));
    // 0x342c2c: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x342c2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
    // 0x342c30: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x342c30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x342c34: 0x0  nop
    ctx->pc = 0x342c34u;
    // NOP
    // 0x342c38: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x342c38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x342c3c: 0x3c024308  lui         $v0, 0x4308
    ctx->pc = 0x342c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17160 << 16));
    // 0x342c40: 0x3443e666  ori         $v1, $v0, 0xE666
    ctx->pc = 0x342c40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)58982);
    // 0x342c44: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x342c44u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x342c48: 0x0  nop
    ctx->pc = 0x342c48u;
    // NOP
    // 0x342c4c: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x342c4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x342c50: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x342c50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x342c54: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x342c54u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x342c58: 0x0  nop
    ctx->pc = 0x342c58u;
    // NOP
    // 0x342c5c: 0xe7a000ac  swc1        $f0, 0xAC($sp)
    ctx->pc = 0x342c5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
    // 0x342c60: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x342c60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x342c64: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x342c64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x342c68: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x342c68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x342c6c: 0x24450180  addiu       $a1, $v0, 0x180
    ctx->pc = 0x342c6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 384));
    // 0x342c70: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x342c70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x342c74: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x342C74u;
    SET_GPR_U32(ctx, 31, 0x342C7Cu);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x342C7Cu;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x342C7Cu) { return; }
    ctx->pc = 0x342C7Cu;
label_342c7c:
    // 0x342c7c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x342c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x342c80: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x342c80u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x342c84: 0x0  nop
    ctx->pc = 0x342c84u;
    // NOP
    // 0x342c88: 0xe7a000ac  swc1        $f0, 0xAC($sp)
    ctx->pc = 0x342c88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
    // 0x342c8c: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x342c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x342c90: 0x8c50026c  lw          $s0, 0x26C($v0)
    ctx->pc = 0x342c90u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 620)));
    // 0x342c94: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x342c94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x342c98: 0x8c450270  lw          $a1, 0x270($v0)
    ctx->pc = 0x342c98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 624)));
    // 0x342c9c: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x342c9cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x342ca0: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x342ca0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x342ca4: 0x27a70090  addiu       $a3, $sp, 0x90
    ctx->pc = 0x342ca4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x342ca8: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x342ca8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x342cac: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x342cacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x342cb0: 0x8c290140  lw          $t1, 0x140($at)
    ctx->pc = 0x342cb0u;
    SET_GPR_S32(ctx, 9, (int32_t)FAST_READ32(0x5D0140u));
    // 0x342cb4: 0xc075378  jal         func_1D4DE0
    ctx->pc = 0x342CB4u;
    SET_GPR_U32(ctx, 31, 0x342CBCu);
    ctx->pc = 0x1D4DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4DE0u, 0x342CB4u, 0x342CBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x342CBCu;
label_342cbc:
    // 0x342cbc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x342cbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x342cc0: 0x8c230140  lw          $v1, 0x140($at)
    ctx->pc = 0x342cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0140u));
    // 0x342cc4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x342cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x342cc8: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x342cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x342ccc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x342cccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x342cd0: 0x8c540274  lw          $s4, 0x274($v0)
    ctx->pc = 0x342cd0u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 628)));
    // 0x342cd4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x342cd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x342cd8: 0x8c230140  lw          $v1, 0x140($at)
    ctx->pc = 0x342cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0140u));
    // 0x342cdc: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x342cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x342ce0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x342ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x342ce4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x342ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x342ce8: 0x8fa30118  lw          $v1, 0x118($sp)
    ctx->pc = 0x342ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x342cec: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x342cecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x342cf0: 0x8e850008  lw          $a1, 0x8($s4)
    ctx->pc = 0x342cf0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x342cf4: 0x2444021c  addiu       $a0, $v0, 0x21C
    ctx->pc = 0x342cf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 540));
    // 0x342cf8: 0x8e86000c  lw          $a2, 0xC($s4)
    ctx->pc = 0x342cf8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x342cfc: 0xc06b07c  jal         func_1AC1F0
    ctx->pc = 0x342CFCu;
    SET_GPR_U32(ctx, 31, 0x342D04u);
    ctx->pc = 0x1AC1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AC1F0u, 0x342CFCu, 0x342D04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x342D04u;
label_342d04:
    // 0x342d04: 0x8fa30118  lw          $v1, 0x118($sp)
    ctx->pc = 0x342d04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x342d08: 0x8c740274  lw          $s4, 0x274($v1)
    ctx->pc = 0x342d08u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 628)));
    // 0x342d0c: 0x3c03420a  lui         $v1, 0x420A
    ctx->pc = 0x342d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16906 << 16));
    // 0x342d10: 0x34626666  ori         $v0, $v1, 0x6666
    ctx->pc = 0x342d10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)26214);
    // 0x342d14: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x342d14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x342d18: 0x0  nop
    ctx->pc = 0x342d18u;
    // NOP
    // 0x342d1c: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x342d1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x342d20: 0x3c02c215  lui         $v0, 0xC215
    ctx->pc = 0x342d20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49685 << 16));
    // 0x342d24: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x342d24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
    // 0x342d28: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x342d28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x342d2c: 0x0  nop
    ctx->pc = 0x342d2cu;
    // NOP
    // 0x342d30: 0xe7a000b4  swc1        $f0, 0xB4($sp)
    ctx->pc = 0x342d30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x342d34: 0x3c024308  lui         $v0, 0x4308
    ctx->pc = 0x342d34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17160 << 16));
    // 0x342d38: 0x3442e666  ori         $v0, $v0, 0xE666
    ctx->pc = 0x342d38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)58982);
    // 0x342d3c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x342d3cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x342d40: 0x0  nop
    ctx->pc = 0x342d40u;
    // NOP
    // 0x342d44: 0xe7a000b8  swc1        $f0, 0xB8($sp)
    ctx->pc = 0x342d44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x342d48: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x342d48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x342d4c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x342d4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x342d50: 0x0  nop
    ctx->pc = 0x342d50u;
    // NOP
    // 0x342d54: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x342d54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
    // 0x342d58: 0x8fb00118  lw          $s0, 0x118($sp)
    ctx->pc = 0x342d58u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x342d5c: 0x8e020130  lw          $v0, 0x130($s0)
    ctx->pc = 0x342d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
    // 0x342d60: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x342d60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x342d64: 0x24450180  addiu       $a1, $v0, 0x180
    ctx->pc = 0x342d64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 384));
    // 0x342d68: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x342d68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x342d6c: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x342D6Cu;
    SET_GPR_U32(ctx, 31, 0x342D74u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x342D74u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x342D74u) { return; }
    ctx->pc = 0x342D74u;
label_342d74:
    // 0x342d74: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x342d74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x342d78: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x342d78u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x342d7c: 0x0  nop
    ctx->pc = 0x342d7cu;
    // NOP
    // 0x342d80: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x342d80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
    // 0x342d84: 0x3c02420a  lui         $v0, 0x420A
    ctx->pc = 0x342d84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16906 << 16));
    // 0x342d88: 0x34436666  ori         $v1, $v0, 0x6666
    ctx->pc = 0x342d88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x342d8c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x342d8cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x342d90: 0x0  nop
    ctx->pc = 0x342d90u;
    // NOP
    // 0x342d94: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x342d94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x342d98: 0x3c02c255  lui         $v0, 0xC255
    ctx->pc = 0x342d98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49749 << 16));
    // 0x342d9c: 0x34433333  ori         $v1, $v0, 0x3333
    ctx->pc = 0x342d9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
    // 0x342da0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x342da0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x342da4: 0x0  nop
    ctx->pc = 0x342da4u;
    // NOP
    // 0x342da8: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x342da8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x342dac: 0x3c034308  lui         $v1, 0x4308
    ctx->pc = 0x342dacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17160 << 16));
    // 0x342db0: 0x3462e666  ori         $v0, $v1, 0xE666
    ctx->pc = 0x342db0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)58982);
    // 0x342db4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x342db4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x342db8: 0x0  nop
    ctx->pc = 0x342db8u;
    // NOP
    // 0x342dbc: 0xe7a000c8  swc1        $f0, 0xC8($sp)
    ctx->pc = 0x342dbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x342dc0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x342dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x342dc4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x342dc4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x342dc8: 0x0  nop
    ctx->pc = 0x342dc8u;
    // NOP
    // 0x342dcc: 0xe7a000cc  swc1        $f0, 0xCC($sp)
    ctx->pc = 0x342dccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
    // 0x342dd0: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x342dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x342dd4: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x342dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x342dd8: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x342dd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x342ddc: 0x24450180  addiu       $a1, $v0, 0x180
    ctx->pc = 0x342ddcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 384));
    // 0x342de0: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x342de0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x342de4: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x342DE4u;
    SET_GPR_U32(ctx, 31, 0x342DECu);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x342DECu;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x342DECu) { return; }
    ctx->pc = 0x342DECu;
label_342dec:
    // 0x342dec: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x342decu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x342df0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x342df0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x342df4: 0x0  nop
    ctx->pc = 0x342df4u;
    // NOP
    // 0x342df8: 0xe7a000cc  swc1        $f0, 0xCC($sp)
    ctx->pc = 0x342df8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
    // 0x342dfc: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x342dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x342e00: 0x8c440274  lw          $a0, 0x274($v0)
    ctx->pc = 0x342e00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 628)));
    // 0x342e04: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x342e04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x342e08: 0x8c450278  lw          $a1, 0x278($v0)
    ctx->pc = 0x342e08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 632)));
    // 0x342e0c: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x342e0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x342e10: 0x27a700b0  addiu       $a3, $sp, 0xB0
    ctx->pc = 0x342e10u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x342e14: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x342e14u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x342e18: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x342e18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x342e1c: 0x8c290140  lw          $t1, 0x140($at)
    ctx->pc = 0x342e1cu;
    SET_GPR_S32(ctx, 9, (int32_t)FAST_READ32(0x5D0140u));
    // 0x342e20: 0xc075378  jal         func_1D4DE0
    ctx->pc = 0x342E20u;
    SET_GPR_U32(ctx, 31, 0x342E28u);
    ctx->pc = 0x1D4DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4DE0u, 0x342E20u, 0x342E28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x342E28u;
label_342e28:
    // 0x342e28: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x342e28u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x342e2c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x342e2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x342e30: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x342e30u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0140u));
    // 0x342e34: 0x22040  sll         $a0, $v0, 1
    ctx->pc = 0x342e34u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x342e38: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x342e38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x342e3c: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x342e3cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x342e40: 0x8fa30118  lw          $v1, 0x118($sp)
    ctx->pc = 0x342e40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x342e44: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x342e44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x342e48: 0x2482021c  addiu       $v0, $a0, 0x21C
    ctx->pc = 0x342e48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 540));
    // 0x342e4c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x342e4cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x342e50: 0xc06b0d4  jal         func_1AC350
    ctx->pc = 0x342E50u;
    SET_GPR_U32(ctx, 31, 0x342E58u);
    ctx->pc = 0x1AC350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AC350u, 0x342E50u, 0x342E58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x342E58u;
label_342e58:
    // 0x342e58: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x342e58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x342e5c: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x342E5Cu;
    SET_GPR_U32(ctx, 31, 0x342E64u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x342E5Cu, 0x342E64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x342E64u;
label_342e64:
    // 0x342e64: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x342e64u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x342e68: 0x3c0443e1  lui         $a0, 0x43E1
    ctx->pc = 0x342e68u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17377 << 16));
    // 0x342e6c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x342e6cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x342e70: 0x0  nop
    ctx->pc = 0x342e70u;
    // NOP
    // 0x342e74: 0xe7a000d0  swc1        $f0, 0xD0($sp)
    ctx->pc = 0x342e74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x342e78: 0x27a200e0  addiu       $v0, $sp, 0xE0
    ctx->pc = 0x342e78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x342e7c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x342e7cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x342e80: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x342E80u;
    SET_GPR_U32(ctx, 31, 0x342E88u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x342E80u, 0x342E88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x342E88u;
label_342e88:
    // 0x342e88: 0x3c02c3e1  lui         $v0, 0xC3E1
    ctx->pc = 0x342e88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50145 << 16));
    // 0x342e8c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x342e8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x342e90: 0x0  nop
    ctx->pc = 0x342e90u;
    // NOP
    // 0x342e94: 0xe7a000e0  swc1        $f0, 0xE0($sp)
    ctx->pc = 0x342e94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x342e98: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x342e98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x342e9c: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x342E9Cu;
    SET_GPR_U32(ctx, 31, 0x342EA4u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x342E9Cu, 0x342EA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x342EA4u;
label_342ea4:
    // 0x342ea4: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x342ea4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x342ea8: 0x3c0243e1  lui         $v0, 0x43E1
    ctx->pc = 0x342ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17377 << 16));
    // 0x342eac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x342eacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x342eb0: 0x0  nop
    ctx->pc = 0x342eb0u;
    // NOP
    // 0x342eb4: 0xe7a000f0  swc1        $f0, 0xF0($sp)
    ctx->pc = 0x342eb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x342eb8: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x342eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x342ebc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x342ebcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x342ec0: 0x0  nop
    ctx->pc = 0x342ec0u;
    // NOP
    // 0x342ec4: 0xe7a000f8  swc1        $f0, 0xF8($sp)
    ctx->pc = 0x342ec4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    // 0x342ec8: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x342ec8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x342ecc: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x342ECCu;
    SET_GPR_U32(ctx, 31, 0x342ED4u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x342ECCu, 0x342ED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x342ED4u;
label_342ed4:
    // 0x342ed4: 0x3c02c3e1  lui         $v0, 0xC3E1
    ctx->pc = 0x342ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50145 << 16));
    // 0x342ed8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x342ed8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x342edc: 0x0  nop
    ctx->pc = 0x342edcu;
    // NOP
    // 0x342ee0: 0xe7a00100  swc1        $f0, 0x100($sp)
    ctx->pc = 0x342ee0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x342ee4: 0x3c1641f0  lui         $s6, 0x41F0
    ctx->pc = 0x342ee4u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)16880 << 16));
    // 0x342ee8: 0x44960000  mtc1        $s6, $f0
    ctx->pc = 0x342ee8u;
    { uint32_t bits = GPR_U32(ctx, 22); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x342eec: 0x0  nop
    ctx->pc = 0x342eecu;
    // NOP
    // 0x342ef0: 0xe7a00108  swc1        $f0, 0x108($sp)
    ctx->pc = 0x342ef0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
    // 0x342ef4: 0x8fa30118  lw          $v1, 0x118($sp)
    ctx->pc = 0x342ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x342ef8: 0x8c620130  lw          $v0, 0x130($v1)
    ctx->pc = 0x342ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x342efc: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x342efcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x342f00: 0x24450140  addiu       $a1, $v0, 0x140
    ctx->pc = 0x342f00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 320));
    // 0x342f04: 0x27a600d0  addiu       $a2, $sp, 0xD0
    ctx->pc = 0x342f04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x342f08: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x342F08u;
    SET_GPR_U32(ctx, 31, 0x342F10u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x342F10u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x342F10u) { return; }
    ctx->pc = 0x342F10u;
label_342f10:
    // 0x342f10: 0x8fa40118  lw          $a0, 0x118($sp)
    ctx->pc = 0x342f10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x342f14: 0x8c820130  lw          $v0, 0x130($a0)
    ctx->pc = 0x342f14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
    // 0x342f18: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x342f18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x342f1c: 0x24450140  addiu       $a1, $v0, 0x140
    ctx->pc = 0x342f1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 320));
    // 0x342f20: 0x27a600e0  addiu       $a2, $sp, 0xE0
    ctx->pc = 0x342f20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x342f24: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x342F24u;
    SET_GPR_U32(ctx, 31, 0x342F2Cu);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x342F2Cu;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x342F2Cu) { return; }
    ctx->pc = 0x342F2Cu;
label_342f2c:
    // 0x342f2c: 0x8fa30118  lw          $v1, 0x118($sp)
    ctx->pc = 0x342f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x342f30: 0x8c670130  lw          $a3, 0x130($v1)
    ctx->pc = 0x342f30u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x342f34: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x342f34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x342f38: 0x24e501c0  addiu       $a1, $a3, 0x1C0
    ctx->pc = 0x342f38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 448));
    // 0x342f3c: 0x27a600f0  addiu       $a2, $sp, 0xF0
    ctx->pc = 0x342f3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x342f40: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x342F40u;
    SET_GPR_U32(ctx, 31, 0x342F48u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x342F48u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x342F48u) { return; }
    ctx->pc = 0x342F48u;
label_342f48:
    // 0x342f48: 0x8fa30118  lw          $v1, 0x118($sp)
    ctx->pc = 0x342f48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x342f4c: 0x8c620130  lw          $v0, 0x130($v1)
    ctx->pc = 0x342f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x342f50: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x342f50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x342f54: 0x244501c0  addiu       $a1, $v0, 0x1C0
    ctx->pc = 0x342f54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 448));
    // 0x342f58: 0x27a60100  addiu       $a2, $sp, 0x100
    ctx->pc = 0x342f58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x342f5c: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x342F5Cu;
    SET_GPR_U32(ctx, 31, 0x342F64u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x342F64u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x342F64u) { return; }
    ctx->pc = 0x342F64u;
label_342f64:
    // 0x342f64: 0x8fa50118  lw          $a1, 0x118($sp)
    ctx->pc = 0x342f64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x342f68: 0x94a410a4  lhu         $a0, 0x10A4($a1)
    ctx->pc = 0x342f68u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4260)));
    // 0x342f6c: 0x3086ffff  andi        $a2, $a0, 0xFFFF
    ctx->pc = 0x342f6cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x342f70: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x342f70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x342f74: 0x461821  addu        $v1, $v0, $a2
    ctx->pc = 0x342f74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x342f78: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x342f78u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x342f7c: 0x3c020089  lui         $v0, 0x89
    ctx->pc = 0x342f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)137 << 16));
    // 0x342f80: 0x24425ac0  addiu       $v0, $v0, 0x5AC0
    ctx->pc = 0x342f80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23232));
    // 0x342f84: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x342f84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x342f88: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x342f88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x342f8c: 0x27a600e0  addiu       $a2, $sp, 0xE0
    ctx->pc = 0x342f8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x342f90: 0x27a700f0  addiu       $a3, $sp, 0xF0
    ctx->pc = 0x342f90u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x342f94: 0x27a80100  addiu       $t0, $sp, 0x100
    ctx->pc = 0x342f94u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x342f98: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x342f98u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x342f9c: 0x70005628  paddub      $t2, $zero, $zero
    ctx->pc = 0x342f9cu;
    SET_GPR_VEC(ctx, 10, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x342fa0: 0x70005e28  paddub      $t3, $zero, $zero
    ctx->pc = 0x342fa0u;
    SET_GPR_VEC(ctx, 11, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x342fa4: 0xc05ae28  jal         func_16B8A0
    ctx->pc = 0x342FA4u;
    SET_GPR_U32(ctx, 31, 0x342FACu);
    ctx->pc = 0x16B8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16B8A0u, 0x342FA4u, 0x342FACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x342FACu;
label_342fac:
    // 0x342fac: 0x7040ae28  paddub      $s5, $v0, $zero
    ctx->pc = 0x342facu;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x342fb0: 0x7bbf0080  lq          $ra, 0x80($sp)
    ctx->pc = 0x342fb0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x342fb4: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x342fb4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x342fb8: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x342fb8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x342fbc: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x342fbcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x342fc0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x342fc0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x342fc4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x342fc4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x342fc8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x342fc8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x342fcc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x342fccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x342fd0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x342fd0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x342fd4: 0x27bd0120  addiu       $sp, $sp, 0x120
    ctx->pc = 0x342fd4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x342fd8: 0x3e00008  jr          $ra
    ctx->pc = 0x342FD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x342FD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x342FE0u;
}
