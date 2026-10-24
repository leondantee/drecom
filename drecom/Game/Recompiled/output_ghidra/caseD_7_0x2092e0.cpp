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

// Function: caseD_7
// Address: 0x2092e0 - 0x20937c
void caseD_7_0x2092e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_7_0x2092e0");
#endif

    ctx->pc = 0x2092e0u;

    // 0x2092e0: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2092e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2092e4: 0x84831278  lh          $v1, 0x1278($a0)
    ctx->pc = 0x2092e4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4728)));
    // 0x2092e8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2092e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2092ec: 0xa4831278  sh          $v1, 0x1278($a0)
    ctx->pc = 0x2092ecu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x2092f0: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x2092f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x2092f4: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2092f4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x2092f8: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x2092f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x2092fc: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2092fcu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x209300: 0x2861000b  slti        $at, $v1, 0xB
    ctx->pc = 0x209300u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)11) ? 1 : 0);
    // 0x209304: 0x14200033  bnez        $at, . + 4 + (0x33 << 2)
    ctx->pc = 0x209304u;
    {
        const bool branch_taken_0x209304 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x209304) {
            ctx->pc = 0x2093D4u;
            return;
        }
    }
    ctx->pc = 0x20930Cu;
    // 0x20930c: 0xc60101a0  lwc1        $f1, 0x1A0($s0)
    ctx->pc = 0x20930cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x209310: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x209310u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x209314: 0x0  nop
    ctx->pc = 0x209314u;
    // NOP
    // 0x209318: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x209318u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20931c: 0x0  nop
    ctx->pc = 0x20931cu;
    // NOP
    // 0x209320: 0x45010016  bc1t        . + 4 + (0x16 << 2)
    ctx->pc = 0x209320u;
    {
        const bool branch_taken_0x209320 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x209320) {
            ctx->pc = 0x20937Cu;
            return;
        }
    }
    ctx->pc = 0x209328u;
    // 0x209328: 0xc60101a0  lwc1        $f1, 0x1A0($s0)
    ctx->pc = 0x209328u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20932c: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x20932cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x209330: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x209330u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x209334: 0x0  nop
    ctx->pc = 0x209334u;
    // NOP
    // 0x209338: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x209338u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x20933c: 0xe60001a0  swc1        $f0, 0x1A0($s0)
    ctx->pc = 0x20933cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 416), bits); }
    // 0x209340: 0xc60101a4  lwc1        $f1, 0x1A4($s0)
    ctx->pc = 0x209340u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x209344: 0x3c043fcc  lui         $a0, 0x3FCC
    ctx->pc = 0x209344u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16332 << 16));
    // 0x209348: 0x3483cccd  ori         $v1, $a0, 0xCCCD
    ctx->pc = 0x209348u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)52429);
    // 0x20934c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x20934cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x209350: 0x0  nop
    ctx->pc = 0x209350u;
    // NOP
    // 0x209354: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x209354u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x209358: 0xe60001a4  swc1        $f0, 0x1A4($s0)
    ctx->pc = 0x209358u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 420), bits); }
    // 0x20935c: 0xc60101a8  lwc1        $f1, 0x1A8($s0)
    ctx->pc = 0x20935cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x209360: 0x3c033fc0  lui         $v1, 0x3FC0
    ctx->pc = 0x209360u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16320 << 16));
    // 0x209364: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x209364u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x209368: 0x0  nop
    ctx->pc = 0x209368u;
    // NOP
    // 0x20936c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x20936cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x209370: 0xe60001a8  swc1        $f0, 0x1A8($s0)
    ctx->pc = 0x209370u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 424), bits); }
    // 0x209374: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x209374u;
    {
        const bool branch_taken_0x209374 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x209374) {
            ctx->pc = 0x2093D4u;
            return;
        }
    }
    ctx->pc = 0x20937Cu;
}
