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

// Function: entry_001f5840
// Address: 0x1f5840 - 0x1f5888
void entry_001f5840_0x1f5840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f5840_0x1f5840");
#endif

    ctx->pc = 0x1f5840u;

    // 0x1f5840: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1f5840u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1f5844: 0xc4620124  lwc1        $f2, 0x124($v1)
    ctx->pc = 0x1f5844u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1f5848: 0x3c034348  lui         $v1, 0x4348
    ctx->pc = 0x1f5848u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17224 << 16));
    // 0x1f584c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1f584cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f5850: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x1f5850u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x1f5854: 0xc420dce4  lwc1        $f0, -0x231C($at)
    ctx->pc = 0x1f5854u;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f5858: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1f5858u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1f585c: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x1f585cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f5860: 0x0  nop
    ctx->pc = 0x1f5860u;
    // NOP
    // 0x1f5864: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x1F5864u;
    {
        const bool branch_taken_0x1f5864 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f5864) {
            ctx->pc = 0x1F5888u;
            return;
        }
    }
    ctx->pc = 0x1F586Cu;
    // 0x1f586c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1f586cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1f5870: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f5870u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f5874: 0xc4610098  lwc1        $f1, 0x98($v1)
    ctx->pc = 0x1f5874u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f5878: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1f5878u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1f587c: 0xc4600124  lwc1        $f0, 0x124($v1)
    ctx->pc = 0x1f587cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f5880: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1f5880u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1f5884: 0xe4600124  swc1        $f0, 0x124($v1)
    ctx->pc = 0x1f5884u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 292), bits); }
    ctx->pc = 0x1f5888u;
}
