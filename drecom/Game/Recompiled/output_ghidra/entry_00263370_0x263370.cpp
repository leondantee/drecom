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

// Function: entry_00263370
// Address: 0x263370 - 0x263398
void entry_00263370_0x263370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00263370_0x263370");
#endif

    ctx->pc = 0x263370u;

    // 0x263370: 0x3c034049  lui         $v1, 0x4049
    ctx->pc = 0x263370u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16457 << 16));
    // 0x263374: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x263374u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x263378: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x263378u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26337c: 0x0  nop
    ctx->pc = 0x26337cu;
    // NOP
    // 0x263380: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x263380u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x263384: 0x0  nop
    ctx->pc = 0x263384u;
    // NOP
    // 0x263388: 0x4500fff4  bc1f        . + 4 + (-0xC << 2)
    ctx->pc = 0x263388u;
    {
        const bool branch_taken_0x263388 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x263388) {
            ctx->pc = 0x26335Cu;
            return;
        }
    }
    ctx->pc = 0x263390u;
    // 0x263390: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x263390u;
    {
        const bool branch_taken_0x263390 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x263390) {
            ctx->pc = 0x2633B0u;
            return;
        }
    }
    ctx->pc = 0x263398u;
}
