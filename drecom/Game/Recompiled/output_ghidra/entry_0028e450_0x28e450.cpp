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

// Function: entry_0028e450
// Address: 0x28e450 - 0x28e46c
void entry_0028e450_0x28e450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0028e450_0x28e450");
#endif

    ctx->pc = 0x28e450u;

    // 0x28e450: 0x61842  srl         $v1, $a2, 1
    ctx->pc = 0x28e450u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 6), 1));
    // 0x28e454: 0x30c20001  andi        $v0, $a2, 0x1
    ctx->pc = 0x28e454u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
    // 0x28e458: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x28e458u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x28e45c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x28e45cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28e460: 0x0  nop
    ctx->pc = 0x28e460u;
    // NOP
    // 0x28e464: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x28e464u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x28e468: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x28e468u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    ctx->pc = 0x28e46cu;
}
