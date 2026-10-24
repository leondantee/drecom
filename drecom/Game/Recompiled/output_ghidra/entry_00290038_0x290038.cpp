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

// Function: entry_00290038
// Address: 0x290038 - 0x290054
void entry_00290038_0x290038(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00290038_0x290038");
#endif

    ctx->pc = 0x290038u;

    // 0x290038: 0x131842  srl         $v1, $s3, 1
    ctx->pc = 0x290038u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 19), 1));
    // 0x29003c: 0x32620001  andi        $v0, $s3, 0x1
    ctx->pc = 0x29003cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
    // 0x290040: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x290040u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x290044: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x290044u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x290048: 0x0  nop
    ctx->pc = 0x290048u;
    // NOP
    // 0x29004c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x29004cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x290050: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x290050u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    ctx->pc = 0x290054u;
}
