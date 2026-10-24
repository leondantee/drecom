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

// Function: entry_00236930
// Address: 0x236930 - 0x236d10
void entry_00236930_0x236930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00236930_0x236930");
#endif

    switch (ctx->pc) {
        case 0x236984u: goto label_236984;
        case 0x2369c0u: goto label_2369c0;
        case 0x236a38u: goto label_236a38;
        case 0x236a8cu: goto label_236a8c;
        case 0x236b5cu: goto label_236b5c;
        case 0x236ba8u: goto label_236ba8;
        case 0x236c3cu: goto label_236c3c;
        case 0x236c80u: goto label_236c80;
        default: break;
    }

    ctx->pc = 0x236930u;

label_236930:
    // 0x236930: 0x78c30000  lq          $v1, 0x0($a2)
    ctx->pc = 0x236930u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x236934: 0x78c70010  lq          $a3, 0x10($a2)
    ctx->pc = 0x236934u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x236938: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x236938u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x23693c: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x23693cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x236940: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x236940u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x236944: 0x7c470010  sq          $a3, 0x10($v0)
    ctx->pc = 0x236944u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), GPR_VEC(ctx, 7));
    // 0x236948: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x236948u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x23694c: 0x1c80fff8  bgtz        $a0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x23694Cu;
    {
        const bool branch_taken_0x23694c = (GPR_S32(ctx, 4) > 0);
        if (branch_taken_0x23694c) {
            ctx->pc = 0x236930u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_236930;
        }
    }
    ctx->pc = 0x236954u;
    // 0x236954: 0xc4c80000  lwc1        $f8, 0x0($a2)
    ctx->pc = 0x236954u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x236958: 0xe4480000  swc1        $f8, 0x0($v0)
    ctx->pc = 0x236958u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x23695c: 0x8fa902e8  lw          $t1, 0x2E8($sp)
    ctx->pc = 0x23695cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 744)));
    // 0x236960: 0x8fa202e8  lw          $v0, 0x2E8($sp)
    ctx->pc = 0x236960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 744)));
    // 0x236964: 0x90421308  lbu         $v0, 0x1308($v0)
    ctx->pc = 0x236964u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4872)));
    // 0x236968: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x236968u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x23696c: 0x30860080  andi        $a2, $a0, 0x80
    ctx->pc = 0x23696cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)128);
    // 0x236970: 0x2524026c  addiu       $a0, $t1, 0x26C
    ctx->pc = 0x236970u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), 620));
    // 0x236974: 0x24030a40  addiu       $v1, $zero, 0xA40
    ctx->pc = 0x236974u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2624));
    // 0x236978: 0x70602e28  paddub      $a1, $v1, $zero
    ctx->pc = 0x236978u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x23697c: 0xc06b118  jal         func_1AC460
    ctx->pc = 0x23697Cu;
    SET_GPR_U32(ctx, 31, 0x236984u);
    ctx->pc = 0x1AC460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AC460u, 0x23697Cu, 0x236984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236984u;
label_236984:
    // 0x236984: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x236984u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x236988: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x236988u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x23698c: 0x26060a40  addiu       $a2, $s0, 0xA40
    ctx->pc = 0x23698cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 2624));
    // 0x236990: 0x70c02e28  paddub      $a1, $a2, $zero
    ctx->pc = 0x236990u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x236994: 0x3c064080  lui         $a2, 0x4080
    ctx->pc = 0x236994u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16512 << 16));
    // 0x236998: 0x34c20002  ori         $v0, $a2, 0x2
    ctx->pc = 0x236998u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)2);
    // 0x23699c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x23699cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2369a0: 0x3c022402  lui         $v0, 0x2402
    ctx->pc = 0x2369a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)9218 << 16));
    // 0x2369a4: 0x34421400  ori         $v0, $v0, 0x1400
    ctx->pc = 0x2369a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)5120);
    // 0x2369a8: 0x433025  or          $a2, $v0, $v1
    ctx->pc = 0x2369a8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2369ac: 0x27a70110  addiu       $a3, $sp, 0x110
    ctx->pc = 0x2369acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x2369b0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2369b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2369b4: 0x70404628  paddub      $t0, $v0, $zero
    ctx->pc = 0x2369b4u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2369b8: 0xc0754a4  jal         func_1D5290
    ctx->pc = 0x2369B8u;
    SET_GPR_U32(ctx, 31, 0x2369C0u);
    ctx->pc = 0x1D5290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5290u, 0x2369B8u, 0x2369C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2369C0u;
