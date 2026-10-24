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

// Function: entry_00241a78
// Address: 0x241a78 - 0x24237c
void entry_00241a78_0x241a78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00241a78_0x241a78");
#endif

    switch (ctx->pc) {
        case 0x241a94u: goto label_241a94;
        case 0x241ab4u: goto label_241ab4;
        case 0x241ad0u: goto label_241ad0;
        case 0x241aecu: goto label_241aec;
        case 0x241b0cu: goto label_241b0c;
        case 0x241b28u: goto label_241b28;
        case 0x241b78u: goto label_241b78;
        case 0x241bbcu: goto label_241bbc;
        case 0x241be0u: goto label_241be0;
        case 0x241c24u: goto label_241c24;
        case 0x241c48u: goto label_241c48;
        case 0x241c74u: goto label_241c74;
        case 0x241ca0u: goto label_241ca0;
        case 0x241cecu: goto label_241cec;
        case 0x241d10u: goto label_241d10;
        case 0x241d4cu: goto label_241d4c;
        case 0x241d8cu: goto label_241d8c;
        case 0x241db8u: goto label_241db8;
        case 0x241dfcu: goto label_241dfc;
        case 0x241e40u: goto label_241e40;
        case 0x241e64u: goto label_241e64;
        case 0x241eb0u: goto label_241eb0;
        case 0x241f14u: goto label_241f14;
        case 0x241f60u: goto label_241f60;
        case 0x241fc4u: goto label_241fc4;
        case 0x242028u: goto label_242028;
        case 0x242070u: goto label_242070;
        case 0x2420bcu: goto label_2420bc;
        case 0x24211cu: goto label_24211c;
        case 0x242184u: goto label_242184;
        case 0x2421c4u: goto label_2421c4;
        case 0x242218u: goto label_242218;
        case 0x242280u: goto label_242280;
        case 0x2422e8u: goto label_2422e8;
        case 0x242324u: goto label_242324;
        case 0x242354u: goto label_242354;
        default: break;
    }

    ctx->pc = 0x241a78u;

    // 0x241a78: 0x8fa600a8  lw          $a2, 0xA8($sp)
    ctx->pc = 0x241a78u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x241a7c: 0x8cc20058  lw          $v0, 0x58($a2)
    ctx->pc = 0x241a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 88)));
    // 0x241a80: 0x24520120  addiu       $s2, $v0, 0x120
    ctx->pc = 0x241a80u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x241a84: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x241a84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x241a88: 0x72402e28  paddub      $a1, $s2, $zero
    ctx->pc = 0x241a88u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x241a8c: 0xc079140  jal         func_1E4500
    ctx->pc = 0x241A8Cu;
    SET_GPR_U32(ctx, 31, 0x241A94u);
    ctx->pc = 0x1E4500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E4500u, 0x241A8Cu, 0x241A94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241A94u;
label_241a94:
    // 0x241a94: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x241a94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x241a98: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x241a98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x241a9c: 0x245201b0  addiu       $s2, $v0, 0x1B0
    ctx->pc = 0x241a9cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 432));
    // 0x241aa0: 0x8fa500a8  lw          $a1, 0xA8($sp)
    ctx->pc = 0x241aa0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x241aa4: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x241aa4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x241aa8: 0x72402e28  paddub      $a1, $s2, $zero
    ctx->pc = 0x241aa8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x241aac: 0xc079140  jal         func_1E4500
    ctx->pc = 0x241AACu;
    SET_GPR_U32(ctx, 31, 0x241AB4u);
    ctx->pc = 0x1E4500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E4500u, 0x241AACu, 0x241AB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241AB4u;
label_241ab4:
    // 0x241ab4: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x241ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x241ab8: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x241ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x241abc: 0x245203f0  addiu       $s2, $v0, 0x3F0
    ctx->pc = 0x241abcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 1008));
    // 0x241ac0: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x241ac0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x241ac4: 0x72402e28  paddub      $a1, $s2, $zero
    ctx->pc = 0x241ac4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x241ac8: 0xc079140  jal         func_1E4500
    ctx->pc = 0x241AC8u;
    SET_GPR_U32(ctx, 31, 0x241AD0u);
    ctx->pc = 0x1E4500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E4500u, 0x241AC8u, 0x241AD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241AD0u;
label_241ad0:
    // 0x241ad0: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x241ad0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x241ad4: 0x8c850058  lw          $a1, 0x58($a0)
    ctx->pc = 0x241ad4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
    // 0x241ad8: 0x24b205a0  addiu       $s2, $a1, 0x5A0
    ctx->pc = 0x241ad8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), 1440));
    // 0x241adc: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x241adcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x241ae0: 0x72402e28  paddub      $a1, $s2, $zero
    ctx->pc = 0x241ae0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x241ae4: 0xc079140  jal         func_1E4500
    ctx->pc = 0x241AE4u;
    SET_GPR_U32(ctx, 31, 0x241AECu);
    ctx->pc = 0x1E4500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E4500u, 0x241AE4u, 0x241AECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241AECu;
label_241aec:
    // 0x241aec: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x241aecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x241af0: 0x8c440058  lw          $a0, 0x58($v0)
    ctx->pc = 0x241af0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x241af4: 0x24920480  addiu       $s2, $a0, 0x480
    ctx->pc = 0x241af4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
    // 0x241af8: 0x8fa500a8  lw          $a1, 0xA8($sp)
    ctx->pc = 0x241af8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x241afc: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x241afcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x241b00: 0x72402e28  paddub      $a1, $s2, $zero
    ctx->pc = 0x241b00u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x241b04: 0xc079140  jal         func_1E4500
    ctx->pc = 0x241B04u;
    SET_GPR_U32(ctx, 31, 0x241B0Cu);
    ctx->pc = 0x1E4500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E4500u, 0x241B04u, 0x241B0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241B0Cu;
