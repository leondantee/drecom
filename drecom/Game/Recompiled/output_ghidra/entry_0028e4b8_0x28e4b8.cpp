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

// Function: entry_0028e4b8
// Address: 0x28e4b8 - 0x28e4d4
void entry_0028e4b8_0x28e4b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0028e4b8_0x28e4b8");
#endif

    ctx->pc = 0x28e4b8u;

    // 0x28e4b8: 0x31042  srl         $v0, $v1, 1
    ctx->pc = 0x28e4b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x28e4bc: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x28e4bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x28e4c0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x28e4c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x28e4c4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28e4c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28e4c8: 0x0  nop
    ctx->pc = 0x28e4c8u;
    // NOP
    // 0x28e4cc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x28e4ccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x28e4d0: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x28e4d0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    ctx->pc = 0x28e4d4u;
}
