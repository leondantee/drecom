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

// Function: entry_0017cfe0
// Address: 0x17cfe0 - 0x17cffc
void entry_0017cfe0_0x17cfe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017cfe0_0x17cfe0");
#endif

    ctx->pc = 0x17cfe0u;

    // 0x17cfe0: 0x31042  srl         $v0, $v1, 1
    ctx->pc = 0x17cfe0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x17cfe4: 0x30640001  andi        $a0, $v1, 0x1
    ctx->pc = 0x17cfe4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x17cfe8: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x17cfe8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x17cfec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17cfecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17cff0: 0x0  nop
    ctx->pc = 0x17cff0u;
    // NOP
    // 0x17cff4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x17cff4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x17cff8: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x17cff8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    ctx->pc = 0x17cffcu;
}