label_2369c0:
    // 0x2369c0: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x2369c0u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2369c4: 0x8fa802e8  lw          $t0, 0x2E8($sp)
    ctx->pc = 0x2369c4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 744)));
    // 0x2369c8: 0x8d10026c  lw          $s0, 0x26C($t0)
    ctx->pc = 0x2369c8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 620)));
    // 0x2369cc: 0x3c023126  lui         $v0, 0x3126
    ctx->pc = 0x2369ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12582 << 16));
    // 0x2369d0: 0x34474000  ori         $a3, $v0, 0x4000
    ctx->pc = 0x2369d0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x2369d4: 0x7403c  dsll32      $t0, $a3, 0
    ctx->pc = 0x2369d4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 7) << (32 + 0));
    // 0x2369d8: 0x34098028  ori         $t1, $zero, 0x8028
    ctx->pc = 0x2369d8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32808);
    // 0x2369dc: 0x1282825  or          $a1, $t1, $t0
    ctx->pc = 0x2369dcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 9) | GPR_U64(ctx, 8));
    // 0x2369e0: 0xfe050070  sd          $a1, 0x70($s0)
    ctx->pc = 0x2369e0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 112), GPR_U64(ctx, 5));
    // 0x2369e4: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x2369e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
    // 0x2369e8: 0x34423000  ori         $v0, $v0, 0x3000
    ctx->pc = 0x2369e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12288);
    // 0x2369ec: 0xfe020030  sd          $v0, 0x30($s0)
    ctx->pc = 0x2369ecu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 48), GPR_U64(ctx, 2));
    // 0x2369f0: 0x8fa402e8  lw          $a0, 0x2E8($sp)
    ctx->pc = 0x2369f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 744)));
    // 0x2369f4: 0x8c850270  lw          $a1, 0x270($a0)
    ctx->pc = 0x2369f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 624)));
    // 0x2369f8: 0x70a08628  paddub      $s0, $a1, $zero
    ctx->pc = 0x2369f8u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x2369fc: 0x3c023126  lui         $v0, 0x3126
    ctx->pc = 0x2369fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12582 << 16));
    // 0x236a00: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x236a00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x236a04: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x236a04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x236a08: 0x34028028  ori         $v0, $zero, 0x8028
    ctx->pc = 0x236a08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32808);
    // 0x236a0c: 0x432025  or          $a0, $v0, $v1
    ctx->pc = 0x236a0cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x236a10: 0xfe040070  sd          $a0, 0x70($s0)
    ctx->pc = 0x236a10u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 112), GPR_U64(ctx, 4));
    // 0x236a14: 0x3c060005  lui         $a2, 0x5
    ctx->pc = 0x236a14u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)5 << 16));
    // 0x236a18: 0x34c53000  ori         $a1, $a2, 0x3000
    ctx->pc = 0x236a18u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)12288);
    // 0x236a1c: 0xfe050030  sd          $a1, 0x30($s0)
    ctx->pc = 0x236a1cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 48), GPR_U64(ctx, 5));
    // 0x236a20: 0x8fa202e8  lw          $v0, 0x2E8($sp)
    ctx->pc = 0x236a20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 744)));
    // 0x236a24: 0x24430274  addiu       $v1, $v0, 0x274
    ctx->pc = 0x236a24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 628));
    // 0x236a28: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x236a28u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x236a2c: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x236a2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x236a30: 0xc074d44  jal         func_1D3510
    ctx->pc = 0x236A30u;
    SET_GPR_U32(ctx, 31, 0x236A38u);
    ctx->pc = 0x1D3510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D3510u, 0x236A30u, 0x236A38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236A38u;
