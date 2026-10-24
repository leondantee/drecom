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

// Function: entry_0017b5e8
// Address: 0x17b5e8 - 0x17b604
void entry_0017b5e8_0x17b5e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017b5e8_0x17b5e8");
#endif

    ctx->pc = 0x17b5e8u;

    // 0x17b5e8: 0x101842  srl         $v1, $s0, 1
    ctx->pc = 0x17b5e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
    // 0x17b5ec: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x17b5ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x17b5f0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x17b5f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x17b5f4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x17b5f4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17b5f8: 0x0  nop
    ctx->pc = 0x17b5f8u;
    // NOP
    // 0x17b5fc: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x17b5fcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x17b600: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x17b600u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
    ctx->pc = 0x17b604u;
}
