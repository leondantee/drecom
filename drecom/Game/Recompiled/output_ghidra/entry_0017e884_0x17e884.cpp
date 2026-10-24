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

// Function: entry_0017e884
// Address: 0x17e884 - 0x17e89c
void entry_0017e884_0x17e884(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017e884_0x17e884");
#endif

    ctx->pc = 0x17e884u;

    // 0x17e884: 0x3c02451c  lui         $v0, 0x451C
    ctx->pc = 0x17e884u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17692 << 16));
    // 0x17e888: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x17e888u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x17e88c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x17e88cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x17e890: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x17e890u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17e894: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x17e894u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x17e898: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x17e898u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    ctx->pc = 0x17e89cu;
}
