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

// Function: entry_00114438
// Address: 0x114438 - 0x114464
void entry_00114438_0x114438(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00114438_0x114438");
#endif

    ctx->pc = 0x114438u;

    // 0x114438: 0x3c013f49  lui         $at, 0x3F49
    ctx->pc = 0x114438u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16201 << 16));
    // 0x11443c: 0x34210fda  ori         $at, $at, 0xFDA
    ctx->pc = 0x11443cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4058);
    // 0x114440: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x114440u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x114444: 0x3c013322  lui         $at, 0x3322
    ctx->pc = 0x114444u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)13090 << 16));
    // 0x114448: 0x34212168  ori         $at, $at, 0x2168
    ctx->pc = 0x114448u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)8552);
    // 0x11444c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x11444cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x114450: 0x460c0381  sub.s       $f14, $f0, $f12
    ctx->pc = 0x114450u;
    ctx->f[14] = FPU_SUB_S(ctx->f[0], ctx->f[12]);
    // 0x114454: 0x460d0ac1  sub.s       $f11, $f1, $f13
    ctx->pc = 0x114454u;
    ctx->f[11] = FPU_SUB_S(ctx->f[1], ctx->f[13]);
    // 0x114458: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x114458u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x11445c: 0x460b7300  add.s       $f12, $f14, $f11
    ctx->pc = 0x11445cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[14], ctx->f[11]);
    // 0x114460: 0x460c6382  mul.s       $f14, $f12, $f12
    ctx->pc = 0x114460u;
    ctx->f[14] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
    ctx->pc = 0x114464u;
}
