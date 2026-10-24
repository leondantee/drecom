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

// Function: entry_0026d138
// Address: 0x26d138 - 0x26d188
void entry_0026d138_0x26d138(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0026d138_0x26d138");
#endif

    ctx->pc = 0x26d138u;

    // 0x26d138: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x26d138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x26d13c: 0xc4411b50  lwc1        $f1, 0x1B50($v0)
    ctx->pc = 0x26d13cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26d140: 0x3c02bd23  lui         $v0, 0xBD23
    ctx->pc = 0x26d140u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48419 << 16));
    // 0x26d144: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x26d144u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x26d148: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x26d148u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26d14c: 0x0  nop
    ctx->pc = 0x26d14cu;
    // NOP
    // 0x26d150: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x26d150u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26d154: 0x0  nop
    ctx->pc = 0x26d154u;
    // NOP
    // 0x26d158: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x26D158u;
    {
        const bool branch_taken_0x26d158 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x26d158) {
            ctx->pc = 0x26D188u;
            return;
        }
    }
    ctx->pc = 0x26D160u;
    // 0x26d160: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x26d160u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x26d164: 0xc4611b50  lwc1        $f1, 0x1B50($v1)
    ctx->pc = 0x26d164u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26d168: 0x3c023d23  lui         $v0, 0x3D23
    ctx->pc = 0x26d168u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15651 << 16));
    // 0x26d16c: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x26d16cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x26d170: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x26d170u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26d174: 0x0  nop
    ctx->pc = 0x26d174u;
    // NOP
    // 0x26d178: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x26d178u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x26d17c: 0xe4601b50  swc1        $f0, 0x1B50($v1)
    ctx->pc = 0x26d17cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 6992), bits); }
    // 0x26d180: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x26D180u;
    {
        const bool branch_taken_0x26d180 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26d180) {
            ctx->pc = 0x26D194u;
            return;
        }
    }
    ctx->pc = 0x26D188u;
}
