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

// Function: entry_0026cf40
// Address: 0x26cf40 - 0x26cf9c
void entry_0026cf40_0x26cf40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0026cf40_0x26cf40");
#endif

    ctx->pc = 0x26cf40u;

    // 0x26cf40: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x26cf40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x26cf44: 0xc4611b50  lwc1        $f1, 0x1B50($v1)
    ctx->pc = 0x26cf44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26cf48: 0x3c023d23  lui         $v0, 0x3D23
    ctx->pc = 0x26cf48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15651 << 16));
    // 0x26cf4c: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x26cf4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x26cf50: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x26cf50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26cf54: 0x0  nop
    ctx->pc = 0x26cf54u;
    // NOP
    // 0x26cf58: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x26cf58u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x26cf5c: 0xe4601b50  swc1        $f0, 0x1B50($v1)
    ctx->pc = 0x26cf5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 6992), bits); }
    // 0x26cf60: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x26cf60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x26cf64: 0xc4411b50  lwc1        $f1, 0x1B50($v0)
    ctx->pc = 0x26cf64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26cf68: 0x3c02bf86  lui         $v0, 0xBF86
    ctx->pc = 0x26cf68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49030 << 16));
    // 0x26cf6c: 0x34420a92  ori         $v0, $v0, 0xA92
    ctx->pc = 0x26cf6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2706);
    // 0x26cf70: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x26cf70u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26cf74: 0x0  nop
    ctx->pc = 0x26cf74u;
    // NOP
    // 0x26cf78: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x26cf78u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26cf7c: 0x0  nop
    ctx->pc = 0x26cf7cu;
    // NOP
    // 0x26cf80: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x26CF80u;
    {
        const bool branch_taken_0x26cf80 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x26cf80) {
            ctx->pc = 0x26CF9Cu;
            return;
        }
    }
    ctx->pc = 0x26CF88u;
    // 0x26cf88: 0x3c02bf86  lui         $v0, 0xBF86
    ctx->pc = 0x26cf88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49030 << 16));
    // 0x26cf8c: 0x34420a92  ori         $v0, $v0, 0xA92
    ctx->pc = 0x26cf8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2706);
    // 0x26cf90: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x26cf90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26cf94: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x26cf94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x26cf98: 0xe4401b50  swc1        $f0, 0x1B50($v0)
    ctx->pc = 0x26cf98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 6992), bits); }
    ctx->pc = 0x26cf9cu;
}