label_236a38:
    // 0x236a38: 0x70409628  paddub      $s2, $v0, $zero
    ctx->pc = 0x236a38u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x236a3c: 0x8fa902e8  lw          $t1, 0x2E8($sp)
    ctx->pc = 0x236a3cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 744)));
    // 0x236a40: 0x8d370274  lw          $s7, 0x274($t1)
    ctx->pc = 0x236a40u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 628)));
    // 0x236a44: 0x8fb102e8  lw          $s1, 0x2E8($sp)
    ctx->pc = 0x236a44u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 744)));
    // 0x236a48: 0x8e3e0278  lw          $fp, 0x278($s1)
    ctx->pc = 0x236a48u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 632)));
    // 0x236a4c: 0x72e02628  paddub      $a0, $s7, $zero
    ctx->pc = 0x236a4cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 23), GPR_VEC(ctx, 0)));
    // 0x236a50: 0x73c02e28  paddub      $a1, $fp, $zero
    ctx->pc = 0x236a50u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 30), GPR_VEC(ctx, 0)));
    // 0x236a54: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x236a54u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x236a58: 0x3c086040  lui         $t0, 0x6040
    ctx->pc = 0x236a58u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)24640 << 16));
    // 0x236a5c: 0x35034060  ori         $v1, $t0, 0x4060
    ctx->pc = 0x236a5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)16480);
    // 0x236a60: 0x70603e28  paddub      $a3, $v1, $zero
    ctx->pc = 0x236a60u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x236a64: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x236a64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x236a68: 0x34492040  ori         $t1, $v0, 0x2040
    ctx->pc = 0x236a68u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8256);
    // 0x236a6c: 0x71204628  paddub      $t0, $t1, $zero
    ctx->pc = 0x236a6cu;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
    // 0x236a70: 0x3c036040  lui         $v1, 0x6040
    ctx->pc = 0x236a70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)24640 << 16));
    // 0x236a74: 0x34624060  ori         $v0, $v1, 0x4060
    ctx->pc = 0x236a74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16480);
    // 0x236a78: 0x70404e28  paddub      $t1, $v0, $zero
    ctx->pc = 0x236a78u;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x236a7c: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x236a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
    // 0x236a80: 0x346a2040  ori         $t2, $v1, 0x2040
    ctx->pc = 0x236a80u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8256);
    // 0x236a84: 0xc074db8  jal         func_1D36E0
    ctx->pc = 0x236A84u;
    SET_GPR_U32(ctx, 31, 0x236A8Cu);
    ctx->pc = 0x1D36E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D36E0u, 0x236A84u, 0x236A8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236A8Cu;
