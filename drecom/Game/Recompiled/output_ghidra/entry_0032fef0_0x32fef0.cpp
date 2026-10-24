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

// Function: entry_0032fef0
// Address: 0x32fef0 - 0x32ff14
void entry_0032fef0_0x32fef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0032fef0_0x32fef0");
#endif

    ctx->pc = 0x32fef0u;

    // 0x32fef0: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x32fef0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x32fef4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x32fef4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x32fef8: 0x7fa200e0  sq          $v0, 0xE0($sp)
    ctx->pc = 0x32fef8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 2));
    // 0x32fefc: 0x7ba200e0  lq          $v0, 0xE0($sp)
    ctx->pc = 0x32fefcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x32ff00: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x32ff00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x32ff04: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x32ff04u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x32ff08: 0x0  nop
    ctx->pc = 0x32ff08u;
    // NOP
    // 0x32ff0c: 0x46806060  cvt.s.w     $f1, $f12
    ctx->pc = 0x32ff0cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x32ff10: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x32ff10u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
    ctx->pc = 0x32ff14u;
}
