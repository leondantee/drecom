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

// Function: entry_001907b8
// Address: 0x1907b8 - 0x190804
void entry_001907b8_0x1907b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001907b8_0x1907b8");
#endif

    ctx->pc = 0x1907b8u;

    // 0x1907b8: 0x96220118  lhu         $v0, 0x118($s1)
    ctx->pc = 0x1907b8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 280)));
    // 0x1907bc: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1907bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1907c0: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x1907c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x1907c4: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1907C4u;
    {
        const bool branch_taken_0x1907c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1907c4) {
            ctx->pc = 0x190810u;
            return;
        }
    }
    ctx->pc = 0x1907CCu;
    // 0x1907cc: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x1907ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x1907d0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1907d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1907d4: 0xc7a00160  lwc1        $f0, 0x160($sp)
    ctx->pc = 0x1907d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1907d8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1907d8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1907dc: 0x0  nop
    ctx->pc = 0x1907dcu;
    // NOP
    // 0x1907e0: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x1907E0u;
    {
        const bool branch_taken_0x1907e0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1907e0) {
            ctx->pc = 0x190804u;
            return;
        }
    }
    ctx->pc = 0x1907E8u;
    // 0x1907e8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1907e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1907ec: 0xc421fd70  lwc1        $f1, -0x290($at)
    ctx->pc = 0x1907ecu;
    { uint32_t bits = FAST_READ32(0x5CFD70u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1907f0: 0xc7a00160  lwc1        $f0, 0x160($sp)
    ctx->pc = 0x1907f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1907f4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1907f4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1907f8: 0x0  nop
    ctx->pc = 0x1907f8u;
    // NOP
    // 0x1907fc: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x1907FCu;
    {
        const bool branch_taken_0x1907fc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1907fc) {
            ctx->pc = 0x190810u;
            return;
        }
    }
    ctx->pc = 0x190804u;
}