label_241b0c:
    // 0x241b0c: 0x8fa700a8  lw          $a3, 0xA8($sp)
    ctx->pc = 0x241b0cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x241b10: 0x8ce80058  lw          $t0, 0x58($a3)
    ctx->pc = 0x241b10u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 88)));
    // 0x241b14: 0x25120510  addiu       $s2, $t0, 0x510
    ctx->pc = 0x241b14u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 8), 1296));
    // 0x241b18: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x241b18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x241b1c: 0x72402e28  paddub      $a1, $s2, $zero
    ctx->pc = 0x241b1cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x241b20: 0xc079140  jal         func_1E4500
    ctx->pc = 0x241B20u;
    SET_GPR_U32(ctx, 31, 0x241B28u);
    ctx->pc = 0x1E4500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E4500u, 0x241B20u, 0x241B28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241B28u;
label_241b28:
    // 0x241b28: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x241b28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x241b2c: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x241b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0140u));
    // 0x241b30: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x241b30u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x241b34: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x241b34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x241b38: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x241b38u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x241b3c: 0x8e140234  lw          $s4, 0x234($s0)
    ctx->pc = 0x241b3cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 564)));
    // 0x241b40: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x241b40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x241b44: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x241b44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x241b48: 0x70409e28  paddub      $s3, $v0, $zero
    ctx->pc = 0x241b48u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x241b4c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x241b4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x241b50: 0x8c230140  lw          $v1, 0x140($at)
    ctx->pc = 0x241b50u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0140u));
    // 0x241b54: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x241b54u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x241b58: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x241b58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x241b5c: 0x22880  sll         $a1, $v0, 2
    ctx->pc = 0x241b5cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x241b60: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x241b60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x241b64: 0x853021  addu        $a2, $a0, $a1
    ctx->pc = 0x241b64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x241b68: 0x24c40204  addiu       $a0, $a2, 0x204
    ctx->pc = 0x241b68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 516));
    // 0x241b6c: 0x72802e28  paddub      $a1, $s4, $zero
    ctx->pc = 0x241b6cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x241b70: 0xc06b06c  jal         func_1AC1B0
    ctx->pc = 0x241B70u;
    SET_GPR_U32(ctx, 31, 0x241B78u);
    ctx->pc = 0x1AC1B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AC1B0u, 0x241B70u, 0x241B78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241B78u;
label_241b78:
    // 0x241b78: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x241b78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x241b7c: 0x8c300140  lw          $s0, 0x140($at)
    ctx->pc = 0x241b7cu;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x5D0140u));
    // 0x241b80: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x241b80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x241b84: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x241b84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x241b88: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x241b88u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x241b8c: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x241b8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x241b90: 0x823821  addu        $a3, $a0, $v0
    ctx->pc = 0x241b90u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x241b94: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x241b94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x241b98: 0x8c260140  lw          $a2, 0x140($at)
    ctx->pc = 0x241b98u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x5D0140u));
    // 0x241b9c: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x241b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x241ba0: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x241ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x241ba4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x241ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x241ba8: 0x8c450244  lw          $a1, 0x244($v0)
    ctx->pc = 0x241ba8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 580)));
    // 0x241bac: 0x24e40204  addiu       $a0, $a3, 0x204
    ctx->pc = 0x241bacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 516));
    // 0x241bb0: 0x24060150  addiu       $a2, $zero, 0x150
    ctx->pc = 0x241bb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 336));
    // 0x241bb4: 0xc06b07c  jal         func_1AC1F0
    ctx->pc = 0x241BB4u;
    SET_GPR_U32(ctx, 31, 0x241BBCu);
    ctx->pc = 0x1AC1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AC1F0u, 0x241BB4u, 0x241BBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241BBCu;
label_241bbc:
    // 0x241bbc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x241bbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x241bc0: 0x8c260140  lw          $a2, 0x140($at)
    ctx->pc = 0x241bc0u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x5D0140u));
    // 0x241bc4: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x241bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x241bc8: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x241bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x241bcc: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x241bccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x241bd0: 0x8c510244  lw          $s1, 0x244($v0)
    ctx->pc = 0x241bd0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 580)));
    // 0x241bd4: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x241bd4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x241bd8: 0xc074974  jal         func_1D25D0
    ctx->pc = 0x241BD8u;
    SET_GPR_U32(ctx, 31, 0x241BE0u);
    ctx->pc = 0x1D25D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D25D0u, 0x241BD8u, 0x241BE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241BE0u;
label_241be0:
    // 0x241be0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x241be0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x241be4: 0x8c250140  lw          $a1, 0x140($at)
    ctx->pc = 0x241be4u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x5D0140u));
    // 0x241be8: 0x53040  sll         $a2, $a1, 1
    ctx->pc = 0x241be8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x241bec: 0xc53821  addu        $a3, $a2, $a1
    ctx->pc = 0x241becu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x241bf0: 0x74080  sll         $t0, $a3, 2
    ctx->pc = 0x241bf0u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x241bf4: 0x8fa900a8  lw          $t1, 0xA8($sp)
    ctx->pc = 0x241bf4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x241bf8: 0x1281021  addu        $v0, $t1, $t0
    ctx->pc = 0x241bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
    // 0x241bfc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x241bfcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x241c00: 0x8c230140  lw          $v1, 0x140($at)
    ctx->pc = 0x241c00u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0140u));
    // 0x241c04: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x241c04u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x241c08: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x241c08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x241c0c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x241c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x241c10: 0x8c65024c  lw          $a1, 0x24C($v1)
    ctx->pc = 0x241c10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 588)));
    // 0x241c14: 0x24440204  addiu       $a0, $v0, 0x204
    ctx->pc = 0x241c14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 516));
    // 0x241c18: 0x24060150  addiu       $a2, $zero, 0x150
    ctx->pc = 0x241c18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 336));
    // 0x241c1c: 0xc06b07c  jal         func_1AC1F0
    ctx->pc = 0x241C1Cu;
    SET_GPR_U32(ctx, 31, 0x241C24u);
    ctx->pc = 0x1AC1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AC1F0u, 0x241C1Cu, 0x241C24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241C24u;
