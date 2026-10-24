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

// Function: entry_002630c4
// Address: 0x2630c4 - 0x2630e0
void entry_002630c4_0x2630c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002630c4_0x2630c4");
#endif

    ctx->pc = 0x2630c4u;

    // 0x2630c4: 0x87842  srl         $t7, $t0, 1
    ctx->pc = 0x2630c4u;
    SET_GPR_S32(ctx, 15, (int32_t)SRL32(GPR_U32(ctx, 8), 1));
    // 0x2630c8: 0x31080001  andi        $t0, $t0, 0x1
    ctx->pc = 0x2630c8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)1);
    // 0x2630cc: 0x1e87825  or          $t7, $t7, $t0
    ctx->pc = 0x2630ccu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | GPR_U64(ctx, 8));
    // 0x2630d0: 0x448f0000  mtc1        $t7, $f0
    ctx->pc = 0x2630d0u;
    { uint32_t bits = GPR_U32(ctx, 15); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2630d4: 0x0  nop
    ctx->pc = 0x2630d4u;
    // NOP
    // 0x2630d8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2630d8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2630dc: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2630dcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    ctx->pc = 0x2630e0u;
}
