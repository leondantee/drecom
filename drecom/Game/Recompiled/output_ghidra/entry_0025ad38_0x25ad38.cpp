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

// Function: entry_0025ad38
// Address: 0x25ad38 - 0x25ad54
void entry_0025ad38_0x25ad38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0025ad38_0x25ad38");
#endif

    ctx->pc = 0x25ad38u;

    // 0x25ad38: 0x32042  srl         $a0, $v1, 1
    ctx->pc = 0x25ad38u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x25ad3c: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x25ad3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x25ad40: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x25ad40u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x25ad44: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x25ad44u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25ad48: 0x0  nop
    ctx->pc = 0x25ad48u;
    // NOP
    // 0x25ad4c: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x25ad4cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x25ad50: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x25ad50u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
    ctx->pc = 0x25ad54u;
}
