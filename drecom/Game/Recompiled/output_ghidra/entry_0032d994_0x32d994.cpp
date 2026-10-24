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

// Function: entry_0032d994
// Address: 0x32d994 - 0x32d9d8
void entry_0032d994_0x32d994(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0032d994_0x32d994");
#endif

    ctx->pc = 0x32d994u;

    // 0x32d994: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x32d994u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x32d998: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x32d998u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x32d99c: 0xc6201034  lwc1        $f0, 0x1034($s1)
    ctx->pc = 0x32d99cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32d9a0: 0x46010043  div.s       $f1, $f0, $f1
    ctx->pc = 0x32d9a0u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x32d9a4: 0x3c0240e0  lui         $v0, 0x40E0
    ctx->pc = 0x32d9a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16608 << 16));
    // 0x32d9a8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x32d9a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32d9ac: 0x0  nop
    ctx->pc = 0x32d9acu;
    // NOP
    // 0x32d9b0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x32d9b0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x32d9b4: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x32d9b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x32d9b8: 0xc7a100c4  lwc1        $f1, 0xC4($sp)
    ctx->pc = 0x32d9b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x32d9bc: 0x3c03404c  lui         $v1, 0x404C
    ctx->pc = 0x32d9bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16460 << 16));
    // 0x32d9c0: 0x3462cccd  ori         $v0, $v1, 0xCCCD
    ctx->pc = 0x32d9c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x32d9c4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x32d9c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32d9c8: 0x0  nop
    ctx->pc = 0x32d9c8u;
    // NOP
    // 0x32d9cc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x32d9ccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x32d9d0: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x32d9d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x32d9d4: 0x0  nop
    ctx->pc = 0x32d9d4u;
    // NOP
    ctx->pc = 0x32d9d8u;
}
