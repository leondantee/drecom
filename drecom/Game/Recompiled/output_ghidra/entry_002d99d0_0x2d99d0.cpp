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

// Function: entry_002d99d0
// Address: 0x2d99d0 - 0x2d9a88
void entry_002d99d0_0x2d99d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002d99d0_0x2d99d0");
#endif

    switch (ctx->pc) {
        case 0x2d9a14u: goto label_2d9a14;
        case 0x2d9a24u: goto label_2d9a24;
        case 0x2d9a38u: goto label_2d9a38;
        case 0x2d9a4cu: goto label_2d9a4c;
        case 0x2d9a5cu: goto label_2d9a5c;
        case 0x2d9a80u: goto label_2d9a80;
        default: break;
    }

    ctx->pc = 0x2d99d0u;

    // 0x2d99d0: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x2d99d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2d99d4: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x2d99d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x2d99d8: 0x24428ac0  addiu       $v0, $v0, -0x7540
    ctx->pc = 0x2d99d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937280));
    // 0x2d99dc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2d99dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d99e0: 0x8c540000  lw          $s4, 0x0($v0)
    ctx->pc = 0x2d99e0u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d99e4: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x2d99e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x2d99e8: 0x1410c0  sll         $v0, $s4, 3
    ctx->pc = 0x2d99e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 3));
    // 0x2d99ec: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x2d99ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x2d99f0: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x2d99f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2d99f4: 0x8c820058  lw          $v0, 0x58($a0)
    ctx->pc = 0x2d99f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
    // 0x2d99f8: 0x439821  addu        $s3, $v0, $v1
    ctx->pc = 0x2d99f8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d99fc: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x2d99fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x2d9a00: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2d9a00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2d9a04: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x2d9a04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x2d9a08: 0x72802e28  paddub      $a1, $s4, $zero
    ctx->pc = 0x2d9a08u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x2d9a0c: 0xc05d428  jal         func_1750A0
    ctx->pc = 0x2D9A0Cu;
    SET_GPR_U32(ctx, 31, 0x2D9A14u);
    ctx->pc = 0x1750A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1750A0u, 0x2D9A0Cu, 0x2D9A14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9A14u;
label_2d9a14:
    // 0x2d9a14: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x2d9a14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x2d9a18: 0x2405025c  addiu       $a1, $zero, 0x25C
    ctx->pc = 0x2d9a18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 604));
    // 0x2d9a1c: 0xc0960d0  jal         func_258340
    ctx->pc = 0x2D9A1Cu;
    SET_GPR_U32(ctx, 31, 0x2D9A24u);
    ctx->pc = 0x258340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258340u, 0x2D9A1Cu, 0x2D9A24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9A24u;
label_2d9a24:
    // 0x2d9a24: 0x72602628  paddub      $a0, $s3, $zero
    ctx->pc = 0x2d9a24u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x2d9a28: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x2d9a28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2d9a2c: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x2d9a2cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2d9a30: 0xc0961d0  jal         func_258740
    ctx->pc = 0x2D9A30u;
    SET_GPR_U32(ctx, 31, 0x2D9A38u);
    ctx->pc = 0x258740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258740u, 0x2D9A30u, 0x2D9A38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9A38u;
label_2d9a38:
    // 0x2d9a38: 0x72602628  paddub      $a0, $s3, $zero
    ctx->pc = 0x2d9a38u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x2d9a3c: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x2d9a3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2d9a40: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2d9a40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d9a44: 0xc0961d0  jal         func_258740
    ctx->pc = 0x2D9A44u;
    SET_GPR_U32(ctx, 31, 0x2D9A4Cu);
    ctx->pc = 0x258740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258740u, 0x2D9A44u, 0x2D9A4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9A4Cu;
label_2d9a4c:
    // 0x2d9a4c: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x2d9a4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x2d9a50: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x2d9a50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2d9a54: 0xc09620c  jal         func_258830
    ctx->pc = 0x2D9A54u;
    SET_GPR_U32(ctx, 31, 0x2D9A5Cu);
    ctx->pc = 0x258830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258830u, 0x2D9A54u, 0x2D9A5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9A5Cu;
label_2d9a5c:
    // 0x2d9a5c: 0x72602628  paddub      $a0, $s3, $zero
    ctx->pc = 0x2d9a5cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x2d9a60: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x2d9a60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x2d9a64: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x2d9a64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x2d9a68: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2d9a68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2d9a6c: 0x3c022402  lui         $v0, 0x2402
    ctx->pc = 0x2d9a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)9218 << 16));
    // 0x2d9a70: 0x34421400  ori         $v0, $v0, 0x1400
    ctx->pc = 0x2d9a70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)5120);
    // 0x2d9a74: 0x432825  or          $a1, $v0, $v1
    ctx->pc = 0x2d9a74u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2d9a78: 0xc096410  jal         func_259040
    ctx->pc = 0x2D9A78u;
    SET_GPR_U32(ctx, 31, 0x2D9A80u);
    ctx->pc = 0x259040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259040u, 0x2D9A78u, 0x2D9A80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9A80u;
label_2d9a80:
    // 0x2d9a80: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2d9a80u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2d9a84: 0x0  nop
    ctx->pc = 0x2d9a84u;
    // NOP
    ctx->pc = 0x2d9a88u;
}
