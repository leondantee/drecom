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

// Function: entry_00242a98
// Address: 0x242a98 - 0x243244
void entry_00242a98_0x242a98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00242a98_0x242a98");
#endif

    switch (ctx->pc) {
        case 0x242ae8u: goto label_242ae8;
        case 0x242b1cu: goto label_242b1c;
        case 0x242b70u: goto label_242b70;
        case 0x242bb8u: goto label_242bb8;
        case 0x242c88u: goto label_242c88;
        case 0x242cccu: goto label_242ccc;
        case 0x242d64u: goto label_242d64;
        case 0x242db0u: goto label_242db0;
        case 0x242e48u: goto label_242e48;
        case 0x242e9cu: goto label_242e9c;
        case 0x242f6cu: goto label_242f6c;
        case 0x242f80u: goto label_242f80;
        case 0x242fe0u: goto label_242fe0;
        case 0x243040u: goto label_243040;
        case 0x2430a4u: goto label_2430a4;
        case 0x243104u: goto label_243104;
        case 0x24316cu: goto label_24316c;
        case 0x2431d4u: goto label_2431d4;
        default: break;
    }

    ctx->pc = 0x242a98u;

label_242a98:
    // 0x242a98: 0x78880000  lq          $t0, 0x0($a0)
    ctx->pc = 0x242a98u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x242a9c: 0x78820010  lq          $v0, 0x10($a0)
    ctx->pc = 0x242a9cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x242aa0: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x242aa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x242aa4: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x242aa4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x242aa8: 0x7ca80000  sq          $t0, 0x0($a1)
    ctx->pc = 0x242aa8u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 8));
    // 0x242aac: 0x7ca20010  sq          $v0, 0x10($a1)
    ctx->pc = 0x242aacu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 16), GPR_VEC(ctx, 2));
    // 0x242ab0: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x242ab0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x242ab4: 0x1ce0fff8  bgtz        $a3, . + 4 + (-0x8 << 2)
    ctx->pc = 0x242AB4u;
    {
        const bool branch_taken_0x242ab4 = (GPR_S32(ctx, 7) > 0);
        if (branch_taken_0x242ab4) {
            ctx->pc = 0x242A98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_242a98;
        }
    }
    ctx->pc = 0x242ABCu;
    // 0x242abc: 0xc4820000  lwc1        $f2, 0x0($a0)
    ctx->pc = 0x242abcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x242ac0: 0xe4a20000  swc1        $f2, 0x0($a1)
    ctx->pc = 0x242ac0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x242ac4: 0x8fa40118  lw          $a0, 0x118($sp)
    ctx->pc = 0x242ac4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x242ac8: 0x8fa30118  lw          $v1, 0x118($sp)
    ctx->pc = 0x242ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x242acc: 0x90621308  lbu         $v0, 0x1308($v1)
    ctx->pc = 0x242accu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4872)));
    // 0x242ad0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x242ad0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x242ad4: 0x30460080  andi        $a2, $v0, 0x80
    ctx->pc = 0x242ad4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x242ad8: 0x2484026c  addiu       $a0, $a0, 0x26C
    ctx->pc = 0x242ad8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 620));
    // 0x242adc: 0x24050a40  addiu       $a1, $zero, 0xA40
    ctx->pc = 0x242adcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2624));
    // 0x242ae0: 0xc06b118  jal         func_1AC460
    ctx->pc = 0x242AE0u;
    SET_GPR_U32(ctx, 31, 0x242AE8u);
    ctx->pc = 0x1AC460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AC460u, 0x242AE0u, 0x242AE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242AE8u;
label_242ae8:
    // 0x242ae8: 0x7040f628  paddub      $fp, $v0, $zero
    ctx->pc = 0x242ae8u;
    SET_GPR_VEC(ctx, 30, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x242aec: 0x73c02628  paddub      $a0, $fp, $zero
    ctx->pc = 0x242aecu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 30), GPR_VEC(ctx, 0)));
    // 0x242af0: 0x27c50a40  addiu       $a1, $fp, 0xA40
    ctx->pc = 0x242af0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), 2624));
    // 0x242af4: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x242af4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x242af8: 0x34540002  ori         $s4, $v0, 0x2
    ctx->pc = 0x242af8u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x242afc: 0x14183c  dsll32      $v1, $s4, 0
    ctx->pc = 0x242afcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) << (32 + 0));
    // 0x242b00: 0x3c022402  lui         $v0, 0x2402
    ctx->pc = 0x242b00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)9218 << 16));
    // 0x242b04: 0x34421400  ori         $v0, $v0, 0x1400
    ctx->pc = 0x242b04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)5120);
    // 0x242b08: 0x433025  or          $a2, $v0, $v1
    ctx->pc = 0x242b08u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x242b0c: 0x27a700a0  addiu       $a3, $sp, 0xA0
    ctx->pc = 0x242b0cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x242b10: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x242b10u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x242b14: 0xc0754a4  jal         func_1D5290
    ctx->pc = 0x242B14u;
    SET_GPR_U32(ctx, 31, 0x242B1Cu);
    ctx->pc = 0x1D5290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5290u, 0x242B14u, 0x242B1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242B1Cu;
label_242b1c:
    // 0x242b1c: 0x8fa30118  lw          $v1, 0x118($sp)
    ctx->pc = 0x242b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x242b20: 0x8c7e026c  lw          $fp, 0x26C($v1)
    ctx->pc = 0x242b20u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 620)));
    // 0x242b24: 0x3c023126  lui         $v0, 0x3126
    ctx->pc = 0x242b24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12582 << 16));
    // 0x242b28: 0x34434000  ori         $v1, $v0, 0x4000
    ctx->pc = 0x242b28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x242b2c: 0x3103c  dsll32      $v0, $v1, 0
    ctx->pc = 0x242b2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 0));
    // 0x242b30: 0x34128028  ori         $s2, $zero, 0x8028
    ctx->pc = 0x242b30u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32808);
    // 0x242b34: 0x2421025  or          $v0, $s2, $v0
    ctx->pc = 0x242b34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x242b38: 0xffc20070  sd          $v0, 0x70($fp)
    ctx->pc = 0x242b38u;
    WRITE64(ADD32(GPR_U32(ctx, 30), 112), GPR_U64(ctx, 2));
    // 0x242b3c: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x242b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x242b40: 0x8c5e0270  lw          $fp, 0x270($v0)
    ctx->pc = 0x242b40u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 624)));
    // 0x242b44: 0x3c023126  lui         $v0, 0x3126
    ctx->pc = 0x242b44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12582 << 16));
    // 0x242b48: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x242b48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x242b4c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x242b4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x242b50: 0x34028028  ori         $v0, $zero, 0x8028
    ctx->pc = 0x242b50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32808);
    // 0x242b54: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x242b54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x242b58: 0xffc20070  sd          $v0, 0x70($fp)
    ctx->pc = 0x242b58u;
    WRITE64(ADD32(GPR_U32(ctx, 30), 112), GPR_U64(ctx, 2));
    // 0x242b5c: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x242b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x242b60: 0x24440274  addiu       $a0, $v0, 0x274
    ctx->pc = 0x242b60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 628));
    // 0x242b64: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x242b64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x242b68: 0xc074d44  jal         func_1D3510
    ctx->pc = 0x242B68u;
    SET_GPR_U32(ctx, 31, 0x242B70u);
    ctx->pc = 0x1D3510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D3510u, 0x242B68u, 0x242B70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242B70u;
