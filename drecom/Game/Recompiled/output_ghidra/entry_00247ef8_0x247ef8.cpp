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

// Function: entry_00247ef8
// Address: 0x247ef8 - 0x247f4c
void entry_00247ef8_0x247ef8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00247ef8_0x247ef8");
#endif

    ctx->pc = 0x247ef8u;

    // 0x247ef8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x247ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x247efc: 0xc441128c  lwc1        $f1, 0x128C($v0)
    ctx->pc = 0x247efcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4748)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x247f00: 0x3c02447a  lui         $v0, 0x447A
    ctx->pc = 0x247f00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17530 << 16));
    // 0x247f04: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x247f04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x247f08: 0x0  nop
    ctx->pc = 0x247f08u;
    // NOP
    // 0x247f0c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x247f0cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x247f10: 0x0  nop
    ctx->pc = 0x247f10u;
    // NOP
    // 0x247f14: 0x4501000d  bc1t        . + 4 + (0xD << 2)
    ctx->pc = 0x247F14u;
    {
        const bool branch_taken_0x247f14 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x247f14) {
            ctx->pc = 0x247F4Cu;
            return;
        }
    }
    ctx->pc = 0x247F1Cu;
    // 0x247f1c: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x247f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x247f20: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x247f20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x247f24: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x247f24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x247f28: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x247f28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x247f2c: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x247f2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x247f30: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x247f30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x247f34: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x247f34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x247f38: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x247f38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x247f3c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x247f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x247f40: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x247f40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    // 0x247f44: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x247F44u;
    {
        const bool branch_taken_0x247f44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x247f44) {
            ctx->pc = 0x247FB0u;
            return;
        }
    }
    ctx->pc = 0x247F4Cu;
}
