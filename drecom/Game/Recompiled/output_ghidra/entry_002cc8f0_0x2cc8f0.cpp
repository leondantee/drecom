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

// Function: entry_002cc8f0
// Address: 0x2cc8f0 - 0x2cccf0
void entry_002cc8f0_0x2cc8f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002cc8f0_0x2cc8f0");
#endif

    switch (ctx->pc) {
        case 0x2cc91cu: goto label_2cc91c;
        case 0x2cc924u: goto label_2cc924;
        case 0x2cc9f0u: goto label_2cc9f0;
        case 0x2cca7cu: goto label_2cca7c;
        case 0x2ccab4u: goto label_2ccab4;
        case 0x2ccaecu: goto label_2ccaec;
        case 0x2ccb5cu: goto label_2ccb5c;
        case 0x2ccb98u: goto label_2ccb98;
        case 0x2ccbd0u: goto label_2ccbd0;
        case 0x2ccc50u: goto label_2ccc50;
        case 0x2ccc88u: goto label_2ccc88;
        case 0x2cccc0u: goto label_2cccc0;
        default: break;
    }

    ctx->pc = 0x2cc8f0u;

    // 0x2cc8f0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2cc8f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cc8f4: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2cc8f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cc8f8: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x2cc8f8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x2cc8fc: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2cc8fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cc900: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x2cc900u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cc904: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2cc904u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x2cc908: 0x24060401  addiu       $a2, $zero, 0x401
    ctx->pc = 0x2cc908u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1025));
    // 0x2cc90c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2cc90cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cc910: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2cc910u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2cc914: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2CC914u;
    SET_GPR_U32(ctx, 31, 0x2CC91Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2CC914u, 0x2CC91Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC91Cu;
label_2cc91c:
    // 0x2cc91c: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2CC91Cu;
    SET_GPR_U32(ctx, 31, 0x2CC924u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2CC91Cu, 0x2CC924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC924u;
label_2cc924:
    // 0x2cc924: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2cc924u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2cc928: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x2cc928u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x2cc92c: 0x2442012c  addiu       $v0, $v0, 0x12C
    ctx->pc = 0x2cc92cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 300));
    // 0x2cc930: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x2cc930u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2cc934: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2cc934u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x2cc938: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2cc938u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cc93c: 0xa443127c  sh          $v1, 0x127C($v0)
    ctx->pc = 0x2cc93cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4732), (uint16_t)GPR_U32(ctx, 3));
    // 0x2cc940: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2cc940u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cc944: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2cc944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cc948: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2cc948u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2cc94c: 0xe4400040  swc1        $f0, 0x40($v0)
    ctx->pc = 0x2cc94cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 64), bits); }
    // 0x2cc950: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2cc950u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cc954: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x2cc954u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cc958: 0x24851330  addiu       $a1, $a0, 0x1330
    ctx->pc = 0x2cc958u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x2cc95c: 0xe4a00044  swc1        $f0, 0x44($a1)
    ctx->pc = 0x2cc95cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 68), bits); }
    // 0x2cc960: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2cc960u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cc964: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2cc964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cc968: 0x24441330  addiu       $a0, $v0, 0x1330
    ctx->pc = 0x2cc968u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2cc96c: 0xe4800048  swc1        $f0, 0x48($a0)
    ctx->pc = 0x2cc96cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 72), bits); }
    // 0x2cc970: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2cc970u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cc974: 0x24621330  addiu       $v0, $v1, 0x1330
    ctx->pc = 0x2cc974u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2cc978: 0x8c44001c  lw          $a0, 0x1C($v0)
    ctx->pc = 0x2cc978u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x2cc97c: 0x2405fffb  addiu       $a1, $zero, -0x5
    ctx->pc = 0x2cc97cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x2cc980: 0x853024  and         $a2, $a0, $a1
    ctx->pc = 0x2cc980u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x2cc984: 0xac46001c  sw          $a2, 0x1C($v0)
    ctx->pc = 0x2cc984u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 6));
    // 0x2cc988: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2cc988u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2cc98c: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x2cc98cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cc990: 0xa48210a6  sh          $v0, 0x10A6($a0)
    ctx->pc = 0x2cc990u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4262), (uint16_t)GPR_U32(ctx, 2));
    // 0x2cc994: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2cc994u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cc998: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2cc998u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cc99c: 0xe44000d0  swc1        $f0, 0xD0($v0)
    ctx->pc = 0x2cc99cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 208), bits); }
    // 0x2cc9a0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2cc9a0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cc9a4: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x2cc9a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cc9a8: 0xe48000d8  swc1        $f0, 0xD8($a0)
    ctx->pc = 0x2cc9a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 216), bits); }
    // 0x2cc9ac: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2cc9acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cc9b0: 0xc4400180  lwc1        $f0, 0x180($v0)
    ctx->pc = 0x2cc9b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cc9b4: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x2cc9b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2cc9b8: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x2cc9b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cc9bc: 0xc4800184  lwc1        $f0, 0x184($a0)
    ctx->pc = 0x2cc9bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cc9c0: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x2cc9c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x2cc9c4: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2cc9c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cc9c8: 0xc4600188  lwc1        $f0, 0x188($v1)
    ctx->pc = 0x2cc9c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cc9cc: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x2cc9ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x2cc9d0: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2cc9d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2cc9d4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2cc9d4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cc9d8: 0x0  nop
    ctx->pc = 0x2cc9d8u;
    // NOP
    // 0x2cc9dc: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x2cc9dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x2cc9e0: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x2cc9e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2cc9e4: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x2cc9e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2cc9e8: 0xc040c24  jal         func_103090
    ctx->pc = 0x2CC9E8u;
    SET_GPR_U32(ctx, 31, 0x2CC9F0u);
    ctx->pc = 0x103090u;
    {
        ctx->pc = 0x2CC9F0u;
        ps2_stubs::sceVu0Normalize(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2CC9F0u) { return; }
    ctx->pc = 0x2CC9F0u;
label_2cc9f0:
    // 0x2cc9f0: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2cc9f0u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2cc9f4: 0x3c04c120  lui         $a0, 0xC120
    ctx->pc = 0x2cc9f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49440 << 16));
    // 0x2cc9f8: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x2cc9f8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2cc9fc: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x2cc9fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cca00: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2cca00u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2cca04: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2cca04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cca08: 0xe4600180  swc1        $f0, 0x180($v1)
    ctx->pc = 0x2cca08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 384), bits); }
    // 0x2cca0c: 0x3c03c1a0  lui         $v1, 0xC1A0
    ctx->pc = 0x2cca0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49568 << 16));
    // 0x2cca10: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2cca10u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2cca14: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x2cca14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cca18: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2cca18u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2cca1c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2cca1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cca20: 0xe4600184  swc1        $f0, 0x184($v1)
    ctx->pc = 0x2cca20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 388), bits); }
    // 0x2cca24: 0x3c04c120  lui         $a0, 0xC120
    ctx->pc = 0x2cca24u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49440 << 16));
    // 0x2cca28: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x2cca28u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2cca2c: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x2cca2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cca30: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2cca30u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2cca34: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2cca34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cca38: 0xe4600188  swc1        $f0, 0x188($v1)
    ctx->pc = 0x2cca38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 392), bits); }
    // 0x2cca3c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2cca3cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cca40: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2cca40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cca44: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2cca44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2cca48: 0xe4600020  swc1        $f0, 0x20($v1)
    ctx->pc = 0x2cca48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 32), bits); }
    // 0x2cca4c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2cca4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cca50: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x2cca50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x2cca54: 0x24700320  addiu       $s0, $v1, 0x320
    ctx->pc = 0x2cca54u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 800));
    // 0x2cca58: 0x26050150  addiu       $a1, $s0, 0x150
    ctx->pc = 0x2cca58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2cca5c: 0x94a30006  lhu         $v1, 0x6($a1)
    ctx->pc = 0x2cca5cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 6)));
    // 0x2cca60: 0x34640003  ori         $a0, $v1, 0x3
    ctx->pc = 0x2cca60u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)3);
    // 0x2cca64: 0xa4a40006  sh          $a0, 0x6($a1)
    ctx->pc = 0x2cca64u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 6), (uint16_t)GPR_U32(ctx, 4));
    // 0x2cca68: 0x96030140  lhu         $v1, 0x140($s0)
    ctx->pc = 0x2cca68u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x2cca6c: 0x3062fff7  andi        $v0, $v1, 0xFFF7
    ctx->pc = 0x2cca6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65527);
    // 0x2cca70: 0xa6020140  sh          $v0, 0x140($s0)
    ctx->pc = 0x2cca70u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 320), (uint16_t)GPR_U32(ctx, 2));
    // 0x2cca74: 0xc067654  jal         func_19D950
    ctx->pc = 0x2CCA74u;
    SET_GPR_U32(ctx, 31, 0x2CCA7Cu);
    ctx->pc = 0x19D950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D950u, 0x2CCA74u, 0x2CCA7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CCA7Cu;