label_242b70:
    // 0x242b70: 0x8fa30118  lw          $v1, 0x118($sp)
    ctx->pc = 0x242b70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x242b74: 0x8c760274  lw          $s6, 0x274($v1)
    ctx->pc = 0x242b74u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 628)));
    // 0x242b78: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x242b78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x242b7c: 0x8c440278  lw          $a0, 0x278($v0)
    ctx->pc = 0x242b7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 632)));
    // 0x242b80: 0x7080be28  paddub      $s7, $a0, $zero
    ctx->pc = 0x242b80u;
    SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x242b84: 0x72c02628  paddub      $a0, $s6, $zero
    ctx->pc = 0x242b84u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 22), GPR_VEC(ctx, 0)));
    // 0x242b88: 0x72e02e28  paddub      $a1, $s7, $zero
    ctx->pc = 0x242b88u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 23), GPR_VEC(ctx, 0)));
    // 0x242b8c: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x242b8cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x242b90: 0x3c024020  lui         $v0, 0x4020
    ctx->pc = 0x242b90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16416 << 16));
    // 0x242b94: 0x34472060  ori         $a3, $v0, 0x2060
    ctx->pc = 0x242b94u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8288);
    // 0x242b98: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x242b98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x242b9c: 0x34482040  ori         $t0, $v0, 0x2040
    ctx->pc = 0x242b9cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8256);
    // 0x242ba0: 0x3c034020  lui         $v1, 0x4020
    ctx->pc = 0x242ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16416 << 16));
    // 0x242ba4: 0x34692060  ori         $t1, $v1, 0x2060
    ctx->pc = 0x242ba4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8288);
    // 0x242ba8: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x242ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x242bac: 0x344a2040  ori         $t2, $v0, 0x2040
    ctx->pc = 0x242bacu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8256);
    // 0x242bb0: 0xc074db8  jal         func_1D36E0
    ctx->pc = 0x242BB0u;
    SET_GPR_U32(ctx, 31, 0x242BB8u);
    ctx->pc = 0x1D36E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D36E0u, 0x242BB0u, 0x242BB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242BB8u;
label_242bb8:
    // 0x242bb8: 0x8ec40008  lw          $a0, 0x8($s6)
    ctx->pc = 0x242bb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
    // 0x242bbc: 0x70808628  paddub      $s0, $a0, $zero
    ctx->pc = 0x242bbcu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x242bc0: 0x8ee20008  lw          $v0, 0x8($s7)
    ctx->pc = 0x242bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 8)));
    // 0x242bc4: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x242bc4u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x242bc8: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x242bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x242bcc: 0x34430002  ori         $v1, $v0, 0x2
    ctx->pc = 0x242bccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x242bd0: 0x3283c  dsll32      $a1, $v1, 0
    ctx->pc = 0x242bd0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 0));
    // 0x242bd4: 0x3c122402  lui         $s2, 0x2402
    ctx->pc = 0x242bd4u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)9218 << 16));
    // 0x242bd8: 0x36420700  ori         $v0, $s2, 0x700
    ctx->pc = 0x242bd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)1792);
    // 0x242bdc: 0x452025  or          $a0, $v0, $a1
    ctx->pc = 0x242bdcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x242be0: 0x26050050  addiu       $a1, $s0, 0x50
    ctx->pc = 0x242be0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x242be4: 0xfca40000  sd          $a0, 0x0($a1)
    ctx->pc = 0x242be4u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 4));
    // 0x242be8: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x242be8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x242bec: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x242becu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x242bf0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x242bf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x242bf4: 0x3c122402  lui         $s2, 0x2402
    ctx->pc = 0x242bf4u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)9218 << 16));
    // 0x242bf8: 0x2421025  or          $v0, $s2, $v0
    ctx->pc = 0x242bf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x242bfc: 0x26240050  addiu       $a0, $s1, 0x50
    ctx->pc = 0x242bfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
    // 0x242c00: 0xfc820000  sd          $v0, 0x0($a0)
    ctx->pc = 0x242c00u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 2));
    // 0x242c04: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x242c04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x242c08: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x242c08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x242c0c: 0x24020042  addiu       $v0, $zero, 0x42
    ctx->pc = 0x242c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x242c10: 0x433025  or          $a2, $v0, $v1
    ctx->pc = 0x242c10u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x242c14: 0xfe060020  sd          $a2, 0x20($s0)
    ctx->pc = 0x242c14u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 32), GPR_U64(ctx, 6));
    // 0x242c18: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x242c18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x242c1c: 0x4283c  dsll32      $a1, $a0, 0
    ctx->pc = 0x242c1cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 0));
    // 0x242c20: 0x24020042  addiu       $v0, $zero, 0x42
    ctx->pc = 0x242c20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x242c24: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x242c24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x242c28: 0xfe220020  sd          $v0, 0x20($s1)
    ctx->pc = 0x242c28u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 32), GPR_U64(ctx, 2));
    // 0x242c2c: 0x3c050005  lui         $a1, 0x5
    ctx->pc = 0x242c2cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)5 << 16));
    // 0x242c30: 0x34a23001  ori         $v0, $a1, 0x3001
    ctx->pc = 0x242c30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)12289);
    // 0x242c34: 0xfe020030  sd          $v0, 0x30($s0)
    ctx->pc = 0x242c34u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 48), GPR_U64(ctx, 2));
    // 0x242c38: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x242c38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
    // 0x242c3c: 0x34463001  ori         $a2, $v0, 0x3001
    ctx->pc = 0x242c3cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12289);
    // 0x242c40: 0xfe260030  sd          $a2, 0x30($s1)
    ctx->pc = 0x242c40u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 48), GPR_U64(ctx, 6));
    // 0x242c44: 0x3c04612e  lui         $a0, 0x612E
    ctx->pc = 0x242c44u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)24878 << 16));
    // 0x242c48: 0x34824000  ori         $v0, $a0, 0x4000
    ctx->pc = 0x242c48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)16384);
    // 0x242c4c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x242c4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x242c50: 0x34028021  ori         $v0, $zero, 0x8021
    ctx->pc = 0x242c50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32801);
    // 0x242c54: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x242c54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x242c58: 0xfe020070  sd          $v0, 0x70($s0)
    ctx->pc = 0x242c58u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 112), GPR_U64(ctx, 2));
    // 0x242c5c: 0x3c02612e  lui         $v0, 0x612E
    ctx->pc = 0x242c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)24878 << 16));
    // 0x242c60: 0x34444000  ori         $a0, $v0, 0x4000
    ctx->pc = 0x242c60u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x242c64: 0x4183c  dsll32      $v1, $a0, 0
    ctx->pc = 0x242c64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 0));
    // 0x242c68: 0x34028021  ori         $v0, $zero, 0x8021
    ctx->pc = 0x242c68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32801);
    // 0x242c6c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x242c6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x242c70: 0xfe220070  sd          $v0, 0x70($s1)
    ctx->pc = 0x242c70u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 112), GPR_U64(ctx, 2));
    // 0x242c74: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x242c74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x242c78: 0x2444027c  addiu       $a0, $v0, 0x27C
    ctx->pc = 0x242c78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 636));
    // 0x242c7c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x242c7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x242c80: 0xc074d44  jal         func_1D3510
    ctx->pc = 0x242C80u;
    SET_GPR_U32(ctx, 31, 0x242C88u);
    ctx->pc = 0x1D3510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D3510u, 0x242C80u, 0x242C88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242C88u;
