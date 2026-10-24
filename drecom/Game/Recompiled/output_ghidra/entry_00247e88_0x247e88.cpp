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

// Function: entry_00247e88
// Address: 0x247e88 - 0x247ef8
void entry_00247e88_0x247e88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00247e88_0x247e88");
#endif

    ctx->pc = 0x247e88u;

    // 0x247e88: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x247e88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x247e8c: 0x8442127e  lh          $v0, 0x127E($v0)
    ctx->pc = 0x247e8cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4734)));
    // 0x247e90: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x247e90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x247e94: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x247e94u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x247e98: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x247e98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x247e9c: 0x14400073  bnez        $v0, . + 4 + (0x73 << 2)
    ctx->pc = 0x247E9Cu;
    {
        const bool branch_taken_0x247e9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x247e9c) {
            ctx->pc = 0x24806Cu;
            return;
        }
    }
    ctx->pc = 0x247EA4u;
    // 0x247ea4: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x247ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x247ea8: 0xc441128c  lwc1        $f1, 0x128C($v0)
    ctx->pc = 0x247ea8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4748)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x247eac: 0x3c024416  lui         $v0, 0x4416
    ctx->pc = 0x247eacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17430 << 16));
    // 0x247eb0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x247eb0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x247eb4: 0x0  nop
    ctx->pc = 0x247eb4u;
    // NOP
    // 0x247eb8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x247eb8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x247ebc: 0x0  nop
    ctx->pc = 0x247ebcu;
    // NOP
    // 0x247ec0: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x247EC0u;
    {
        const bool branch_taken_0x247ec0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x247ec0) {
            ctx->pc = 0x247EF8u;
            return;
        }
    }
    ctx->pc = 0x247EC8u;
    // 0x247ec8: 0x3c02c120  lui         $v0, 0xC120
    ctx->pc = 0x247ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49440 << 16));
    // 0x247ecc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x247eccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x247ed0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x247ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x247ed4: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x247ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x247ed8: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x247ed8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x247edc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x247edcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x247ee0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x247ee0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x247ee4: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x247ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x247ee8: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x247ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x247eec: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x247eecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    // 0x247ef0: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x247EF0u;
    {
        const bool branch_taken_0x247ef0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x247ef0) {
            ctx->pc = 0x247FB0u;
            return;
        }
    }
    ctx->pc = 0x247EF8u;
}
