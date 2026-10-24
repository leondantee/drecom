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

// Function: entry_00130b20
// Address: 0x130b20 - 0x130b5c
void entry_00130b20_0x130b20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00130b20_0x130b20");
#endif

    ctx->pc = 0x130b20u;

    // 0x130b20: 0xc7a1002c  lwc1        $f1, 0x2C($sp)
    ctx->pc = 0x130b20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x130b24: 0x3c023fc9  lui         $v0, 0x3FC9
    ctx->pc = 0x130b24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16329 << 16));
    // 0x130b28: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x130b28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x130b2c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x130b2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x130b30: 0x0  nop
    ctx->pc = 0x130b30u;
    // NOP
    // 0x130b34: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x130b34u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x130b38: 0x0  nop
    ctx->pc = 0x130b38u;
    // NOP
    // 0x130b3c: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x130B3Cu;
    {
        const bool branch_taken_0x130b3c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x130b3c) {
            ctx->pc = 0x130B5Cu;
            return;
        }
    }
    ctx->pc = 0x130B44u;
    // 0x130b44: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x130b44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x130b48: 0xc44011f8  lwc1        $f0, 0x11F8($v0)
    ctx->pc = 0x130b48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x130b4c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x130b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x130b50: 0xe4401290  swc1        $f0, 0x1290($v0)
    ctx->pc = 0x130b50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4752), bits); }
    // 0x130b54: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x130B54u;
    {
        const bool branch_taken_0x130b54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x130b54) {
            ctx->pc = 0x130B88u;
            return;
        }
    }
    ctx->pc = 0x130B5Cu;
}
