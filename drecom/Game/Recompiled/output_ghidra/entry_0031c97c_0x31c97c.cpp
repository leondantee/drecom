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

// Function: entry_0031c97c
// Address: 0x31c97c - 0x31c9b0
void entry_0031c97c_0x31c97c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0031c97c_0x31c97c");
#endif

    ctx->pc = 0x31c97cu;

    // 0x31c97c: 0x3c060800  lui         $a2, 0x800
    ctx->pc = 0x31c97cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)2048 << 16));
    // 0x31c980: 0x34c40011  ori         $a0, $a2, 0x11
    ctx->pc = 0x31c980u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)17);
    // 0x31c984: 0x1204000a  beq         $s0, $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x31C984u;
    {
        const bool branch_taken_0x31c984 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 4));
        if (branch_taken_0x31c984) {
            ctx->pc = 0x31C9B0u;
            return;
        }
    }
    ctx->pc = 0x31C98Cu;
    // 0x31c98c: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x31c98cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31c990: 0xc44112dc  lwc1        $f1, 0x12DC($v0)
    ctx->pc = 0x31c990u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4828)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31c994: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x31c994u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x31c998: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x31c998u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31c99c: 0x0  nop
    ctx->pc = 0x31c99cu;
    // NOP
    // 0x31c9a0: 0x46010041  sub.s       $f1, $f0, $f1
    ctx->pc = 0x31c9a0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x31c9a4: 0xc6000104  lwc1        $f0, 0x104($s0)
    ctx->pc = 0x31c9a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31c9a8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x31c9a8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x31c9ac: 0xe6000104  swc1        $f0, 0x104($s0)
    ctx->pc = 0x31c9acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
    ctx->pc = 0x31c9b0u;
}
