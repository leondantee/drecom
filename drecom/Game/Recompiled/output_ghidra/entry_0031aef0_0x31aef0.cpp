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

// Function: entry_0031aef0
// Address: 0x31aef0 - 0x31af70
void entry_0031aef0_0x31aef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0031aef0_0x31aef0");
#endif

    switch (ctx->pc) {
        case 0x31af60u: goto label_31af60;
        case 0x31af6cu: goto label_31af6c;
        default: break;
    }

    ctx->pc = 0x31aef0u;

    // 0x31aef0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x31aef0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31aef4: 0x0  nop
    ctx->pc = 0x31aef4u;
    // NOP
    // 0x31aef8: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x31aef8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x31aefc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x31aefcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31af00: 0x0  nop
    ctx->pc = 0x31af00u;
    // NOP
    // 0x31af04: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x31af04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x31af08: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x31af08u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31af0c: 0x0  nop
    ctx->pc = 0x31af0cu;
    // NOP
    // 0x31af10: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x31af10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x31af14: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x31af14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x31af18: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x31af18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31af1c: 0x0  nop
    ctx->pc = 0x31af1cu;
    // NOP
    // 0x31af20: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x31af20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x31af24: 0x101980  sll         $v1, $s0, 6
    ctx->pc = 0x31af24u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x31af28: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x31af28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x31af2c: 0x8c22dcf0  lw          $v0, -0x2310($at)
    ctx->pc = 0x31af2cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3EDCF0u));
    // 0x31af30: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x31af30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x31af34: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x31af34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x31af38: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x31af38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x31af3c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x31af3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x31af40: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x31af40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x31af44: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x31af44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x31af48: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x31af48u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x31af4c: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x31af4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x31af50: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x31af50u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x31af54: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x31af54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x31af58: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x31AF58u;
    SET_GPR_U32(ctx, 31, 0x31AF60u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x31AF58u, 0x31AF60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31AF60u;
label_31af60:
    // 0x31af60: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x31af60u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x31af64: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x31AF64u;
    SET_GPR_U32(ctx, 31, 0x31AF6Cu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x31AF64u, 0x31AF6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31AF6Cu;
label_31af6c:
    // 0x31af6c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x31af6cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->pc = 0x31af70u;
}
