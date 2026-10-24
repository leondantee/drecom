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

// Function: entry_0034c450
// Address: 0x34c450 - 0x34c46c
void entry_0034c450_0x34c450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0034c450_0x34c450");
#endif

    ctx->pc = 0x34c450u;

    // 0x34c450: 0x41842  srl         $v1, $a0, 1
    ctx->pc = 0x34c450u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
    // 0x34c454: 0x30850001  andi        $a1, $a0, 0x1
    ctx->pc = 0x34c454u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x34c458: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x34c458u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x34c45c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x34c45cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34c460: 0x0  nop
    ctx->pc = 0x34c460u;
    // NOP
    // 0x34c464: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x34c464u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x34c468: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x34c468u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
    ctx->pc = 0x34c46cu;
}