label_242c88:
    // 0x242c88: 0x8fa30118  lw          $v1, 0x118($sp)
    ctx->pc = 0x242c88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x242c8c: 0x8c76027c  lw          $s6, 0x27C($v1)
    ctx->pc = 0x242c8cu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 636)));
    // 0x242c90: 0x8fa30118  lw          $v1, 0x118($sp)
    ctx->pc = 0x242c90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x242c94: 0x8c660280  lw          $a2, 0x280($v1)
    ctx->pc = 0x242c94u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 640)));
    // 0x242c98: 0x70c0be28  paddub      $s7, $a2, $zero
    ctx->pc = 0x242c98u;
    SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x242c9c: 0x72c02628  paddub      $a0, $s6, $zero
    ctx->pc = 0x242c9cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 22), GPR_VEC(ctx, 0)));
    // 0x242ca0: 0x72e02e28  paddub      $a1, $s7, $zero
    ctx->pc = 0x242ca0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 23), GPR_VEC(ctx, 0)));
    // 0x242ca4: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x242ca4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x242ca8: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x242ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x242cac: 0x34677f7f  ori         $a3, $v1, 0x7F7F
    ctx->pc = 0x242cacu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32639);
    // 0x242cb0: 0x24137f7f  addiu       $s3, $zero, 0x7F7F
    ctx->pc = 0x242cb0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 32639));
    // 0x242cb4: 0x72604628  paddub      $t0, $s3, $zero
    ctx->pc = 0x242cb4u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x242cb8: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x242cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x242cbc: 0x34697f7f  ori         $t1, $v1, 0x7F7F
    ctx->pc = 0x242cbcu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32639);
    // 0x242cc0: 0x240a7f7f  addiu       $t2, $zero, 0x7F7F
    ctx->pc = 0x242cc0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 32639));
    // 0x242cc4: 0xc074db8  jal         func_1D36E0
    ctx->pc = 0x242CC4u;
    SET_GPR_U32(ctx, 31, 0x242CCCu);
    ctx->pc = 0x1D36E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D36E0u, 0x242CC4u, 0x242CCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242CCCu;
label_242ccc:
    // 0x242ccc: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x242cccu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x242cd0: 0x8ec20008  lw          $v0, 0x8($s6)
    ctx->pc = 0x242cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
    // 0x242cd4: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x242cd4u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x242cd8: 0x8ef10008  lw          $s1, 0x8($s7)
    ctx->pc = 0x242cd8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 8)));
    // 0x242cdc: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x242cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x242ce0: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x242ce0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x242ce4: 0x24020048  addiu       $v0, $zero, 0x48
    ctx->pc = 0x242ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x242ce8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x242ce8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x242cec: 0xfe020020  sd          $v0, 0x20($s0)
    ctx->pc = 0x242cecu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 32), GPR_U64(ctx, 2));
    // 0x242cf0: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x242cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x242cf4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x242cf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x242cf8: 0x24030048  addiu       $v1, $zero, 0x48
    ctx->pc = 0x242cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x242cfc: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x242cfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x242d00: 0xfe220020  sd          $v0, 0x20($s1)
    ctx->pc = 0x242d00u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 32), GPR_U64(ctx, 2));
    // 0x242d04: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x242d04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
    // 0x242d08: 0x34423001  ori         $v0, $v0, 0x3001
    ctx->pc = 0x242d08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12289);
    // 0x242d0c: 0xfe020030  sd          $v0, 0x30($s0)
    ctx->pc = 0x242d0cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 48), GPR_U64(ctx, 2));
    // 0x242d10: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x242d10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
    // 0x242d14: 0x34433001  ori         $v1, $v0, 0x3001
    ctx->pc = 0x242d14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12289);
    // 0x242d18: 0xfe230030  sd          $v1, 0x30($s1)
    ctx->pc = 0x242d18u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 48), GPR_U64(ctx, 3));
    // 0x242d1c: 0x3c026126  lui         $v0, 0x6126
    ctx->pc = 0x242d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)24870 << 16));
    // 0x242d20: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x242d20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x242d24: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x242d24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x242d28: 0x34028005  ori         $v0, $zero, 0x8005
    ctx->pc = 0x242d28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32773);
    // 0x242d2c: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x242d2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x242d30: 0xfe030070  sd          $v1, 0x70($s0)
    ctx->pc = 0x242d30u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 112), GPR_U64(ctx, 3));
    // 0x242d34: 0x3c026126  lui         $v0, 0x6126
    ctx->pc = 0x242d34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)24870 << 16));
    // 0x242d38: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x242d38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x242d3c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x242d3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x242d40: 0x34028005  ori         $v0, $zero, 0x8005
    ctx->pc = 0x242d40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32773);
    // 0x242d44: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x242d44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x242d48: 0xfe220070  sd          $v0, 0x70($s1)
    ctx->pc = 0x242d48u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 112), GPR_U64(ctx, 2));
    // 0x242d4c: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x242d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x242d50: 0x24460284  addiu       $a2, $v0, 0x284
    ctx->pc = 0x242d50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 644));
    // 0x242d54: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x242d54u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x242d58: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x242d58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x242d5c: 0xc074d44  jal         func_1D3510
    ctx->pc = 0x242D5Cu;
    SET_GPR_U32(ctx, 31, 0x242D64u);
    ctx->pc = 0x1D3510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D3510u, 0x242D5Cu, 0x242D64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242D64u;
