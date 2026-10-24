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

// Function: entry_00376144
// Address: 0x376144 - 0x376180
void entry_00376144_0x376144(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00376144_0x376144");
#endif

    ctx->pc = 0x376144u;

    // 0x376144: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x376144u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x376148: 0xc44100d0  lwc1        $f1, 0xD0($v0)
    ctx->pc = 0x376148u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x37614c: 0x3c02be86  lui         $v0, 0xBE86
    ctx->pc = 0x37614cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48774 << 16));
    // 0x376150: 0x34420a92  ori         $v0, $v0, 0xA92
    ctx->pc = 0x376150u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2706);
    // 0x376154: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x376154u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x376158: 0x0  nop
    ctx->pc = 0x376158u;
    // NOP
    // 0x37615c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x37615cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x376160: 0x0  nop
    ctx->pc = 0x376160u;
    // NOP
    // 0x376164: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x376164u;
    {
        const bool branch_taken_0x376164 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x376164) {
            ctx->pc = 0x376180u;
            return;
        }
    }
    ctx->pc = 0x37616Cu;
    // 0x37616c: 0x3c02be86  lui         $v0, 0xBE86
    ctx->pc = 0x37616cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48774 << 16));
    // 0x376170: 0x34420a92  ori         $v0, $v0, 0xA92
    ctx->pc = 0x376170u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2706);
    // 0x376174: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x376174u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x376178: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x376178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x37617c: 0xe44000d0  swc1        $f0, 0xD0($v0)
    ctx->pc = 0x37617cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 208), bits); }
    ctx->pc = 0x376180u;
}
