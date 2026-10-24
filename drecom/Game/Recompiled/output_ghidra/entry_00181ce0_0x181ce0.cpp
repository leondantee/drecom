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

// Function: entry_00181ce0
// Address: 0x181ce0 - 0x181e20
void entry_00181ce0_0x181ce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00181ce0_0x181ce0");
#endif

    switch (ctx->pc) {
        case 0x181df0u: goto label_181df0;
        default: break;
    }

    ctx->pc = 0x181ce0u;

    // 0x181ce0: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x181ce0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x181ce4: 0x8426f138  lh          $a2, -0xEC8($at)
    ctx->pc = 0x181ce4u;
    SET_GPR_S32(ctx, 6, (int16_t)FAST_READ16(0x47F138u));
    // 0x181ce8: 0x61c3c  dsll32      $v1, $a2, 16
    ctx->pc = 0x181ce8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) << (32 + 16));
    // 0x181cec: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x181cecu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x181cf0: 0x33100  sll         $a2, $v1, 4
    ctx->pc = 0x181cf0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x181cf4: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x181cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x181cf8: 0x33140  sll         $a2, $v1, 5
    ctx->pc = 0x181cf8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x181cfc: 0x3c07004a  lui         $a3, 0x4A
    ctx->pc = 0x181cfcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)74 << 16));
    // 0x181d00: 0x24e31380  addiu       $v1, $a3, 0x1380
    ctx->pc = 0x181d00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4992));
    // 0x181d04: 0x663021  addu        $a2, $v1, $a2
    ctx->pc = 0x181d04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x181d08: 0x3c034180  lui         $v1, 0x4180
    ctx->pc = 0x181d08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16768 << 16));
    // 0x181d0c: 0x3463d289  ori         $v1, $v1, 0xD289
    ctx->pc = 0x181d0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)53897);
    // 0x181d10: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x181d10u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x181d14: 0xc4c00178  lwc1        $f0, 0x178($a2)
    ctx->pc = 0x181d14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x181d18: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x181d18u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x181d1c: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x181d1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x181d20: 0xc420f1d8  lwc1        $f0, -0xE28($at)
    ctx->pc = 0x181d20u;
    { uint32_t bits = FAST_READ32(0x47F1D8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x181d24: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x181d24u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x181d28: 0x0  nop
    ctx->pc = 0x181d28u;
    // NOP
    // 0x181d2c: 0x45000096  bc1f        . + 4 + (0x96 << 2)
    ctx->pc = 0x181D2Cu;
    {
        const bool branch_taken_0x181d2c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x181d2c) {
            ctx->pc = 0x181F88u;
            return;
        }
    }
    ctx->pc = 0x181D34u;
    // 0x181d34: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x181d34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x181d38: 0x8426f138  lh          $a2, -0xEC8($at)
    ctx->pc = 0x181d38u;
    SET_GPR_S32(ctx, 6, (int16_t)FAST_READ16(0x47F138u));
    // 0x181d3c: 0x61c3c  dsll32      $v1, $a2, 16
    ctx->pc = 0x181d3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) << (32 + 16));
    // 0x181d40: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x181d40u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x181d44: 0x33100  sll         $a2, $v1, 4
    ctx->pc = 0x181d44u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x181d48: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x181d48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x181d4c: 0x33940  sll         $a3, $v1, 5
    ctx->pc = 0x181d4cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x181d50: 0x3c03004a  lui         $v1, 0x4A
    ctx->pc = 0x181d50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)74 << 16));
    // 0x181d54: 0x24661380  addiu       $a2, $v1, 0x1380
    ctx->pc = 0x181d54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4992));
    // 0x181d58: 0xc73821  addu        $a3, $a2, $a3
    ctx->pc = 0x181d58u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x181d5c: 0x3c064180  lui         $a2, 0x4180
    ctx->pc = 0x181d5cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16768 << 16));
    // 0x181d60: 0x34c3d289  ori         $v1, $a2, 0xD289
    ctx->pc = 0x181d60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)53897);
    // 0x181d64: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x181d64u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x181d68: 0xc4e00178  lwc1        $f0, 0x178($a3)
    ctx->pc = 0x181d68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x181d6c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x181d6cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x181d70: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x181d70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x181d74: 0xc420f1d8  lwc1        $f0, -0xE28($at)
    ctx->pc = 0x181d74u;
    { uint32_t bits = FAST_READ32(0x47F1D8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x181d78: 0x46010043  div.s       $f1, $f0, $f1
    ctx->pc = 0x181d78u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x181d7c: 0x3c0342b4  lui         $v1, 0x42B4
    ctx->pc = 0x181d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17076 << 16));
    // 0x181d80: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x181d80u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x181d84: 0x0  nop
    ctx->pc = 0x181d84u;
    // NOP
    // 0x181d88: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x181d88u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x181d8c: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x181d8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x181d90: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x181d90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x181d94: 0x8423f138  lh          $v1, -0xEC8($at)
    ctx->pc = 0x181d94u;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x47F138u));
    // 0x181d98: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x181d98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x181d9c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x181d9cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x181da0: 0x33100  sll         $a2, $v1, 4
    ctx->pc = 0x181da0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x181da4: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x181da4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x181da8: 0x33140  sll         $a2, $v1, 5
    ctx->pc = 0x181da8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x181dac: 0x3c03004a  lui         $v1, 0x4A
    ctx->pc = 0x181dacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)74 << 16));
    // 0x181db0: 0x24671380  addiu       $a3, $v1, 0x1380
    ctx->pc = 0x181db0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 4992));
    // 0x181db4: 0xe63021  addu        $a2, $a3, $a2
    ctx->pc = 0x181db4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x181db8: 0x3c034180  lui         $v1, 0x4180
    ctx->pc = 0x181db8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16768 << 16));
    // 0x181dbc: 0x3463d289  ori         $v1, $v1, 0xD289
    ctx->pc = 0x181dbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)53897);
    // 0x181dc0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x181dc0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x181dc4: 0xc4c00178  lwc1        $f0, 0x178($a2)
    ctx->pc = 0x181dc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x181dc8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x181dc8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x181dcc: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x181dccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x181dd0: 0xc420f1d8  lwc1        $f0, -0xE28($at)
    ctx->pc = 0x181dd0u;
    { uint32_t bits = FAST_READ32(0x47F1D8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x181dd4: 0x46010043  div.s       $f1, $f0, $f1
    ctx->pc = 0x181dd4u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x181dd8: 0x3c0642b4  lui         $a2, 0x42B4
    ctx->pc = 0x181dd8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)17076 << 16));
    // 0x181ddc: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x181ddcu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x181de0: 0x0  nop
    ctx->pc = 0x181de0u;
    // NOP
    // 0x181de4: 0x46010302  mul.s       $f12, $f0, $f1
    ctx->pc = 0x181de4u;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x181de8: 0xc047fa2  jal         func_11FE88
    ctx->pc = 0x181DE8u;
    SET_GPR_U32(ctx, 31, 0x181DF0u);
    ctx->pc = 0x11FE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FE88u, 0x181DE8u, 0x181DF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x181DF0u;
label_181df0:
    // 0x181df0: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x181df0u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x181df4: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x181df4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x181df8: 0xac23f218  sw          $v1, -0xDE8($at)
    ctx->pc = 0x181df8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x47F218u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47F218u, _value); } while (0);
    // 0x181dfc: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x181dfcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x181e00: 0x8c26f218  lw          $a2, -0xDE8($at)
    ctx->pc = 0x181e00u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x47F218u));
    // 0x181e04: 0x4c00006  bltz        $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x181E04u;
    {
        const bool branch_taken_0x181e04 = (GPR_S32(ctx, 6) < 0);
        if (branch_taken_0x181e04) {
            ctx->pc = 0x181E20u;
            return;
        }
    }
    ctx->pc = 0x181E0Cu;
    // 0x181e0c: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x181e0cu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x181e10: 0x0  nop
    ctx->pc = 0x181e10u;
    // NOP
    // 0x181e14: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x181e14u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x181e18: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x181E18u;
    {
        const bool branch_taken_0x181e18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x181e18) {
            ctx->pc = 0x181E3Cu;
            return;
        }
    }
    ctx->pc = 0x181E20u;
}
