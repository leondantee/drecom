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

// Function: entry_0029912c
// Address: 0x29912c - 0x299148
void entry_0029912c_0x29912c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0029912c_0x29912c");
#endif

    ctx->pc = 0x29912cu;

    // 0x29912c: 0x113042  srl         $a2, $s1, 1
    ctx->pc = 0x29912cu;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
    // 0x299130: 0x32230001  andi        $v1, $s1, 0x1
    ctx->pc = 0x299130u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x299134: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x299134u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x299138: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x299138u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29913c: 0x0  nop
    ctx->pc = 0x29913cu;
    // NOP
    // 0x299140: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x299140u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x299144: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x299144u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    ctx->pc = 0x299148u;
}
