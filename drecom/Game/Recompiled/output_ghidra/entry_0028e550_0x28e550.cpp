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

// Function: entry_0028e550
// Address: 0x28e550 - 0x28e56c
void entry_0028e550_0x28e550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0028e550_0x28e550");
#endif

    ctx->pc = 0x28e550u;

    // 0x28e550: 0x61842  srl         $v1, $a2, 1
    ctx->pc = 0x28e550u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 6), 1));
    // 0x28e554: 0x30c20001  andi        $v0, $a2, 0x1
    ctx->pc = 0x28e554u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
    // 0x28e558: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x28e558u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x28e55c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x28e55cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28e560: 0x0  nop
    ctx->pc = 0x28e560u;
    // NOP
    // 0x28e564: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x28e564u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x28e568: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x28e568u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    ctx->pc = 0x28e56cu;
}
