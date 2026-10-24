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

// Function: entry_00156690
// Address: 0x156690 - 0x1566ac
void entry_00156690_0x156690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00156690_0x156690");
#endif

    ctx->pc = 0x156690u;

    // 0x156690: 0x121842  srl         $v1, $s2, 1
    ctx->pc = 0x156690u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 1));
    // 0x156694: 0x32420001  andi        $v0, $s2, 0x1
    ctx->pc = 0x156694u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
    // 0x156698: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x156698u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x15669c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x15669cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1566a0: 0x0  nop
    ctx->pc = 0x1566a0u;
    // NOP
    // 0x1566a4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1566a4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1566a8: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1566a8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    ctx->pc = 0x1566acu;
}
