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

// Function: entry_0014796c
// Address: 0x14796c - 0x147988
void entry_0014796c_0x14796c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014796c_0x14796c");
#endif

    ctx->pc = 0x14796cu;

    // 0x14796c: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x14796cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x147970: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x147970u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x147974: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x147974u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x147978: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x147978u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14797c: 0x0  nop
    ctx->pc = 0x14797cu;
    // NOP
    // 0x147980: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x147980u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x147984: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x147984u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
    ctx->pc = 0x147988u;
}
