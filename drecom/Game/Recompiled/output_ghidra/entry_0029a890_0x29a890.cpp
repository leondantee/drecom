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

// Function: entry_0029a890
// Address: 0x29a890 - 0x29a8ac
void entry_0029a890_0x29a890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0029a890_0x29a890");
#endif

    ctx->pc = 0x29a890u;

    // 0x29a890: 0x142842  srl         $a1, $s4, 1
    ctx->pc = 0x29a890u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 20), 1));
    // 0x29a894: 0x32820001  andi        $v0, $s4, 0x1
    ctx->pc = 0x29a894u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)1);
    // 0x29a898: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x29a898u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x29a89c: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x29a89cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29a8a0: 0x0  nop
    ctx->pc = 0x29a8a0u;
    // NOP
    // 0x29a8a4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x29a8a4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x29a8a8: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x29a8a8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    ctx->pc = 0x29a8acu;
}
