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

// Function: entry_0029a8b4
// Address: 0x29a8b4 - 0x29a904
void entry_0029a8b4_0x29a8b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0029a8b4_0x29a8b4");
#endif

    ctx->pc = 0x29a8b4u;

    // 0x29a8b4: 0x8fa50218  lw          $a1, 0x218($sp)
    ctx->pc = 0x29a8b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x29a8b8: 0x94a201a8  lhu         $v0, 0x1A8($a1)
    ctx->pc = 0x29a8b8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 424)));
    // 0x29a8bc: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x29a8bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x29a8c0: 0x30630010  andi        $v1, $v1, 0x10
    ctx->pc = 0x29a8c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x29a8c4: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x29A8C4u;
    {
        const bool branch_taken_0x29a8c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x29a8c4) {
            ctx->pc = 0x29A918u;
            return;
        }
    }
    ctx->pc = 0x29A8CCu;
    // 0x29a8cc: 0x3c174220  lui         $s7, 0x4220
    ctx->pc = 0x29a8ccu;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)16928 << 16));
    // 0x29a8d0: 0x44970800  mtc1        $s7, $f1
    ctx->pc = 0x29a8d0u;
    { uint32_t bits = GPR_U32(ctx, 23); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x29a8d4: 0xc7a0020c  lwc1        $f0, 0x20C($sp)
    ctx->pc = 0x29a8d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 524)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29a8d8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x29a8d8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29a8dc: 0x0  nop
    ctx->pc = 0x29a8dcu;
    // NOP
    // 0x29a8e0: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x29A8E0u;
    {
        const bool branch_taken_0x29a8e0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x29a8e0) {
            ctx->pc = 0x29A904u;
            return;
        }
    }
    ctx->pc = 0x29A8E8u;
    // 0x29a8e8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x29a8e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x29a8ec: 0xc421fd70  lwc1        $f1, -0x290($at)
    ctx->pc = 0x29a8ecu;
    { uint32_t bits = FAST_READ32(0x5CFD70u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29a8f0: 0xc7a0020c  lwc1        $f0, 0x20C($sp)
    ctx->pc = 0x29a8f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 524)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29a8f4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x29a8f4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29a8f8: 0x0  nop
    ctx->pc = 0x29a8f8u;
    // NOP
    // 0x29a8fc: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x29A8FCu;
    {
        const bool branch_taken_0x29a8fc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x29a8fc) {
            ctx->pc = 0x29A918u;
            return;
        }
    }
    ctx->pc = 0x29A904u;
}