label_2cca7c:
    // 0x2cca7c: 0x3c024170  lui         $v0, 0x4170
    ctx->pc = 0x2cca7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16752 << 16));
    // 0x2cca80: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2cca80u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2cca84: 0x0  nop
    ctx->pc = 0x2cca84u;
    // NOP
    // 0x2cca88: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2cca88u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2cca8c: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x2cca8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x2cca90: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2cca90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cca94: 0x0  nop
    ctx->pc = 0x2cca94u;
    // NOP
    // 0x2cca98: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x2cca98u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2cca9c: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x2cca9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ccaa0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2ccaa0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2ccaa4: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x2ccaa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2ccaa8: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x2ccaa8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x2ccaac: 0xc067654  jal         func_19D950
    ctx->pc = 0x2CCAACu;
    SET_GPR_U32(ctx, 31, 0x2CCAB4u);
    ctx->pc = 0x19D950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D950u, 0x2CCAACu, 0x2CCAB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CCAB4u;
label_2ccab4:
    // 0x2ccab4: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x2ccab4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x2ccab8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2ccab8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ccabc: 0x0  nop
    ctx->pc = 0x2ccabcu;
    // NOP
    // 0x2ccac0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2ccac0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ccac4: 0x3c024316  lui         $v0, 0x4316
    ctx->pc = 0x2ccac4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17174 << 16));
    // 0x2ccac8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ccac8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ccacc: 0x0  nop
    ctx->pc = 0x2ccaccu;
    // NOP
    // 0x2ccad0: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x2ccad0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2ccad4: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x2ccad4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ccad8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2ccad8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2ccadc: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x2ccadcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2ccae0: 0xe4400010  swc1        $f0, 0x10($v0)
    ctx->pc = 0x2ccae0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x2ccae4: 0xc067654  jal         func_19D950
    ctx->pc = 0x2CCAE4u;
    SET_GPR_U32(ctx, 31, 0x2CCAECu);
    ctx->pc = 0x19D950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D950u, 0x2CCAE4u, 0x2CCAECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CCAECu;