label_241c24:
    // 0x241c24: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x241c24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x241c28: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x241c28u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0140u));
    // 0x241c2c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x241c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x241c30: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x241c30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x241c34: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x241c34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x241c38: 0x8cb1024c  lw          $s1, 0x24C($a1)
    ctx->pc = 0x241c38u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 588)));
    // 0x241c3c: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x241c3cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x241c40: 0xc074974  jal         func_1D25D0
    ctx->pc = 0x241C40u;
    SET_GPR_U32(ctx, 31, 0x241C48u);
    ctx->pc = 0x1D25D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D25D0u, 0x241C40u, 0x241C48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241C48u;
label_241c48:
    // 0x241c48: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x241c48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x241c4c: 0x8c51024c  lw          $s1, 0x24C($v0)
    ctx->pc = 0x241c4cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 588)));
    // 0x241c50: 0x8fb000a8  lw          $s0, 0xA8($sp)
    ctx->pc = 0x241c50u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x241c54: 0x26021330  addiu       $v0, $s0, 0x1330
    ctx->pc = 0x241c54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4912));
    // 0x241c58: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x241c58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x241c5c: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x241c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x241c60: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x241c60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x241c64: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x241c64u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x241c68: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x241c68u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x241c6c: 0xc0749a4  jal         func_1D2690
    ctx->pc = 0x241C6Cu;
    SET_GPR_U32(ctx, 31, 0x241C74u);
    ctx->pc = 0x1D2690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D2690u, 0x241C6Cu, 0x241C74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241C74u;
label_241c74:
    // 0x241c74: 0x8fa500a8  lw          $a1, 0xA8($sp)
    ctx->pc = 0x241c74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x241c78: 0x8cb10250  lw          $s1, 0x250($a1)
    ctx->pc = 0x241c78u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 592)));
    // 0x241c7c: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x241c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x241c80: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x241c80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x241c84: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x241c84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x241c88: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x241c88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x241c8c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x241c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x241c90: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x241c90u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x241c94: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x241c94u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x241c98: 0xc0749a4  jal         func_1D2690
    ctx->pc = 0x241C98u;
    SET_GPR_U32(ctx, 31, 0x241CA0u);
    ctx->pc = 0x1D2690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D2690u, 0x241C98u, 0x241CA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241CA0u;
label_241ca0:
    // 0x241ca0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x241ca0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x241ca4: 0x8c250140  lw          $a1, 0x140($at)
    ctx->pc = 0x241ca4u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x5D0140u));
    // 0x241ca8: 0x53040  sll         $a2, $a1, 1
    ctx->pc = 0x241ca8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x241cac: 0xc51021  addu        $v0, $a2, $a1
    ctx->pc = 0x241cacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x241cb0: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x241cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x241cb4: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x241cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x241cb8: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x241cb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x241cbc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x241cbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x241cc0: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x241cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0140u));
    // 0x241cc4: 0x22880  sll         $a1, $v0, 2
    ctx->pc = 0x241cc4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x241cc8: 0x8fa600a8  lw          $a2, 0xA8($sp)
    ctx->pc = 0x241cc8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x241ccc: 0xc53821  addu        $a3, $a2, $a1
    ctx->pc = 0x241cccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x241cd0: 0x8ce80254  lw          $t0, 0x254($a3)
    ctx->pc = 0x241cd0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 596)));
    // 0x241cd4: 0x24890204  addiu       $t1, $a0, 0x204
    ctx->pc = 0x241cd4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), 516));
    // 0x241cd8: 0x71202628  paddub      $a0, $t1, $zero
    ctx->pc = 0x241cd8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
    // 0x241cdc: 0x71002e28  paddub      $a1, $t0, $zero
    ctx->pc = 0x241cdcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x241ce0: 0x24060150  addiu       $a2, $zero, 0x150
    ctx->pc = 0x241ce0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 336));
    // 0x241ce4: 0xc06b07c  jal         func_1AC1F0
    ctx->pc = 0x241CE4u;
    SET_GPR_U32(ctx, 31, 0x241CECu);
    ctx->pc = 0x1AC1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AC1F0u, 0x241CE4u, 0x241CECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241CECu;
label_241cec:
    // 0x241cec: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x241cecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x241cf0: 0x8c230140  lw          $v1, 0x140($at)
    ctx->pc = 0x241cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0140u));
    // 0x241cf4: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x241cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x241cf8: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x241cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x241cfc: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x241cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x241d00: 0x8c510254  lw          $s1, 0x254($v0)
    ctx->pc = 0x241d00u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 596)));
    // 0x241d04: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x241d04u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x241d08: 0xc074974  jal         func_1D25D0
    ctx->pc = 0x241D08u;
    SET_GPR_U32(ctx, 31, 0x241D10u);
    ctx->pc = 0x1D25D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D25D0u, 0x241D08u, 0x241D10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241D10u;
label_241d10:
    // 0x241d10: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x241d10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x241d14: 0x8c510254  lw          $s1, 0x254($v0)
    ctx->pc = 0x241d14u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 596)));
    // 0x241d18: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x241d18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x241d1c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x241d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x241d20: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x241d20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x241d24: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x241d24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x241d28: 0x32842  srl         $a1, $v1, 1
    ctx->pc = 0x241d28u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x241d2c: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x241d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x241d30: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x241d30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x241d34: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x241d34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x241d38: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x241d38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x241d3c: 0x33042  srl         $a2, $v1, 1
    ctx->pc = 0x241d3cu;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x241d40: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x241d40u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x241d44: 0xc0749a4  jal         func_1D2690
    ctx->pc = 0x241D44u;
    SET_GPR_U32(ctx, 31, 0x241D4Cu);
    ctx->pc = 0x1D2690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D2690u, 0x241D44u, 0x241D4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241D4Cu;
