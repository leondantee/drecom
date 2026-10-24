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

// Function: entry_00200e80
// Address: 0x200e80 - 0x200fb0
void entry_00200e80_0x200e80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00200e80_0x200e80");
#endif

    switch (ctx->pc) {
        case 0x200ea0u: goto label_200ea0;
        case 0x200ed4u: goto label_200ed4;
        case 0x200ee8u: goto label_200ee8;
        default: break;
    }

    ctx->pc = 0x200e80u;

    // 0x200e80: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x200e80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x200e84: 0x8c5100f8  lw          $s1, 0xF8($v0)
    ctx->pc = 0x200e84u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 248)));
    // 0x200e88: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x200e88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x200e8c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x200e8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x200e90: 0x26450020  addiu       $a1, $s2, 0x20
    ctx->pc = 0x200e90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x200e94: 0x244600a0  addiu       $a2, $v0, 0xA0
    ctx->pc = 0x200e94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    // 0x200e98: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x200E98u;
    SET_GPR_U32(ctx, 31, 0x200EA0u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x200E98u, 0x200EA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200EA0u;
label_200ea0:
    // 0x200ea0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x200ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x200ea4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x200ea4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x200ea8: 0x0  nop
    ctx->pc = 0x200ea8u;
    // NOP
    // 0x200eac: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x200eacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x200eb0: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x200eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x200eb4: 0x34420011  ori         $v0, $v0, 0x11
    ctx->pc = 0x200eb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)17);
    // 0x200eb8: 0x1202003d  beq         $s0, $v0, . + 4 + (0x3D << 2)
    ctx->pc = 0x200EB8u;
    {
        const bool branch_taken_0x200eb8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x200eb8) {
            ctx->pc = 0x200FB0u;
            return;
        }
    }
    ctx->pc = 0x200EC0u;
    // 0x200ec0: 0x260401c0  addiu       $a0, $s0, 0x1C0
    ctx->pc = 0x200ec0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 448));
    // 0x200ec4: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x200ec4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x200ec8: 0x24060050  addiu       $a2, $zero, 0x50
    ctx->pc = 0x200ec8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x200ecc: 0xc0462a6  jal         func_118A98
    ctx->pc = 0x200ECCu;
    SET_GPR_U32(ctx, 31, 0x200ED4u);
    ctx->pc = 0x118A98u;
    {
        ctx->pc = 0x200ED4u;
        ps2_stubs::memcpy(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x200ED4u) { return; }
    ctx->pc = 0x200ED4u;
label_200ed4:
    // 0x200ed4: 0x26040210  addiu       $a0, $s0, 0x210
    ctx->pc = 0x200ed4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 528));
    // 0x200ed8: 0x26250050  addiu       $a1, $s1, 0x50
    ctx->pc = 0x200ed8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
    // 0x200edc: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x200edcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x200ee0: 0xc0462a6  jal         func_118A98
    ctx->pc = 0x200EE0u;
    SET_GPR_U32(ctx, 31, 0x200EE8u);
    ctx->pc = 0x118A98u;
    {
        ctx->pc = 0x200EE8u;
        ps2_stubs::memcpy(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x200EE8u) { return; }
    ctx->pc = 0x200EE8u;
label_200ee8:
    // 0x200ee8: 0xc6200064  lwc1        $f0, 0x64($s1)
    ctx->pc = 0x200ee8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x200eec: 0xe6000224  swc1        $f0, 0x224($s0)
    ctx->pc = 0x200eecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 548), bits); }
    // 0x200ef0: 0xc6200068  lwc1        $f0, 0x68($s1)
    ctx->pc = 0x200ef0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x200ef4: 0xe6000228  swc1        $f0, 0x228($s0)
    ctx->pc = 0x200ef4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 552), bits); }
    // 0x200ef8: 0xc620006c  lwc1        $f0, 0x6C($s1)
    ctx->pc = 0x200ef8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x200efc: 0xe600022c  swc1        $f0, 0x22C($s0)
    ctx->pc = 0x200efcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 556), bits); }
    // 0x200f00: 0xc6200074  lwc1        $f0, 0x74($s1)
    ctx->pc = 0x200f00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x200f04: 0xe6000234  swc1        $f0, 0x234($s0)
    ctx->pc = 0x200f04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 564), bits); }
    // 0x200f08: 0x8e220080  lw          $v0, 0x80($s1)
    ctx->pc = 0x200f08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
    // 0x200f0c: 0xae020198  sw          $v0, 0x198($s0)
    ctx->pc = 0x200f0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 408), GPR_U32(ctx, 2));
    // 0x200f10: 0xc6200078  lwc1        $f0, 0x78($s1)
    ctx->pc = 0x200f10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x200f14: 0xe6000238  swc1        $f0, 0x238($s0)
    ctx->pc = 0x200f14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 568), bits); }
    // 0x200f18: 0x92220084  lbu         $v0, 0x84($s1)
    ctx->pc = 0x200f18u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 132)));
    // 0x200f1c: 0xa2020240  sb          $v0, 0x240($s0)
    ctx->pc = 0x200f1cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 576), (uint8_t)GPR_U32(ctx, 2));
    // 0x200f20: 0x92220086  lbu         $v0, 0x86($s1)
    ctx->pc = 0x200f20u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 134)));
    // 0x200f24: 0xa2020242  sb          $v0, 0x242($s0)
    ctx->pc = 0x200f24u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 578), (uint8_t)GPR_U32(ctx, 2));
    // 0x200f28: 0xc6400010  lwc1        $f0, 0x10($s2)
    ctx->pc = 0x200f28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x200f2c: 0xe6000188  swc1        $f0, 0x188($s0)
    ctx->pc = 0x200f2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 392), bits); }
    // 0x200f30: 0xc6400014  lwc1        $f0, 0x14($s2)
    ctx->pc = 0x200f30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x200f34: 0xe600018c  swc1        $f0, 0x18C($s0)
    ctx->pc = 0x200f34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 396), bits); }
    // 0x200f38: 0xc6400018  lwc1        $f0, 0x18($s2)
    ctx->pc = 0x200f38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x200f3c: 0xe6000190  swc1        $f0, 0x190($s0)
    ctx->pc = 0x200f3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 400), bits); }
    // 0x200f40: 0xc6200070  lwc1        $f0, 0x70($s1)
    ctx->pc = 0x200f40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x200f44: 0xe6000230  swc1        $f0, 0x230($s0)
    ctx->pc = 0x200f44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 560), bits); }
    // 0x200f48: 0x26420030  addiu       $v0, $s2, 0x30
    ctx->pc = 0x200f48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
    // 0x200f4c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x200f4cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x200f50: 0x260200d0  addiu       $v0, $s0, 0xD0
    ctx->pc = 0x200f50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 208));
    // 0x200f54: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x200f54u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x200f58: 0x26420040  addiu       $v0, $s2, 0x40
    ctx->pc = 0x200f58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
    // 0x200f5c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x200f5cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x200f60: 0x260200e0  addiu       $v0, $s0, 0xE0
    ctx->pc = 0x200f60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 224));
    // 0x200f64: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x200f64u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x200f68: 0x26420050  addiu       $v0, $s2, 0x50
    ctx->pc = 0x200f68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
    // 0x200f6c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x200f6cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x200f70: 0x260200f0  addiu       $v0, $s0, 0xF0
    ctx->pc = 0x200f70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 240));
    // 0x200f74: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x200f74u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x200f78: 0x26420060  addiu       $v0, $s2, 0x60
    ctx->pc = 0x200f78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 96));
    // 0x200f7c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x200f7cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x200f80: 0x26020110  addiu       $v0, $s0, 0x110
    ctx->pc = 0x200f80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
    // 0x200f84: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x200f84u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x200f88: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x200f88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x200f8c: 0xae02019c  sw          $v0, 0x19C($s0)
    ctx->pc = 0x200f8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 412), GPR_U32(ctx, 2));
    // 0x200f90: 0x960201a8  lhu         $v0, 0x1A8($s0)
    ctx->pc = 0x200f90u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 424)));
    // 0x200f94: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x200f94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x200f98: 0xa60201a8  sh          $v0, 0x1A8($s0)
    ctx->pc = 0x200f98u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 424), (uint16_t)GPR_U32(ctx, 2));
    // 0x200f9c: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x200f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x200fa0: 0x8c6200cc  lw          $v0, 0xCC($v1)
    ctx->pc = 0x200fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 204)));
    // 0x200fa4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x200fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x200fa8: 0xac6200cc  sw          $v0, 0xCC($v1)
    ctx->pc = 0x200fa8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 204), GPR_U32(ctx, 2));
    // 0x200fac: 0x0  nop
    ctx->pc = 0x200facu;
    // NOP
    ctx->pc = 0x200fb0u;
}