label_236a8c:
    // 0x236a8c: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x236a8cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x236a90: 0x8ef40008  lw          $s4, 0x8($s7)
    ctx->pc = 0x236a90u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 8)));
    // 0x236a94: 0x8fd50008  lw          $s5, 0x8($fp)
    ctx->pc = 0x236a94u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x236a98: 0x3c064080  lui         $a2, 0x4080
    ctx->pc = 0x236a98u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16512 << 16));
    // 0x236a9c: 0x34c20002  ori         $v0, $a2, 0x2
    ctx->pc = 0x236a9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)2);
    // 0x236aa0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x236aa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x236aa4: 0x3c032402  lui         $v1, 0x2402
    ctx->pc = 0x236aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)9218 << 16));
    // 0x236aa8: 0x34670700  ori         $a3, $v1, 0x700
    ctx->pc = 0x236aa8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1792);
    // 0x236aac: 0xe23025  or          $a2, $a3, $v0
    ctx->pc = 0x236aacu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x236ab0: 0x26820050  addiu       $v0, $s4, 0x50
    ctx->pc = 0x236ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 80));
    // 0x236ab4: 0xfc460000  sd          $a2, 0x0($v0)
    ctx->pc = 0x236ab4u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 6));
    // 0x236ab8: 0x3c074080  lui         $a3, 0x4080
    ctx->pc = 0x236ab8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16512 << 16));
    // 0x236abc: 0x34f10002  ori         $s1, $a3, 0x2
    ctx->pc = 0x236abcu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)2);
    // 0x236ac0: 0x11403c  dsll32      $t0, $s1, 0
    ctx->pc = 0x236ac0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 17) << (32 + 0));
    // 0x236ac4: 0x3c022402  lui         $v0, 0x2402
    ctx->pc = 0x236ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)9218 << 16));
    // 0x236ac8: 0x482025  or          $a0, $v0, $t0
    ctx->pc = 0x236ac8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x236acc: 0x26b00050  addiu       $s0, $s5, 0x50
    ctx->pc = 0x236accu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 80));
    // 0x236ad0: 0xfe040000  sd          $a0, 0x0($s0)
    ctx->pc = 0x236ad0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 4));
    // 0x236ad4: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x236ad4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x236ad8: 0x6203c  dsll32      $a0, $a2, 0
    ctx->pc = 0x236ad8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) << (32 + 0));
    // 0x236adc: 0x24050044  addiu       $a1, $zero, 0x44
    ctx->pc = 0x236adcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x236ae0: 0xa41025  or          $v0, $a1, $a0
    ctx->pc = 0x236ae0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x236ae4: 0xfe820020  sd          $v0, 0x20($s4)
    ctx->pc = 0x236ae4u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 32), GPR_U64(ctx, 2));
    // 0x236ae8: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x236ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x236aec: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x236aecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x236af0: 0x24050044  addiu       $a1, $zero, 0x44
    ctx->pc = 0x236af0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x236af4: 0xa33025  or          $a2, $a1, $v1
    ctx->pc = 0x236af4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x236af8: 0xfea60020  sd          $a2, 0x20($s5)
    ctx->pc = 0x236af8u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 32), GPR_U64(ctx, 6));
    // 0x236afc: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x236afcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
    // 0x236b00: 0x34423001  ori         $v0, $v0, 0x3001
    ctx->pc = 0x236b00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12289);
    // 0x236b04: 0xfe820030  sd          $v0, 0x30($s4)
    ctx->pc = 0x236b04u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 48), GPR_U64(ctx, 2));
    // 0x236b08: 0x3c060005  lui         $a2, 0x5
    ctx->pc = 0x236b08u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)5 << 16));
    // 0x236b0c: 0x34c23001  ori         $v0, $a2, 0x3001
    ctx->pc = 0x236b0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)12289);
    // 0x236b10: 0xfea20030  sd          $v0, 0x30($s5)
    ctx->pc = 0x236b10u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 48), GPR_U64(ctx, 2));
    // 0x236b14: 0x3c04612e  lui         $a0, 0x612E
    ctx->pc = 0x236b14u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)24878 << 16));
    // 0x236b18: 0x34824000  ori         $v0, $a0, 0x4000
    ctx->pc = 0x236b18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)16384);
    // 0x236b1c: 0x2283c  dsll32      $a1, $v0, 0
    ctx->pc = 0x236b1cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 0));
    // 0x236b20: 0x34068021  ori         $a2, $zero, 0x8021
    ctx->pc = 0x236b20u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32801);
    // 0x236b24: 0xc51025  or          $v0, $a2, $a1
    ctx->pc = 0x236b24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
    // 0x236b28: 0xfe820070  sd          $v0, 0x70($s4)
    ctx->pc = 0x236b28u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 112), GPR_U64(ctx, 2));
    // 0x236b2c: 0x3c02612e  lui         $v0, 0x612E
    ctx->pc = 0x236b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)24878 << 16));
    // 0x236b30: 0x34464000  ori         $a2, $v0, 0x4000
    ctx->pc = 0x236b30u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x236b34: 0x6183c  dsll32      $v1, $a2, 0
    ctx->pc = 0x236b34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) << (32 + 0));
    // 0x236b38: 0x34048021  ori         $a0, $zero, 0x8021
    ctx->pc = 0x236b38u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32801);
    // 0x236b3c: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x236b3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x236b40: 0xfea30070  sd          $v1, 0x70($s5)
    ctx->pc = 0x236b40u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 112), GPR_U64(ctx, 3));
    // 0x236b44: 0x8fa202e8  lw          $v0, 0x2E8($sp)
    ctx->pc = 0x236b44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 744)));
    // 0x236b48: 0x2446027c  addiu       $a2, $v0, 0x27C
    ctx->pc = 0x236b48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 636));
    // 0x236b4c: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x236b4cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x236b50: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x236b50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x236b54: 0xc074d44  jal         func_1D3510
    ctx->pc = 0x236B54u;
    SET_GPR_U32(ctx, 31, 0x236B5Cu);
    ctx->pc = 0x1D3510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D3510u, 0x236B54u, 0x236B5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236B5Cu;
