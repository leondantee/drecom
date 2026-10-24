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

// Function: entry_00294abc
// Address: 0x294abc - 0x294ad8
void entry_00294abc_0x294abc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00294abc_0x294abc");
#endif

    ctx->pc = 0x294abcu;

    // 0x294abc: 0x32042  srl         $a0, $v1, 1
    ctx->pc = 0x294abcu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x294ac0: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x294ac0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x294ac4: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x294ac4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x294ac8: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x294ac8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x294acc: 0x0  nop
    ctx->pc = 0x294accu;
    // NOP
    // 0x294ad0: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x294ad0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x294ad4: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x294ad4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
    ctx->pc = 0x294ad8u;
}
