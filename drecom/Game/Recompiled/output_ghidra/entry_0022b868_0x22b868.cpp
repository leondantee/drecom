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

// Function: entry_0022b868
// Address: 0x22b868 - 0x22b884
void entry_0022b868_0x22b868(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0022b868_0x22b868");
#endif

    ctx->pc = 0x22b868u;

    // 0x22b868: 0x42842  srl         $a1, $a0, 1
    ctx->pc = 0x22b868u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
    // 0x22b86c: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x22b86cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x22b870: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x22b870u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x22b874: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x22b874u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22b878: 0x0  nop
    ctx->pc = 0x22b878u;
    // NOP
    // 0x22b87c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x22b87cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x22b880: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x22b880u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
    ctx->pc = 0x22b884u;
}