label_2ccaec:
    // 0x2ccaec: 0x3c024170  lui         $v0, 0x4170
    ctx->pc = 0x2ccaecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16752 << 16));
    // 0x2ccaf0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2ccaf0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ccaf4: 0x0  nop
    ctx->pc = 0x2ccaf4u;
    // NOP
    // 0x2ccaf8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2ccaf8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ccafc: 0x3c0441a0  lui         $a0, 0x41A0
    ctx->pc = 0x2ccafcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16800 << 16));
    // 0x2ccb00: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2ccb00u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ccb04: 0x0  nop
    ctx->pc = 0x2ccb04u;
    // NOP
    // 0x2ccb08: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x2ccb08u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2ccb0c: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x2ccb0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ccb10: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2ccb10u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2ccb14: 0x26050150  addiu       $a1, $s0, 0x150
    ctx->pc = 0x2ccb14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2ccb18: 0xe4a00014  swc1        $f0, 0x14($a1)
    ctx->pc = 0x2ccb18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 20), bits); }
    // 0x2ccb1c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2ccb1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2ccb20: 0x8c4302d0  lw          $v1, 0x2D0($v0)
    ctx->pc = 0x2ccb20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x2ccb24: 0x247015e0  addiu       $s0, $v1, 0x15E0
    ctx->pc = 0x2ccb24u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 5600));
    // 0x2ccb28: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x2ccb28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2ccb2c: 0x94440006  lhu         $a0, 0x6($v0)
    ctx->pc = 0x2ccb2cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x2ccb30: 0x34850003  ori         $a1, $a0, 0x3
    ctx->pc = 0x2ccb30u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)3);
    // 0x2ccb34: 0xa4450006  sh          $a1, 0x6($v0)
    ctx->pc = 0x2ccb34u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 6), (uint16_t)GPR_U32(ctx, 5));
    // 0x2ccb38: 0x96060140  lhu         $a2, 0x140($s0)
    ctx->pc = 0x2ccb38u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x2ccb3c: 0x30c2fff7  andi        $v0, $a2, 0xFFF7
    ctx->pc = 0x2ccb3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65527);
    // 0x2ccb40: 0xa6020140  sh          $v0, 0x140($s0)
    ctx->pc = 0x2ccb40u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 320), (uint16_t)GPR_U32(ctx, 2));
    // 0x2ccb44: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x2ccb44u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x2ccb48: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2ccb48u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ccb4c: 0x0  nop
    ctx->pc = 0x2ccb4cu;
    // NOP
    // 0x2ccb50: 0xe6000128  swc1        $f0, 0x128($s0)
    ctx->pc = 0x2ccb50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 296), bits); }
    // 0x2ccb54: 0xc067654  jal         func_19D950
    ctx->pc = 0x2CCB54u;
    SET_GPR_U32(ctx, 31, 0x2CCB5Cu);
    ctx->pc = 0x19D950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D950u, 0x2CCB54u, 0x2CCB5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CCB5Cu;
