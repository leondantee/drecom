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

// Function: entry_002744c8
// Address: 0x2744c8 - 0x2744e4
void entry_002744c8_0x2744c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002744c8_0x2744c8");
#endif

    ctx->pc = 0x2744c8u;

    // 0x2744c8: 0x41842  srl         $v1, $a0, 1
    ctx->pc = 0x2744c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
    // 0x2744cc: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x2744ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x2744d0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2744d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2744d4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2744d4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2744d8: 0x0  nop
    ctx->pc = 0x2744d8u;
    // NOP
    // 0x2744dc: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x2744dcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2744e0: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x2744e0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
    ctx->pc = 0x2744e4u;
}
