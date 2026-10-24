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

// Function: entry_0017d07c
// Address: 0x17d07c - 0x17d0d0
void entry_0017d07c_0x17d07c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017d07c_0x17d07c");
#endif

    ctx->pc = 0x17d07cu;

    // 0x17d07c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x17d07cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x17d080: 0x942200c8  lhu         $v0, 0xC8($at)
    ctx->pc = 0x17d080u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x5D00C8u));
    // 0x17d084: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x17d084u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x17d088: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x17d088u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x17d08c: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x17D08Cu;
    {
        const bool branch_taken_0x17d08c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17d08c) {
            ctx->pc = 0x17D0DCu;
            return;
        }
    }
    ctx->pc = 0x17D094u;
    // 0x17d094: 0xc60101b8  lwc1        $f1, 0x1B8($s0)
    ctx->pc = 0x17d094u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 440)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17d098: 0xc7a000cc  lwc1        $f0, 0xCC($sp)
    ctx->pc = 0x17d098u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17d09c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x17d09cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x17d0a0: 0xe60001b8  swc1        $f0, 0x1B8($s0)
    ctx->pc = 0x17d0a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 440), bits); }
    // 0x17d0a4: 0xc60101b8  lwc1        $f1, 0x1B8($s0)
    ctx->pc = 0x17d0a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 440)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17d0a8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x17d0a8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17d0ac: 0x0  nop
    ctx->pc = 0x17d0acu;
    // NOP
    // 0x17d0b0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x17d0b0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17d0b4: 0x0  nop
    ctx->pc = 0x17d0b4u;
    // NOP
    // 0x17d0b8: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x17D0B8u;
    {
        const bool branch_taken_0x17d0b8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x17d0b8) {
            ctx->pc = 0x17D0D0u;
            return;
        }
    }
    ctx->pc = 0x17D0C0u;
    // 0x17d0c0: 0xc60101b8  lwc1        $f1, 0x1B8($s0)
    ctx->pc = 0x17d0c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 440)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17d0c4: 0xc7a000cc  lwc1        $f0, 0xCC($sp)
    ctx->pc = 0x17d0c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17d0c8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x17d0c8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x17d0cc: 0xe60001b8  swc1        $f0, 0x1B8($s0)
    ctx->pc = 0x17d0ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 440), bits); }
    ctx->pc = 0x17d0d0u;
}
