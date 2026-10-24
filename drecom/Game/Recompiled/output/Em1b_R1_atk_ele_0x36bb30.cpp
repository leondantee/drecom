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

// Function: Em1b_R1_atk_ele
// Address: 0x36bb30 - 0x36becc
void Em1b_R1_atk_ele_0x36bb30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em1b_R1_atk_ele_0x36bb30");
#endif

    switch (ctx->pc) {
        case 0x36bb98u: goto label_36bb98;
        case 0x36bc18u: goto label_36bc18;
        case 0x36bc28u: goto label_36bc28;
        case 0x36bc7cu: goto label_36bc7c;
        case 0x36bcecu: goto label_36bcec;
        case 0x36bd44u: goto label_36bd44;
        case 0x36be14u: goto label_36be14;
        case 0x36be40u: goto label_36be40;
        case 0x36be4cu: goto label_36be4c;
        case 0x36be5cu: goto label_36be5c;
        case 0x36be68u: goto label_36be68;
        default: break;
    }

    ctx->pc = 0x36bb30u;

    // 0x36bb30: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x36bb30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x36bb34: 0x7fbf0050  sq          $ra, 0x50($sp)
    ctx->pc = 0x36bb34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 31));
    // 0x36bb38: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x36bb38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x36bb3c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x36bb3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x36bb40: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x36bb40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x36bb44: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x36bb44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x36bb48: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x36bb48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x36bb4c: 0xafa40068  sw          $a0, 0x68($sp)
    ctx->pc = 0x36bb4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 4));
    // 0x36bb50: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x36bb50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x36bb54: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x36bb54u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x36bb58: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x36bb58u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x36bb5c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x36bb5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36bb60: 0x10830011  beq         $a0, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x36BB60u;
    {
        const bool branch_taken_0x36bb60 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x36bb60) {
            ctx->pc = 0x36BBA8u;
            goto label_36bba8;
        }
    }
    ctx->pc = 0x36BB68u;
    // 0x36bb68: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x36BB68u;
    {
        const bool branch_taken_0x36bb68 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x36bb68) {
            ctx->pc = 0x36BB78u;
            goto label_36bb78;
        }
    }
    ctx->pc = 0x36BB70u;
    // 0x36bb70: 0x100000cd  b           . + 4 + (0xCD << 2)
    ctx->pc = 0x36BB70u;
    {
        const bool branch_taken_0x36bb70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x36bb70) {
            ctx->pc = 0x36BEA8u;
            goto label_36bea8;
        }
    }
    ctx->pc = 0x36BB78u;
label_36bb78:
    // 0x36bb78: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x36bb78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x36bb7c: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x36bb7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x36bb80: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x36bb80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x36bb84: 0x24065a07  addiu       $a2, $zero, 0x5A07
    ctx->pc = 0x36bb84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 23047));
    // 0x36bb88: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x36bb88u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36bb8c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x36bb8cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x36bb90: 0xc0965d0  jal         func_259740
    ctx->pc = 0x36BB90u;
    SET_GPR_U32(ctx, 31, 0x36BB98u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x36BB90u, 0x36BB98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36BB98u;
label_36bb98:
    // 0x36bb98: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x36bb98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x36bb9c: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x36bb9cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x36bba0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x36bba0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x36bba4: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x36bba4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_36bba8:
    // 0x36bba8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x36bba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x36bbac: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x36bbacu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x36bbb0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x36bbb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x36bbb4: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x36bbb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x36bbb8: 0x10400059  beqz        $v0, . + 4 + (0x59 << 2)
    ctx->pc = 0x36BBB8u;
    {
        const bool branch_taken_0x36bbb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x36bbb8) {
            ctx->pc = 0x36BD20u;
            goto label_36bd20;
        }
    }
    ctx->pc = 0x36BBC0u;
    // 0x36bbc0: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x36bbc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x36bbc4: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x36bbc4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x36bbc8: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x36bbc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x36bbcc: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x36bbccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x36bbd0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x36bbd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x36bbd4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x36bbd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x36bbd8: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x36bbd8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x36bbdc: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x36bbdcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x36bbe0: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x36bbe0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x36bbe4: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x36bbe4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x36bbe8: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x36bbe8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x36bbec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x36bbecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x36bbf0: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x36bbf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x36bbf4: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x36bbf4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x36bbf8: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x36bbf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x36bbfc: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x36bbfcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x36bc00: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x36bc00u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x36bc04: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x36bc04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x36bc08: 0x30540003  andi        $s4, $v0, 0x3
    ctx->pc = 0x36bc08u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x36bc0c: 0x70009e28  paddub      $s3, $zero, $zero
    ctx->pc = 0x36bc0cu;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x36bc10: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x36BC10u;
    {
        const bool branch_taken_0x36bc10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x36bc10) {
            ctx->pc = 0x36BD10u;
            goto label_36bd10;
        }
    }
    ctx->pc = 0x36BC18u;
