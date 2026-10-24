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

// Function: entry_00337f78
// Address: 0x337f78 - 0x337f94
void entry_00337f78_0x337f78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00337f78_0x337f78");
#endif

    ctx->pc = 0x337f78u;

    // 0x337f78: 0x61842  srl         $v1, $a2, 1
    ctx->pc = 0x337f78u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 6), 1));
    // 0x337f7c: 0x30c20001  andi        $v0, $a2, 0x1
    ctx->pc = 0x337f7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
    // 0x337f80: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x337f80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x337f84: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x337f84u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x337f88: 0x0  nop
    ctx->pc = 0x337f88u;
    // NOP
    // 0x337f8c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x337f8cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x337f90: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x337f90u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    ctx->pc = 0x337f94u;
}
