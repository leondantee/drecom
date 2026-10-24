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

// Function: entry_0022e9fc
// Address: 0x22e9fc - 0x22ea44
void entry_0022e9fc_0x22e9fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0022e9fc_0x22e9fc");
#endif

    ctx->pc = 0x22e9fcu;

    // 0x22e9fc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x22e9fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22ea00: 0xc4620124  lwc1        $f2, 0x124($v1)
    ctx->pc = 0x22ea00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x22ea04: 0x3c034348  lui         $v1, 0x4348
    ctx->pc = 0x22ea04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17224 << 16));
    // 0x22ea08: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x22ea08u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x22ea0c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x22ea0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x22ea10: 0xc420dce4  lwc1        $f0, -0x231C($at)
    ctx->pc = 0x22ea10u;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22ea14: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x22ea14u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x22ea18: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x22ea18u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22ea1c: 0x0  nop
    ctx->pc = 0x22ea1cu;
    // NOP
    // 0x22ea20: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x22EA20u;
    {
        const bool branch_taken_0x22ea20 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x22ea20) {
            ctx->pc = 0x22EA44u;
            return;
        }
    }
    ctx->pc = 0x22EA28u;
    // 0x22ea28: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x22ea28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22ea2c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x22ea2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22ea30: 0xc4610098  lwc1        $f1, 0x98($v1)
    ctx->pc = 0x22ea30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22ea34: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x22ea34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22ea38: 0xc4600124  lwc1        $f0, 0x124($v1)
    ctx->pc = 0x22ea38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22ea3c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x22ea3cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x22ea40: 0xe4600124  swc1        $f0, 0x124($v1)
    ctx->pc = 0x22ea40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 292), bits); }
    ctx->pc = 0x22ea44u;
}