label_236b5c:
    // 0x236b5c: 0x8fa402e8  lw          $a0, 0x2E8($sp)
    ctx->pc = 0x236b5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 744)));
    // 0x236b60: 0x8c97027c  lw          $s7, 0x27C($a0)
    ctx->pc = 0x236b60u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 636)));
    // 0x236b64: 0x8fa302e8  lw          $v1, 0x2E8($sp)
    ctx->pc = 0x236b64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 744)));
    // 0x236b68: 0x8c660280  lw          $a2, 0x280($v1)
    ctx->pc = 0x236b68u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 640)));
    // 0x236b6c: 0x70c0f628  paddub      $fp, $a2, $zero
    ctx->pc = 0x236b6cu;
    SET_GPR_VEC(ctx, 30, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x236b70: 0x72e02628  paddub      $a0, $s7, $zero
    ctx->pc = 0x236b70u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 23), GPR_VEC(ctx, 0)));
    // 0x236b74: 0x73c02e28  paddub      $a1, $fp, $zero
    ctx->pc = 0x236b74u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 30), GPR_VEC(ctx, 0)));
    // 0x236b78: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x236b78u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x236b7c: 0x3c038040  lui         $v1, 0x8040
    ctx->pc = 0x236b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32832 << 16));
    // 0x236b80: 0x34678040  ori         $a3, $v1, 0x8040
    ctx->pc = 0x236b80u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32832);
    // 0x236b84: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x236b84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x236b88: 0x34428040  ori         $v0, $v0, 0x8040
    ctx->pc = 0x236b88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32832);
    // 0x236b8c: 0x70404628  paddub      $t0, $v0, $zero
    ctx->pc = 0x236b8cu;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x236b90: 0x3c028040  lui         $v0, 0x8040
    ctx->pc = 0x236b90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32832 << 16));
    // 0x236b94: 0x34498040  ori         $t1, $v0, 0x8040
    ctx->pc = 0x236b94u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32832);
    // 0x236b98: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x236b98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x236b9c: 0x344a8040  ori         $t2, $v0, 0x8040
    ctx->pc = 0x236b9cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32832);
    // 0x236ba0: 0xc074db8  jal         func_1D36E0
    ctx->pc = 0x236BA0u;
    SET_GPR_U32(ctx, 31, 0x236BA8u);
    ctx->pc = 0x1D36E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D36E0u, 0x236BA0u, 0x236BA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236BA8u;
