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

// Function: entry_00263c9c
// Address: 0x263c9c - 0x263cb8
void entry_00263c9c_0x263c9c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00263c9c_0x263c9c");
#endif

    ctx->pc = 0x263c9cu;

    // 0x263c9c: 0x32042  srl         $a0, $v1, 1
    ctx->pc = 0x263c9cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x263ca0: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x263ca0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x263ca4: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x263ca4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x263ca8: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x263ca8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x263cac: 0x0  nop
    ctx->pc = 0x263cacu;
    // NOP
    // 0x263cb0: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x263cb0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x263cb4: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x263cb4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
    ctx->pc = 0x263cb8u;
}
