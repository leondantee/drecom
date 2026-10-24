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

// Function: entry_0017bbf4
// Address: 0x17bbf4 - 0x17bc10
void entry_0017bbf4_0x17bbf4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017bbf4_0x17bbf4");
#endif

    ctx->pc = 0x17bbf4u;

    // 0x17bbf4: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x17bbf4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x17bbf8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x17bbf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x17bbfc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x17bbfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x17bc00: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x17bc00u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17bc04: 0x0  nop
    ctx->pc = 0x17bc04u;
    // NOP
    // 0x17bc08: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x17bc08u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x17bc0c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x17bc0cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    ctx->pc = 0x17bc10u;
}