label_236ba8:
    // 0x236ba8: 0x8ef40008  lw          $s4, 0x8($s7)
    ctx->pc = 0x236ba8u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 8)));
    // 0x236bac: 0x8fd50008  lw          $s5, 0x8($fp)
    ctx->pc = 0x236bacu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x236bb0: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x236bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x236bb4: 0x3903c  dsll32      $s2, $v1, 0
    ctx->pc = 0x236bb4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) << (32 + 0));
    // 0x236bb8: 0x24090048  addiu       $t1, $zero, 0x48
    ctx->pc = 0x236bb8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x236bbc: 0x1321025  or          $v0, $t1, $s2
    ctx->pc = 0x236bbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) | GPR_U64(ctx, 18));
    // 0x236bc0: 0xfe820020  sd          $v0, 0x20($s4)
    ctx->pc = 0x236bc0u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 32), GPR_U64(ctx, 2));
    // 0x236bc4: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x236bc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x236bc8: 0x3103c  dsll32      $v0, $v1, 0
    ctx->pc = 0x236bc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 0));
    // 0x236bcc: 0x24050048  addiu       $a1, $zero, 0x48
    ctx->pc = 0x236bccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x236bd0: 0xa21025  or          $v0, $a1, $v0
    ctx->pc = 0x236bd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x236bd4: 0xfea20020  sd          $v0, 0x20($s5)
    ctx->pc = 0x236bd4u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 32), GPR_U64(ctx, 2));
    // 0x236bd8: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x236bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
    // 0x236bdc: 0x34463001  ori         $a2, $v0, 0x3001
    ctx->pc = 0x236bdcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12289);
    // 0x236be0: 0xfe860030  sd          $a2, 0x30($s4)
    ctx->pc = 0x236be0u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 48), GPR_U64(ctx, 6));
    // 0x236be4: 0x3c040005  lui         $a0, 0x5
    ctx->pc = 0x236be4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)5 << 16));
    // 0x236be8: 0x34833001  ori         $v1, $a0, 0x3001
    ctx->pc = 0x236be8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)12289);
    // 0x236bec: 0xfea30030  sd          $v1, 0x30($s5)
    ctx->pc = 0x236becu;
    WRITE64(ADD32(GPR_U32(ctx, 21), 48), GPR_U64(ctx, 3));
    // 0x236bf0: 0x3c066126  lui         $a2, 0x6126
    ctx->pc = 0x236bf0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)24870 << 16));
    // 0x236bf4: 0x34c54000  ori         $a1, $a2, 0x4000
    ctx->pc = 0x236bf4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)16384);
    // 0x236bf8: 0x5183c  dsll32      $v1, $a1, 0
    ctx->pc = 0x236bf8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 0));
    // 0x236bfc: 0x34028005  ori         $v0, $zero, 0x8005
    ctx->pc = 0x236bfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32773);
    // 0x236c00: 0x43b025  or          $s6, $v0, $v1
    ctx->pc = 0x236c00u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x236c04: 0xfe960070  sd          $s6, 0x70($s4)
    ctx->pc = 0x236c04u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 112), GPR_U64(ctx, 22));
    // 0x236c08: 0x3c066126  lui         $a2, 0x6126
    ctx->pc = 0x236c08u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)24870 << 16));
    // 0x236c0c: 0x34c24000  ori         $v0, $a2, 0x4000
    ctx->pc = 0x236c0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)16384);
    // 0x236c10: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x236c10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x236c14: 0x34028005  ori         $v0, $zero, 0x8005
    ctx->pc = 0x236c14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32773);
    // 0x236c18: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x236c18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x236c1c: 0xfea20070  sd          $v0, 0x70($s5)
    ctx->pc = 0x236c1cu;
    WRITE64(ADD32(GPR_U32(ctx, 21), 112), GPR_U64(ctx, 2));
    // 0x236c20: 0x8fa202e8  lw          $v0, 0x2E8($sp)
    ctx->pc = 0x236c20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 744)));
    // 0x236c24: 0x24420284  addiu       $v0, $v0, 0x284
    ctx->pc = 0x236c24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 644));
    // 0x236c28: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x236c28u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x236c2c: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x236c2cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x236c30: 0x71002e28  paddub      $a1, $t0, $zero
    ctx->pc = 0x236c30u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x236c34: 0xc074d44  jal         func_1D3510
    ctx->pc = 0x236C34u;
    SET_GPR_U32(ctx, 31, 0x236C3Cu);
    ctx->pc = 0x1D3510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D3510u, 0x236C34u, 0x236C3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236C3Cu;
