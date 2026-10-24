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

// Function: entry_001cb080
// Address: 0x1cb080 - 0x1cb0c4
void entry_001cb080_0x1cb080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cb080_0x1cb080");
#endif

    ctx->pc = 0x1cb080u;

    // 0x1cb080: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1cb080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1cb084: 0xc4411b50  lwc1        $f1, 0x1B50($v0)
    ctx->pc = 0x1cb084u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cb088: 0x3c023f86  lui         $v0, 0x3F86
    ctx->pc = 0x1cb088u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16262 << 16));
    // 0x1cb08c: 0x34420a92  ori         $v0, $v0, 0xA92
    ctx->pc = 0x1cb08cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2706);
    // 0x1cb090: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1cb090u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cb094: 0x0  nop
    ctx->pc = 0x1cb094u;
    // NOP
    // 0x1cb098: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1cb098u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1cb09c: 0x0  nop
    ctx->pc = 0x1cb09cu;
    // NOP
    // 0x1cb0a0: 0x4501001e  bc1t        . + 4 + (0x1E << 2)
    ctx->pc = 0x1CB0A0u;
    {
        const bool branch_taken_0x1cb0a0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1cb0a0) {
            ctx->pc = 0x1CB11Cu;
            return;
        }
    }
    ctx->pc = 0x1CB0A8u;
    // 0x1cb0a8: 0x3c023f86  lui         $v0, 0x3F86
    ctx->pc = 0x1cb0a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16262 << 16));
    // 0x1cb0ac: 0x34420a92  ori         $v0, $v0, 0xA92
    ctx->pc = 0x1cb0acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2706);
    // 0x1cb0b0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1cb0b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cb0b4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1cb0b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1cb0b8: 0xe4401b50  swc1        $f0, 0x1B50($v0)
    ctx->pc = 0x1cb0b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 6992), bits); }
    // 0x1cb0bc: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x1CB0BCu;
    {
        const bool branch_taken_0x1cb0bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cb0bc) {
            ctx->pc = 0x1CB11Cu;
            return;
        }
    }
    ctx->pc = 0x1CB0C4u;
}
