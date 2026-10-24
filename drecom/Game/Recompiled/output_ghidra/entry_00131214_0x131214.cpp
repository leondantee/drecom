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

// Function: entry_00131214
// Address: 0x131214 - 0x131250
void entry_00131214_0x131214(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00131214_0x131214");
#endif

    ctx->pc = 0x131214u;

    // 0x131214: 0xc7a1002c  lwc1        $f1, 0x2C($sp)
    ctx->pc = 0x131214u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x131218: 0x3c023fc9  lui         $v0, 0x3FC9
    ctx->pc = 0x131218u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16329 << 16));
    // 0x13121c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x13121cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x131220: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x131220u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x131224: 0x0  nop
    ctx->pc = 0x131224u;
    // NOP
    // 0x131228: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x131228u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13122c: 0x0  nop
    ctx->pc = 0x13122cu;
    // NOP
    // 0x131230: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x131230u;
    {
        const bool branch_taken_0x131230 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x131230) {
            ctx->pc = 0x131250u;
            return;
        }
    }
    ctx->pc = 0x131238u;
    // 0x131238: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x131238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x13123c: 0xc44011f8  lwc1        $f0, 0x11F8($v0)
    ctx->pc = 0x13123cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x131240: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x131240u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x131244: 0xe4401290  swc1        $f0, 0x1290($v0)
    ctx->pc = 0x131244u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4752), bits); }
    // 0x131248: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x131248u;
    {
        const bool branch_taken_0x131248 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x131248) {
            ctx->pc = 0x13127Cu;
            return;
        }
    }
    ctx->pc = 0x131250u;
}
