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

// Function: entry_0029d39c
// Address: 0x29d39c - 0x29d3f8
void entry_0029d39c_0x29d39c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0029d39c_0x29d39c");
#endif

    ctx->pc = 0x29d39cu;

    // 0x29d39c: 0x93a20068  lbu         $v0, 0x68($sp)
    ctx->pc = 0x29d39cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x29d3a0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x29d3a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x29d3a4: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x29d3a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x29d3a8: 0x1440006f  bnez        $v0, . + 4 + (0x6F << 2)
    ctx->pc = 0x29D3A8u;
    {
        const bool branch_taken_0x29d3a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29d3a8) {
            ctx->pc = 0x29D568u;
            return;
        }
    }
    ctx->pc = 0x29D3B0u;
    // 0x29d3b0: 0x3c02c974  lui         $v0, 0xC974
    ctx->pc = 0x29d3b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51572 << 16));
    // 0x29d3b4: 0x34422400  ori         $v0, $v0, 0x2400
    ctx->pc = 0x29d3b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9216);
    // 0x29d3b8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x29d3b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x29d3bc: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x29d3bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29d3c0: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x29d3c0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29d3c4: 0x0  nop
    ctx->pc = 0x29d3c4u;
    // NOP
    // 0x29d3c8: 0x45010037  bc1t        . + 4 + (0x37 << 2)
    ctx->pc = 0x29D3C8u;
    {
        const bool branch_taken_0x29d3c8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x29d3c8) {
            ctx->pc = 0x29D4A8u;
            return;
        }
    }
    ctx->pc = 0x29D3D0u;
    // 0x29d3d0: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x29d3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x29d3d4: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x29d3d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29d3d8: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x29d3d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29d3dc: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x29d3dcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29d3e0: 0x0  nop
    ctx->pc = 0x29d3e0u;
    // NOP
    // 0x29d3e4: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x29D3E4u;
    {
        const bool branch_taken_0x29d3e4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x29d3e4) {
            ctx->pc = 0x29D3F8u;
            return;
        }
    }
    ctx->pc = 0x29D3ECu;
    // 0x29d3ec: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x29d3ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29d3f0: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x29d3f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x29d3f4: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x29d3f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    ctx->pc = 0x29d3f8u;
}
