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

// Function: entry_00354d30
// Address: 0x354d30 - 0x354d4c
void entry_00354d30_0x354d30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00354d30_0x354d30");
#endif

    ctx->pc = 0x354d30u;

    // 0x354d30: 0x41842  srl         $v1, $a0, 1
    ctx->pc = 0x354d30u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
    // 0x354d34: 0x30850001  andi        $a1, $a0, 0x1
    ctx->pc = 0x354d34u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x354d38: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x354d38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x354d3c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x354d3cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x354d40: 0x0  nop
    ctx->pc = 0x354d40u;
    // NOP
    // 0x354d44: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x354d44u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x354d48: 0x460c6300  add.s       $f12, $f12, $f12
    ctx->pc = 0x354d48u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[12]);
    ctx->pc = 0x354d4cu;
}
