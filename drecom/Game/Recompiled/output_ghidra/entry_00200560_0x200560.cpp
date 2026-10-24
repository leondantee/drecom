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

// Function: entry_00200560
// Address: 0x200560 - 0x20057c
void entry_00200560_0x200560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00200560_0x200560");
#endif

    ctx->pc = 0x200560u;

    // 0x200560: 0x72042  srl         $a0, $a3, 1
    ctx->pc = 0x200560u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 7), 1));
    // 0x200564: 0x30e30001  andi        $v1, $a3, 0x1
    ctx->pc = 0x200564u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)1);
    // 0x200568: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x200568u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x20056c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x20056cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x200570: 0x0  nop
    ctx->pc = 0x200570u;
    // NOP
    // 0x200574: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x200574u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x200578: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x200578u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
    ctx->pc = 0x20057cu;
}
