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

// Function: entry_0023bab4
// Address: 0x23bab4 - 0x23baf4
void entry_0023bab4_0x23bab4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0023bab4_0x23bab4");
#endif

    ctx->pc = 0x23bab4u;

    // 0x23bab4: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x23bab4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23bab8: 0xc4411288  lwc1        $f1, 0x1288($v0)
    ctx->pc = 0x23bab8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23babc: 0x3c0244af  lui         $v0, 0x44AF
    ctx->pc = 0x23babcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17583 << 16));
    // 0x23bac0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23bac0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23bac4: 0x0  nop
    ctx->pc = 0x23bac4u;
    // NOP
    // 0x23bac8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x23bac8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23bacc: 0x0  nop
    ctx->pc = 0x23baccu;
    // NOP
    // 0x23bad0: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x23BAD0u;
    {
        const bool branch_taken_0x23bad0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x23bad0) {
            ctx->pc = 0x23BAF4u;
            return;
        }
    }
    ctx->pc = 0x23BAD8u;
    // 0x23bad8: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x23bad8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x23badc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23badcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23bae0: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x23bae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23bae4: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x23bae4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x23bae8: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x23bae8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x23baec: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x23BAECu;
    {
        const bool branch_taken_0x23baec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23baec) {
            ctx->pc = 0x23BB44u;
            return;
        }
    }
    ctx->pc = 0x23BAF4u;
}
