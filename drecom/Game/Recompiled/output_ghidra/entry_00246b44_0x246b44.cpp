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

// Function: entry_00246b44
// Address: 0x246b44 - 0x246b98
void entry_00246b44_0x246b44(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00246b44_0x246b44");
#endif

    ctx->pc = 0x246b44u;

    // 0x246b44: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x246b44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x246b48: 0xc4411288  lwc1        $f1, 0x1288($v0)
    ctx->pc = 0x246b48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x246b4c: 0x3c04447a  lui         $a0, 0x447A
    ctx->pc = 0x246b4cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17530 << 16));
    // 0x246b50: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x246b50u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x246b54: 0x0  nop
    ctx->pc = 0x246b54u;
    // NOP
    // 0x246b58: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x246b58u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x246b5c: 0x0  nop
    ctx->pc = 0x246b5cu;
    // NOP
    // 0x246b60: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x246B60u;
    {
        const bool branch_taken_0x246b60 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x246b60) {
            ctx->pc = 0x246B98u;
            return;
        }
    }
    ctx->pc = 0x246B68u;
    // 0x246b68: 0x3c05c120  lui         $a1, 0xC120
    ctx->pc = 0x246b68u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)49440 << 16));
    // 0x246b6c: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x246b6cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x246b70: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x246b70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x246b74: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x246b74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x246b78: 0xe4600018  swc1        $f0, 0x18($v1)
    ctx->pc = 0x246b78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
    // 0x246b7c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x246b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x246b80: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x246b80u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x246b84: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x246b84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x246b88: 0x24621330  addiu       $v0, $v1, 0x1330
    ctx->pc = 0x246b88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x246b8c: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x246b8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    // 0x246b90: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x246B90u;
    {
        const bool branch_taken_0x246b90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x246b90) {
            ctx->pc = 0x246C58u;
            return;
        }
    }
    ctx->pc = 0x246B98u;
}
