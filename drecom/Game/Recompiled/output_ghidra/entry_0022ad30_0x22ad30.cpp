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

// Function: entry_0022ad30
// Address: 0x22ad30 - 0x22ad70
void entry_0022ad30_0x22ad30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0022ad30_0x22ad30");
#endif

    ctx->pc = 0x22ad30u;

    // 0x22ad30: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x22ad30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x22ad34: 0xc4411288  lwc1        $f1, 0x1288($v0)
    ctx->pc = 0x22ad34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22ad38: 0x3c0244af  lui         $v0, 0x44AF
    ctx->pc = 0x22ad38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17583 << 16));
    // 0x22ad3c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22ad3cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22ad40: 0x0  nop
    ctx->pc = 0x22ad40u;
    // NOP
    // 0x22ad44: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x22ad44u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22ad48: 0x0  nop
    ctx->pc = 0x22ad48u;
    // NOP
    // 0x22ad4c: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x22AD4Cu;
    {
        const bool branch_taken_0x22ad4c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x22ad4c) {
            ctx->pc = 0x22AD70u;
            return;
        }
    }
    ctx->pc = 0x22AD54u;
    // 0x22ad54: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x22ad54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x22ad58: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22ad58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22ad5c: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x22ad5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x22ad60: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x22ad60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22ad64: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x22ad64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x22ad68: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x22AD68u;
    {
        const bool branch_taken_0x22ad68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22ad68) {
            ctx->pc = 0x22ADC0u;
            return;
        }
    }
    ctx->pc = 0x22AD70u;
}
