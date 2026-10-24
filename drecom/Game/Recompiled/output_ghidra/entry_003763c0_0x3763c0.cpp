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

// Function: entry_003763c0
// Address: 0x3763c0 - 0x3763fc
void entry_003763c0_0x3763c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003763c0_0x3763c0");
#endif

    ctx->pc = 0x3763c0u;

    // 0x3763c0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x3763c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3763c4: 0xc44100d0  lwc1        $f1, 0xD0($v0)
    ctx->pc = 0x3763c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3763c8: 0x3c02be86  lui         $v0, 0xBE86
    ctx->pc = 0x3763c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48774 << 16));
    // 0x3763cc: 0x34420a92  ori         $v0, $v0, 0xA92
    ctx->pc = 0x3763ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2706);
    // 0x3763d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3763d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3763d4: 0x0  nop
    ctx->pc = 0x3763d4u;
    // NOP
    // 0x3763d8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3763d8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3763dc: 0x0  nop
    ctx->pc = 0x3763dcu;
    // NOP
    // 0x3763e0: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x3763E0u;
    {
        const bool branch_taken_0x3763e0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3763e0) {
            ctx->pc = 0x3763FCu;
            return;
        }
    }
    ctx->pc = 0x3763E8u;
    // 0x3763e8: 0x3c02be86  lui         $v0, 0xBE86
    ctx->pc = 0x3763e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48774 << 16));
    // 0x3763ec: 0x34420a92  ori         $v0, $v0, 0xA92
    ctx->pc = 0x3763ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2706);
    // 0x3763f0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3763f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3763f4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x3763f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3763f8: 0xe44000d0  swc1        $f0, 0xD0($v0)
    ctx->pc = 0x3763f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 208), bits); }
    ctx->pc = 0x3763fcu;
}
