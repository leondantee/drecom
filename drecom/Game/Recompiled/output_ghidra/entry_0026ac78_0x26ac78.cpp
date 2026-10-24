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

// Function: entry_0026ac78
// Address: 0x26ac78 - 0x26acd4
void entry_0026ac78_0x26ac78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0026ac78_0x26ac78");
#endif

    ctx->pc = 0x26ac78u;

    // 0x26ac78: 0xc6011b54  lwc1        $f1, 0x1B54($s0)
    ctx->pc = 0x26ac78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 6996)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26ac7c: 0x3c023a83  lui         $v0, 0x3A83
    ctx->pc = 0x26ac7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14979 << 16));
    // 0x26ac80: 0x3442126f  ori         $v0, $v0, 0x126F
    ctx->pc = 0x26ac80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4719);
    // 0x26ac84: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x26ac84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26ac88: 0x0  nop
    ctx->pc = 0x26ac88u;
    // NOP
    // 0x26ac8c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x26ac8cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x26ac90: 0xe6001b54  swc1        $f0, 0x1B54($s0)
    ctx->pc = 0x26ac90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 6996), bits); }
    // 0x26ac94: 0xc6011b54  lwc1        $f1, 0x1B54($s0)
    ctx->pc = 0x26ac94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 6996)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26ac98: 0x3c02bccc  lui         $v0, 0xBCCC
    ctx->pc = 0x26ac98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48332 << 16));
    // 0x26ac9c: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x26ac9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x26aca0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x26aca0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26aca4: 0x0  nop
    ctx->pc = 0x26aca4u;
    // NOP
    // 0x26aca8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x26aca8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26acac: 0x0  nop
    ctx->pc = 0x26acacu;
    // NOP
    // 0x26acb0: 0x4500002f  bc1f        . + 4 + (0x2F << 2)
    ctx->pc = 0x26ACB0u;
    {
        const bool branch_taken_0x26acb0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x26acb0) {
            ctx->pc = 0x26AD70u;
            return;
        }
    }
    ctx->pc = 0x26ACB8u;
    // 0x26acb8: 0x3c02bccc  lui         $v0, 0xBCCC
    ctx->pc = 0x26acb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48332 << 16));
    // 0x26acbc: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x26acbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x26acc0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x26acc0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26acc4: 0x0  nop
    ctx->pc = 0x26acc4u;
    // NOP
    // 0x26acc8: 0xe6001b54  swc1        $f0, 0x1B54($s0)
    ctx->pc = 0x26acc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 6996), bits); }
    // 0x26accc: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x26ACCCu;
    {
        const bool branch_taken_0x26accc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26accc) {
            ctx->pc = 0x26AD70u;
            return;
        }
    }
    ctx->pc = 0x26ACD4u;
}