label_36bc18:
    // 0x36bc18: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x36bc18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x36bc1c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x36bc1cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x36bc20: 0xc0db498  jal         func_36D260
    ctx->pc = 0x36BC20u;
    SET_GPR_U32(ctx, 31, 0x36BC28u);
    ctx->pc = 0x36D260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36D260u, 0x36BC20u, 0x36BC28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36BC28u;
label_36bc28:
    // 0x36bc28: 0x70409628  paddub      $s2, $v0, $zero
    ctx->pc = 0x36bc28u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x36bc2c: 0x6400036  bltz        $s2, . + 4 + (0x36 << 2)
    ctx->pc = 0x36BC2Cu;
    {
        const bool branch_taken_0x36bc2c = (GPR_S32(ctx, 18) < 0);
        if (branch_taken_0x36bc2c) {
            ctx->pc = 0x36BD08u;
            goto label_36bd08;
        }
    }
    ctx->pc = 0x36BC34u;
    // 0x36bc34: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x36bc34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x36bc38: 0x24441330  addiu       $a0, $v0, 0x1330
    ctx->pc = 0x36bc38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x36bc3c: 0x121040  sll         $v0, $s2, 1
    ctx->pc = 0x36bc3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x36bc40: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x36bc40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x36bc44: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x36bc44u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x36bc48: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x36bc48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x36bc4c: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x36bc4cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x36bc50: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x36bc50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36bc54: 0xae020040  sw          $v0, 0x40($s0)
    ctx->pc = 0x36bc54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 2));
    // 0x36bc58: 0x3c0245fa  lui         $v0, 0x45FA
    ctx->pc = 0x36bc58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17914 << 16));
    // 0x36bc5c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x36bc5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x36bc60: 0x0  nop
    ctx->pc = 0x36bc60u;
    // NOP
    // 0x36bc64: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x36bc64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x36bc68: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x36bc68u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x36bc6c: 0x0  nop
    ctx->pc = 0x36bc6cu;
    // NOP
    // 0x36bc70: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x36bc70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x36bc74: 0xc06765c  jal         func_19D970
    ctx->pc = 0x36BC74u;
    SET_GPR_U32(ctx, 31, 0x36BC7Cu);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x36BC74u, 0x36BC7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36BC7Cu;