label_242d64:
    // 0x242d64: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x242d64u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x242d68: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x242d68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x242d6c: 0x8c560284  lw          $s6, 0x284($v0)
    ctx->pc = 0x242d6cu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 644)));
    // 0x242d70: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x242d70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x242d74: 0x8c450288  lw          $a1, 0x288($v0)
    ctx->pc = 0x242d74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 648)));
    // 0x242d78: 0x70a0be28  paddub      $s7, $a1, $zero
    ctx->pc = 0x242d78u;
    SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x242d7c: 0x72c02628  paddub      $a0, $s6, $zero
    ctx->pc = 0x242d7cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 22), GPR_VEC(ctx, 0)));
    // 0x242d80: 0x72e02e28  paddub      $a1, $s7, $zero
    ctx->pc = 0x242d80u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 23), GPR_VEC(ctx, 0)));
    // 0x242d84: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x242d84u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x242d88: 0x3c02504f  lui         $v0, 0x504F
    ctx->pc = 0x242d88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20559 << 16));
    // 0x242d8c: 0x3447cfcf  ori         $a3, $v0, 0xCFCF
    ctx->pc = 0x242d8cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53199);
    // 0x242d90: 0x3c02004f  lui         $v0, 0x4F
    ctx->pc = 0x242d90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
    // 0x242d94: 0x3448cfcf  ori         $t0, $v0, 0xCFCF
    ctx->pc = 0x242d94u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53199);
    // 0x242d98: 0x3c02504f  lui         $v0, 0x504F
    ctx->pc = 0x242d98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20559 << 16));
    // 0x242d9c: 0x3449cfcf  ori         $t1, $v0, 0xCFCF
    ctx->pc = 0x242d9cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53199);
    // 0x242da0: 0x3c03004f  lui         $v1, 0x4F
    ctx->pc = 0x242da0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)79 << 16));
    // 0x242da4: 0x346acfcf  ori         $t2, $v1, 0xCFCF
    ctx->pc = 0x242da4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)53199);
    // 0x242da8: 0xc074db8  jal         func_1D36E0
    ctx->pc = 0x242DA8u;
    SET_GPR_U32(ctx, 31, 0x242DB0u);
    ctx->pc = 0x1D36E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D36E0u, 0x242DA8u, 0x242DB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242DB0u;
label_242db0:
    // 0x242db0: 0x8ed00008  lw          $s0, 0x8($s6)
    ctx->pc = 0x242db0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
    // 0x242db4: 0x8ee20008  lw          $v0, 0x8($s7)
    ctx->pc = 0x242db4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 8)));
    // 0x242db8: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x242db8u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x242dbc: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x242dbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x242dc0: 0x5103c  dsll32      $v0, $a1, 0
    ctx->pc = 0x242dc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 0));
    // 0x242dc4: 0x24030048  addiu       $v1, $zero, 0x48
    ctx->pc = 0x242dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x242dc8: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x242dc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x242dcc: 0xfe020020  sd          $v0, 0x20($s0)
    ctx->pc = 0x242dccu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 32), GPR_U64(ctx, 2));
    // 0x242dd0: 0x24120080  addiu       $s2, $zero, 0x80
    ctx->pc = 0x242dd0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x242dd4: 0x12183c  dsll32      $v1, $s2, 0
    ctx->pc = 0x242dd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) << (32 + 0));
    // 0x242dd8: 0x24020048  addiu       $v0, $zero, 0x48
    ctx->pc = 0x242dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x242ddc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x242ddcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x242de0: 0xfe220020  sd          $v0, 0x20($s1)
    ctx->pc = 0x242de0u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 32), GPR_U64(ctx, 2));
    // 0x242de4: 0x3c060005  lui         $a2, 0x5
    ctx->pc = 0x242de4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)5 << 16));
    // 0x242de8: 0x34c23001  ori         $v0, $a2, 0x3001
    ctx->pc = 0x242de8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)12289);
    // 0x242dec: 0xfe020030  sd          $v0, 0x30($s0)
    ctx->pc = 0x242decu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 48), GPR_U64(ctx, 2));
    // 0x242df0: 0x3c050005  lui         $a1, 0x5
    ctx->pc = 0x242df0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)5 << 16));
    // 0x242df4: 0x34a43001  ori         $a0, $a1, 0x3001
    ctx->pc = 0x242df4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)12289);
    // 0x242df8: 0xfe240030  sd          $a0, 0x30($s1)
    ctx->pc = 0x242df8u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 48), GPR_U64(ctx, 4));
    // 0x242dfc: 0x3c026126  lui         $v0, 0x6126
    ctx->pc = 0x242dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)24870 << 16));
    // 0x242e00: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x242e00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x242e04: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x242e04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x242e08: 0x34028005  ori         $v0, $zero, 0x8005
    ctx->pc = 0x242e08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32773);
    // 0x242e0c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x242e0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x242e10: 0xfe020070  sd          $v0, 0x70($s0)
    ctx->pc = 0x242e10u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 112), GPR_U64(ctx, 2));
    // 0x242e14: 0x3c046126  lui         $a0, 0x6126
    ctx->pc = 0x242e14u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)24870 << 16));
    // 0x242e18: 0x34824000  ori         $v0, $a0, 0x4000
    ctx->pc = 0x242e18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)16384);
    // 0x242e1c: 0x2283c  dsll32      $a1, $v0, 0
    ctx->pc = 0x242e1cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 0));
    // 0x242e20: 0x34028005  ori         $v0, $zero, 0x8005
    ctx->pc = 0x242e20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32773);
    // 0x242e24: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x242e24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x242e28: 0xfe220070  sd          $v0, 0x70($s1)
    ctx->pc = 0x242e28u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 112), GPR_U64(ctx, 2));
    // 0x242e2c: 0x8fa40118  lw          $a0, 0x118($sp)
    ctx->pc = 0x242e2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x242e30: 0x2485028c  addiu       $a1, $a0, 0x28C
    ctx->pc = 0x242e30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 652));
    // 0x242e34: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x242e34u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x242e38: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x242e38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x242e3c: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x242e3cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x242e40: 0xc074d44  jal         func_1D3510
    ctx->pc = 0x242E40u;
    SET_GPR_U32(ctx, 31, 0x242E48u);
    ctx->pc = 0x1D3510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D3510u, 0x242E40u, 0x242E48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242E48u;
