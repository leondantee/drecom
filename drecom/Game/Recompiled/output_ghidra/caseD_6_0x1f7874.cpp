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

// Function: caseD_6
// Address: 0x1f7874 - 0x1f7954
void caseD_6_0x1f7874(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_6_0x1f7874");
#endif

    ctx->pc = 0x1f7874u;

    // 0x1f7874: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x1f7874u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1f7878: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f7878u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f787c: 0x8c630054  lw          $v1, 0x54($v1)
    ctx->pc = 0x1f787cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
    // 0x1f7880: 0x70608628  paddub      $s0, $v1, $zero
    ctx->pc = 0x1f7880u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x1f7884: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x1f7884u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1f7888: 0x8c630130  lw          $v1, 0x130($v1)
    ctx->pc = 0x1f7888u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x1f788c: 0xafa300b0  sw          $v1, 0xB0($sp)
    ctx->pc = 0x1f788cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 3));
    // 0x1f7890: 0x8e040130  lw          $a0, 0x130($s0)
    ctx->pc = 0x1f7890u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
    // 0x1f7894: 0xafa400b4  sw          $a0, 0xB4($sp)
    ctx->pc = 0x1f7894u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 4));
    // 0x1f7898: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x1f7898u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1f789c: 0x8c7402d0  lw          $s4, 0x2D0($v1)
    ctx->pc = 0x1f789cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x1f78a0: 0x8e1502d0  lw          $s5, 0x2D0($s0)
    ctx->pc = 0x1f78a0u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 720)));
    // 0x1f78a4: 0xc6010120  lwc1        $f1, 0x120($s0)
    ctx->pc = 0x1f78a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f78a8: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x1f78a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1f78ac: 0xc4600184  lwc1        $f0, 0x184($v1)
    ctx->pc = 0x1f78acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f78b0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1f78b0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1f78b4: 0x8fb100c8  lw          $s1, 0xC8($sp)
    ctx->pc = 0x1f78b4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1f78b8: 0xe6200120  swc1        $f0, 0x120($s1)
    ctx->pc = 0x1f78b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 288), bits); }
    // 0x1f78bc: 0xc6000124  lwc1        $f0, 0x124($s0)
    ctx->pc = 0x1f78bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f78c0: 0x8fb200c8  lw          $s2, 0xC8($sp)
    ctx->pc = 0x1f78c0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1f78c4: 0xe6400124  swc1        $f0, 0x124($s2)
    ctx->pc = 0x1f78c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 292), bits); }
    // 0x1f78c8: 0xc6010128  lwc1        $f1, 0x128($s0)
    ctx->pc = 0x1f78c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f78cc: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x1f78ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1f78d0: 0xc4600184  lwc1        $f0, 0x184($v1)
    ctx->pc = 0x1f78d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f78d4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1f78d4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1f78d8: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x1f78d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1f78dc: 0xe4600128  swc1        $f0, 0x128($v1)
    ctx->pc = 0x1f78dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 296), bits); }
    // 0x1f78e0: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x1f78e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1f78e4: 0x8463127a  lh          $v1, 0x127A($v1)
    ctx->pc = 0x1f78e4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4730)));
    // 0x1f78e8: 0x1460001a  bnez        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x1F78E8u;
    {
        const bool branch_taken_0x1f78e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f78e8) {
            ctx->pc = 0x1F7954u;
            return;
        }
    }
    ctx->pc = 0x1F78F0u;
    // 0x1f78f0: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x1f78f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1f78f4: 0xc4810184  lwc1        $f1, 0x184($a0)
    ctx->pc = 0x1f78f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f78f8: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x1f78f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x1f78fc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1f78fcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f7900: 0x0  nop
    ctx->pc = 0x1f7900u;
    // NOP
    // 0x1f7904: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1f7904u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1f7908: 0xe4800184  swc1        $f0, 0x184($a0)
    ctx->pc = 0x1f7908u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 388), bits); }
    // 0x1f790c: 0x8fb100c8  lw          $s1, 0xC8($sp)
    ctx->pc = 0x1f790cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1f7910: 0xc6210184  lwc1        $f1, 0x184($s1)
    ctx->pc = 0x1f7910u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f7914: 0x3c054248  lui         $a1, 0x4248
    ctx->pc = 0x1f7914u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16968 << 16));
    // 0x1f7918: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1f7918u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f791c: 0x0  nop
    ctx->pc = 0x1f791cu;
    // NOP
    // 0x1f7920: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1f7920u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f7924: 0x0  nop
    ctx->pc = 0x1f7924u;
    // NOP
    // 0x1f7928: 0x45010020  bc1t        . + 4 + (0x20 << 2)
    ctx->pc = 0x1F7928u;
    {
        const bool branch_taken_0x1f7928 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f7928) {
            ctx->pc = 0x1F79ACu;
            return;
        }
    }
    ctx->pc = 0x1F7930u;
    // 0x1f7930: 0x3c034248  lui         $v1, 0x4248
    ctx->pc = 0x1f7930u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16968 << 16));
    // 0x1f7934: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1f7934u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f7938: 0x8fb100c8  lw          $s1, 0xC8($sp)
    ctx->pc = 0x1f7938u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1f793c: 0xe6200184  swc1        $f0, 0x184($s1)
    ctx->pc = 0x1f793cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 388), bits); }
    // 0x1f7940: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1f7940u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f7944: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x1f7944u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1f7948: 0xa486127a  sh          $a2, 0x127A($a0)
    ctx->pc = 0x1f7948u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4730), (uint16_t)GPR_U32(ctx, 6));
    // 0x1f794c: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x1F794Cu;
    {
        const bool branch_taken_0x1f794c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f794c) {
            ctx->pc = 0x1F79ACu;
            return;
        }
    }
    ctx->pc = 0x1F7954u;
}
