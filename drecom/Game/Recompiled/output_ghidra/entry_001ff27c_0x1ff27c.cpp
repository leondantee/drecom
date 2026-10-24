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

// Function: entry_001ff27c
// Address: 0x1ff27c - 0x1ff298
void entry_001ff27c_0x1ff27c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ff27c_0x1ff27c");
#endif

    ctx->pc = 0x1ff27cu;

    // 0x1ff27c: 0x41842  srl         $v1, $a0, 1
    ctx->pc = 0x1ff27cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
    // 0x1ff280: 0x30860001  andi        $a2, $a0, 0x1
    ctx->pc = 0x1ff280u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x1ff284: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x1ff284u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x1ff288: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1ff288u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ff28c: 0x0  nop
    ctx->pc = 0x1ff28cu;
    // NOP
    // 0x1ff290: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x1ff290u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1ff294: 0x460c6300  add.s       $f12, $f12, $f12
    ctx->pc = 0x1ff294u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[12]);
    ctx->pc = 0x1ff298u;
}