label_242e48:
    // 0x242e48: 0x8fb60118  lw          $s6, 0x118($sp)
    ctx->pc = 0x242e48u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x242e4c: 0x8ec2028c  lw          $v0, 0x28C($s6)
    ctx->pc = 0x242e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 652)));
    // 0x242e50: 0x7040b628  paddub      $s6, $v0, $zero
    ctx->pc = 0x242e50u;
    SET_GPR_VEC(ctx, 22, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x242e54: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x242e54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x242e58: 0x8c470290  lw          $a3, 0x290($v0)
    ctx->pc = 0x242e58u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 656)));
    // 0x242e5c: 0x70e0be28  paddub      $s7, $a3, $zero
    ctx->pc = 0x242e5cu;
    SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x242e60: 0x72c02628  paddub      $a0, $s6, $zero
    ctx->pc = 0x242e60u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 22), GPR_VEC(ctx, 0)));
    // 0x242e64: 0x72e02e28  paddub      $a1, $s7, $zero
    ctx->pc = 0x242e64u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 23), GPR_VEC(ctx, 0)));
    // 0x242e68: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x242e68u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x242e6c: 0x3c087040  lui         $t0, 0x7040
    ctx->pc = 0x242e6cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)28736 << 16));
    // 0x242e70: 0x35074040  ori         $a3, $t0, 0x4040
    ctx->pc = 0x242e70u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)16448);
    // 0x242e74: 0x3c090040  lui         $t1, 0x40
    ctx->pc = 0x242e74u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)64 << 16));
    // 0x242e78: 0x35224040  ori         $v0, $t1, 0x4040
    ctx->pc = 0x242e78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)16448);
    // 0x242e7c: 0x70404628  paddub      $t0, $v0, $zero
    ctx->pc = 0x242e7cu;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x242e80: 0x3c0a7040  lui         $t2, 0x7040
    ctx->pc = 0x242e80u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)28736 << 16));
    // 0x242e84: 0x35494040  ori         $t1, $t2, 0x4040
    ctx->pc = 0x242e84u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)16448);
    // 0x242e88: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x242e88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x242e8c: 0x34424040  ori         $v0, $v0, 0x4040
    ctx->pc = 0x242e8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16448);
    // 0x242e90: 0x70405628  paddub      $t2, $v0, $zero
    ctx->pc = 0x242e90u;
    SET_GPR_VEC(ctx, 10, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x242e94: 0xc074db8  jal         func_1D36E0
    ctx->pc = 0x242E94u;
    SET_GPR_U32(ctx, 31, 0x242E9Cu);
    ctx->pc = 0x1D36E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D36E0u, 0x242E94u, 0x242E9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242E9Cu;
label_242e9c:
    // 0x242e9c: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x242e9cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x242ea0: 0x8ed10008  lw          $s1, 0x8($s6)
    ctx->pc = 0x242ea0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
    // 0x242ea4: 0x72208628  paddub      $s0, $s1, $zero
    ctx->pc = 0x242ea4u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x242ea8: 0x8ee20008  lw          $v0, 0x8($s7)
    ctx->pc = 0x242ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 8)));
    // 0x242eac: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x242eacu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x242eb0: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x242eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x242eb4: 0x34550002  ori         $s5, $v0, 0x2
    ctx->pc = 0x242eb4u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x242eb8: 0x15203c  dsll32      $a0, $s5, 0
    ctx->pc = 0x242eb8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 21) << (32 + 0));
    // 0x242ebc: 0x3c022402  lui         $v0, 0x2402
    ctx->pc = 0x242ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)9218 << 16));
    // 0x242ec0: 0x34430700  ori         $v1, $v0, 0x700
    ctx->pc = 0x242ec0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1792);
    // 0x242ec4: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x242ec4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x242ec8: 0x26020050  addiu       $v0, $s0, 0x50
    ctx->pc = 0x242ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x242ecc: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x242eccu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x242ed0: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x242ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x242ed4: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x242ed4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x242ed8: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x242ed8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x242edc: 0x3c022402  lui         $v0, 0x2402
    ctx->pc = 0x242edcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)9218 << 16));
    // 0x242ee0: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x242ee0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x242ee4: 0x26220050  addiu       $v0, $s1, 0x50
    ctx->pc = 0x242ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
    // 0x242ee8: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x242ee8u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x242eec: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x242eecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x242ef0: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x242ef0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x242ef4: 0x24020042  addiu       $v0, $zero, 0x42
    ctx->pc = 0x242ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x242ef8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x242ef8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x242efc: 0xfe020020  sd          $v0, 0x20($s0)
    ctx->pc = 0x242efcu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 32), GPR_U64(ctx, 2));
    // 0x242f00: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x242f00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x242f04: 0x3103c  dsll32      $v0, $v1, 0
    ctx->pc = 0x242f04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 0));
    // 0x242f08: 0x24030042  addiu       $v1, $zero, 0x42
    ctx->pc = 0x242f08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x242f0c: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x242f0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x242f10: 0xfe220020  sd          $v0, 0x20($s1)
    ctx->pc = 0x242f10u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 32), GPR_U64(ctx, 2));
    // 0x242f14: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x242f14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
    // 0x242f18: 0x34431001  ori         $v1, $v0, 0x1001
    ctx->pc = 0x242f18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4097);
    // 0x242f1c: 0xfe030030  sd          $v1, 0x30($s0)
    ctx->pc = 0x242f1cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 48), GPR_U64(ctx, 3));
    // 0x242f20: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x242f20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
    // 0x242f24: 0x34421001  ori         $v0, $v0, 0x1001
    ctx->pc = 0x242f24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4097);
    // 0x242f28: 0xfe220030  sd          $v0, 0x30($s1)
    ctx->pc = 0x242f28u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 48), GPR_U64(ctx, 2));
    // 0x242f2c: 0x3c02612e  lui         $v0, 0x612E
    ctx->pc = 0x242f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)24878 << 16));
    // 0x242f30: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x242f30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x242f34: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x242f34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x242f38: 0x34028011  ori         $v0, $zero, 0x8011
    ctx->pc = 0x242f38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32785);
    // 0x242f3c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x242f3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x242f40: 0xfe020070  sd          $v0, 0x70($s0)
    ctx->pc = 0x242f40u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 112), GPR_U64(ctx, 2));
    // 0x242f44: 0x3c02612e  lui         $v0, 0x612E
    ctx->pc = 0x242f44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)24878 << 16));
    // 0x242f48: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x242f48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x242f4c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x242f4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x242f50: 0x34028011  ori         $v0, $zero, 0x8011
    ctx->pc = 0x242f50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32785);
    // 0x242f54: 0x432025  or          $a0, $v0, $v1
    ctx->pc = 0x242f54u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x242f58: 0xfe240070  sd          $a0, 0x70($s1)
    ctx->pc = 0x242f58u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 112), GPR_U64(ctx, 4));
    // 0x242f5c: 0x8fa50118  lw          $a1, 0x118($sp)
    ctx->pc = 0x242f5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x242f60: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x242f60u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x242f64: 0xc092470  jal         func_2491C0
    ctx->pc = 0x242F64u;
    SET_GPR_U32(ctx, 31, 0x242F6Cu);
    ctx->pc = 0x2491C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2491C0u, 0x242F64u, 0x242F6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242F6Cu;
