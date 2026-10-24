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

// Function: entry_002e3af0
// Address: 0x2e3af0 - 0x2e3ba8
void entry_002e3af0_0x2e3af0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002e3af0_0x2e3af0");
#endif

    switch (ctx->pc) {
        case 0x2e3b34u: goto label_2e3b34;
        case 0x2e3b44u: goto label_2e3b44;
        case 0x2e3b58u: goto label_2e3b58;
        case 0x2e3b6cu: goto label_2e3b6c;
        case 0x2e3b7cu: goto label_2e3b7c;
        case 0x2e3ba0u: goto label_2e3ba0;
        default: break;
    }

    ctx->pc = 0x2e3af0u;

    // 0x2e3af0: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x2e3af0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2e3af4: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x2e3af4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x2e3af8: 0x24428c08  addiu       $v0, $v0, -0x73F8
    ctx->pc = 0x2e3af8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937608));
    // 0x2e3afc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2e3afcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2e3b00: 0x8c530000  lw          $s3, 0x0($v0)
    ctx->pc = 0x2e3b00u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e3b04: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x2e3b04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2e3b08: 0x1310c0  sll         $v0, $s3, 3
    ctx->pc = 0x2e3b08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
    // 0x2e3b0c: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x2e3b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x2e3b10: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x2e3b10u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2e3b14: 0x8c820058  lw          $v0, 0x58($a0)
    ctx->pc = 0x2e3b14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
    // 0x2e3b18: 0x438821  addu        $s1, $v0, $v1
    ctx->pc = 0x2e3b18u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2e3b1c: 0x3c0242b4  lui         $v0, 0x42B4
    ctx->pc = 0x2e3b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17076 << 16));
    // 0x2e3b20: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2e3b20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2e3b24: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x2e3b24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2e3b28: 0x72602e28  paddub      $a1, $s3, $zero
    ctx->pc = 0x2e3b28u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x2e3b2c: 0xc05d428  jal         func_1750A0
    ctx->pc = 0x2E3B2Cu;
    SET_GPR_U32(ctx, 31, 0x2E3B34u);
    ctx->pc = 0x1750A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1750A0u, 0x2E3B2Cu, 0x2E3B34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3B34u;
label_2e3b34:
    // 0x2e3b34: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x2e3b34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2e3b38: 0x2405025c  addiu       $a1, $zero, 0x25C
    ctx->pc = 0x2e3b38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 604));
    // 0x2e3b3c: 0xc0960d0  jal         func_258340
    ctx->pc = 0x2E3B3Cu;
    SET_GPR_U32(ctx, 31, 0x2E3B44u);
    ctx->pc = 0x258340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258340u, 0x2E3B3Cu, 0x2E3B44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3B44u;
label_2e3b44:
    // 0x2e3b44: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x2e3b44u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x2e3b48: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x2e3b48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2e3b4c: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x2e3b4cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2e3b50: 0xc0961d0  jal         func_258740
    ctx->pc = 0x2E3B50u;
    SET_GPR_U32(ctx, 31, 0x2E3B58u);
    ctx->pc = 0x258740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258740u, 0x2E3B50u, 0x2E3B58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3B58u;
label_2e3b58:
    // 0x2e3b58: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x2e3b58u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x2e3b5c: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x2e3b5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2e3b60: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2e3b60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e3b64: 0xc0961d0  jal         func_258740
    ctx->pc = 0x2E3B64u;
    SET_GPR_U32(ctx, 31, 0x2E3B6Cu);
    ctx->pc = 0x258740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258740u, 0x2E3B64u, 0x2E3B6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3B6Cu;
label_2e3b6c:
    // 0x2e3b6c: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x2e3b6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2e3b70: 0x24050060  addiu       $a1, $zero, 0x60
    ctx->pc = 0x2e3b70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x2e3b74: 0xc09620c  jal         func_258830
    ctx->pc = 0x2E3B74u;
    SET_GPR_U32(ctx, 31, 0x2E3B7Cu);
    ctx->pc = 0x258830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258830u, 0x2E3B74u, 0x2E3B7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3B7Cu;
label_2e3b7c:
    // 0x2e3b7c: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x2e3b7cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x2e3b80: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x2e3b80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x2e3b84: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x2e3b84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x2e3b88: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2e3b88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2e3b8c: 0x3c022402  lui         $v0, 0x2402
    ctx->pc = 0x2e3b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)9218 << 16));
    // 0x2e3b90: 0x34421400  ori         $v0, $v0, 0x1400
    ctx->pc = 0x2e3b90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)5120);
    // 0x2e3b94: 0x432825  or          $a1, $v0, $v1
    ctx->pc = 0x2e3b94u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2e3b98: 0xc096410  jal         func_259040
    ctx->pc = 0x2E3B98u;
    SET_GPR_U32(ctx, 31, 0x2E3BA0u);
    ctx->pc = 0x259040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259040u, 0x2E3B98u, 0x2E3BA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3BA0u;
label_2e3ba0:
    // 0x2e3ba0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2e3ba0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2e3ba4: 0x0  nop
    ctx->pc = 0x2e3ba4u;
    // NOP
    ctx->pc = 0x2e3ba8u;
}
