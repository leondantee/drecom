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

// Function: entry_0031d3a8
// Address: 0x31d3a8 - 0x31d414
void entry_0031d3a8_0x31d3a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0031d3a8_0x31d3a8");
#endif

    ctx->pc = 0x31d3a8u;

    // 0x31d3a8: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x31d3a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31d3ac: 0x8c6212b0  lw          $v0, 0x12B0($v1)
    ctx->pc = 0x31d3acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4784)));
    // 0x31d3b0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x31d3b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x31d3b4: 0xac6212b0  sw          $v0, 0x12B0($v1)
    ctx->pc = 0x31d3b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4784), GPR_U32(ctx, 2));
    // 0x31d3b8: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x31d3b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31d3bc: 0xc48112dc  lwc1        $f1, 0x12DC($a0)
    ctx->pc = 0x31d3bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4828)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31d3c0: 0x3c023a83  lui         $v0, 0x3A83
    ctx->pc = 0x31d3c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14979 << 16));
    // 0x31d3c4: 0x3443126f  ori         $v1, $v0, 0x126F
    ctx->pc = 0x31d3c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4719);
    // 0x31d3c8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x31d3c8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31d3cc: 0x0  nop
    ctx->pc = 0x31d3ccu;
    // NOP
    // 0x31d3d0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x31d3d0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x31d3d4: 0xe48012dc  swc1        $f0, 0x12DC($a0)
    ctx->pc = 0x31d3d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4828), bits); }
    // 0x31d3d8: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x31d3d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31d3dc: 0xc44112dc  lwc1        $f1, 0x12DC($v0)
    ctx->pc = 0x31d3dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4828)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31d3e0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x31d3e0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31d3e4: 0x0  nop
    ctx->pc = 0x31d3e4u;
    // NOP
    // 0x31d3e8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x31d3e8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x31d3ec: 0x0  nop
    ctx->pc = 0x31d3ecu;
    // NOP
    // 0x31d3f0: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x31D3F0u;
    {
        const bool branch_taken_0x31d3f0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x31d3f0) {
            ctx->pc = 0x31D414u;
            return;
        }
    }
    ctx->pc = 0x31D3F8u;
    // 0x31d3f8: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x31d3f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31d3fc: 0xac4012ac  sw          $zero, 0x12AC($v0)
    ctx->pc = 0x31d3fcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4780), GPR_U32(ctx, 0));
    // 0x31d400: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x31d400u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31d404: 0xac6012b0  sw          $zero, 0x12B0($v1)
    ctx->pc = 0x31d404u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4784), GPR_U32(ctx, 0));
    // 0x31d408: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x31d408u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31d40c: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x31d40cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31d410: 0xe44012dc  swc1        $f0, 0x12DC($v0)
    ctx->pc = 0x31d410u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4828), bits); }
    ctx->pc = 0x31d414u;
}