label_241d4c:
    // 0x241d4c: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x241d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x241d50: 0x8c550258  lw          $s5, 0x258($v0)
    ctx->pc = 0x241d50u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 600)));
    // 0x241d54: 0x72a08e28  paddub      $s1, $s5, $zero
    ctx->pc = 0x241d54u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
    // 0x241d58: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x241d58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x241d5c: 0x24441330  addiu       $a0, $v0, 0x1330
    ctx->pc = 0x241d5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x241d60: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x241d60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x241d64: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x241d64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x241d68: 0x32842  srl         $a1, $v1, 1
    ctx->pc = 0x241d68u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x241d6c: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x241d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x241d70: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x241d70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x241d74: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x241d74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x241d78: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x241d78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x241d7c: 0x23042  srl         $a2, $v0, 1
    ctx->pc = 0x241d7cu;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x241d80: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x241d80u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x241d84: 0xc0749a4  jal         func_1D2690
    ctx->pc = 0x241D84u;
    SET_GPR_U32(ctx, 31, 0x241D8Cu);
    ctx->pc = 0x1D2690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D2690u, 0x241D84u, 0x241D8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241D8Cu;
label_241d8c:
    // 0x241d8c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x241d8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x241d90: 0x8c230140  lw          $v1, 0x140($at)
    ctx->pc = 0x241d90u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0140u));
    // 0x241d94: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x241d94u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x241d98: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x241d98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x241d9c: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x241d9cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x241da0: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x241da0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x241da4: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x241da4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x241da8: 0x24820204  addiu       $v0, $a0, 0x204
    ctx->pc = 0x241da8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 516));
    // 0x241dac: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x241dacu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x241db0: 0xc06b0d4  jal         func_1AC350
    ctx->pc = 0x241DB0u;
    SET_GPR_U32(ctx, 31, 0x241DB8u);
    ctx->pc = 0x1AC350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AC350u, 0x241DB0u, 0x241DB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241DB8u;
label_241db8:
    // 0x241db8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x241db8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x241dbc: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x241dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0140u));
    // 0x241dc0: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x241dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x241dc4: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x241dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x241dc8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x241dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x241dcc: 0x8c54023c  lw          $s4, 0x23C($v0)
    ctx->pc = 0x241dccu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 572)));
    // 0x241dd0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x241dd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x241dd4: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x241dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0140u));
    // 0x241dd8: 0x22040  sll         $a0, $v0, 1
    ctx->pc = 0x241dd8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x241ddc: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x241ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x241de0: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x241de0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x241de4: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x241de4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x241de8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x241de8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x241dec: 0x2444021c  addiu       $a0, $v0, 0x21C
    ctx->pc = 0x241decu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 540));
    // 0x241df0: 0x72802e28  paddub      $a1, $s4, $zero
    ctx->pc = 0x241df0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x241df4: 0xc06b06c  jal         func_1AC1B0
    ctx->pc = 0x241DF4u;
    SET_GPR_U32(ctx, 31, 0x241DFCu);
    ctx->pc = 0x1AC1B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AC1B0u, 0x241DF4u, 0x241DFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241DFCu;
label_241dfc:
    // 0x241dfc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x241dfcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x241e00: 0x8c240140  lw          $a0, 0x140($at)
    ctx->pc = 0x241e00u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D0140u));
    // 0x241e04: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x241e04u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x241e08: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x241e08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x241e0c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x241e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x241e10: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x241e10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x241e14: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x241e14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x241e18: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x241e18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x241e1c: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x241e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0140u));
    // 0x241e20: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x241e20u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x241e24: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x241e24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x241e28: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x241e28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x241e2c: 0x8c45025c  lw          $a1, 0x25C($v0)
    ctx->pc = 0x241e2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 604)));
    // 0x241e30: 0x2484021c  addiu       $a0, $a0, 0x21C
    ctx->pc = 0x241e30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 540));
    // 0x241e34: 0x24060150  addiu       $a2, $zero, 0x150
    ctx->pc = 0x241e34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 336));
    // 0x241e38: 0xc06b07c  jal         func_1AC1F0
    ctx->pc = 0x241E38u;
    SET_GPR_U32(ctx, 31, 0x241E40u);
    ctx->pc = 0x1AC1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AC1F0u, 0x241E38u, 0x241E40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241E40u;
label_241e40:
    // 0x241e40: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x241e40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x241e44: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x241e44u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0140u));
    // 0x241e48: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x241e48u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x241e4c: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x241e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x241e50: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x241e50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x241e54: 0x8c51025c  lw          $s1, 0x25C($v0)
    ctx->pc = 0x241e54u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 604)));
    // 0x241e58: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x241e58u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x241e5c: 0xc07498c  jal         func_1D2630
    ctx->pc = 0x241E5Cu;
    SET_GPR_U32(ctx, 31, 0x241E64u);
    ctx->pc = 0x1D2630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D2630u, 0x241E5Cu, 0x241E64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241E64u;
label_241e64:
    // 0x241e64: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x241e64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x241e68: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x241e68u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0140u));
    // 0x241e6c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x241e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x241e70: 0x8fa700a8  lw          $a3, 0xA8($sp)
    ctx->pc = 0x241e70u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x241e74: 0xe22021  addu        $a0, $a3, $v0
    ctx->pc = 0x241e74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x241e78: 0x8c860264  lw          $a2, 0x264($a0)
    ctx->pc = 0x241e78u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 612)));
    // 0x241e7c: 0x70c08628  paddub      $s0, $a2, $zero
    ctx->pc = 0x241e7cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x241e80: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x241e80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x241e84: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x241e84u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0140u));
    // 0x241e88: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x241e88u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x241e8c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x241e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x241e90: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x241e90u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x241e94: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x241e94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x241e98: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x241e98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x241e9c: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x241e9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x241ea0: 0x2444021c  addiu       $a0, $v0, 0x21C
    ctx->pc = 0x241ea0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 540));
    // 0x241ea4: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x241ea4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x241ea8: 0xc06b07c  jal         func_1AC1F0
    ctx->pc = 0x241EA8u;
    SET_GPR_U32(ctx, 31, 0x241EB0u);
    ctx->pc = 0x1AC1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AC1F0u, 0x241EA8u, 0x241EB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241EB0u;
