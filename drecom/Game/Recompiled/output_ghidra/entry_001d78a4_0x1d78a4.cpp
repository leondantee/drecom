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

// Function: entry_001d78a4
// Address: 0x1d78a4 - 0x1d7960
void entry_001d78a4_0x1d78a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d78a4_0x1d78a4");
#endif

    switch (ctx->pc) {
        case 0x1d7950u: goto label_1d7950;
        default: break;
    }

    ctx->pc = 0x1d78a4u;

    // 0x1d78a4: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x1d78a4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x1d78a8: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x1d78a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d78ac: 0xe6400020  swc1        $f0, 0x20($s2)
    ctx->pc = 0x1d78acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 32), bits); }
    // 0x1d78b0: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x1d78b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d78b4: 0xe6400024  swc1        $f0, 0x24($s2)
    ctx->pc = 0x1d78b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 36), bits); }
    // 0x1d78b8: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x1d78b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d78bc: 0xe6400028  swc1        $f0, 0x28($s2)
    ctx->pc = 0x1d78bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 40), bits); }
    // 0x1d78c0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1d78c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1d78c4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d78c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d78c8: 0x0  nop
    ctx->pc = 0x1d78c8u;
    // NOP
    // 0x1d78cc: 0xe640002c  swc1        $f0, 0x2C($s2)
    ctx->pc = 0x1d78ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 44), bits); }
    // 0x1d78d0: 0xa6400004  sh          $zero, 0x4($s2)
    ctx->pc = 0x1d78d0u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 4), (uint16_t)GPR_U32(ctx, 0));
    // 0x1d78d4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d78d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d78d8: 0x0  nop
    ctx->pc = 0x1d78d8u;
    // NOP
    // 0x1d78dc: 0xe6400000  swc1        $f0, 0x0($s2)
    ctx->pc = 0x1d78dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x1d78e0: 0x3262ffff  andi        $v0, $s3, 0xFFFF
    ctx->pc = 0x1d78e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)65535);
    // 0x1d78e4: 0xa6420008  sh          $v0, 0x8($s2)
    ctx->pc = 0x1d78e4u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 8), (uint16_t)GPR_U32(ctx, 2));
    // 0x1d78e8: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1d78e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1d78ec: 0xa642000a  sh          $v0, 0xA($s2)
    ctx->pc = 0x1d78ecu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 10), (uint16_t)GPR_U32(ctx, 2));
    // 0x1d78f0: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1d78f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1d78f4: 0xa642000c  sh          $v0, 0xC($s2)
    ctx->pc = 0x1d78f4u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x1d78f8: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1d78f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1d78fc: 0xa642000e  sh          $v0, 0xE($s2)
    ctx->pc = 0x1d78fcu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x1d7900: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d7900u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d7904: 0xa6420006  sh          $v0, 0x6($s2)
    ctx->pc = 0x1d7904u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 6), (uint16_t)GPR_U32(ctx, 2));
    // 0x1d7908: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d7908u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d790c: 0x0  nop
    ctx->pc = 0x1d790cu;
    // NOP
    // 0x1d7910: 0xe6400014  swc1        $f0, 0x14($s2)
    ctx->pc = 0x1d7910u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 20), bits); }
    // 0x1d7914: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d7914u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d7918: 0x0  nop
    ctx->pc = 0x1d7918u;
    // NOP
    // 0x1d791c: 0xe6400018  swc1        $f0, 0x18($s2)
    ctx->pc = 0x1d791cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 24), bits); }
    // 0x1d7920: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d7920u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d7924: 0x0  nop
    ctx->pc = 0x1d7924u;
    // NOP
    // 0x1d7928: 0xe640001c  swc1        $f0, 0x1C($s2)
    ctx->pc = 0x1d7928u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 28), bits); }
    // 0x1d792c: 0xc6210008  lwc1        $f1, 0x8($s1)
    ctx->pc = 0x1d792cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d7930: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x1d7930u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d7934: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x1d7934u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1d7938: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x1d7938u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d793c: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x1d793cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d7940: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1d7940u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1d7944: 0x46020300  add.s       $f12, $f0, $f2
    ctx->pc = 0x1d7944u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x1d7948: 0xc045630  jal         func_1158C0
    ctx->pc = 0x1D7948u;
    SET_GPR_U32(ctx, 31, 0x1D7950u);
    ctx->pc = 0x1158C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1158C0u, 0x1D7948u, 0x1D7950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7950u;
label_1d7950:
    // 0x1d7950: 0xe6400010  swc1        $f0, 0x10($s2)
    ctx->pc = 0x1d7950u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 16), bits); }
    // 0x1d7954: 0x26520030  addiu       $s2, $s2, 0x30
    ctx->pc = 0x1d7954u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
    // 0x1d7958: 0x2631000c  addiu       $s1, $s1, 0xC
    ctx->pc = 0x1d7958u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
    // 0x1d795c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1d795cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    ctx->pc = 0x1d7960u;
}