label_36bc7c:
    // 0x36bc7c: 0x3c02461c  lui         $v0, 0x461C
    ctx->pc = 0x36bc7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17948 << 16));
    // 0x36bc80: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x36bc80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x36bc84: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x36bc84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x36bc88: 0x0  nop
    ctx->pc = 0x36bc88u;
    // NOP
    // 0x36bc8c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x36bc8cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x36bc90: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x36bc90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x36bc94: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x36bc94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x36bc98: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x36bc98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x36bc9c: 0x0  nop
    ctx->pc = 0x36bc9cu;
    // NOP
    // 0x36bca0: 0xe600000c  swc1        $f0, 0xC($s0)
    ctx->pc = 0x36bca0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x36bca4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x36bca4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x36bca8: 0x0  nop
    ctx->pc = 0x36bca8u;
    // NOP
    // 0x36bcac: 0xe6000028  swc1        $f0, 0x28($s0)
    ctx->pc = 0x36bcacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
    // 0x36bcb0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x36bcb0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x36bcb4: 0x0  nop
    ctx->pc = 0x36bcb4u;
    // NOP
    // 0x36bcb8: 0xe6000014  swc1        $f0, 0x14($s0)
    ctx->pc = 0x36bcb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x36bcbc: 0x2402012c  addiu       $v0, $zero, 0x12C
    ctx->pc = 0x36bcbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
    // 0x36bcc0: 0xae020048  sw          $v0, 0x48($s0)
    ctx->pc = 0x36bcc0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 2));
    // 0x36bcc4: 0xae14004c  sw          $s4, 0x4C($s0)
    ctx->pc = 0x36bcc4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 20));
    // 0x36bcc8: 0x24020032  addiu       $v0, $zero, 0x32
    ctx->pc = 0x36bcc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x36bccc: 0xae020050  sw          $v0, 0x50($s0)
    ctx->pc = 0x36bcccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 2));
    // 0x36bcd0: 0x2404001f  addiu       $a0, $zero, 0x1F
    ctx->pc = 0x36bcd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x36bcd4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x36bcd4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x36bcd8: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x36bcd8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x36bcdc: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x36bcdcu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x36bce0: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x36bce0u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x36bce4: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x36BCE4u;
    SET_GPR_U32(ctx, 31, 0x36BCECu);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x36BCE4u, 0x36BCECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36BCECu;
label_36bcec:
    // 0x36bcec: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x36bcecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
    // 0x36bcf0: 0x8e030054  lw          $v1, 0x54($s0)
    ctx->pc = 0x36bcf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x36bcf4: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x36bcf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x36bcf8: 0x34420011  ori         $v0, $v0, 0x11
    ctx->pc = 0x36bcf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)17);
    // 0x36bcfc: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x36BCFCu;
    {
        const bool branch_taken_0x36bcfc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x36bcfc) {
            ctx->pc = 0x36BD08u;
            goto label_36bd08;
        }
    }
    ctx->pc = 0x36BD04u;
    // 0x36bd04: 0xae000040  sw          $zero, 0x40($s0)
    ctx->pc = 0x36bd04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 0));
label_36bd08:
    // 0x36bd08: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x36bd08u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x36bd0c: 0x0  nop
    ctx->pc = 0x36bd0cu;
    // NOP
label_36bd10:
    // 0x36bd10: 0x2e620005  sltiu       $v0, $s3, 0x5
    ctx->pc = 0x36bd10u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x36bd14: 0x1440ffc0  bnez        $v0, . + 4 + (-0x40 << 2)
    ctx->pc = 0x36BD14u;
    {
        const bool branch_taken_0x36bd14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x36bd14) {
            ctx->pc = 0x36BC18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_36bc18;
        }
    }
    ctx->pc = 0x36BD1Cu;
    // 0x36bd1c: 0x0  nop
    ctx->pc = 0x36bd1cu;
    // NOP
label_36bd20:
    // 0x36bd20: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x36bd20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x36bd24: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x36bd24u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x36bd28: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x36bd28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x36bd2c: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x36bd2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x36bd30: 0x1040003f  beqz        $v0, . + 4 + (0x3F << 2)
    ctx->pc = 0x36BD30u;
    {
        const bool branch_taken_0x36bd30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x36bd30) {
            ctx->pc = 0x36BE30u;
            goto label_36be30;
        }
    }
    ctx->pc = 0x36BD38u;
    // 0x36bd38: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x36bd38u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x36bd3c: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x36BD3Cu;
    {
        const bool branch_taken_0x36bd3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x36bd3c) {
            ctx->pc = 0x36BE20u;
            goto label_36be20;
        }
    }
    ctx->pc = 0x36BD44u;
