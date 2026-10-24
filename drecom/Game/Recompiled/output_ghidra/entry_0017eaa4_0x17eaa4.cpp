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

// Function: entry_0017eaa4
// Address: 0x17eaa4 - 0x17eabc
void entry_0017eaa4_0x17eaa4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017eaa4_0x17eaa4");
#endif

    ctx->pc = 0x17eaa4u;

    // 0x17eaa4: 0x3c02451c  lui         $v0, 0x451C
    ctx->pc = 0x17eaa4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17692 << 16));
    // 0x17eaa8: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x17eaa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x17eaac: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x17eaacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x17eab0: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x17eab0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17eab4: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x17eab4u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x17eab8: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x17eab8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    ctx->pc = 0x17eabcu;
}
