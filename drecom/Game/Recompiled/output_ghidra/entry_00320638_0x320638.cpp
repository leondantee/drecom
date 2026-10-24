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

// Function: entry_00320638
// Address: 0x320638 - 0x320654
void entry_00320638_0x320638(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00320638_0x320638");
#endif

    ctx->pc = 0x320638u;

    // 0x320638: 0x32042  srl         $a0, $v1, 1
    ctx->pc = 0x320638u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x32063c: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x32063cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x320640: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x320640u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x320644: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x320644u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x320648: 0x0  nop
    ctx->pc = 0x320648u;
    // NOP
    // 0x32064c: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x32064cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x320650: 0x460c6300  add.s       $f12, $f12, $f12
    ctx->pc = 0x320650u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[12]);
    ctx->pc = 0x320654u;
}
