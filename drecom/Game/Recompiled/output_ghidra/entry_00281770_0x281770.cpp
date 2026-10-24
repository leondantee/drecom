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

// Function: entry_00281770
// Address: 0x281770 - 0x2817d4
void entry_00281770_0x281770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00281770_0x281770");
#endif

    ctx->pc = 0x281770u;

    // 0x281770: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x281770u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x281774: 0x8c30fb24  lw          $s0, -0x4DC($at)
    ctx->pc = 0x281774u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x61FB24u));
    // 0x281778: 0xc60100d4  lwc1        $f1, 0xD4($s0)
    ctx->pc = 0x281778u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28177c: 0x3c033a03  lui         $v1, 0x3A03
    ctx->pc = 0x28177cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)14851 << 16));
    // 0x281780: 0x3463126f  ori         $v1, $v1, 0x126F
    ctx->pc = 0x281780u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4719);
    // 0x281784: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x281784u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x281788: 0x0  nop
    ctx->pc = 0x281788u;
    // NOP
    // 0x28178c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x28178cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x281790: 0xe60000d4  swc1        $f0, 0xD4($s0)
    ctx->pc = 0x281790u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
    // 0x281794: 0xc60100d4  lwc1        $f1, 0xD4($s0)
    ctx->pc = 0x281794u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x281798: 0x3c034049  lui         $v1, 0x4049
    ctx->pc = 0x281798u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16457 << 16));
    // 0x28179c: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x28179cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x2817a0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2817a0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2817a4: 0x0  nop
    ctx->pc = 0x2817a4u;
    // NOP
    // 0x2817a8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2817a8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2817ac: 0x0  nop
    ctx->pc = 0x2817acu;
    // NOP
    // 0x2817b0: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x2817B0u;
    {
        const bool branch_taken_0x2817b0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2817b0) {
            ctx->pc = 0x2817D4u;
            return;
        }
    }
    ctx->pc = 0x2817B8u;
    // 0x2817b8: 0xc60100d4  lwc1        $f1, 0xD4($s0)
    ctx->pc = 0x2817b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2817bc: 0x3c0340c9  lui         $v1, 0x40C9
    ctx->pc = 0x2817bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16585 << 16));
    // 0x2817c0: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x2817c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x2817c4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2817c4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2817c8: 0x0  nop
    ctx->pc = 0x2817c8u;
    // NOP
    // 0x2817cc: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2817ccu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2817d0: 0xe60000d4  swc1        $f0, 0xD4($s0)
    ctx->pc = 0x2817d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
    ctx->pc = 0x2817d4u;
}
