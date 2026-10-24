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

// Function: entry_0028299c
// Address: 0x28299c - 0x282a00
void entry_0028299c_0x28299c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0028299c_0x28299c");
#endif

    ctx->pc = 0x28299cu;

    // 0x28299c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28299cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x2829a0: 0x8c30fb40  lw          $s0, -0x4C0($at)
    ctx->pc = 0x2829a0u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x61FB40u));
    // 0x2829a4: 0xc60100d4  lwc1        $f1, 0xD4($s0)
    ctx->pc = 0x2829a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2829a8: 0x3c033a03  lui         $v1, 0x3A03
    ctx->pc = 0x2829a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)14851 << 16));
    // 0x2829ac: 0x3463126f  ori         $v1, $v1, 0x126F
    ctx->pc = 0x2829acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4719);
    // 0x2829b0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2829b0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2829b4: 0x0  nop
    ctx->pc = 0x2829b4u;
    // NOP
    // 0x2829b8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2829b8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2829bc: 0xe60000d4  swc1        $f0, 0xD4($s0)
    ctx->pc = 0x2829bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
    // 0x2829c0: 0xc60100d4  lwc1        $f1, 0xD4($s0)
    ctx->pc = 0x2829c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2829c4: 0x3c034049  lui         $v1, 0x4049
    ctx->pc = 0x2829c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16457 << 16));
    // 0x2829c8: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x2829c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x2829cc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2829ccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2829d0: 0x0  nop
    ctx->pc = 0x2829d0u;
    // NOP
    // 0x2829d4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2829d4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2829d8: 0x0  nop
    ctx->pc = 0x2829d8u;
    // NOP
    // 0x2829dc: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x2829DCu;
    {
        const bool branch_taken_0x2829dc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2829dc) {
            ctx->pc = 0x282A00u;
            return;
        }
    }
    ctx->pc = 0x2829E4u;
    // 0x2829e4: 0xc60100d4  lwc1        $f1, 0xD4($s0)
    ctx->pc = 0x2829e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2829e8: 0x3c0340c9  lui         $v1, 0x40C9
    ctx->pc = 0x2829e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16585 << 16));
    // 0x2829ec: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x2829ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x2829f0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2829f0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2829f4: 0x0  nop
    ctx->pc = 0x2829f4u;
    // NOP
    // 0x2829f8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2829f8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2829fc: 0xe60000d4  swc1        $f0, 0xD4($s0)
    ctx->pc = 0x2829fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
    ctx->pc = 0x282a00u;
}