label_241eb0:
    // 0x241eb0: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x241eb0u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x241eb4: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x241eb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x241eb8: 0x8c860264  lw          $a2, 0x264($a0)
    ctx->pc = 0x241eb8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 612)));
    // 0x241ebc: 0x70c08628  paddub      $s0, $a2, $zero
    ctx->pc = 0x241ebcu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x241ec0: 0x26620030  addiu       $v0, $s3, 0x30
    ctx->pc = 0x241ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
    // 0x241ec4: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x241ec4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x241ec8: 0x27a30070  addiu       $v1, $sp, 0x70
    ctx->pc = 0x241ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x241ecc: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x241eccu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x241ed0: 0xc7a10074  lwc1        $f1, 0x74($sp)
    ctx->pc = 0x241ed0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x241ed4: 0x3c024416  lui         $v0, 0x4416
    ctx->pc = 0x241ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17430 << 16));
    // 0x241ed8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x241ed8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x241edc: 0x0  nop
    ctx->pc = 0x241edcu;
    // NOP
    // 0x241ee0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x241ee0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x241ee4: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x241ee4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x241ee8: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x241ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x241eec: 0x8c440264  lw          $a0, 0x264($v0)
    ctx->pc = 0x241eecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 612)));
    // 0x241ef0: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x241ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x241ef4: 0x8c450268  lw          $a1, 0x268($v0)
    ctx->pc = 0x241ef4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 616)));
    // 0x241ef8: 0x26660030  addiu       $a2, $s3, 0x30
    ctx->pc = 0x241ef8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
    // 0x241efc: 0x27a70070  addiu       $a3, $sp, 0x70
    ctx->pc = 0x241efcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x241f00: 0x24080040  addiu       $t0, $zero, 0x40
    ctx->pc = 0x241f00u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x241f04: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x241f04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x241f08: 0x8c290140  lw          $t1, 0x140($at)
    ctx->pc = 0x241f08u;
    SET_GPR_S32(ctx, 9, (int32_t)FAST_READ32(0x5D0140u));
    // 0x241f0c: 0xc074efc  jal         func_1D3BF0
    ctx->pc = 0x241F0Cu;
    SET_GPR_U32(ctx, 31, 0x241F14u);
    ctx->pc = 0x1D3BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D3BF0u, 0x241F0Cu, 0x241F14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241F14u;
label_241f14:
    // 0x241f14: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x241f14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x241f18: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x241f18u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0140u));
    // 0x241f1c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x241f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x241f20: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x241f20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x241f24: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x241f24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x241f28: 0x8c50027c  lw          $s0, 0x27C($v0)
    ctx->pc = 0x241f28u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 636)));
    // 0x241f2c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x241f2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x241f30: 0x8c230140  lw          $v1, 0x140($at)
    ctx->pc = 0x241f30u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0140u));
    // 0x241f34: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x241f34u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x241f38: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x241f38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x241f3c: 0x23880  sll         $a3, $v0, 2
    ctx->pc = 0x241f3cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x241f40: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x241f40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x241f44: 0x873021  addu        $a2, $a0, $a3
    ctx->pc = 0x241f44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x241f48: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x241f48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x241f4c: 0x24c4021c  addiu       $a0, $a2, 0x21C
    ctx->pc = 0x241f4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 540));
    // 0x241f50: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x241f50u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x241f54: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x241f54u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x241f58: 0xc06b07c  jal         func_1AC1F0
    ctx->pc = 0x241F58u;
    SET_GPR_U32(ctx, 31, 0x241F60u);
    ctx->pc = 0x1AC1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AC1F0u, 0x241F58u, 0x241F60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241F60u;
label_241f60:
    // 0x241f60: 0x8fb200a8  lw          $s2, 0xA8($sp)
    ctx->pc = 0x241f60u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x241f64: 0x8e44027c  lw          $a0, 0x27C($s2)
    ctx->pc = 0x241f64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 636)));
    // 0x241f68: 0x70808628  paddub      $s0, $a0, $zero
    ctx->pc = 0x241f68u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x241f6c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x241f6cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x241f70: 0x0  nop
    ctx->pc = 0x241f70u;
    // NOP
    // 0x241f74: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x241f74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x241f78: 0x3c02c000  lui         $v0, 0xC000
    ctx->pc = 0x241f78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49152 << 16));
    // 0x241f7c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x241f7cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x241f80: 0x0  nop
    ctx->pc = 0x241f80u;
    // NOP
    // 0x241f84: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x241f84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x241f88: 0x3c024307  lui         $v0, 0x4307
    ctx->pc = 0x241f88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17159 << 16));
    // 0x241f8c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x241f8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x241f90: 0x0  nop
    ctx->pc = 0x241f90u;
    // NOP
    // 0x241f94: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x241f94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x241f98: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x241f98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x241f9c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x241f9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x241fa0: 0x0  nop
    ctx->pc = 0x241fa0u;
    // NOP
    // 0x241fa4: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x241fa4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x241fa8: 0x27b20070  addiu       $s2, $sp, 0x70
    ctx->pc = 0x241fa8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x241fac: 0x72402628  paddub      $a0, $s2, $zero
    ctx->pc = 0x241facu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x241fb0: 0x26650940  addiu       $a1, $s3, 0x940
    ctx->pc = 0x241fb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 2368));
    // 0x241fb4: 0x27a20070  addiu       $v0, $sp, 0x70
    ctx->pc = 0x241fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x241fb8: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x241fb8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x241fbc: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x241FBCu;
    SET_GPR_U32(ctx, 31, 0x241FC4u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x241FC4u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x241FC4u) { return; }
    ctx->pc = 0x241FC4u;
