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

// Function: caseD_4
// Address: 0x35444c - 0x354514
void caseD_4_0x35444c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_4_0x35444c");
#endif

    ctx->pc = 0x35444cu;

    // 0x35444c: 0x26040150  addiu       $a0, $s0, 0x150
    ctx->pc = 0x35444cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x354450: 0x3c033f4c  lui         $v1, 0x3F4C
    ctx->pc = 0x354450u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16204 << 16));
    // 0x354454: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x354454u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x354458: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x354458u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x35445c: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x35445cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x354460: 0x46010043  div.s       $f1, $f0, $f1
    ctx->pc = 0x354460u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x354464: 0xc600012c  lwc1        $f0, 0x12C($s0)
    ctx->pc = 0x354464u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x354468: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x354468u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x35446c: 0xe600012c  swc1        $f0, 0x12C($s0)
    ctx->pc = 0x35446cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 300), bits); }
    // 0x354470: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x354470u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x354474: 0x3c053f4c  lui         $a1, 0x3F4C
    ctx->pc = 0x354474u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16204 << 16));
    // 0x354478: 0x34a4cccd  ori         $a0, $a1, 0xCCCD
    ctx->pc = 0x354478u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)52429);
    // 0x35447c: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x35447cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x354480: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x354480u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x354484: 0x46010043  div.s       $f1, $f0, $f1
    ctx->pc = 0x354484u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x354488: 0xc6000128  lwc1        $f0, 0x128($s0)
    ctx->pc = 0x354488u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x35448c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x35448cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x354490: 0xe6000128  swc1        $f0, 0x128($s0)
    ctx->pc = 0x354490u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 296), bits); }
    // 0x354494: 0x26070150  addiu       $a3, $s0, 0x150
    ctx->pc = 0x354494u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x354498: 0x3c043f4c  lui         $a0, 0x3F4C
    ctx->pc = 0x354498u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16204 << 16));
    // 0x35449c: 0x3483cccd  ori         $v1, $a0, 0xCCCD
    ctx->pc = 0x35449cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)52429);
    // 0x3544a0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3544a0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3544a4: 0xc4e00004  lwc1        $f0, 0x4($a3)
    ctx->pc = 0x3544a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3544a8: 0x46010043  div.s       $f1, $f0, $f1
    ctx->pc = 0x3544a8u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x3544ac: 0xc6000130  lwc1        $f0, 0x130($s0)
    ctx->pc = 0x3544acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3544b0: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x3544b0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x3544b4: 0xe6000130  swc1        $f0, 0x130($s0)
    ctx->pc = 0x3544b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 304), bits); }
    // 0x3544b8: 0xc601012c  lwc1        $f1, 0x12C($s0)
    ctx->pc = 0x3544b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3544bc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3544bcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3544c0: 0x0  nop
    ctx->pc = 0x3544c0u;
    // NOP
    // 0x3544c4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3544c4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3544c8: 0x0  nop
    ctx->pc = 0x3544c8u;
    // NOP
    // 0x3544cc: 0x450002d0  bc1f        . + 4 + (0x2D0 << 2)
    ctx->pc = 0x3544CCu;
    {
        const bool branch_taken_0x3544cc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3544cc) {
            ctx->pc = 0x355010u;
            return;
        }
    }
    ctx->pc = 0x3544D4u;
    // 0x3544d4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3544d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3544d8: 0x0  nop
    ctx->pc = 0x3544d8u;
    // NOP
    // 0x3544dc: 0xe6000128  swc1        $f0, 0x128($s0)
    ctx->pc = 0x3544dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 296), bits); }
    // 0x3544e0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3544e0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3544e4: 0x0  nop
    ctx->pc = 0x3544e4u;
    // NOP
    // 0x3544e8: 0xe600012c  swc1        $f0, 0x12C($s0)
    ctx->pc = 0x3544e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 300), bits); }
    // 0x3544ec: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3544ecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3544f0: 0x0  nop
    ctx->pc = 0x3544f0u;
    // NOP
    // 0x3544f4: 0xe6000130  swc1        $f0, 0x130($s0)
    ctx->pc = 0x3544f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 304), bits); }
    // 0x3544f8: 0x26050150  addiu       $a1, $s0, 0x150
    ctx->pc = 0x3544f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x3544fc: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x3544fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x354500: 0x2404fffe  addiu       $a0, $zero, -0x2
    ctx->pc = 0x354500u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x354504: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x354504u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x354508: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x354508u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x35450c: 0x100002c0  b           . + 4 + (0x2C0 << 2)
    ctx->pc = 0x35450Cu;
    {
        const bool branch_taken_0x35450c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x35450c) {
            ctx->pc = 0x355010u;
            return;
        }
    }
    ctx->pc = 0x354514u;
}
