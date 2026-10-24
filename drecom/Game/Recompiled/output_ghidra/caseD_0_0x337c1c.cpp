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

// Function: caseD_0
// Address: 0x337c1c - 0x337d34
void caseD_0_0x337c1c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_0_0x337c1c");
#endif

    switch (ctx->pc) {
        case 0x337d08u: goto label_337d08;
        default: break;
    }

    ctx->pc = 0x337c1cu;

    // 0x337c1c: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x337c1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x337c20: 0x8c314e38  lw          $s1, 0x4E38($at)
    ctx->pc = 0x337c20u;
    SET_GPR_S32(ctx, 17, (int32_t)FAST_READ32(0x894E38u));
    // 0x337c24: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x337c24u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x337c28: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x337c28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x337c2c: 0x9042663f  lbu         $v0, 0x663F($v0)
    ctx->pc = 0x337c2cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 26175)));
    // 0x337c30: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x337c30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x337c34: 0x24440001  addiu       $a0, $v0, 0x1
    ctx->pc = 0x337c34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x337c38: 0x4163c  dsll32      $v0, $a0, 24
    ctx->pc = 0x337c38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 24));
    // 0x337c3c: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x337c3cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x337c40: 0xa2025dea  sb          $v0, 0x5DEA($s0)
    ctx->pc = 0x337c40u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 24042), (uint8_t)GPR_U32(ctx, 2));
    // 0x337c44: 0x26135f4c  addiu       $s3, $s0, 0x5F4C
    ctx->pc = 0x337c44u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 24396));
    // 0x337c48: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x337c48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x337c4c: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x337c4cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x337c50: 0x3c024380  lui         $v0, 0x4380
    ctx->pc = 0x337c50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17280 << 16));
    // 0x337c54: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x337c54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x337c58: 0x0  nop
    ctx->pc = 0x337c58u;
    // NOP
    // 0x337c5c: 0xe6600044  swc1        $f0, 0x44($s3)
    ctx->pc = 0x337c5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 68), bits); }
    // 0x337c60: 0x3c024360  lui         $v0, 0x4360
    ctx->pc = 0x337c60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17248 << 16));
    // 0x337c64: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x337c64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x337c68: 0x0  nop
    ctx->pc = 0x337c68u;
    // NOP
    // 0x337c6c: 0xe6600084  swc1        $f0, 0x84($s3)
    ctx->pc = 0x337c6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 132), bits); }
    // 0x337c70: 0x3c02435c  lui         $v0, 0x435C
    ctx->pc = 0x337c70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17244 << 16));
    // 0x337c74: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x337c74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x337c78: 0x0  nop
    ctx->pc = 0x337c78u;
    // NOP
    // 0x337c7c: 0xe6600048  swc1        $f0, 0x48($s3)
    ctx->pc = 0x337c7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 72), bits); }
    // 0x337c80: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x337c80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x337c84: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x337c84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x337c88: 0x0  nop
    ctx->pc = 0x337c88u;
    // NOP
    // 0x337c8c: 0xe6600088  swc1        $f0, 0x88($s3)
    ctx->pc = 0x337c8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 136), bits); }
    // 0x337c90: 0x3c024299  lui         $v0, 0x4299
    ctx->pc = 0x337c90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17049 << 16));
    // 0x337c94: 0x3444999a  ori         $a0, $v0, 0x999A
    ctx->pc = 0x337c94u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x337c98: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x337c98u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x337c9c: 0x0  nop
    ctx->pc = 0x337c9cu;
    // NOP
    // 0x337ca0: 0xe660004c  swc1        $f0, 0x4C($s3)
    ctx->pc = 0x337ca0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 76), bits); }
    // 0x337ca4: 0x82115dea  lb          $s1, 0x5DEA($s0)
    ctx->pc = 0x337ca4u;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 24042)));
    // 0x337ca8: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x337ca8u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x337cac: 0x0  nop
    ctx->pc = 0x337cacu;
    // NOP
    // 0x337cb0: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x337cb0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x337cb4: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x337cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x337cb8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x337cb8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x337cbc: 0x0  nop
    ctx->pc = 0x337cbcu;
    // NOP
    // 0x337cc0: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x337cc0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x337cc4: 0x3c024240  lui         $v0, 0x4240
    ctx->pc = 0x337cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16960 << 16));
    // 0x337cc8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x337cc8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x337ccc: 0x0  nop
    ctx->pc = 0x337cccu;
    // NOP
    // 0x337cd0: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x337cd0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x337cd4: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x337cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x337cd8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x337cd8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x337cdc: 0x0  nop
    ctx->pc = 0x337cdcu;
    // NOP
    // 0x337ce0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x337ce0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x337ce4: 0xe660008c  swc1        $f0, 0x8C($s3)
    ctx->pc = 0x337ce4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 140), bits); }
    // 0x337ce8: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x337ce8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x337cec: 0x26650004  addiu       $a1, $s3, 0x4
    ctx->pc = 0x337cecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x337cf0: 0x26660044  addiu       $a2, $s3, 0x44
    ctx->pc = 0x337cf0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 68));
    // 0x337cf4: 0x26670084  addiu       $a3, $s3, 0x84
    ctx->pc = 0x337cf4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), 132));
    // 0x337cf8: 0x266800c4  addiu       $t0, $s3, 0xC4
    ctx->pc = 0x337cf8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 19), 196));
    // 0x337cfc: 0x26690104  addiu       $t1, $s3, 0x104
    ctx->pc = 0x337cfcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 19), 260));
    // 0x337d00: 0xc0a43e0  jal         func_290F80
    ctx->pc = 0x337D00u;
    SET_GPR_U32(ctx, 31, 0x337D08u);
    ctx->pc = 0x290F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290F80u, 0x337D00u, 0x337D08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x337D08u;
label_337d08:
    // 0x337d08: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x337d08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x337d0c: 0xae025dc0  sw          $v0, 0x5DC0($s0)
    ctx->pc = 0x337d0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24000), GPR_U32(ctx, 2));
    // 0x337d10: 0xae005dc4  sw          $zero, 0x5DC4($s0)
    ctx->pc = 0x337d10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24004), GPR_U32(ctx, 0));
    // 0x337d14: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x337d14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x337d18: 0xae025dc8  sw          $v0, 0x5DC8($s0)
    ctx->pc = 0x337d18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24008), GPR_U32(ctx, 2));
    // 0x337d1c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x337d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x337d20: 0xae025dcc  sw          $v0, 0x5DCC($s0)
    ctx->pc = 0x337d20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24012), GPR_U32(ctx, 2));
    // 0x337d24: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x337d24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x337d28: 0xae025dd4  sw          $v0, 0x5DD4($s0)
    ctx->pc = 0x337d28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24020), GPR_U32(ctx, 2));
    // 0x337d2c: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x337D2Cu;
    {
        const bool branch_taken_0x337d2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x337d2c) {
            ctx->pc = 0x337E30u;
            return;
        }
    }
    ctx->pc = 0x337D34u;
}
