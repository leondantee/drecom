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

// Function: entry_00283994
// Address: 0x283994 - 0x2839f8
void entry_00283994_0x283994(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00283994_0x283994");
#endif

    ctx->pc = 0x283994u;

    // 0x283994: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x283994u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x283998: 0x8c30fa68  lw          $s0, -0x598($at)
    ctx->pc = 0x283998u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x61FA68u));
    // 0x28399c: 0xc60100d4  lwc1        $f1, 0xD4($s0)
    ctx->pc = 0x28399cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2839a0: 0x3c023b03  lui         $v0, 0x3B03
    ctx->pc = 0x2839a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15107 << 16));
    // 0x2839a4: 0x3442126f  ori         $v0, $v0, 0x126F
    ctx->pc = 0x2839a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4719);
    // 0x2839a8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2839a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2839ac: 0x0  nop
    ctx->pc = 0x2839acu;
    // NOP
    // 0x2839b0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2839b0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2839b4: 0xe60000d4  swc1        $f0, 0xD4($s0)
    ctx->pc = 0x2839b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
    // 0x2839b8: 0xc60100d4  lwc1        $f1, 0xD4($s0)
    ctx->pc = 0x2839b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2839bc: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x2839bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x2839c0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x2839c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x2839c4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2839c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2839c8: 0x0  nop
    ctx->pc = 0x2839c8u;
    // NOP
    // 0x2839cc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2839ccu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2839d0: 0x0  nop
    ctx->pc = 0x2839d0u;
    // NOP
    // 0x2839d4: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x2839D4u;
    {
        const bool branch_taken_0x2839d4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2839d4) {
            ctx->pc = 0x2839F8u;
            return;
        }
    }
    ctx->pc = 0x2839DCu;
    // 0x2839dc: 0xc60100d4  lwc1        $f1, 0xD4($s0)
    ctx->pc = 0x2839dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2839e0: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x2839e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x2839e4: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x2839e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x2839e8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2839e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2839ec: 0x0  nop
    ctx->pc = 0x2839ecu;
    // NOP
    // 0x2839f0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2839f0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2839f4: 0xe60000d4  swc1        $f0, 0xD4($s0)
    ctx->pc = 0x2839f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
    ctx->pc = 0x2839f8u;
}