label_236c3c:
    // 0x236c3c: 0x8fa602e8  lw          $a2, 0x2E8($sp)
    ctx->pc = 0x236c3cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 744)));
    // 0x236c40: 0x8cd70284  lw          $s7, 0x284($a2)
    ctx->pc = 0x236c40u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 644)));
    // 0x236c44: 0x8fa202e8  lw          $v0, 0x2E8($sp)
    ctx->pc = 0x236c44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 744)));
    // 0x236c48: 0x8c5e0288  lw          $fp, 0x288($v0)
    ctx->pc = 0x236c48u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 648)));
    // 0x236c4c: 0x72e02628  paddub      $a0, $s7, $zero
    ctx->pc = 0x236c4cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 23), GPR_VEC(ctx, 0)));
    // 0x236c50: 0x73c02e28  paddub      $a1, $fp, $zero
    ctx->pc = 0x236c50u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 30), GPR_VEC(ctx, 0)));
    // 0x236c54: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x236c54u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x236c58: 0x3c038040  lui         $v1, 0x8040
    ctx->pc = 0x236c58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32832 << 16));
    // 0x236c5c: 0x34678040  ori         $a3, $v1, 0x8040
    ctx->pc = 0x236c5cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32832);
    // 0x236c60: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x236c60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x236c64: 0x34488040  ori         $t0, $v0, 0x8040
    ctx->pc = 0x236c64u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32832);
    // 0x236c68: 0x3c028040  lui         $v0, 0x8040
    ctx->pc = 0x236c68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32832 << 16));
    // 0x236c6c: 0x34498040  ori         $t1, $v0, 0x8040
    ctx->pc = 0x236c6cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32832);
    // 0x236c70: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x236c70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x236c74: 0x344a8040  ori         $t2, $v0, 0x8040
    ctx->pc = 0x236c74u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32832);
    // 0x236c78: 0xc074db8  jal         func_1D36E0
    ctx->pc = 0x236C78u;
    SET_GPR_U32(ctx, 31, 0x236C80u);
    ctx->pc = 0x1D36E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D36E0u, 0x236C78u, 0x236C80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236C80u;
