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

// Function: entry_0022ad70
// Address: 0x22ad70 - 0x22adb0
void entry_0022ad70_0x22ad70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0022ad70_0x22ad70");
#endif

    ctx->pc = 0x22ad70u;

    // 0x22ad70: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x22ad70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x22ad74: 0xc4411288  lwc1        $f1, 0x1288($v0)
    ctx->pc = 0x22ad74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22ad78: 0x3c024461  lui         $v0, 0x4461
    ctx->pc = 0x22ad78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17505 << 16));
    // 0x22ad7c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22ad7cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22ad80: 0x0  nop
    ctx->pc = 0x22ad80u;
    // NOP
    // 0x22ad84: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x22ad84u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22ad88: 0x0  nop
    ctx->pc = 0x22ad88u;
    // NOP
    // 0x22ad8c: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x22AD8Cu;
    {
        const bool branch_taken_0x22ad8c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x22ad8c) {
            ctx->pc = 0x22ADB0u;
            return;
        }
    }
    ctx->pc = 0x22AD94u;
    // 0x22ad94: 0x3c02c0a0  lui         $v0, 0xC0A0
    ctx->pc = 0x22ad94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49312 << 16));
    // 0x22ad98: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22ad98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22ad9c: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x22ad9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x22ada0: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x22ada0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22ada4: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x22ada4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x22ada8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x22ADA8u;
    {
        const bool branch_taken_0x22ada8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22ada8) {
            ctx->pc = 0x22ADC0u;
            return;
        }
    }
    ctx->pc = 0x22ADB0u;
}
