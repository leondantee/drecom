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

// Function: entry_00156648
// Address: 0x156648 - 0x156664
void entry_00156648_0x156648(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00156648_0x156648");
#endif

    ctx->pc = 0x156648u;

    // 0x156648: 0x11b042  srl         $s6, $s1, 1
    ctx->pc = 0x156648u;
    SET_GPR_S32(ctx, 22, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
    // 0x15664c: 0x32340001  andi        $s4, $s1, 0x1
    ctx->pc = 0x15664cu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x156650: 0x2d4b025  or          $s6, $s6, $s4
    ctx->pc = 0x156650u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) | GPR_U64(ctx, 20));
    // 0x156654: 0x44960000  mtc1        $s6, $f0
    ctx->pc = 0x156654u;
    { uint32_t bits = GPR_U32(ctx, 22); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x156658: 0x0  nop
    ctx->pc = 0x156658u;
    // NOP
    // 0x15665c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x15665cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x156660: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x156660u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    ctx->pc = 0x156664u;
}
