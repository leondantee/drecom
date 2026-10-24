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

// Function: entry_00291558
// Address: 0x291558 - 0x291574
void entry_00291558_0x291558(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00291558_0x291558");
#endif

    ctx->pc = 0x291558u;

    // 0x291558: 0x31042  srl         $v0, $v1, 1
    ctx->pc = 0x291558u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x29155c: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x29155cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x291560: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x291560u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x291564: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x291564u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x291568: 0x0  nop
    ctx->pc = 0x291568u;
    // NOP
    // 0x29156c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x29156cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x291570: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x291570u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
    ctx->pc = 0x291574u;
}
