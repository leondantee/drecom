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

// Function: entry_001f58d0
// Address: 0x1f58d0 - 0x1f592c
void entry_001f58d0_0x1f58d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f58d0_0x1f58d0");
#endif

    ctx->pc = 0x1f58d0u;

    // 0x1f58d0: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1f58d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1f58d4: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x1f58d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f58d8: 0x3c033f66  lui         $v1, 0x3F66
    ctx->pc = 0x1f58d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16230 << 16));
    // 0x1f58dc: 0x34636666  ori         $v1, $v1, 0x6666
    ctx->pc = 0x1f58dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)26214);
    // 0x1f58e0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1f58e0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f58e4: 0xc4800098  lwc1        $f0, 0x98($a0)
    ctx->pc = 0x1f58e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f58e8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1f58e8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1f58ec: 0xe4800098  swc1        $f0, 0x98($a0)
    ctx->pc = 0x1f58ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 152), bits); }
    // 0x1f58f0: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1f58f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1f58f4: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f58f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f58f8: 0xc4610098  lwc1        $f1, 0x98($v1)
    ctx->pc = 0x1f58f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f58fc: 0x3c034080  lui         $v1, 0x4080
    ctx->pc = 0x1f58fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16512 << 16));
    // 0x1f5900: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1f5900u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f5904: 0x0  nop
    ctx->pc = 0x1f5904u;
    // NOP
    // 0x1f5908: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1f5908u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f590c: 0x0  nop
    ctx->pc = 0x1f590cu;
    // NOP
    // 0x1f5910: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x1F5910u;
    {
        const bool branch_taken_0x1f5910 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f5910) {
            ctx->pc = 0x1F592Cu;
            return;
        }
    }
    ctx->pc = 0x1F5918u;
    // 0x1f5918: 0x3c034080  lui         $v1, 0x4080
    ctx->pc = 0x1f5918u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16512 << 16));
    // 0x1f591c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1f591cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f5920: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1f5920u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1f5924: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f5924u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f5928: 0xe4600098  swc1        $f0, 0x98($v1)
    ctx->pc = 0x1f5928u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 152), bits); }
    ctx->pc = 0x1f592cu;
}
