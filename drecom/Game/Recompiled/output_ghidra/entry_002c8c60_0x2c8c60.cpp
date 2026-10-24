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

// Function: entry_002c8c60
// Address: 0x2c8c60 - 0x2c8d50
void entry_002c8c60_0x2c8c60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002c8c60_0x2c8c60");
#endif

    switch (ctx->pc) {
        case 0x2c8c6cu: goto label_2c8c6c;
        case 0x2c8cd8u: goto label_2c8cd8;
        case 0x2c8ce4u: goto label_2c8ce4;
        case 0x2c8d44u: goto label_2c8d44;
        default: break;
    }

    ctx->pc = 0x2c8c60u;

    // 0x2c8c60: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x2c8c60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2c8c64: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x2C8C64u;
    SET_GPR_U32(ctx, 31, 0x2C8C6Cu);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x2C8C64u, 0x2C8C6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8C6Cu;
label_2c8c6c:
    // 0x2c8c6c: 0x3c0342a0  lui         $v1, 0x42A0
    ctx->pc = 0x2c8c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17056 << 16));
    // 0x2c8c70: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2c8c70u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c8c74: 0x0  nop
    ctx->pc = 0x2c8c74u;
    // NOP
    // 0x2c8c78: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x2c8c78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x2c8c7c: 0x3c103e99  lui         $s0, 0x3E99
    ctx->pc = 0x2c8c7cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)16025 << 16));
    // 0x2c8c80: 0x3602999a  ori         $v0, $s0, 0x999A
    ctx->pc = 0x2c8c80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)39322);
    // 0x2c8c84: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c8c84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c8c88: 0x0  nop
    ctx->pc = 0x2c8c88u;
    // NOP
    // 0x2c8c8c: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x2c8c8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x2c8c90: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x2c8c90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x2c8c94: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c8c94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c8c98: 0x0  nop
    ctx->pc = 0x2c8c98u;
    // NOP
    // 0x2c8c9c: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x2c8c9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2c8ca0: 0x8fb00088  lw          $s0, 0x88($sp)
    ctx->pc = 0x2c8ca0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c8ca4: 0x8e030130  lw          $v1, 0x130($s0)
    ctx->pc = 0x2c8ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
    // 0x2c8ca8: 0x24630080  addiu       $v1, $v1, 0x80
    ctx->pc = 0x2c8ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
    // 0x2c8cac: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x2c8cacu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2c8cb0: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x2c8cb0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x2c8cb4: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x2c8cb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2c8cb8: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x2c8cb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x2c8cbc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x2c8cbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x2c8cc0: 0x833824  and         $a3, $a0, $v1
    ctx->pc = 0x2c8cc0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x2c8cc4: 0x2404170d  addiu       $a0, $zero, 0x170D
    ctx->pc = 0x2c8cc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5901));
    // 0x2c8cc8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2c8cc8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2c8ccc: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x2c8cccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2c8cd0: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x2C8CD0u;
    SET_GPR_U32(ctx, 31, 0x2C8CD8u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x2C8CD0u, 0x2C8CD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8CD8u;
label_2c8cd8:
    // 0x2c8cd8: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2c8cd8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2c8cdc: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x2C8CDCu;
    SET_GPR_U32(ctx, 31, 0x2C8CE4u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x2C8CDCu, 0x2C8CE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8CE4u;
label_2c8ce4:
    // 0x2c8ce4: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2c8ce4u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2c8ce8: 0x3c03c220  lui         $v1, 0xC220
    ctx->pc = 0x2c8ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49696 << 16));
    // 0x2c8cec: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2c8cecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c8cf0: 0x0  nop
    ctx->pc = 0x2c8cf0u;
    // NOP
    // 0x2c8cf4: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x2c8cf4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2c8cf8: 0x3c023e99  lui         $v0, 0x3E99
    ctx->pc = 0x2c8cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16025 << 16));
    // 0x2c8cfc: 0x3443999a  ori         $v1, $v0, 0x999A
    ctx->pc = 0x2c8cfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x2c8d00: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2c8d00u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c8d04: 0x0  nop
    ctx->pc = 0x2c8d04u;
    // NOP
    // 0x2c8d08: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x2c8d08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x2c8d0c: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2c8d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c8d10: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x2c8d10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2c8d14: 0x24420080  addiu       $v0, $v0, 0x80
    ctx->pc = 0x2c8d14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x2c8d18: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2c8d18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2c8d1c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2c8d1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2c8d20: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2c8d20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2c8d24: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2c8d24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2c8d28: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2c8d28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2c8d2c: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x2c8d2cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2c8d30: 0x2404170d  addiu       $a0, $zero, 0x170D
    ctx->pc = 0x2c8d30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5901));
    // 0x2c8d34: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2c8d34u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2c8d38: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x2c8d38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2c8d3c: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x2C8D3Cu;
    SET_GPR_U32(ctx, 31, 0x2C8D44u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x2C8D3Cu, 0x2C8D44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8D44u;
label_2c8d44:
    // 0x2c8d44: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2c8d44u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2c8d48: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x2C8D48u;
    SET_GPR_U32(ctx, 31, 0x2C8D50u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x2C8D48u, 0x2C8D50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8D50u;
}
