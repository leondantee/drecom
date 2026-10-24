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

// Function: entry_0026335c
// Address: 0x26335c - 0x263370
void entry_0026335c_0x26335c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0026335c_0x26335c");
#endif

    ctx->pc = 0x26335cu;

    // 0x26335c: 0x3c0340c9  lui         $v1, 0x40C9
    ctx->pc = 0x26335cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16585 << 16));
    // 0x263360: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x263360u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x263364: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x263364u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x263368: 0x0  nop
    ctx->pc = 0x263368u;
    // NOP
    // 0x26336c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x26336cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    ctx->pc = 0x263370u;
}
