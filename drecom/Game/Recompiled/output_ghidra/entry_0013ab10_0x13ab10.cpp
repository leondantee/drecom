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

// Function: entry_0013ab10
// Address: 0x13ab10 - 0x13ab4c
void entry_0013ab10_0x13ab10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013ab10_0x13ab10");
#endif

    ctx->pc = 0x13ab10u;

    // 0x13ab10: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x13ab10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x13ab14: 0xc4411b54  lwc1        $f1, 0x1B54($v0)
    ctx->pc = 0x13ab14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6996)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13ab18: 0x3c02be4c  lui         $v0, 0xBE4C
    ctx->pc = 0x13ab18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48716 << 16));
    // 0x13ab1c: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x13ab1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x13ab20: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x13ab20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13ab24: 0x0  nop
    ctx->pc = 0x13ab24u;
    // NOP
    // 0x13ab28: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x13ab28u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13ab2c: 0x0  nop
    ctx->pc = 0x13ab2cu;
    // NOP
    // 0x13ab30: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x13AB30u;
    {
        const bool branch_taken_0x13ab30 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x13ab30) {
            ctx->pc = 0x13AB4Cu;
            return;
        }
    }
    ctx->pc = 0x13AB38u;
    // 0x13ab38: 0x3c02be4c  lui         $v0, 0xBE4C
    ctx->pc = 0x13ab38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48716 << 16));
    // 0x13ab3c: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x13ab3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x13ab40: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x13ab40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13ab44: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x13ab44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x13ab48: 0xe4401b54  swc1        $f0, 0x1B54($v0)
    ctx->pc = 0x13ab48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 6996), bits); }
    ctx->pc = 0x13ab4cu;
}