label_242f6c:
    // 0x242f6c: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x242f6cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x242f70: 0x8fa80118  lw          $t0, 0x118($sp)
    ctx->pc = 0x242f70u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x242f74: 0x71002628  paddub      $a0, $t0, $zero
    ctx->pc = 0x242f74u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x242f78: 0xc092aec  jal         func_24ABB0
    ctx->pc = 0x242F78u;
    SET_GPR_U32(ctx, 31, 0x242F80u);
    ctx->pc = 0x24ABB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24ABB0u, 0x242F78u, 0x242F80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242F80u;
label_242f80:
    // 0x242f80: 0x3c04005d  lui         $a0, 0x5D
    ctx->pc = 0x242f80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)93 << 16));
    // 0x242f84: 0x24850ae8  addiu       $a1, $a0, 0xAE8
    ctx->pc = 0x242f84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 2792));
    // 0x242f88: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x242f88u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0AE8u));
    // 0x242f8c: 0x2447000f  addiu       $a3, $v0, 0xF
    ctx->pc = 0x242f8cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x242f90: 0xaca70000  sw          $a3, 0x0($a1)
    ctx->pc = 0x242f90u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x5D0AE8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D0AE8u, _value); } while (0);
    // 0x242f94: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x242f94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x242f98: 0x24440ae8  addiu       $a0, $v0, 0xAE8
    ctx->pc = 0x242f98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 2792));
    // 0x242f9c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x242f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0AE8u));
    // 0x242fa0: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x242fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x242fa4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x242fa4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x242fa8: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x242fa8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x242fac: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x242facu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x242fb0: 0x8c260ae8  lw          $a2, 0xAE8($at)
    ctx->pc = 0x242fb0u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x5D0AE8u));
    // 0x242fb4: 0x70c0a628  paddub      $s4, $a2, $zero
    ctx->pc = 0x242fb4u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x242fb8: 0x8fa40118  lw          $a0, 0x118($sp)
    ctx->pc = 0x242fb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x242fbc: 0x8c850058  lw          $a1, 0x58($a0)
    ctx->pc = 0x242fbcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
    // 0x242fc0: 0x24a20120  addiu       $v0, $a1, 0x120
    ctx->pc = 0x242fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 288));
    // 0x242fc4: 0x70409628  paddub      $s2, $v0, $zero
    ctx->pc = 0x242fc4u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x242fc8: 0x8e450034  lw          $a1, 0x34($s2)
    ctx->pc = 0x242fc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
    // 0x242fcc: 0xafa50108  sw          $a1, 0x108($sp)
    ctx->pc = 0x242fccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 264), GPR_U32(ctx, 5));
    // 0x242fd0: 0x72402628  paddub      $a0, $s2, $zero
    ctx->pc = 0x242fd0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x242fd4: 0x72802e28  paddub      $a1, $s4, $zero
    ctx->pc = 0x242fd4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x242fd8: 0xc07801c  jal         func_1E0070
    ctx->pc = 0x242FD8u;
    SET_GPR_U32(ctx, 31, 0x242FE0u);
    ctx->pc = 0x1E0070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E0070u, 0x242FD8u, 0x242FE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242FE0u;
label_242fe0:
    // 0x242fe0: 0x7040a628  paddub      $s4, $v0, $zero
    ctx->pc = 0x242fe0u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x242fe4: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x242fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x242fe8: 0x24430ae8  addiu       $v1, $v0, 0xAE8
    ctx->pc = 0x242fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 2792));
    // 0x242fec: 0xac740000  sw          $s4, 0x0($v1)
    ctx->pc = 0x242fecu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 20)); ps2TraceGuestWrite(rdram, 0x5D0AE8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D0AE8u, _value); } while (0);
    // 0x242ff0: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x242ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x242ff4: 0x24420ae8  addiu       $v0, $v0, 0xAE8
    ctx->pc = 0x242ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2792));
    // 0x242ff8: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x242ff8u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x5D0AE8u));
    // 0x242ffc: 0x24c7000f  addiu       $a3, $a2, 0xF
    ctx->pc = 0x242ffcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 15));
    // 0x243000: 0xac470000  sw          $a3, 0x0($v0)
    ctx->pc = 0x243000u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x5D0AE8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D0AE8u, _value); } while (0);
    // 0x243004: 0x3c08005d  lui         $t0, 0x5D
    ctx->pc = 0x243004u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)93 << 16));
    // 0x243008: 0x25020ae8  addiu       $v0, $t0, 0xAE8
    ctx->pc = 0x243008u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 2792));
    // 0x24300c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x24300cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0AE8u));
    // 0x243010: 0x241efff0  addiu       $fp, $zero, -0x10
    ctx->pc = 0x243010u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x243014: 0x7e1824  and         $v1, $v1, $fp
    ctx->pc = 0x243014u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 30));
    // 0x243018: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x243018u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x24301c: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x24301cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x243020: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x243020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x243024: 0x245201b0  addiu       $s2, $v0, 0x1B0
    ctx->pc = 0x243024u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 432));
    // 0x243028: 0x8e420034  lw          $v0, 0x34($s2)
    ctx->pc = 0x243028u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
    // 0x24302c: 0xafa20108  sw          $v0, 0x108($sp)
    ctx->pc = 0x24302cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 264), GPR_U32(ctx, 2));
    // 0x243030: 0x72402628  paddub      $a0, $s2, $zero
    ctx->pc = 0x243030u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x243034: 0x72802e28  paddub      $a1, $s4, $zero
    ctx->pc = 0x243034u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x243038: 0xc07801c  jal         func_1E0070
    ctx->pc = 0x243038u;
    SET_GPR_U32(ctx, 31, 0x243040u);
    ctx->pc = 0x1E0070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E0070u, 0x243038u, 0x243040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243040u;
