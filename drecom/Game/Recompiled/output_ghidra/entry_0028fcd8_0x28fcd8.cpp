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

// Function: entry_0028fcd8
// Address: 0x28fcd8 - 0x28fcf4
void entry_0028fcd8_0x28fcd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0028fcd8_0x28fcd8");
#endif

    ctx->pc = 0x28fcd8u;

    // 0x28fcd8: 0x133042  srl         $a2, $s3, 1
    ctx->pc = 0x28fcd8u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 19), 1));
    // 0x28fcdc: 0x32620001  andi        $v0, $s3, 0x1
    ctx->pc = 0x28fcdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
    // 0x28fce0: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x28fce0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x28fce4: 0x44860800  mtc1        $a2, $f1
    ctx->pc = 0x28fce4u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x28fce8: 0x0  nop
    ctx->pc = 0x28fce8u;
    // NOP
    // 0x28fcec: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x28fcecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x28fcf0: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x28fcf0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
    ctx->pc = 0x28fcf4u;
}