label_241fc4:
    // 0x241fc4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x241fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x241fc8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x241fc8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x241fcc: 0x0  nop
    ctx->pc = 0x241fccu;
    // NOP
    // 0x241fd0: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x241fd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x241fd4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x241fd4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x241fd8: 0x0  nop
    ctx->pc = 0x241fd8u;
    // NOP
    // 0x241fdc: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x241fdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x241fe0: 0x3c12c120  lui         $s2, 0xC120
    ctx->pc = 0x241fe0u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)49440 << 16));
    // 0x241fe4: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x241fe4u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x241fe8: 0x0  nop
    ctx->pc = 0x241fe8u;
    // NOP
    // 0x241fec: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x241fecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x241ff0: 0x3c044307  lui         $a0, 0x4307
    ctx->pc = 0x241ff0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17159 << 16));
    // 0x241ff4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x241ff4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x241ff8: 0x0  nop
    ctx->pc = 0x241ff8u;
    // NOP
    // 0x241ffc: 0xe7a00088  swc1        $f0, 0x88($sp)
    ctx->pc = 0x241ffcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x242000: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x242000u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x242004: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x242004u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x242008: 0x0  nop
    ctx->pc = 0x242008u;
    // NOP
    // 0x24200c: 0xe7a0008c  swc1        $f0, 0x8C($sp)
    ctx->pc = 0x24200cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
    // 0x242010: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x242010u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x242014: 0x26650940  addiu       $a1, $s3, 0x940
    ctx->pc = 0x242014u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 2368));
    // 0x242018: 0x27b20080  addiu       $s2, $sp, 0x80
    ctx->pc = 0x242018u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x24201c: 0x72403628  paddub      $a2, $s2, $zero
    ctx->pc = 0x24201cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x242020: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x242020u;
    SET_GPR_U32(ctx, 31, 0x242028u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x242028u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x242028u) { return; }
    ctx->pc = 0x242028u;
label_242028:
    // 0x242028: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x242028u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x24202c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x24202cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x242030: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x242030u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x242034: 0x0  nop
    ctx->pc = 0x242034u;
    // NOP
    // 0x242038: 0xe7a0008c  swc1        $f0, 0x8C($sp)
    ctx->pc = 0x242038u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
    // 0x24203c: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x24203cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x242040: 0x8c44027c  lw          $a0, 0x27C($v0)
    ctx->pc = 0x242040u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 636)));
    // 0x242044: 0x8fb200a8  lw          $s2, 0xA8($sp)
    ctx->pc = 0x242044u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x242048: 0x8e450280  lw          $a1, 0x280($s2)
    ctx->pc = 0x242048u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 640)));
    // 0x24204c: 0x27a20080  addiu       $v0, $sp, 0x80
    ctx->pc = 0x24204cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x242050: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x242050u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x242054: 0x27a70070  addiu       $a3, $sp, 0x70
    ctx->pc = 0x242054u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x242058: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x242058u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x24205c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x24205cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x242060: 0x8c320140  lw          $s2, 0x140($at)
    ctx->pc = 0x242060u;
    SET_GPR_S32(ctx, 18, (int32_t)FAST_READ32(0x5D0140u));
    // 0x242064: 0x72404e28  paddub      $t1, $s2, $zero
    ctx->pc = 0x242064u;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x242068: 0xc075378  jal         func_1D4DE0
    ctx->pc = 0x242068u;
    SET_GPR_U32(ctx, 31, 0x242070u);
    ctx->pc = 0x1D4DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4DE0u, 0x242068u, 0x242070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242070u;
label_242070:
    // 0x242070: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x242070u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x242074: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x242074u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x242078: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x242078u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0140u));
    // 0x24207c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x24207cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x242080: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x242080u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x242084: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x242084u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x242088: 0x8c500284  lw          $s0, 0x284($v0)
    ctx->pc = 0x242088u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 644)));
    // 0x24208c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x24208cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x242090: 0x8c340140  lw          $s4, 0x140($at)
    ctx->pc = 0x242090u;
    SET_GPR_S32(ctx, 20, (int32_t)FAST_READ32(0x5D0140u));
    // 0x242094: 0x141040  sll         $v0, $s4, 1
    ctx->pc = 0x242094u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 1));
    // 0x242098: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x242098u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x24209c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x24209cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2420a0: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x2420a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2420a4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2420a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2420a8: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x2420a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2420ac: 0x2444021c  addiu       $a0, $v0, 0x21C
    ctx->pc = 0x2420acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 540));
    // 0x2420b0: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x2420b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2420b4: 0xc06b07c  jal         func_1AC1F0
    ctx->pc = 0x2420B4u;
    SET_GPR_U32(ctx, 31, 0x2420BCu);
    ctx->pc = 0x1AC1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AC1F0u, 0x2420B4u, 0x2420BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2420BCu;
label_2420bc:
    // 0x2420bc: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2420bcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2420c0: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x2420c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2420c4: 0x8c500284  lw          $s0, 0x284($v0)
    ctx->pc = 0x2420c4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 644)));
    // 0x2420c8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2420c8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2420cc: 0x0  nop
    ctx->pc = 0x2420ccu;
    // NOP
    // 0x2420d0: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x2420d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x2420d4: 0x3c0240c0  lui         $v0, 0x40C0
    ctx->pc = 0x2420d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16576 << 16));
    // 0x2420d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2420d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2420dc: 0x0  nop
    ctx->pc = 0x2420dcu;
    // NOP
    // 0x2420e0: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x2420e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x2420e4: 0x3c024307  lui         $v0, 0x4307
    ctx->pc = 0x2420e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17159 << 16));
    // 0x2420e8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2420e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2420ec: 0x0  nop
    ctx->pc = 0x2420ecu;
    // NOP
    // 0x2420f0: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x2420f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x2420f4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2420f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2420f8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2420f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2420fc: 0x0  nop
    ctx->pc = 0x2420fcu;
    // NOP
    // 0x242100: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x242100u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x242104: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x242104u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x242108: 0x26670940  addiu       $a3, $s3, 0x940
    ctx->pc = 0x242108u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), 2368));
    // 0x24210c: 0x70e02e28  paddub      $a1, $a3, $zero
    ctx->pc = 0x24210cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x242110: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x242110u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x242114: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x242114u;
    SET_GPR_U32(ctx, 31, 0x24211Cu);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x24211Cu;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x24211Cu) { return; }
    ctx->pc = 0x24211Cu;