label_236c80:
    // 0x236c80: 0x8ef40008  lw          $s4, 0x8($s7)
    ctx->pc = 0x236c80u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 8)));
    // 0x236c84: 0x8fd10008  lw          $s1, 0x8($fp)
    ctx->pc = 0x236c84u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x236c88: 0x7220ae28  paddub      $s5, $s1, $zero
    ctx->pc = 0x236c88u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x236c8c: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x236c8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x236c90: 0x4283c  dsll32      $a1, $a0, 0
    ctx->pc = 0x236c90u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 0));
    // 0x236c94: 0x24060048  addiu       $a2, $zero, 0x48
    ctx->pc = 0x236c94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x236c98: 0xc51025  or          $v0, $a2, $a1
    ctx->pc = 0x236c98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
    // 0x236c9c: 0xfe820020  sd          $v0, 0x20($s4)
    ctx->pc = 0x236c9cu;
    WRITE64(ADD32(GPR_U32(ctx, 20), 32), GPR_U64(ctx, 2));
    // 0x236ca0: 0x24070080  addiu       $a3, $zero, 0x80
    ctx->pc = 0x236ca0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x236ca4: 0x7103c  dsll32      $v0, $a3, 0
    ctx->pc = 0x236ca4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) << (32 + 0));
    // 0x236ca8: 0x24080048  addiu       $t0, $zero, 0x48
    ctx->pc = 0x236ca8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x236cac: 0x1021025  or          $v0, $t0, $v0
    ctx->pc = 0x236cacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x236cb0: 0xfea20020  sd          $v0, 0x20($s5)
    ctx->pc = 0x236cb0u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 32), GPR_U64(ctx, 2));
    // 0x236cb4: 0x3c060005  lui         $a2, 0x5
    ctx->pc = 0x236cb4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)5 << 16));
    // 0x236cb8: 0x34c33001  ori         $v1, $a2, 0x3001
    ctx->pc = 0x236cb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)12289);
    // 0x236cbc: 0xfe830030  sd          $v1, 0x30($s4)
    ctx->pc = 0x236cbcu;
    WRITE64(ADD32(GPR_U32(ctx, 20), 48), GPR_U64(ctx, 3));
    // 0x236cc0: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x236cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
    // 0x236cc4: 0x34453001  ori         $a1, $v0, 0x3001
    ctx->pc = 0x236cc4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12289);
    // 0x236cc8: 0xfea50030  sd          $a1, 0x30($s5)
    ctx->pc = 0x236cc8u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 48), GPR_U64(ctx, 5));
    // 0x236ccc: 0x3c046106  lui         $a0, 0x6106
    ctx->pc = 0x236cccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)24838 << 16));
    // 0x236cd0: 0x34824000  ori         $v0, $a0, 0x4000
    ctx->pc = 0x236cd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)16384);
    // 0x236cd4: 0x2283c  dsll32      $a1, $v0, 0
    ctx->pc = 0x236cd4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 0));
    // 0x236cd8: 0x34128005  ori         $s2, $zero, 0x8005
    ctx->pc = 0x236cd8u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32773);
    // 0x236cdc: 0x2451825  or          $v1, $s2, $a1
    ctx->pc = 0x236cdcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) | GPR_U64(ctx, 5));
    // 0x236ce0: 0xfe830070  sd          $v1, 0x70($s4)
    ctx->pc = 0x236ce0u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 112), GPR_U64(ctx, 3));
    // 0x236ce4: 0x3c046106  lui         $a0, 0x6106
    ctx->pc = 0x236ce4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)24838 << 16));
    // 0x236ce8: 0x34974000  ori         $s7, $a0, 0x4000
    ctx->pc = 0x236ce8u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)16384);
    // 0x236cec: 0x17283c  dsll32      $a1, $s7, 0
    ctx->pc = 0x236cecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 23) << (32 + 0));
    // 0x236cf0: 0x34078005  ori         $a3, $zero, 0x8005
    ctx->pc = 0x236cf0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32773);
    // 0x236cf4: 0xe54025  or          $t0, $a3, $a1
    ctx->pc = 0x236cf4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 7) | GPR_U64(ctx, 5));
    // 0x236cf8: 0xfea80070  sd          $t0, 0x70($s5)
    ctx->pc = 0x236cf8u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 112), GPR_U64(ctx, 8));
    // 0x236cfc: 0x3c0a0039  lui         $t2, 0x39
    ctx->pc = 0x236cfcu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)57 << 16));
    // 0x236d00: 0x2542b090  addiu       $v0, $t2, -0x4F70
    ctx->pc = 0x236d00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), 4294946960));
    // 0x236d04: 0x27a80180  addiu       $t0, $sp, 0x180
    ctx->pc = 0x236d04u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x236d08: 0x24150003  addiu       $s5, $zero, 0x3
    ctx->pc = 0x236d08u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x236d0c: 0x72a04e28  paddub      $t1, $s5, $zero
    ctx->pc = 0x236d0cu;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
    ctx->pc = 0x236d10u;
}
