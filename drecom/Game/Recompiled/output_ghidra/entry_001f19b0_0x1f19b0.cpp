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

// Function: entry_001f19b0
// Address: 0x1f19b0 - 0x1f1a00
void entry_001f19b0_0x1f19b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f19b0_0x1f19b0");
#endif

    ctx->pc = 0x1f19b0u;

    // 0x1f19b0: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1f19b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1f19b4: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f19b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f19b8: 0xc4610098  lwc1        $f1, 0x98($v1)
    ctx->pc = 0x1f19b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f19bc: 0x3c0444af  lui         $a0, 0x44AF
    ctx->pc = 0x1f19bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17583 << 16));
    // 0x1f19c0: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1f19c0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f19c4: 0x0  nop
    ctx->pc = 0x1f19c4u;
    // NOP
    // 0x1f19c8: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x1f19c8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1f19cc: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1f19ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1f19d0: 0xc4600124  lwc1        $f0, 0x124($v1)
    ctx->pc = 0x1f19d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f19d4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1f19d4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f19d8: 0x0  nop
    ctx->pc = 0x1f19d8u;
    // NOP
    // 0x1f19dc: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x1F19DCu;
    {
        const bool branch_taken_0x1f19dc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f19dc) {
            ctx->pc = 0x1F1A00u;
            return;
        }
    }
    ctx->pc = 0x1F19E4u;
    // 0x1f19e4: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x1f19e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1f19e8: 0xc4810124  lwc1        $f1, 0x124($a0)
    ctx->pc = 0x1f19e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f19ec: 0x3c034100  lui         $v1, 0x4100
    ctx->pc = 0x1f19ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16640 << 16));
    // 0x1f19f0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1f19f0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f19f4: 0x0  nop
    ctx->pc = 0x1f19f4u;
    // NOP
    // 0x1f19f8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1f19f8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1f19fc: 0xe4800124  swc1        $f0, 0x124($a0)
    ctx->pc = 0x1f19fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 292), bits); }
    ctx->pc = 0x1f1a00u;
}
