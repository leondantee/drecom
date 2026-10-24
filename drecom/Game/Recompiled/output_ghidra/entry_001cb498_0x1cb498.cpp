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

// Function: entry_001cb498
// Address: 0x1cb498 - 0x1cb4e8
void entry_001cb498_0x1cb498(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cb498_0x1cb498");
#endif

    ctx->pc = 0x1cb498u;

    // 0x1cb498: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1cb498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1cb49c: 0xc4411b50  lwc1        $f1, 0x1B50($v0)
    ctx->pc = 0x1cb49cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cb4a0: 0x3c02bd23  lui         $v0, 0xBD23
    ctx->pc = 0x1cb4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48419 << 16));
    // 0x1cb4a4: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1cb4a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x1cb4a8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1cb4a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cb4ac: 0x0  nop
    ctx->pc = 0x1cb4acu;
    // NOP
    // 0x1cb4b0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1cb4b0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1cb4b4: 0x0  nop
    ctx->pc = 0x1cb4b4u;
    // NOP
    // 0x1cb4b8: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x1CB4B8u;
    {
        const bool branch_taken_0x1cb4b8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1cb4b8) {
            ctx->pc = 0x1CB4E8u;
            return;
        }
    }
    ctx->pc = 0x1CB4C0u;
    // 0x1cb4c0: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1cb4c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1cb4c4: 0xc4611b50  lwc1        $f1, 0x1B50($v1)
    ctx->pc = 0x1cb4c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cb4c8: 0x3c023d23  lui         $v0, 0x3D23
    ctx->pc = 0x1cb4c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15651 << 16));
    // 0x1cb4cc: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1cb4ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x1cb4d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1cb4d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cb4d4: 0x0  nop
    ctx->pc = 0x1cb4d4u;
    // NOP
    // 0x1cb4d8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1cb4d8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1cb4dc: 0xe4601b50  swc1        $f0, 0x1B50($v1)
    ctx->pc = 0x1cb4dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 6992), bits); }
    // 0x1cb4e0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1CB4E0u;
    {
        const bool branch_taken_0x1cb4e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cb4e0) {
            ctx->pc = 0x1CB4F4u;
            return;
        }
    }
    ctx->pc = 0x1CB4E8u;
}
