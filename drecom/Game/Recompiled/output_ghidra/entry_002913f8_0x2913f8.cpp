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

// Function: entry_002913f8
// Address: 0x2913f8 - 0x291414
void entry_002913f8_0x2913f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002913f8_0x2913f8");
#endif

    ctx->pc = 0x2913f8u;

    // 0x2913f8: 0x151842  srl         $v1, $s5, 1
    ctx->pc = 0x2913f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 21), 1));
    // 0x2913fc: 0x32a20001  andi        $v0, $s5, 0x1
    ctx->pc = 0x2913fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1);
    // 0x291400: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x291400u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x291404: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x291404u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x291408: 0x0  nop
    ctx->pc = 0x291408u;
    // NOP
    // 0x29140c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x29140cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x291410: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x291410u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
    ctx->pc = 0x291414u;
}