label_36bd44:
    // 0x36bd44: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x36bd44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x36bd48: 0x24441330  addiu       $a0, $v0, 0x1330
    ctx->pc = 0x36bd48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x36bd4c: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x36bd4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x36bd50: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x36bd50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x36bd54: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x36bd54u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x36bd58: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x36bd58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x36bd5c: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x36bd5cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x36bd60: 0x8e020040  lw          $v0, 0x40($s0)
    ctx->pc = 0x36bd60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x36bd64: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x36BD64u;
    {
        const bool branch_taken_0x36bd64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x36bd64) {
            ctx->pc = 0x36BE18u;
            goto label_36be18;
        }
    }
    ctx->pc = 0x36BD6Cu;
    // 0x36bd6c: 0x8e020044  lw          $v0, 0x44($s0)
    ctx->pc = 0x36bd6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x36bd70: 0x14400029  bnez        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x36BD70u;
    {
        const bool branch_taken_0x36bd70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x36bd70) {
            ctx->pc = 0x36BE18u;
            goto label_36be18;
        }
    }
    ctx->pc = 0x36BD78u;
    // 0x36bd78: 0x3c024316  lui         $v0, 0x4316
    ctx->pc = 0x36bd78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17174 << 16));
    // 0x36bd7c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x36bd7cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x36bd80: 0x0  nop
    ctx->pc = 0x36bd80u;
    // NOP
    // 0x36bd84: 0xe6000028  swc1        $f0, 0x28($s0)
    ctx->pc = 0x36bd84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
    // 0x36bd88: 0x2402012c  addiu       $v0, $zero, 0x12C
    ctx->pc = 0x36bd88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
    // 0x36bd8c: 0xae020048  sw          $v0, 0x48($s0)
    ctx->pc = 0x36bd8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 2));
    // 0x36bd90: 0x8e03004c  lw          $v1, 0x4C($s0)
    ctx->pc = 0x36bd90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x36bd94: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x36bd94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x36bd98: 0x10620019  beq         $v1, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x36BD98u;
    {
        const bool branch_taken_0x36bd98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x36bd98) {
            ctx->pc = 0x36BE00u;
            goto label_36be00;
        }
    }
    ctx->pc = 0x36BDA0u;
    // 0x36bda0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x36bda0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x36bda4: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x36BDA4u;
    {
        const bool branch_taken_0x36bda4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x36bda4) {
            ctx->pc = 0x36BDE4u;
            goto label_36bde4;
        }
    }
    ctx->pc = 0x36BDACu;
    // 0x36bdac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x36bdacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36bdb0: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x36BDB0u;
    {
        const bool branch_taken_0x36bdb0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x36bdb0) {
            ctx->pc = 0x36BDC8u;
            goto label_36bdc8;
        }
    }
    ctx->pc = 0x36BDB8u;
    // 0x36bdb8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x36BDB8u;
    {
        const bool branch_taken_0x36bdb8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x36bdb8) {
            ctx->pc = 0x36BDC8u;
            goto label_36bdc8;
        }
    }
    ctx->pc = 0x36BDC0u;
    // 0x36bdc0: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x36BDC0u;
    {
        const bool branch_taken_0x36bdc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x36bdc0) {
            ctx->pc = 0x36BE18u;
            goto label_36be18;
        }
    }
    ctx->pc = 0x36BDC8u;
label_36bdc8:
    // 0x36bdc8: 0x3c02bfc9  lui         $v0, 0xBFC9
    ctx->pc = 0x36bdc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49097 << 16));
    // 0x36bdcc: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x36bdccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x36bdd0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x36bdd0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x36bdd4: 0x0  nop
    ctx->pc = 0x36bdd4u;
    // NOP
    // 0x36bdd8: 0xe6000014  swc1        $f0, 0x14($s0)
    ctx->pc = 0x36bdd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x36bddc: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x36BDDCu;
    {
        const bool branch_taken_0x36bddc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x36bddc) {
            ctx->pc = 0x36BE18u;
            goto label_36be18;
        }
    }
    ctx->pc = 0x36BDE4u;