label_243040:
    // 0x243040: 0x7040a628  paddub      $s4, $v0, $zero
    ctx->pc = 0x243040u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x243044: 0x3c1e005d  lui         $fp, 0x5D
    ctx->pc = 0x243044u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)93 << 16));
    // 0x243048: 0x27c20ae8  addiu       $v0, $fp, 0xAE8
    ctx->pc = 0x243048u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 2792));
    // 0x24304c: 0xac540000  sw          $s4, 0x0($v0)
    ctx->pc = 0x24304cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 20)); ps2TraceGuestWrite(rdram, 0x5D0AE8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D0AE8u, _value); } while (0);
    // 0x243050: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x243050u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x243054: 0x24430ae8  addiu       $v1, $v0, 0xAE8
    ctx->pc = 0x243054u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 2792));
    // 0x243058: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x243058u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0AE8u));
    // 0x24305c: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x24305cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x243060: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x243060u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D0AE8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D0AE8u, _value); } while (0);
    // 0x243064: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x243064u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x243068: 0x24440ae8  addiu       $a0, $v0, 0xAE8
    ctx->pc = 0x243068u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 2792));
    // 0x24306c: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x24306cu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x5D0AE8u));
    // 0x243070: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x243070u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x243074: 0xa21824  and         $v1, $a1, $v0
    ctx->pc = 0x243074u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x243078: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x243078u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x24307c: 0x8fb60118  lw          $s6, 0x118($sp)
    ctx->pc = 0x24307cu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x243080: 0x8ec20058  lw          $v0, 0x58($s6)
    ctx->pc = 0x243080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 88)));
    // 0x243084: 0x244403f0  addiu       $a0, $v0, 0x3F0
    ctx->pc = 0x243084u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1008));
    // 0x243088: 0x70809628  paddub      $s2, $a0, $zero
    ctx->pc = 0x243088u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x24308c: 0x8e470034  lw          $a3, 0x34($s2)
    ctx->pc = 0x24308cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
    // 0x243090: 0xafa70108  sw          $a3, 0x108($sp)
    ctx->pc = 0x243090u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 264), GPR_U32(ctx, 7));
    // 0x243094: 0x72402628  paddub      $a0, $s2, $zero
    ctx->pc = 0x243094u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x243098: 0x72802e28  paddub      $a1, $s4, $zero
    ctx->pc = 0x243098u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x24309c: 0xc07801c  jal         func_1E0070
    ctx->pc = 0x24309Cu;
    SET_GPR_U32(ctx, 31, 0x2430A4u);
    ctx->pc = 0x1E0070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E0070u, 0x24309Cu, 0x2430A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2430A4u;
label_2430a4:
    // 0x2430a4: 0x7040a628  paddub      $s4, $v0, $zero
    ctx->pc = 0x2430a4u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2430a8: 0x3c08005d  lui         $t0, 0x5D
    ctx->pc = 0x2430a8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)93 << 16));
    // 0x2430ac: 0x25020ae8  addiu       $v0, $t0, 0xAE8
    ctx->pc = 0x2430acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 2792));
    // 0x2430b0: 0xac540000  sw          $s4, 0x0($v0)
    ctx->pc = 0x2430b0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 20)); ps2TraceGuestWrite(rdram, 0x5D0AE8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D0AE8u, _value); } while (0);
    // 0x2430b4: 0x3c09005d  lui         $t1, 0x5D
    ctx->pc = 0x2430b4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)93 << 16));
    // 0x2430b8: 0x25230ae8  addiu       $v1, $t1, 0xAE8
    ctx->pc = 0x2430b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), 2792));
    // 0x2430bc: 0x8c6a0000  lw          $t2, 0x0($v1)
    ctx->pc = 0x2430bcu;
    SET_GPR_S32(ctx, 10, (int32_t)FAST_READ32(0x5D0AE8u));
    // 0x2430c0: 0x2542000f  addiu       $v0, $t2, 0xF
    ctx->pc = 0x2430c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), 15));
    // 0x2430c4: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x2430c4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D0AE8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D0AE8u, _value); } while (0);
    // 0x2430c8: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x2430c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x2430cc: 0x24440ae8  addiu       $a0, $v0, 0xAE8
    ctx->pc = 0x2430ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 2792));
    // 0x2430d0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2430d0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0AE8u));
    // 0x2430d4: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x2430d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x2430d8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2430d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2430dc: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x2430dcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x2430e0: 0x8fa50118  lw          $a1, 0x118($sp)
    ctx->pc = 0x2430e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x2430e4: 0x8ca20058  lw          $v0, 0x58($a1)
    ctx->pc = 0x2430e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 88)));
    // 0x2430e8: 0x245205a0  addiu       $s2, $v0, 0x5A0
    ctx->pc = 0x2430e8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 1440));
    // 0x2430ec: 0x8e440034  lw          $a0, 0x34($s2)
    ctx->pc = 0x2430ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
    // 0x2430f0: 0xafa40108  sw          $a0, 0x108($sp)
    ctx->pc = 0x2430f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 264), GPR_U32(ctx, 4));
    // 0x2430f4: 0x72402628  paddub      $a0, $s2, $zero
    ctx->pc = 0x2430f4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x2430f8: 0x72802e28  paddub      $a1, $s4, $zero
    ctx->pc = 0x2430f8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x2430fc: 0xc07801c  jal         func_1E0070
    ctx->pc = 0x2430FCu;
    SET_GPR_U32(ctx, 31, 0x243104u);
    ctx->pc = 0x1E0070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E0070u, 0x2430FCu, 0x243104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243104u;
