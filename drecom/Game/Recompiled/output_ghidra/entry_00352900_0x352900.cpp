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

// Function: entry_00352900
// Address: 0x352900 - 0x352a64
void entry_00352900_0x352900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00352900_0x352900");
#endif

    switch (ctx->pc) {
        case 0x352a24u: goto label_352a24;
        default: break;
    }

    ctx->pc = 0x352900u;

    // 0x352900: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x352900u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x352904: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x352904u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x352908: 0x245004b0  addiu       $s0, $v0, 0x4B0
    ctx->pc = 0x352908u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 1200));
    // 0x35290c: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x35290cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x352910: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x352910u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x352914: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x352914u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x352918: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x352918u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x35291c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x35291cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x352920: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x352920u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x352924: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x352924u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x352928: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x352928u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x35292c: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x35292cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x352930: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x352930u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x352934: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x352934u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x352938: 0x0  nop
    ctx->pc = 0x352938u;
    // NOP
    // 0x35293c: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x35293cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x352940: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x352940u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x352944: 0x0  nop
    ctx->pc = 0x352944u;
    // NOP
    // 0x352948: 0xe6000120  swc1        $f0, 0x120($s0)
    ctx->pc = 0x352948u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 288), bits); }
    // 0x35294c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x35294cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x352950: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x352950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x352954: 0xc44000f0  lwc1        $f0, 0xF0($v0)
    ctx->pc = 0x352954u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x352958: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x352958u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x35295c: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x35295cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x352960: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x352960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x352964: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x352964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x352968: 0xc44000f4  lwc1        $f0, 0xF4($v0)
    ctx->pc = 0x352968u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x35296c: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x35296cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x352970: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x352970u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x352974: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x352974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x352978: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x352978u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x35297c: 0xc44000f8  lwc1        $f0, 0xF8($v0)
    ctx->pc = 0x35297cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x352980: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x352980u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x352984: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x352984u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x352988: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x352988u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x35298c: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x35298cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x352990: 0x24500640  addiu       $s0, $v0, 0x640
    ctx->pc = 0x352990u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 1600));
    // 0x352994: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x352994u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x352998: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x352998u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x35299c: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x35299cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x3529a0: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x3529a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x3529a4: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x3529a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3529a8: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x3529a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x3529ac: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x3529acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x3529b0: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x3529b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3529b4: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x3529b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x3529b8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3529b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x3529bc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3529bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3529c0: 0x0  nop
    ctx->pc = 0x3529c0u;
    // NOP
    // 0x3529c4: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x3529c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x3529c8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3529c8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3529cc: 0x0  nop
    ctx->pc = 0x3529ccu;
    // NOP
    // 0x3529d0: 0xe6000120  swc1        $f0, 0x120($s0)
    ctx->pc = 0x3529d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 288), bits); }
    // 0x3529d4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3529d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3529d8: 0x0  nop
    ctx->pc = 0x3529d8u;
    // NOP
    // 0x3529dc: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x3529dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x3529e0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3529e0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3529e4: 0x0  nop
    ctx->pc = 0x3529e4u;
    // NOP
    // 0x3529e8: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x3529e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x3529ec: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3529ecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3529f0: 0x0  nop
    ctx->pc = 0x3529f0u;
    // NOP
    // 0x3529f4: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x3529f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x3529f8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3529f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x3529fc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3529fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x352a00: 0x0  nop
    ctx->pc = 0x352a00u;
    // NOP
    // 0x352a04: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x352a04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x352a08: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x352a08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x352a0c: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x352a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x352a10: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x352a10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x352a14: 0x24450100  addiu       $a1, $v0, 0x100
    ctx->pc = 0x352a14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 256));
    // 0x352a18: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x352a18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x352a1c: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x352A1Cu;
    SET_GPR_U32(ctx, 31, 0x352A24u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x352A24u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x352A24u) { return; }
    ctx->pc = 0x352A24u;
label_352a24:
    // 0x352a24: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x352a24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x352a28: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x352a28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x352a2c: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x352a2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x352a30: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x352a30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x352a34: 0x8c630130  lw          $v1, 0x130($v1)
    ctx->pc = 0x352a34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x352a38: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x352a38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x352a3c: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x352a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x352a40: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x352a40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x352a44: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x352a44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x352a48: 0x8c630130  lw          $v1, 0x130($v1)
    ctx->pc = 0x352a48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x352a4c: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x352a4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x352a50: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x352a50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x352a54: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x352a54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x352a58: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x352a58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x352a5c: 0x8c630130  lw          $v1, 0x130($v1)
    ctx->pc = 0x352a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x352a60: 0x0  nop
    ctx->pc = 0x352a60u;
    // NOP
    ctx->pc = 0x352a64u;
}
