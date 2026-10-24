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

// Function: entry_0028c204
// Address: 0x28c204 - 0x28c228
void entry_0028c204_0x28c204(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0028c204_0x28c204");
#endif

    ctx->pc = 0x28c204u;

    // 0x28c204: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x28c204u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x28c208: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x28c208u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x28c20c: 0x7fa200d0  sq          $v0, 0xD0($sp)
    ctx->pc = 0x28c20cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 2));
    // 0x28c210: 0x7ba200d0  lq          $v0, 0xD0($sp)
    ctx->pc = 0x28c210u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x28c214: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x28c214u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x28c218: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x28c218u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28c21c: 0x0  nop
    ctx->pc = 0x28c21cu;
    // NOP
    // 0x28c220: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x28c220u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x28c224: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x28c224u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    ctx->pc = 0x28c228u;
}
