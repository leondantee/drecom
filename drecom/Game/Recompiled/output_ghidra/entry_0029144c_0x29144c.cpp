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

// Function: entry_0029144c
// Address: 0x29144c - 0x291468
void entry_0029144c_0x29144c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0029144c_0x29144c");
#endif

    ctx->pc = 0x29144cu;

    // 0x29144c: 0x161842  srl         $v1, $s6, 1
    ctx->pc = 0x29144cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 22), 1));
    // 0x291450: 0x32c20001  andi        $v0, $s6, 0x1
    ctx->pc = 0x291450u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)1);
    // 0x291454: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x291454u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x291458: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x291458u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29145c: 0x0  nop
    ctx->pc = 0x29145cu;
    // NOP
    // 0x291460: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x291460u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x291464: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x291464u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
    ctx->pc = 0x291468u;
}