label_243104:
    // 0x243104: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x243104u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x243108: 0x70a0a628  paddub      $s4, $a1, $zero
    ctx->pc = 0x243108u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x24310c: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x24310cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x243110: 0x24420ae8  addiu       $v0, $v0, 0xAE8
    ctx->pc = 0x243110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2792));
    // 0x243114: 0xac540000  sw          $s4, 0x0($v0)
    ctx->pc = 0x243114u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 20)); ps2TraceGuestWrite(rdram, 0x5D0AE8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D0AE8u, _value); } while (0);
    // 0x243118: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x243118u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x24311c: 0x24520ae8  addiu       $s2, $v0, 0xAE8
    ctx->pc = 0x24311cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 2792));
    // 0x243120: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x243120u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0AE8u));
    // 0x243124: 0x2444000f  addiu       $a0, $v0, 0xF
    ctx->pc = 0x243124u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x243128: 0xae440000  sw          $a0, 0x0($s2)
    ctx->pc = 0x243128u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x5D0AE8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D0AE8u, _value); } while (0);
    // 0x24312c: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x24312cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x243130: 0x24430ae8  addiu       $v1, $v0, 0xAE8
    ctx->pc = 0x243130u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 2792));
    // 0x243134: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x243134u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0AE8u));
    // 0x243138: 0x2406fff0  addiu       $a2, $zero, -0x10
    ctx->pc = 0x243138u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x24313c: 0x462024  and         $a0, $v0, $a2
    ctx->pc = 0x24313cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x243140: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x243140u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x243144: 0x8fa50118  lw          $a1, 0x118($sp)
    ctx->pc = 0x243144u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x243148: 0x8ca20058  lw          $v0, 0x58($a1)
    ctx->pc = 0x243148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 88)));
    // 0x24314c: 0x24420480  addiu       $v0, $v0, 0x480
    ctx->pc = 0x24314cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1152));
    // 0x243150: 0x70409628  paddub      $s2, $v0, $zero
    ctx->pc = 0x243150u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x243154: 0x8e420034  lw          $v0, 0x34($s2)
    ctx->pc = 0x243154u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
    // 0x243158: 0xafa20108  sw          $v0, 0x108($sp)
    ctx->pc = 0x243158u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 264), GPR_U32(ctx, 2));
    // 0x24315c: 0x72402628  paddub      $a0, $s2, $zero
    ctx->pc = 0x24315cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x243160: 0x72802e28  paddub      $a1, $s4, $zero
    ctx->pc = 0x243160u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x243164: 0xc07801c  jal         func_1E0070
    ctx->pc = 0x243164u;
    SET_GPR_U32(ctx, 31, 0x24316Cu);
    ctx->pc = 0x1E0070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E0070u, 0x243164u, 0x24316Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24316Cu;
label_24316c:
    // 0x24316c: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x24316cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x243170: 0x70a0a628  paddub      $s4, $a1, $zero
    ctx->pc = 0x243170u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x243174: 0x3c06005d  lui         $a2, 0x5D
    ctx->pc = 0x243174u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)93 << 16));
    // 0x243178: 0x24c20ae8  addiu       $v0, $a2, 0xAE8
    ctx->pc = 0x243178u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 2792));
    // 0x24317c: 0xac540000  sw          $s4, 0x0($v0)
    ctx->pc = 0x24317cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 20)); ps2TraceGuestWrite(rdram, 0x5D0AE8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D0AE8u, _value); } while (0);
    // 0x243180: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x243180u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x243184: 0x24440ae8  addiu       $a0, $v0, 0xAE8
    ctx->pc = 0x243184u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 2792));
    // 0x243188: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x243188u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0AE8u));
    // 0x24318c: 0x2462000f  addiu       $v0, $v1, 0xF
    ctx->pc = 0x24318cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x243190: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x243190u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D0AE8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D0AE8u, _value); } while (0);
    // 0x243194: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x243194u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x243198: 0x24440ae8  addiu       $a0, $v0, 0xAE8
    ctx->pc = 0x243198u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 2792));
    // 0x24319c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x24319cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0AE8u));
    // 0x2431a0: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x2431a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x2431a4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2431a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2431a8: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x2431a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x2431ac: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x2431acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x2431b0: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x2431b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x2431b4: 0x24440510  addiu       $a0, $v0, 0x510
    ctx->pc = 0x2431b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1296));
    // 0x2431b8: 0x70809628  paddub      $s2, $a0, $zero
    ctx->pc = 0x2431b8u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x2431bc: 0x8e450034  lw          $a1, 0x34($s2)
    ctx->pc = 0x2431bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
    // 0x2431c0: 0xafa50108  sw          $a1, 0x108($sp)
    ctx->pc = 0x2431c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 264), GPR_U32(ctx, 5));
    // 0x2431c4: 0x72402628  paddub      $a0, $s2, $zero
    ctx->pc = 0x2431c4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x2431c8: 0x72802e28  paddub      $a1, $s4, $zero
    ctx->pc = 0x2431c8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x2431cc: 0xc07801c  jal         func_1E0070
    ctx->pc = 0x2431CCu;
    SET_GPR_U32(ctx, 31, 0x2431D4u);
    ctx->pc = 0x1E0070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E0070u, 0x2431CCu, 0x2431D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2431D4u;
label_2431d4:
    // 0x2431d4: 0x7040a628  paddub      $s4, $v0, $zero
    ctx->pc = 0x2431d4u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2431d8: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x2431d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x2431dc: 0x24760ae8  addiu       $s6, $v1, 0xAE8
    ctx->pc = 0x2431dcu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), 2792));
    // 0x2431e0: 0xaed40000  sw          $s4, 0x0($s6)
    ctx->pc = 0x2431e0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 20)); ps2TraceGuestWrite(rdram, 0x5D0AE8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D0AE8u, _value); } while (0);
    // 0x2431e4: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x2431e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x2431e8: 0x24660ae8  addiu       $a2, $v1, 0xAE8
    ctx->pc = 0x2431e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 2792));
    // 0x2431ec: 0x8cc70000  lw          $a3, 0x0($a2)
    ctx->pc = 0x2431ecu;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x5D0AE8u));
    // 0x2431f0: 0x24e3000f  addiu       $v1, $a3, 0xF
    ctx->pc = 0x2431f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 15));
    // 0x2431f4: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x2431f4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D0AE8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D0AE8u, _value); } while (0);
    // 0x2431f8: 0x3c13005d  lui         $s3, 0x5D
    ctx->pc = 0x2431f8u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)93 << 16));
    // 0x2431fc: 0x26690ae8  addiu       $t1, $s3, 0xAE8
    ctx->pc = 0x2431fcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 19), 2792));
    // 0x243200: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x243200u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0AE8u));
    // 0x243204: 0x240afff0  addiu       $t2, $zero, -0x10
    ctx->pc = 0x243204u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x243208: 0x6a3024  and         $a2, $v1, $t2
    ctx->pc = 0x243208u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & GPR_U64(ctx, 10));
    // 0x24320c: 0xad260000  sw          $a2, 0x0($t1)
    ctx->pc = 0x24320cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 6));
    // 0x243210: 0x7bbf0090  lq          $ra, 0x90($sp)
    ctx->pc = 0x243210u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x243214: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x243214u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x243218: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x243218u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x24321c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x24321cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x243220: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x243220u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x243224: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x243224u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x243228: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x243228u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x24322c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x24322cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x243230: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x243230u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x243234: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x243234u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x243238: 0x27bd0120  addiu       $sp, $sp, 0x120
    ctx->pc = 0x243238u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x24323c: 0x3e00008  jr          $ra
    ctx->pc = 0x24323Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24323Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x243244u;
}
