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

// Function: entry_001729b0
// Address: 0x1729b0 - 0x172a00
void entry_001729b0_0x1729b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001729b0_0x1729b0");
#endif

    ctx->pc = 0x1729b0u;

    // 0x1729b0: 0xc7a1002c  lwc1        $f1, 0x2C($sp)
    ctx->pc = 0x1729b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1729b4: 0xc7a00070  lwc1        $f0, 0x70($sp)
    ctx->pc = 0x1729b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1729b8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1729b8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1729bc: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x1729bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x1729c0: 0xc7a10030  lwc1        $f1, 0x30($sp)
    ctx->pc = 0x1729c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1729c4: 0x3c034049  lui         $v1, 0x4049
    ctx->pc = 0x1729c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16457 << 16));
    // 0x1729c8: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x1729c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x1729cc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1729ccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1729d0: 0x0  nop
    ctx->pc = 0x1729d0u;
    // NOP
    // 0x1729d4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1729d4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1729d8: 0x0  nop
    ctx->pc = 0x1729d8u;
    // NOP
    // 0x1729dc: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x1729DCu;
    {
        const bool branch_taken_0x1729dc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1729dc) {
            ctx->pc = 0x172A00u;
            return;
        }
    }
    ctx->pc = 0x1729E4u;
    // 0x1729e4: 0xc7a10030  lwc1        $f1, 0x30($sp)
    ctx->pc = 0x1729e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1729e8: 0x3c0340c9  lui         $v1, 0x40C9
    ctx->pc = 0x1729e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16585 << 16));
    // 0x1729ec: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x1729ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x1729f0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1729f0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1729f4: 0x0  nop
    ctx->pc = 0x1729f4u;
    // NOP
    // 0x1729f8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1729f8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1729fc: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x1729fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    ctx->pc = 0x172a00u;
}
