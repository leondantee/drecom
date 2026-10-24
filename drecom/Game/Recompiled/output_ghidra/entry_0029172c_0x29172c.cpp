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

// Function: entry_0029172c
// Address: 0x29172c - 0x291748
void entry_0029172c_0x29172c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0029172c_0x29172c");
#endif

    ctx->pc = 0x29172cu;

    // 0x29172c: 0x31042  srl         $v0, $v1, 1
    ctx->pc = 0x29172cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x291730: 0x30640001  andi        $a0, $v1, 0x1
    ctx->pc = 0x291730u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x291734: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x291734u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x291738: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x291738u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29173c: 0x0  nop
    ctx->pc = 0x29173cu;
    // NOP
    // 0x291740: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x291740u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x291744: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x291744u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
    ctx->pc = 0x291748u;
}
