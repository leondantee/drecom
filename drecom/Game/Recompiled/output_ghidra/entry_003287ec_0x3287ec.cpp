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

// Function: entry_003287ec
// Address: 0x3287ec - 0x328808
void entry_003287ec_0x3287ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003287ec_0x3287ec");
#endif

    ctx->pc = 0x3287ecu;

    // 0x3287ec: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x3287ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x3287f0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3287f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3287f4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3287f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3287f8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3287f8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3287fc: 0x0  nop
    ctx->pc = 0x3287fcu;
    // NOP
    // 0x328800: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x328800u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x328804: 0x460c6300  add.s       $f12, $f12, $f12
    ctx->pc = 0x328804u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[12]);
    ctx->pc = 0x328808u;
}
