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

// Function: entry_00321148
// Address: 0x321148 - 0x321164
void entry_00321148_0x321148(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00321148_0x321148");
#endif

    ctx->pc = 0x321148u;

    // 0x321148: 0x102042  srl         $a0, $s0, 1
    ctx->pc = 0x321148u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
    // 0x32114c: 0x32030001  andi        $v1, $s0, 0x1
    ctx->pc = 0x32114cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x321150: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x321150u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x321154: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x321154u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x321158: 0x0  nop
    ctx->pc = 0x321158u;
    // NOP
    // 0x32115c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x32115cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x321160: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x321160u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
    ctx->pc = 0x321164u;
}
