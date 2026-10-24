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

// Function: entry_00259dc4
// Address: 0x259dc4 - 0x259de0
void entry_00259dc4_0x259dc4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00259dc4_0x259dc4");
#endif

    ctx->pc = 0x259dc4u;

    // 0x259dc4: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x259dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x259dc8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x259dc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x259dcc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x259dccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x259dd0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x259dd0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x259dd4: 0x0  nop
    ctx->pc = 0x259dd4u;
    // NOP
    // 0x259dd8: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x259dd8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x259ddc: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x259ddcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
    ctx->pc = 0x259de0u;
}
