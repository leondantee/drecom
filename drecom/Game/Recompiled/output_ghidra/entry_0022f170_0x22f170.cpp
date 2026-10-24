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

// Function: entry_0022f170
// Address: 0x22f170 - 0x22f1d0
void entry_0022f170_0x22f170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0022f170_0x22f170");
#endif

    ctx->pc = 0x22f170u;

    // 0x22f170: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x22f170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x22f174: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x22f174u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22f178: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x22f178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x22f17c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x22f17cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22f180: 0xc461009c  lwc1        $f1, 0x9C($v1)
    ctx->pc = 0x22f180u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22f184: 0xc440009c  lwc1        $f0, 0x9C($v0)
    ctx->pc = 0x22f184u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22f188: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x22f188u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x22f18c: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x22f18cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x22f190: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22f190u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22f194: 0x0  nop
    ctx->pc = 0x22f194u;
    // NOP
    // 0x22f198: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x22f198u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22f19c: 0x0  nop
    ctx->pc = 0x22f19cu;
    // NOP
    // 0x22f1a0: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x22F1A0u;
    {
        const bool branch_taken_0x22f1a0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x22f1a0) {
            ctx->pc = 0x22F1D0u;
            return;
        }
    }
    ctx->pc = 0x22F1A8u;
    // 0x22f1a8: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x22f1a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x22f1ac: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x22f1acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22f1b0: 0x3c023f19  lui         $v0, 0x3F19
    ctx->pc = 0x22f1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16153 << 16));
    // 0x22f1b4: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x22f1b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x22f1b8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x22f1b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x22f1bc: 0xc460009c  lwc1        $f0, 0x9C($v1)
    ctx->pc = 0x22f1bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22f1c0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x22f1c0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x22f1c4: 0xe460009c  swc1        $f0, 0x9C($v1)
    ctx->pc = 0x22f1c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 156), bits); }
    // 0x22f1c8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x22F1C8u;
    {
        const bool branch_taken_0x22f1c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22f1c8) {
            ctx->pc = 0x22F1F0u;
            return;
        }
    }
    ctx->pc = 0x22F1D0u;
}
