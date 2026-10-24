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

// Function: entry_0020a9ac
// Address: 0x20a9ac - 0x20aa04
void entry_0020a9ac_0x20a9ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020a9ac_0x20a9ac");
#endif

    ctx->pc = 0x20a9acu;

    // 0x20a9ac: 0x8fa30218  lw          $v1, 0x218($sp)
    ctx->pc = 0x20a9acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x20a9b0: 0x84621278  lh          $v0, 0x1278($v1)
    ctx->pc = 0x20a9b0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x20a9b4: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x20a9b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x20a9b8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x20a9b8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x20a9bc: 0x30420006  andi        $v0, $v0, 0x6
    ctx->pc = 0x20a9bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)6);
    // 0x20a9c0: 0x1440003d  bnez        $v0, . + 4 + (0x3D << 2)
    ctx->pc = 0x20A9C0u;
    {
        const bool branch_taken_0x20a9c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20a9c0) {
            ctx->pc = 0x20AAB8u;
            return;
        }
    }
    ctx->pc = 0x20A9C8u;
    // 0x20a9c8: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x20a9c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x20a9cc: 0xc4219490  lwc1        $f1, -0x6B70($at)
    ctx->pc = 0x20a9ccu;
    { uint32_t bits = FAST_READ32(0x619490u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20a9d0: 0x3c024316  lui         $v0, 0x4316
    ctx->pc = 0x20a9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17174 << 16));
    // 0x20a9d4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x20a9d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20a9d8: 0x0  nop
    ctx->pc = 0x20a9d8u;
    // NOP
    // 0x20a9dc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x20a9dcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20a9e0: 0x0  nop
    ctx->pc = 0x20a9e0u;
    // NOP
    // 0x20a9e4: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x20A9E4u;
    {
        const bool branch_taken_0x20a9e4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x20a9e4) {
            ctx->pc = 0x20AA04u;
            return;
        }
    }
    ctx->pc = 0x20A9ECu;
    // 0x20a9ec: 0x3c024316  lui         $v0, 0x4316
    ctx->pc = 0x20a9ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17174 << 16));
    // 0x20a9f0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x20a9f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20a9f4: 0x0  nop
    ctx->pc = 0x20a9f4u;
    // NOP
    // 0x20a9f8: 0xe7a00208  swc1        $f0, 0x208($sp)
    ctx->pc = 0x20a9f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 520), bits); }
    // 0x20a9fc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x20A9FCu;
    {
        const bool branch_taken_0x20a9fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20a9fc) {
            ctx->pc = 0x20AA10u;
            return;
        }
    }
    ctx->pc = 0x20AA04u;
}