label_24211c:
    // 0x24211c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x24211cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x242120: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x242120u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x242124: 0x0  nop
    ctx->pc = 0x242124u;
    // NOP
    // 0x242128: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x242128u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x24212c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x24212cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x242130: 0x0  nop
    ctx->pc = 0x242130u;
    // NOP
    // 0x242134: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x242134u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x242138: 0x3c02c190  lui         $v0, 0xC190
    ctx->pc = 0x242138u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49552 << 16));
    // 0x24213c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x24213cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x242140: 0x0  nop
    ctx->pc = 0x242140u;
    // NOP
    // 0x242144: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x242144u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x242148: 0x3c054307  lui         $a1, 0x4307
    ctx->pc = 0x242148u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17159 << 16));
    // 0x24214c: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x24214cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x242150: 0x0  nop
    ctx->pc = 0x242150u;
    // NOP
    // 0x242154: 0xe7a00088  swc1        $f0, 0x88($sp)
    ctx->pc = 0x242154u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x242158: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x242158u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x24215c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x24215cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x242160: 0x0  nop
    ctx->pc = 0x242160u;
    // NOP
    // 0x242164: 0xe7a0008c  swc1        $f0, 0x8C($sp)
    ctx->pc = 0x242164u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
    // 0x242168: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x242168u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x24216c: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x24216cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x242170: 0x26620940  addiu       $v0, $s3, 0x940
    ctx->pc = 0x242170u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 2368));
    // 0x242174: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x242174u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x242178: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x242178u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x24217c: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x24217Cu;
    SET_GPR_U32(ctx, 31, 0x242184u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x242184u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x242184u) { return; }
    ctx->pc = 0x242184u;
label_242184:
    // 0x242184: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x242184u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x242188: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x242188u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24218c: 0x0  nop
    ctx->pc = 0x24218cu;
    // NOP
    // 0x242190: 0xe7a0008c  swc1        $f0, 0x8C($sp)
    ctx->pc = 0x242190u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
    // 0x242194: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x242194u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x242198: 0x8c510284  lw          $s1, 0x284($v0)
    ctx->pc = 0x242198u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 644)));
    // 0x24219c: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x24219cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2421a0: 0x8c450288  lw          $a1, 0x288($v0)
    ctx->pc = 0x2421a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 648)));
    // 0x2421a4: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x2421a4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x2421a8: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x2421a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2421ac: 0x27a70070  addiu       $a3, $sp, 0x70
    ctx->pc = 0x2421acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2421b0: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x2421b0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2421b4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2421b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2421b8: 0x8c290140  lw          $t1, 0x140($at)
    ctx->pc = 0x2421b8u;
    SET_GPR_S32(ctx, 9, (int32_t)FAST_READ32(0x5D0140u));
    // 0x2421bc: 0xc075378  jal         func_1D4DE0
    ctx->pc = 0x2421BCu;
    SET_GPR_U32(ctx, 31, 0x2421C4u);
    ctx->pc = 0x1D4DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4DE0u, 0x2421BCu, 0x2421C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2421C4u;
label_2421c4:
    // 0x2421c4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2421c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2421c8: 0x8c230140  lw          $v1, 0x140($at)
    ctx->pc = 0x2421c8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0140u));
    // 0x2421cc: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x2421ccu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2421d0: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x2421d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2421d4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2421d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2421d8: 0x8c65028c  lw          $a1, 0x28C($v1)
    ctx->pc = 0x2421d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 652)));
    // 0x2421dc: 0x70a08628  paddub      $s0, $a1, $zero
    ctx->pc = 0x2421dcu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x2421e0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2421e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2421e4: 0x8c240140  lw          $a0, 0x140($at)
    ctx->pc = 0x2421e4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D0140u));
    // 0x2421e8: 0x43040  sll         $a2, $a0, 1
    ctx->pc = 0x2421e8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x2421ec: 0xc41021  addu        $v0, $a2, $a0
    ctx->pc = 0x2421ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x2421f0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2421f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2421f4: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x2421f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2421f8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2421f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2421fc: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x2421fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x242200: 0x2451021c  addiu       $s1, $v0, 0x21C
    ctx->pc = 0x242200u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 540));
    // 0x242204: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x242204u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x242208: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x242208u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x24220c: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x24220cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x242210: 0xc06b07c  jal         func_1AC1F0
    ctx->pc = 0x242210u;
    SET_GPR_U32(ctx, 31, 0x242218u);
    ctx->pc = 0x1AC1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AC1F0u, 0x242210u, 0x242218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242218u;
