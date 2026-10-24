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

// Function: entry_00184260
// Address: 0x184260 - 0x18427c
void entry_00184260_0x184260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00184260_0x184260");
#endif

    ctx->pc = 0x184260u;

    // 0x184260: 0x121842  srl         $v1, $s2, 1
    ctx->pc = 0x184260u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 1));
    // 0x184264: 0x32420001  andi        $v0, $s2, 0x1
    ctx->pc = 0x184264u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
    // 0x184268: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x184268u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x18426c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x18426cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x184270: 0x0  nop
    ctx->pc = 0x184270u;
    // NOP
    // 0x184274: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x184274u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x184278: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x184278u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    ctx->pc = 0x18427cu;
}
