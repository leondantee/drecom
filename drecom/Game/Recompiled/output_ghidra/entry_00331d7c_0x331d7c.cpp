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

// Function: entry_00331d7c
// Address: 0x331d7c - 0x331d98
void entry_00331d7c_0x331d7c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00331d7c_0x331d7c");
#endif

    ctx->pc = 0x331d7cu;

    // 0x331d7c: 0x33042  srl         $a2, $v1, 1
    ctx->pc = 0x331d7cu;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x331d80: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x331d80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x331d84: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x331d84u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x331d88: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x331d88u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x331d8c: 0x0  nop
    ctx->pc = 0x331d8cu;
    // NOP
    // 0x331d90: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x331d90u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x331d94: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x331d94u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
    ctx->pc = 0x331d98u;
}