label_242218:
    // 0x242218: 0x8fb100a8  lw          $s1, 0xA8($sp)
    ctx->pc = 0x242218u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x24221c: 0x8e30028c  lw          $s0, 0x28C($s1)
    ctx->pc = 0x24221cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 652)));
    // 0x242220: 0x3c05c440  lui         $a1, 0xC440
    ctx->pc = 0x242220u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)50240 << 16));
    // 0x242224: 0x34a28000  ori         $v0, $a1, 0x8000
    ctx->pc = 0x242224u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32768);
    // 0x242228: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x242228u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24222c: 0x0  nop
    ctx->pc = 0x24222cu;
    // NOP
    // 0x242230: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x242230u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x242234: 0x3c024388  lui         $v0, 0x4388
    ctx->pc = 0x242234u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17288 << 16));
    // 0x242238: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x242238u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x24223c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x24223cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x242240: 0x0  nop
    ctx->pc = 0x242240u;
    // NOP
    // 0x242244: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x242244u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x242248: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x242248u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24224c: 0x0  nop
    ctx->pc = 0x24224cu;
    // NOP
    // 0x242250: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x242250u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x242254: 0x3c063f80  lui         $a2, 0x3F80
    ctx->pc = 0x242254u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16256 << 16));
    // 0x242258: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x242258u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24225c: 0x0  nop
    ctx->pc = 0x24225cu;
    // NOP
    // 0x242260: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x242260u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x242264: 0x27a20070  addiu       $v0, $sp, 0x70
    ctx->pc = 0x242264u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x242268: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x242268u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x24226c: 0x26650880  addiu       $a1, $s3, 0x880
    ctx->pc = 0x24226cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 2176));
    // 0x242270: 0x27b10070  addiu       $s1, $sp, 0x70
    ctx->pc = 0x242270u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x242274: 0x72203628  paddub      $a2, $s1, $zero
    ctx->pc = 0x242274u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x242278: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x242278u;
    SET_GPR_U32(ctx, 31, 0x242280u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x242280u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x242280u) { return; }
    ctx->pc = 0x242280u;
label_242280:
    // 0x242280: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x242280u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x242284: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x242284u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x242288: 0x0  nop
    ctx->pc = 0x242288u;
    // NOP
    // 0x24228c: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x24228cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x242290: 0x3c05c25c  lui         $a1, 0xC25C
    ctx->pc = 0x242290u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)49756 << 16));
    // 0x242294: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x242294u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x242298: 0x0  nop
    ctx->pc = 0x242298u;
    // NOP
    // 0x24229c: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x24229cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x2422a0: 0x3c024409  lui         $v0, 0x4409
    ctx->pc = 0x2422a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17417 << 16));
    // 0x2422a4: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x2422a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x2422a8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2422a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2422ac: 0x0  nop
    ctx->pc = 0x2422acu;
    // NOP
    // 0x2422b0: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x2422b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x2422b4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2422b4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2422b8: 0x0  nop
    ctx->pc = 0x2422b8u;
    // NOP
    // 0x2422bc: 0xe7a00088  swc1        $f0, 0x88($sp)
    ctx->pc = 0x2422bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x2422c0: 0x3c063f80  lui         $a2, 0x3F80
    ctx->pc = 0x2422c0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16256 << 16));
    // 0x2422c4: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x2422c4u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2422c8: 0x0  nop
    ctx->pc = 0x2422c8u;
    // NOP
    // 0x2422cc: 0xe7a0008c  swc1        $f0, 0x8C($sp)
    ctx->pc = 0x2422ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
    // 0x2422d0: 0x27a20080  addiu       $v0, $sp, 0x80
    ctx->pc = 0x2422d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2422d4: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2422d4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2422d8: 0x26650880  addiu       $a1, $s3, 0x880
    ctx->pc = 0x2422d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 2176));
    // 0x2422dc: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x2422dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2422e0: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x2422E0u;
    SET_GPR_U32(ctx, 31, 0x2422E8u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x2422E8u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2422E8u) { return; }
    ctx->pc = 0x2422E8u;
label_2422e8:
    // 0x2422e8: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2422e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2422ec: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2422ecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2422f0: 0x0  nop
    ctx->pc = 0x2422f0u;
    // NOP
    // 0x2422f4: 0xe7a0008c  swc1        $f0, 0x8C($sp)
    ctx->pc = 0x2422f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
    // 0x2422f8: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x2422f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2422fc: 0x8c44028c  lw          $a0, 0x28C($v0)
    ctx->pc = 0x2422fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 652)));
    // 0x242300: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x242300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x242304: 0x8c450290  lw          $a1, 0x290($v0)
    ctx->pc = 0x242304u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 656)));
    // 0x242308: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x242308u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x24230c: 0x27a70070  addiu       $a3, $sp, 0x70
    ctx->pc = 0x24230cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x242310: 0x24080010  addiu       $t0, $zero, 0x10
    ctx->pc = 0x242310u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x242314: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x242314u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x242318: 0x8c290140  lw          $t1, 0x140($at)
    ctx->pc = 0x242318u;
    SET_GPR_S32(ctx, 9, (int32_t)FAST_READ32(0x5D0140u));
    // 0x24231c: 0xc074efc  jal         func_1D3BF0
    ctx->pc = 0x24231Cu;
    SET_GPR_U32(ctx, 31, 0x242324u);
    ctx->pc = 0x1D3BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D3BF0u, 0x24231Cu, 0x242324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242324u;
label_242324:
    // 0x242324: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x242324u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x242328: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x242328u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x24232c: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x24232cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0140u));
    // 0x242330: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x242330u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x242334: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x242334u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x242338: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x242338u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x24233c: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x24233cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x242340: 0x438821  addu        $s1, $v0, $v1
    ctx->pc = 0x242340u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x242344: 0x2622021c  addiu       $v0, $s1, 0x21C
    ctx->pc = 0x242344u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 540));
    // 0x242348: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x242348u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x24234c: 0xc06b0d4  jal         func_1AC350
    ctx->pc = 0x24234Cu;
    SET_GPR_U32(ctx, 31, 0x242354u);
    ctx->pc = 0x1AC350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AC350u, 0x24234Cu, 0x242354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242354u;
label_242354:
    // 0x242354: 0x7bbf0060  lq          $ra, 0x60($sp)
    ctx->pc = 0x242354u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x242358: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x242358u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x24235c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x24235cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x242360: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x242360u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x242364: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x242364u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x242368: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x242368u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24236c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x24236cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x242370: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x242370u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x242374: 0x3e00008  jr          $ra
    ctx->pc = 0x242374u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x242374u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24237Cu;
}