label_2ccb5c:
    // 0x2ccb5c: 0x3c024170  lui         $v0, 0x4170
    ctx->pc = 0x2ccb5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16752 << 16));
    // 0x2ccb60: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2ccb60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ccb64: 0x0  nop
    ctx->pc = 0x2ccb64u;
    // NOP
    // 0x2ccb68: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2ccb68u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ccb6c: 0x3c044120  lui         $a0, 0x4120
    ctx->pc = 0x2ccb6cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16672 << 16));
    // 0x2ccb70: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2ccb70u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ccb74: 0x0  nop
    ctx->pc = 0x2ccb74u;
    // NOP
    // 0x2ccb78: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2ccb78u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2ccb7c: 0x46000047  neg.s       $f1, $f0
    ctx->pc = 0x2ccb7cu;
    ctx->f[1] = FPU_NEG_S(ctx->f[0]);
    // 0x2ccb80: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x2ccb80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ccb84: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2ccb84u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2ccb88: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x2ccb88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2ccb8c: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x2ccb8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x2ccb90: 0xc067654  jal         func_19D950
    ctx->pc = 0x2CCB90u;
    SET_GPR_U32(ctx, 31, 0x2CCB98u);
    ctx->pc = 0x19D950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D950u, 0x2CCB90u, 0x2CCB98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CCB98u;
label_2ccb98:
    // 0x2ccb98: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x2ccb98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x2ccb9c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2ccb9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ccba0: 0x0  nop
    ctx->pc = 0x2ccba0u;
    // NOP
    // 0x2ccba4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2ccba4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ccba8: 0x3c034248  lui         $v1, 0x4248
    ctx->pc = 0x2ccba8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16968 << 16));
    // 0x2ccbac: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ccbacu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ccbb0: 0x0  nop
    ctx->pc = 0x2ccbb0u;
    // NOP
    // 0x2ccbb4: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x2ccbb4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2ccbb8: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x2ccbb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ccbbc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2ccbbcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2ccbc0: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x2ccbc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2ccbc4: 0xe4400010  swc1        $f0, 0x10($v0)
    ctx->pc = 0x2ccbc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x2ccbc8: 0xc067654  jal         func_19D950
    ctx->pc = 0x2CCBC8u;
    SET_GPR_U32(ctx, 31, 0x2CCBD0u);
    ctx->pc = 0x19D950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D950u, 0x2CCBC8u, 0x2CCBD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CCBD0u;
