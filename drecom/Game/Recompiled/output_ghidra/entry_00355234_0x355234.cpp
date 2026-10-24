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

// Function: entry_00355234
// Address: 0x355234 - 0x35529c
void entry_00355234_0x355234(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00355234_0x355234");
#endif

    ctx->pc = 0x355234u;

    // 0x355234: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x355234u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x355238: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x355238u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x35523c: 0xc600012c  lwc1        $f0, 0x12C($s0)
    ctx->pc = 0x35523cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x355240: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x355240u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x355244: 0xe600012c  swc1        $f0, 0x12C($s0)
    ctx->pc = 0x355244u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 300), bits); }
    // 0x355248: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x355248u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x35524c: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x35524cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x355250: 0xc6000128  lwc1        $f0, 0x128($s0)
    ctx->pc = 0x355250u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x355254: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x355254u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x355258: 0xe6000128  swc1        $f0, 0x128($s0)
    ctx->pc = 0x355258u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 296), bits); }
    // 0x35525c: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x35525cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x355260: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x355260u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x355264: 0xc6000130  lwc1        $f0, 0x130($s0)
    ctx->pc = 0x355264u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x355268: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x355268u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x35526c: 0xe6000130  swc1        $f0, 0x130($s0)
    ctx->pc = 0x35526cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 304), bits); }
    // 0x355270: 0xc601012c  lwc1        $f1, 0x12C($s0)
    ctx->pc = 0x355270u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x355274: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x355274u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x355278: 0x0  nop
    ctx->pc = 0x355278u;
    // NOP
    // 0x35527c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x35527cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x355280: 0x0  nop
    ctx->pc = 0x355280u;
    // NOP
    // 0x355284: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x355284u;
    {
        const bool branch_taken_0x355284 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x355284) {
            ctx->pc = 0x35529Cu;
            return;
        }
    }
    ctx->pc = 0x35528Cu;
    // 0x35528c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x35528cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x355290: 0x0  nop
    ctx->pc = 0x355290u;
    // NOP
    // 0x355294: 0xe600012c  swc1        $f0, 0x12C($s0)
    ctx->pc = 0x355294u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 300), bits); }
    // 0x355298: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x355298u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->pc = 0x35529cu;
}
