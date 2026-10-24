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

// Function: entry_0023e2cc
// Address: 0x23e2cc - 0x23e31c
void entry_0023e2cc_0x23e2cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0023e2cc_0x23e2cc");
#endif

    ctx->pc = 0x23e2ccu;

    // 0x23e2cc: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x23e2ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23e2d0: 0x8483127c  lh          $v1, 0x127C($a0)
    ctx->pc = 0x23e2d0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4732)));
    // 0x23e2d4: 0x14600037  bnez        $v1, . + 4 + (0x37 << 2)
    ctx->pc = 0x23E2D4u;
    {
        const bool branch_taken_0x23e2d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x23e2d4) {
            ctx->pc = 0x23E3B4u;
            return;
        }
    }
    ctx->pc = 0x23E2DCu;
    // 0x23e2dc: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x23e2dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23e2e0: 0xc4811288  lwc1        $f1, 0x1288($a0)
    ctx->pc = 0x23e2e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23e2e4: 0x3c0344af  lui         $v1, 0x44AF
    ctx->pc = 0x23e2e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17583 << 16));
    // 0x23e2e8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x23e2e8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23e2ec: 0x0  nop
    ctx->pc = 0x23e2ecu;
    // NOP
    // 0x23e2f0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x23e2f0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23e2f4: 0x0  nop
    ctx->pc = 0x23e2f4u;
    // NOP
    // 0x23e2f8: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x23E2F8u;
    {
        const bool branch_taken_0x23e2f8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x23e2f8) {
            ctx->pc = 0x23E31Cu;
            return;
        }
    }
    ctx->pc = 0x23E300u;
    // 0x23e300: 0x3c0340a0  lui         $v1, 0x40A0
    ctx->pc = 0x23e300u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16544 << 16));
    // 0x23e304: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x23e304u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23e308: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x23e308u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23e30c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x23e30cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x23e310: 0xe4600018  swc1        $f0, 0x18($v1)
    ctx->pc = 0x23e310u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
    // 0x23e314: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x23E314u;
    {
        const bool branch_taken_0x23e314 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23e314) {
            ctx->pc = 0x23E32Cu;
            return;
        }
    }
    ctx->pc = 0x23E31Cu;
}
