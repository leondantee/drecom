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

// Function: entry_002f0c00
// Address: 0x2f0c00 - 0x2f0c1c
void entry_002f0c00_0x2f0c00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002f0c00_0x2f0c00");
#endif

    ctx->pc = 0x2f0c00u;

    // 0x2f0c00: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x2f0c00u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x2f0c04: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2f0c04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2f0c08: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2f0c08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2f0c0c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2f0c0cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f0c10: 0x0  nop
    ctx->pc = 0x2f0c10u;
    // NOP
    // 0x2f0c14: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2f0c14u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2f0c18: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2f0c18u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    ctx->pc = 0x2f0c1cu;
}
