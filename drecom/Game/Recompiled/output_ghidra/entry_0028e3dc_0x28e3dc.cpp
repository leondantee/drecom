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

// Function: entry_0028e3dc
// Address: 0x28e3dc - 0x28e3f8
void entry_0028e3dc_0x28e3dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0028e3dc_0x28e3dc");
#endif

    ctx->pc = 0x28e3dcu;

    // 0x28e3dc: 0x23042  srl         $a2, $v0, 1
    ctx->pc = 0x28e3dcu;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x28e3e0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x28e3e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x28e3e4: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x28e3e4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x28e3e8: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x28e3e8u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28e3ec: 0x0  nop
    ctx->pc = 0x28e3ecu;
    // NOP
    // 0x28e3f0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x28e3f0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x28e3f4: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x28e3f4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    ctx->pc = 0x28e3f8u;
}