label_36bde4:
    // 0x36bde4: 0x3c02bf49  lui         $v0, 0xBF49
    ctx->pc = 0x36bde4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48969 << 16));
    // 0x36bde8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x36bde8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x36bdec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x36bdecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x36bdf0: 0x0  nop
    ctx->pc = 0x36bdf0u;
    // NOP
    // 0x36bdf4: 0xe6000014  swc1        $f0, 0x14($s0)
    ctx->pc = 0x36bdf4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x36bdf8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x36BDF8u;
    {
        const bool branch_taken_0x36bdf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x36bdf8) {
            ctx->pc = 0x36BE18u;
            goto label_36be18;
        }
    }
    ctx->pc = 0x36BE00u;
label_36be00:
    // 0x36be00: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x36be00u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x36be04: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x36be04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x36be08: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x36be08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x36be0c: 0xc05ccfc  jal         func_1733F0
    ctx->pc = 0x36BE0Cu;
    SET_GPR_U32(ctx, 31, 0x36BE14u);
    ctx->pc = 0x1733F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1733F0u, 0x36BE0Cu, 0x36BE14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36BE14u;
label_36be14:
    // 0x36be14: 0xe6000014  swc1        $f0, 0x14($s0)
    ctx->pc = 0x36be14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
label_36be18:
    // 0x36be18: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x36be18u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x36be1c: 0x0  nop
    ctx->pc = 0x36be1cu;
    // NOP
label_36be20:
    // 0x36be20: 0x2e220010  sltiu       $v0, $s1, 0x10
    ctx->pc = 0x36be20u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x36be24: 0x1440ffc7  bnez        $v0, . + 4 + (-0x39 << 2)
    ctx->pc = 0x36BE24u;
    {
        const bool branch_taken_0x36be24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x36be24) {
            ctx->pc = 0x36BD44u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_36bd44;
        }
    }
    ctx->pc = 0x36BE2Cu;
    // 0x36be2c: 0x0  nop
    ctx->pc = 0x36be2cu;
    // NOP
label_36be30:
    // 0x36be30: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x36be30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x36be34: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x36be34u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x36be38: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x36BE38u;
    SET_GPR_U32(ctx, 31, 0x36BE40u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x36BE38u, 0x36BE40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36BE40u;
label_36be40:
    // 0x36be40: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x36be40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x36be44: 0xc05cd10  jal         func_173440
    ctx->pc = 0x36BE44u;
    SET_GPR_U32(ctx, 31, 0x36BE4Cu);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x36BE44u, 0x36BE4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36BE4Cu;
label_36be4c:
    // 0x36be4c: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x36be4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x36be50: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x36be50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x36be54: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x36BE54u;
    SET_GPR_U32(ctx, 31, 0x36BE5Cu);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x36BE54u, 0x36BE5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36BE5Cu;
label_36be5c:
    // 0x36be5c: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x36be5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x36be60: 0xc0db4c0  jal         func_36D300
    ctx->pc = 0x36BE60u;
    SET_GPR_U32(ctx, 31, 0x36BE68u);
    ctx->pc = 0x36D300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36D300u, 0x36BE60u, 0x36BE68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36BE68u;
label_36be68:
    // 0x36be68: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x36be68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x36be6c: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x36be6cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x36be70: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x36BE70u;
    {
        const bool branch_taken_0x36be70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x36be70) {
            ctx->pc = 0x36BEA8u;
            goto label_36bea8;
        }
    }
    ctx->pc = 0x36BE78u;
    // 0x36be78: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x36be78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36be7c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x36be7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x36be80: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x36be80u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x36be84: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x36be84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x36be88: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x36be88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x36be8c: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x36be8cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x36be90: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x36be90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x36be94: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x36be94u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x36be98: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x36be98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x36be9c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x36be9cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x36bea0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x36bea0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x36bea4: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x36bea4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_36bea8:
    // 0x36bea8: 0x7bbf0050  lq          $ra, 0x50($sp)
    ctx->pc = 0x36bea8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x36beac: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x36beacu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x36beb0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x36beb0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x36beb4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x36beb4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x36beb8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x36beb8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36bebc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x36bebcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36bec0: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x36bec0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x36bec4: 0x3e00008  jr          $ra
    ctx->pc = 0x36BEC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36BEC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36BECCu;
}
