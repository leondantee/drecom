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

// Function: entry_002e6a90
// Address: 0x2e6a90 - 0x2e6ac4
void entry_002e6a90_0x2e6a90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002e6a90_0x2e6a90");
#endif

    ctx->pc = 0x2e6a90u;

    // 0x2e6a90: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2e6a90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e6a94: 0xc4411290  lwc1        $f1, 0x1290($v0)
    ctx->pc = 0x2e6a94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e6a98: 0x3c02bbc9  lui         $v0, 0xBBC9
    ctx->pc = 0x2e6a98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48073 << 16));
    // 0x2e6a9c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x2e6a9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x2e6aa0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e6aa0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e6aa4: 0x0  nop
    ctx->pc = 0x2e6aa4u;
    // NOP
    // 0x2e6aa8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2e6aa8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e6aac: 0x0  nop
    ctx->pc = 0x2e6aacu;
    // NOP
    // 0x2e6ab0: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x2E6AB0u;
    {
        const bool branch_taken_0x2e6ab0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e6ab0) {
            ctx->pc = 0x2E6AC4u;
            return;
        }
    }
    ctx->pc = 0x2E6AB8u;
    // 0x2e6ab8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2e6ab8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e6abc: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2e6abcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e6ac0: 0xe4401290  swc1        $f0, 0x1290($v0)
    ctx->pc = 0x2e6ac0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4752), bits); }
    ctx->pc = 0x2e6ac4u;
}
