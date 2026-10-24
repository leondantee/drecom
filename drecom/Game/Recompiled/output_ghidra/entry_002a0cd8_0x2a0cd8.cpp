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

// Function: entry_002a0cd8
// Address: 0x2a0cd8 - 0x2a0de4
void entry_002a0cd8_0x2a0cd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002a0cd8_0x2a0cd8");
#endif

    switch (ctx->pc) {
        case 0x2a0d3cu: goto label_2a0d3c;
        case 0x2a0d44u: goto label_2a0d44;
        default: break;
    }

    ctx->pc = 0x2a0cd8u;

    // 0x2a0cd8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2a0cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a0cdc: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x2a0cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x2a0ce0: 0xa04310a8  sb          $v1, 0x10A8($v0)
    ctx->pc = 0x2a0ce0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4264), (uint8_t)GPR_U32(ctx, 3));
    // 0x2a0ce4: 0x8fa40128  lw          $a0, 0x128($sp)
    ctx->pc = 0x2a0ce4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x2a0ce8: 0xc4810120  lwc1        $f1, 0x120($a0)
    ctx->pc = 0x2a0ce8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a0cec: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2a0cecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2a0cf0: 0xc420dce0  lwc1        $f0, -0x2320($at)
    ctx->pc = 0x2a0cf0u;
    { uint32_t bits = FAST_READ32(0x3EDCE0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a0cf4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2a0cf4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2a0cf8: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x2a0cf8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2a0cfc: 0x8fa50128  lw          $a1, 0x128($sp)
    ctx->pc = 0x2a0cfcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x2a0d00: 0xc4a10128  lwc1        $f1, 0x128($a1)
    ctx->pc = 0x2a0d00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a0d04: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2a0d04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2a0d08: 0xc420dce8  lwc1        $f0, -0x2318($at)
    ctx->pc = 0x2a0d08u;
    { uint32_t bits = FAST_READ32(0x3EDCE8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a0d0c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2a0d0cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2a0d10: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x2a0d10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2a0d14: 0x3c063f80  lui         $a2, 0x3F80
    ctx->pc = 0x2a0d14u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16256 << 16));
    // 0x2a0d18: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x2a0d18u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a0d1c: 0x0  nop
    ctx->pc = 0x2a0d1cu;
    // NOP
    // 0x2a0d20: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x2a0d20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x2a0d24: 0x27a70020  addiu       $a3, $sp, 0x20
    ctx->pc = 0x2a0d24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2a0d28: 0x70e02628  paddub      $a0, $a3, $zero
    ctx->pc = 0x2a0d28u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x2a0d2c: 0x27a80020  addiu       $t0, $sp, 0x20
    ctx->pc = 0x2a0d2cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2a0d30: 0x71002e28  paddub      $a1, $t0, $zero
    ctx->pc = 0x2a0d30u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x2a0d34: 0xc040c24  jal         func_103090
    ctx->pc = 0x2A0D34u;
    SET_GPR_U32(ctx, 31, 0x2A0D3Cu);
    ctx->pc = 0x103090u;
    {
        ctx->pc = 0x2A0D3Cu;
        ps2_stubs::sceVu0Normalize(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2A0D3Cu) { return; }
    ctx->pc = 0x2A0D3Cu;
label_2a0d3c:
    // 0x2a0d3c: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2A0D3Cu;
    SET_GPR_U32(ctx, 31, 0x2A0D44u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2A0D3Cu, 0x2A0D44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0D44u;
label_2a0d44:
    // 0x2a0d44: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2a0d44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2a0d48: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2a0d48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2a0d4c: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x2A0D4Cu;
    {
        const bool branch_taken_0x2a0d4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a0d4c) {
            ctx->pc = 0x2A0DE4u;
            return;
        }
    }
    ctx->pc = 0x2A0D54u;
    // 0x2a0d54: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x2a0d54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x2a0d58: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2a0d58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2a0d5c: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x2a0d5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a0d60: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2a0d60u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2a0d64: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x2a0d64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x2a0d68: 0xe4400180  swc1        $f0, 0x180($v0)
    ctx->pc = 0x2a0d68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 384), bits); }
    // 0x2a0d6c: 0x3c044248  lui         $a0, 0x4248
    ctx->pc = 0x2a0d6cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16968 << 16));
    // 0x2a0d70: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x2a0d70u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2a0d74: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x2a0d74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a0d78: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2a0d78u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2a0d7c: 0x8fa50128  lw          $a1, 0x128($sp)
    ctx->pc = 0x2a0d7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x2a0d80: 0xe4a00188  swc1        $f0, 0x188($a1)
    ctx->pc = 0x2a0d80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 392), bits); }
    // 0x2a0d84: 0x8fa60128  lw          $a2, 0x128($sp)
    ctx->pc = 0x2a0d84u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x2a0d88: 0xc4c11288  lwc1        $f1, 0x1288($a2)
    ctx->pc = 0x2a0d88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a0d8c: 0x3c08451c  lui         $t0, 0x451C
    ctx->pc = 0x2a0d8cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)17692 << 16));
    // 0x2a0d90: 0x35074000  ori         $a3, $t0, 0x4000
    ctx->pc = 0x2a0d90u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)16384);
    // 0x2a0d94: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x2a0d94u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a0d98: 0x0  nop
    ctx->pc = 0x2a0d98u;
    // NOP
    // 0x2a0d9c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2a0d9cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a0da0: 0x0  nop
    ctx->pc = 0x2a0da0u;
    // NOP
    // 0x2a0da4: 0x45010035  bc1t        . + 4 + (0x35 << 2)
    ctx->pc = 0x2A0DA4u;
    {
        const bool branch_taken_0x2a0da4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a0da4) {
            ctx->pc = 0x2A0E7Cu;
            return;
        }
    }
    ctx->pc = 0x2A0DACu;
    // 0x2a0dac: 0x3c0942c8  lui         $t1, 0x42C8
    ctx->pc = 0x2a0dacu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)17096 << 16));
    // 0x2a0db0: 0x44890800  mtc1        $t1, $f1
    ctx->pc = 0x2a0db0u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2a0db4: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x2a0db4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a0db8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2a0db8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2a0dbc: 0x8faa0128  lw          $t2, 0x128($sp)
    ctx->pc = 0x2a0dbcu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x2a0dc0: 0xe5400180  swc1        $f0, 0x180($t2)
    ctx->pc = 0x2a0dc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 384), bits); }
    // 0x2a0dc4: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x2a0dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x2a0dc8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2a0dc8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2a0dcc: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x2a0dccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a0dd0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2a0dd0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2a0dd4: 0x8fa40128  lw          $a0, 0x128($sp)
    ctx->pc = 0x2a0dd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x2a0dd8: 0xe4800188  swc1        $f0, 0x188($a0)
    ctx->pc = 0x2a0dd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 392), bits); }
    // 0x2a0ddc: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x2A0DDCu;
    {
        const bool branch_taken_0x2a0ddc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a0ddc) {
            ctx->pc = 0x2A0E7Cu;
            return;
        }
    }
    ctx->pc = 0x2A0DE4u;
}