label_2ccbd0:
    // 0x2ccbd0: 0x3c024170  lui         $v0, 0x4170
    ctx->pc = 0x2ccbd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16752 << 16));
    // 0x2ccbd4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2ccbd4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ccbd8: 0x0  nop
    ctx->pc = 0x2ccbd8u;
    // NOP
    // 0x2ccbdc: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2ccbdcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ccbe0: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x2ccbe0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x2ccbe4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ccbe4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ccbe8: 0x0  nop
    ctx->pc = 0x2ccbe8u;
    // NOP
    // 0x2ccbec: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2ccbecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2ccbf0: 0x46000047  neg.s       $f1, $f0
    ctx->pc = 0x2ccbf0u;
    ctx->f[1] = FPU_NEG_S(ctx->f[0]);
    // 0x2ccbf4: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x2ccbf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ccbf8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2ccbf8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2ccbfc: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x2ccbfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2ccc00: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x2ccc00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x2ccc04: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2ccc04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2ccc08: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x2ccc08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x2ccc0c: 0x24501770  addiu       $s0, $v0, 0x1770
    ctx->pc = 0x2ccc0cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 6000));
    // 0x2ccc10: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x2ccc10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2ccc14: 0x94420006  lhu         $v0, 0x6($v0)
    ctx->pc = 0x2ccc14u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x2ccc18: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2ccc18u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2ccc1c: 0x38430001  xori        $v1, $v0, 0x1
    ctx->pc = 0x2ccc1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2ccc20: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x2ccc20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2ccc24: 0x10400032  beqz        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x2CCC24u;
    {
        const bool branch_taken_0x2ccc24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ccc24) {
            ctx->pc = 0x2CCCF0u;
            return;
        }
    }
    ctx->pc = 0x2CCC2Cu;
    // 0x2ccc2c: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x2ccc2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2ccc30: 0x94620006  lhu         $v0, 0x6($v1)
    ctx->pc = 0x2ccc30u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 6)));
    // 0x2ccc34: 0x34420003  ori         $v0, $v0, 0x3
    ctx->pc = 0x2ccc34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3);
    // 0x2ccc38: 0xa4620006  sh          $v0, 0x6($v1)
    ctx->pc = 0x2ccc38u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 6), (uint16_t)GPR_U32(ctx, 2));
    // 0x2ccc3c: 0x96020140  lhu         $v0, 0x140($s0)
    ctx->pc = 0x2ccc3cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x2ccc40: 0x3044fff7  andi        $a0, $v0, 0xFFF7
    ctx->pc = 0x2ccc40u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65527);
    // 0x2ccc44: 0xa6040140  sh          $a0, 0x140($s0)
    ctx->pc = 0x2ccc44u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 320), (uint16_t)GPR_U32(ctx, 4));
    // 0x2ccc48: 0xc067654  jal         func_19D950
    ctx->pc = 0x2CCC48u;
    SET_GPR_U32(ctx, 31, 0x2CCC50u);
    ctx->pc = 0x19D950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D950u, 0x2CCC48u, 0x2CCC50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CCC50u;
label_2ccc50:
    // 0x2ccc50: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x2ccc50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x2ccc54: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2ccc54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ccc58: 0x0  nop
    ctx->pc = 0x2ccc58u;
    // NOP
    // 0x2ccc5c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2ccc5cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ccc60: 0x3c03c316  lui         $v1, 0xC316
    ctx->pc = 0x2ccc60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49942 << 16));
    // 0x2ccc64: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ccc64u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ccc68: 0x0  nop
    ctx->pc = 0x2ccc68u;
    // NOP
    // 0x2ccc6c: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x2ccc6cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2ccc70: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x2ccc70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ccc74: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2ccc74u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2ccc78: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x2ccc78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2ccc7c: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x2ccc7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x2ccc80: 0xc067654  jal         func_19D950
    ctx->pc = 0x2CCC80u;
    SET_GPR_U32(ctx, 31, 0x2CCC88u);
    ctx->pc = 0x19D950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D950u, 0x2CCC80u, 0x2CCC88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CCC88u;
label_2ccc88:
    // 0x2ccc88: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x2ccc88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x2ccc8c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2ccc8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ccc90: 0x0  nop
    ctx->pc = 0x2ccc90u;
    // NOP
    // 0x2ccc94: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2ccc94u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ccc98: 0x3c034348  lui         $v1, 0x4348
    ctx->pc = 0x2ccc98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17224 << 16));
    // 0x2ccc9c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ccc9cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ccca0: 0x0  nop
    ctx->pc = 0x2ccca0u;
    // NOP
    // 0x2ccca4: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x2ccca4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2ccca8: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x2ccca8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cccac: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2cccacu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2cccb0: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x2cccb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2cccb4: 0xe4400010  swc1        $f0, 0x10($v0)
    ctx->pc = 0x2cccb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x2cccb8: 0xc067654  jal         func_19D950
    ctx->pc = 0x2CCCB8u;
    SET_GPR_U32(ctx, 31, 0x2CCCC0u);
    ctx->pc = 0x19D950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D950u, 0x2CCCB8u, 0x2CCCC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CCCC0u;
label_2cccc0:
    // 0x2cccc0: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x2cccc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x2cccc4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2cccc4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2cccc8: 0x0  nop
    ctx->pc = 0x2cccc8u;
    // NOP
    // 0x2ccccc: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2cccccu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2cccd0: 0x3c034348  lui         $v1, 0x4348
    ctx->pc = 0x2cccd0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17224 << 16));
    // 0x2cccd4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2cccd4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cccd8: 0x0  nop
    ctx->pc = 0x2cccd8u;
    // NOP
    // 0x2cccdc: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x2cccdcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2ccce0: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x2ccce0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ccce4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2ccce4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2ccce8: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x2ccce8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2cccec: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x2cccecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    ctx->pc = 0x2cccf0u;
}
