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

// Function: entry_00276cb0
// Address: 0x276cb0 - 0x276d50
void entry_00276cb0_0x276cb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00276cb0_0x276cb0");
#endif

    switch (ctx->pc) {
        case 0x276ce8u: goto label_276ce8;
        case 0x276d04u: goto label_276d04;
        case 0x276d20u: goto label_276d20;
        default: break;
    }

    ctx->pc = 0x276cb0u;

    // 0x276cb0: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x276cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x276cb4: 0x2443a610  addiu       $v1, $v0, -0x59F0
    ctx->pc = 0x276cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944272));
    // 0x276cb8: 0xafa300dc  sw          $v1, 0xDC($sp)
    ctx->pc = 0x276cb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 3));
    // 0x276cbc: 0x8fa200dc  lw          $v0, 0xDC($sp)
    ctx->pc = 0x276cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x276cc0: 0x8c530000  lw          $s3, 0x0($v0)
    ctx->pc = 0x276cc0u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x276cc4: 0x240200c8  addiu       $v0, $zero, 0xC8
    ctx->pc = 0x276cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    // 0x276cc8: 0xae620100  sw          $v0, 0x100($s3)
    ctx->pc = 0x276cc8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 256), GPR_U32(ctx, 2));
    // 0x276ccc: 0x3c033f7d  lui         $v1, 0x3F7D
    ctx->pc = 0x276cccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16253 << 16));
    // 0x276cd0: 0x346270a4  ori         $v0, $v1, 0x70A4
    ctx->pc = 0x276cd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)28836);
    // 0x276cd4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x276cd4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x276cd8: 0x0  nop
    ctx->pc = 0x276cd8u;
    // NOP
    // 0x276cdc: 0xe66000ac  swc1        $f0, 0xAC($s3)
    ctx->pc = 0x276cdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 172), bits); }
    // 0x276ce0: 0xc06765c  jal         func_19D970
    ctx->pc = 0x276CE0u;
    SET_GPR_U32(ctx, 31, 0x276CE8u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x276CE0u, 0x276CE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276CE8u;
label_276ce8:
    // 0x276ce8: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x276ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x276cec: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x276cecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x276cf0: 0x0  nop
    ctx->pc = 0x276cf0u;
    // NOP
    // 0x276cf4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x276cf4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x276cf8: 0xe6600054  swc1        $f0, 0x54($s3)
    ctx->pc = 0x276cf8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 84), bits); }
    // 0x276cfc: 0xc06765c  jal         func_19D970
    ctx->pc = 0x276CFCu;
    SET_GPR_U32(ctx, 31, 0x276D04u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x276CFCu, 0x276D04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276D04u;
label_276d04:
    // 0x276d04: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x276d04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x276d08: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x276d08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x276d0c: 0x0  nop
    ctx->pc = 0x276d0cu;
    // NOP
    // 0x276d10: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x276d10u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x276d14: 0xe6600050  swc1        $f0, 0x50($s3)
    ctx->pc = 0x276d14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 80), bits); }
    // 0x276d18: 0xc06765c  jal         func_19D970
    ctx->pc = 0x276D18u;
    SET_GPR_U32(ctx, 31, 0x276D20u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x276D18u, 0x276D20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276D20u;
label_276d20:
    // 0x276d20: 0x3c0341f0  lui         $v1, 0x41F0
    ctx->pc = 0x276d20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16880 << 16));
    // 0x276d24: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x276d24u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x276d28: 0x0  nop
    ctx->pc = 0x276d28u;
    // NOP
    // 0x276d2c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x276d2cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x276d30: 0xe6600058  swc1        $f0, 0x58($s3)
    ctx->pc = 0x276d30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 88), bits); }
    // 0x276d34: 0x3c04bfc0  lui         $a0, 0xBFC0
    ctx->pc = 0x276d34u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49088 << 16));
    // 0x276d38: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x276d38u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x276d3c: 0x0  nop
    ctx->pc = 0x276d3cu;
    // NOP
    // 0x276d40: 0xe6600084  swc1        $f0, 0x84($s3)
    ctx->pc = 0x276d40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 132), bits); }
    // 0x276d44: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x276d44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x276d48: 0x70608628  paddub      $s0, $v1, $zero
    ctx->pc = 0x276d48u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x276d4c: 0x0  nop
    ctx->pc = 0x276d4cu;
    // NOP
    ctx->pc = 0x276d50u;
}
