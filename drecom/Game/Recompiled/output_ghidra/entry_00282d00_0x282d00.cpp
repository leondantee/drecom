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

// Function: entry_00282d00
// Address: 0x282d00 - 0x282dc8
void entry_00282d00_0x282d00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00282d00_0x282d00");
#endif

    switch (ctx->pc) {
        case 0x282d08u: goto label_282d08;
        case 0x282d24u: goto label_282d24;
        case 0x282d50u: goto label_282d50;
        case 0x282db4u: goto label_282db4;
        case 0x282dc0u: goto label_282dc0;
        default: break;
    }

    ctx->pc = 0x282d00u;

    // 0x282d00: 0xc06765c  jal         func_19D970
    ctx->pc = 0x282D00u;
    SET_GPR_U32(ctx, 31, 0x282D08u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x282D00u, 0x282D08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x282D08u;
label_282d08:
    // 0x282d08: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x282d08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
    // 0x282d0c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x282d0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x282d10: 0x0  nop
    ctx->pc = 0x282d10u;
    // NOP
    // 0x282d14: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x282d14u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x282d18: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x282d18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x282d1c: 0xc06765c  jal         func_19D970
    ctx->pc = 0x282D1Cu;
    SET_GPR_U32(ctx, 31, 0x282D24u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x282D1Cu, 0x282D24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x282D24u;
label_282d24:
    // 0x282d24: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x282d24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x282d28: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x282d28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x282d2c: 0x0  nop
    ctx->pc = 0x282d2cu;
    // NOP
    // 0x282d30: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x282d30u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x282d34: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x282d34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x282d38: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x282d38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x282d3c: 0x0  nop
    ctx->pc = 0x282d3cu;
    // NOP
    // 0x282d40: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x282d40u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x282d44: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x282d44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x282d48: 0xc06765c  jal         func_19D970
    ctx->pc = 0x282D48u;
    SET_GPR_U32(ctx, 31, 0x282D50u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x282D48u, 0x282D50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x282D50u;
label_282d50:
    // 0x282d50: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x282d50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x282d54: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x282d54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x282d58: 0x0  nop
    ctx->pc = 0x282d58u;
    // NOP
    // 0x282d5c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x282d5cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x282d60: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x282d60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x282d64: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x282d64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x282d68: 0x0  nop
    ctx->pc = 0x282d68u;
    // NOP
    // 0x282d6c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x282d6cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x282d70: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x282d70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x282d74: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x282d74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x282d78: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x282d78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x282d7c: 0x0  nop
    ctx->pc = 0x282d7cu;
    // NOP
    // 0x282d80: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x282d80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x282d84: 0x8e220130  lw          $v0, 0x130($s1)
    ctx->pc = 0x282d84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 304)));
    // 0x282d88: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x282d88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x282d8c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x282d8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x282d90: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x282d90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x282d94: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x282d94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x282d98: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x282d98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x282d9c: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x282d9cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x282da0: 0x2404042c  addiu       $a0, $zero, 0x42C
    ctx->pc = 0x282da0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1068));
    // 0x282da4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x282da4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x282da8: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x282da8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x282dac: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x282DACu;
    SET_GPR_U32(ctx, 31, 0x282DB4u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x282DACu, 0x282DB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x282DB4u;
label_282db4:
    // 0x282db4: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x282db4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x282db8: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x282DB8u;
    SET_GPR_U32(ctx, 31, 0x282DC0u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x282DB8u, 0x282DC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x282DC0u;
label_282dc0:
    // 0x282dc0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x282dc0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x282dc4: 0x0  nop
    ctx->pc = 0x282dc4u;
    // NOP
    ctx->pc = 0x282dc8u;
}
