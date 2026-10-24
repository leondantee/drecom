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

// Function: entry_0013be70
// Address: 0x13be70 - 0x13be8c
void entry_0013be70_0x13be70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013be70_0x13be70");
#endif

    ctx->pc = 0x13be70u;

    // 0x13be70: 0x122042  srl         $a0, $s2, 1
    ctx->pc = 0x13be70u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 18), 1));
    // 0x13be74: 0x32430001  andi        $v1, $s2, 0x1
    ctx->pc = 0x13be74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
    // 0x13be78: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x13be78u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x13be7c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x13be7cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13be80: 0x0  nop
    ctx->pc = 0x13be80u;
    // NOP
    // 0x13be84: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x13be84u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x13be88: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x13be88u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    ctx->pc = 0x13be8cu;
}
