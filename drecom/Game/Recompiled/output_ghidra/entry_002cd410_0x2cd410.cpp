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

// Function: entry_002cd410
// Address: 0x2cd410 - 0x2cd4ac
void entry_002cd410_0x2cd410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002cd410_0x2cd410");
#endif

    ctx->pc = 0x2cd410u;

    // 0x2cd410: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2cd410u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cd414: 0xc46101a0  lwc1        $f1, 0x1A0($v1)
    ctx->pc = 0x2cd414u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2cd418: 0x3c023b0d  lui         $v0, 0x3B0D
    ctx->pc = 0x2cd418u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15117 << 16));
    // 0x2cd41c: 0x3442fea2  ori         $v0, $v0, 0xFEA2
    ctx->pc = 0x2cd41cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65186);
    // 0x2cd420: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2cd420u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cd424: 0x0  nop
    ctx->pc = 0x2cd424u;
    // NOP
    // 0x2cd428: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2cd428u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2cd42c: 0xe46001a0  swc1        $f0, 0x1A0($v1)
    ctx->pc = 0x2cd42cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 416), bits); }
    // 0x2cd430: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2cd430u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cd434: 0xc46101a4  lwc1        $f1, 0x1A4($v1)
    ctx->pc = 0x2cd434u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2cd438: 0x3c023a5a  lui         $v0, 0x3A5A
    ctx->pc = 0x2cd438u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14938 << 16));
    // 0x2cd43c: 0x3442740e  ori         $v0, $v0, 0x740E
    ctx->pc = 0x2cd43cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)29710);
    // 0x2cd440: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2cd440u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cd444: 0x0  nop
    ctx->pc = 0x2cd444u;
    // NOP
    // 0x2cd448: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2cd448u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2cd44c: 0xe46001a4  swc1        $f0, 0x1A4($v1)
    ctx->pc = 0x2cd44cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 420), bits); }
    // 0x2cd450: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2cd450u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cd454: 0xc46101a8  lwc1        $f1, 0x1A8($v1)
    ctx->pc = 0x2cd454u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2cd458: 0x3c023b0d  lui         $v0, 0x3B0D
    ctx->pc = 0x2cd458u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15117 << 16));
    // 0x2cd45c: 0x3442fea2  ori         $v0, $v0, 0xFEA2
    ctx->pc = 0x2cd45cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65186);
    // 0x2cd460: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2cd460u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cd464: 0x0  nop
    ctx->pc = 0x2cd464u;
    // NOP
    // 0x2cd468: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2cd468u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2cd46c: 0xe46001a8  swc1        $f0, 0x1A8($v1)
    ctx->pc = 0x2cd46cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 424), bits); }
    // 0x2cd470: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2cd470u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cd474: 0xc44101a4  lwc1        $f1, 0x1A4($v0)
    ctx->pc = 0x2cd474u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2cd478: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2cd478u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cd47c: 0x0  nop
    ctx->pc = 0x2cd47cu;
    // NOP
    // 0x2cd480: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2cd480u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2cd484: 0x0  nop
    ctx->pc = 0x2cd484u;
    // NOP
    // 0x2cd488: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x2CD488u;
    {
        const bool branch_taken_0x2cd488 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2cd488) {
            ctx->pc = 0x2CD4ACu;
            return;
        }
    }
    ctx->pc = 0x2CD490u;
    // 0x2cd490: 0x24100004  addiu       $s0, $zero, 0x4
    ctx->pc = 0x2cd490u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2cd494: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2cd494u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cd498: 0xa0500002  sb          $s0, 0x2($v0)
    ctx->pc = 0x2cd498u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 16));
    // 0x2cd49c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2cd49cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cd4a0: 0x9462000e  lhu         $v0, 0xE($v1)
    ctx->pc = 0x2cd4a0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 14)));
    // 0x2cd4a4: 0x30427fff  andi        $v0, $v0, 0x7FFF
    ctx->pc = 0x2cd4a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x2cd4a8: 0xa462000e  sh          $v0, 0xE($v1)
    ctx->pc = 0x2cd4a8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 14), (uint16_t)GPR_U32(ctx, 2));
    ctx->pc = 0x2cd4acu;
}
