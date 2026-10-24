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

// Function: entry_0025ab90
// Address: 0x25ab90 - 0x25abac
void entry_0025ab90_0x25ab90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0025ab90_0x25ab90");
#endif

    ctx->pc = 0x25ab90u;

    // 0x25ab90: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x25ab90u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x25ab94: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x25ab94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x25ab98: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x25ab98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x25ab9c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x25ab9cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25aba0: 0x0  nop
    ctx->pc = 0x25aba0u;
    // NOP
    // 0x25aba4: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x25aba4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x25aba8: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x25aba8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
    ctx->pc = 0x25abacu;
}
