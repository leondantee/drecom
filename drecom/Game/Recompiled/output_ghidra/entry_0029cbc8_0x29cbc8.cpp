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

// Function: entry_0029cbc8
// Address: 0x29cbc8 - 0x29cbe4
void entry_0029cbc8_0x29cbc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0029cbc8_0x29cbc8");
#endif

    ctx->pc = 0x29cbc8u;

    // 0x29cbc8: 0x101842  srl         $v1, $s0, 1
    ctx->pc = 0x29cbc8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
    // 0x29cbcc: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x29cbccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x29cbd0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x29cbd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x29cbd4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x29cbd4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29cbd8: 0x0  nop
    ctx->pc = 0x29cbd8u;
    // NOP
    // 0x29cbdc: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x29cbdcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x29cbe0: 0x460c6300  add.s       $f12, $f12, $f12
    ctx->pc = 0x29cbe0u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[12]);
    ctx->pc = 0x29cbe4u;
}
