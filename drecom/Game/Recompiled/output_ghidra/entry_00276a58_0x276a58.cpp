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

// Function: entry_00276a58
// Address: 0x276a58 - 0x276af8
void entry_00276a58_0x276a58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00276a58_0x276a58");
#endif

    switch (ctx->pc) {
        case 0x276a90u: goto label_276a90;
        case 0x276aacu: goto label_276aac;
        case 0x276ac8u: goto label_276ac8;
        default: break;
    }

    ctx->pc = 0x276a58u;

    // 0x276a58: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x276a58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x276a5c: 0x2462a610  addiu       $v0, $v1, -0x59F0
    ctx->pc = 0x276a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944272));
    // 0x276a60: 0xafa200d4  sw          $v0, 0xD4($sp)
    ctx->pc = 0x276a60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 2));
    // 0x276a64: 0x8fa200d4  lw          $v0, 0xD4($sp)
    ctx->pc = 0x276a64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x276a68: 0x8c530000  lw          $s3, 0x0($v0)
    ctx->pc = 0x276a68u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x276a6c: 0x240200c8  addiu       $v0, $zero, 0xC8
    ctx->pc = 0x276a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    // 0x276a70: 0xae620100  sw          $v0, 0x100($s3)
    ctx->pc = 0x276a70u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 256), GPR_U32(ctx, 2));
    // 0x276a74: 0x3c023f7d  lui         $v0, 0x3F7D
    ctx->pc = 0x276a74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16253 << 16));
    // 0x276a78: 0x344270a4  ori         $v0, $v0, 0x70A4
    ctx->pc = 0x276a78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28836);
    // 0x276a7c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x276a7cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x276a80: 0x0  nop
    ctx->pc = 0x276a80u;
    // NOP
    // 0x276a84: 0xe66000ac  swc1        $f0, 0xAC($s3)
    ctx->pc = 0x276a84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 172), bits); }
    // 0x276a88: 0xc06765c  jal         func_19D970
    ctx->pc = 0x276A88u;
    SET_GPR_U32(ctx, 31, 0x276A90u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x276A88u, 0x276A90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276A90u;
label_276a90:
    // 0x276a90: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x276a90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x276a94: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x276a94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x276a98: 0x0  nop
    ctx->pc = 0x276a98u;
    // NOP
    // 0x276a9c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x276a9cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x276aa0: 0xe6600054  swc1        $f0, 0x54($s3)
    ctx->pc = 0x276aa0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 84), bits); }
    // 0x276aa4: 0xc06765c  jal         func_19D970
    ctx->pc = 0x276AA4u;
    SET_GPR_U32(ctx, 31, 0x276AACu);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x276AA4u, 0x276AACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276AACu;
label_276aac:
    // 0x276aac: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x276aacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x276ab0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x276ab0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x276ab4: 0x0  nop
    ctx->pc = 0x276ab4u;
    // NOP
    // 0x276ab8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x276ab8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x276abc: 0xe6600050  swc1        $f0, 0x50($s3)
    ctx->pc = 0x276abcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 80), bits); }
    // 0x276ac0: 0xc06765c  jal         func_19D970
    ctx->pc = 0x276AC0u;
    SET_GPR_U32(ctx, 31, 0x276AC8u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x276AC0u, 0x276AC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276AC8u;
label_276ac8:
    // 0x276ac8: 0x3c044248  lui         $a0, 0x4248
    ctx->pc = 0x276ac8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16968 << 16));
    // 0x276acc: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x276accu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x276ad0: 0x0  nop
    ctx->pc = 0x276ad0u;
    // NOP
    // 0x276ad4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x276ad4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x276ad8: 0xe6600058  swc1        $f0, 0x58($s3)
    ctx->pc = 0x276ad8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 88), bits); }
    // 0x276adc: 0x3c03c040  lui         $v1, 0xC040
    ctx->pc = 0x276adcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49216 << 16));
    // 0x276ae0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x276ae0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x276ae4: 0x0  nop
    ctx->pc = 0x276ae4u;
    // NOP
    // 0x276ae8: 0xe6600084  swc1        $f0, 0x84($s3)
    ctx->pc = 0x276ae8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 132), bits); }
    // 0x276aec: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x276aecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x276af0: 0x70608628  paddub      $s0, $v1, $zero
    ctx->pc = 0x276af0u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x276af4: 0x0  nop
    ctx->pc = 0x276af4u;
    // NOP
    ctx->pc = 0x276af8u;
}
