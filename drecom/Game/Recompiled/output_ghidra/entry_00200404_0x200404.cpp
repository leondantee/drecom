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

// Function: entry_00200404
// Address: 0x200404 - 0x200420
void entry_00200404_0x200404(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00200404_0x200404");
#endif

    ctx->pc = 0x200404u;

    // 0x200404: 0x32042  srl         $a0, $v1, 1
    ctx->pc = 0x200404u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x200408: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x200408u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x20040c: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x20040cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x200410: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x200410u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x200414: 0x0  nop
    ctx->pc = 0x200414u;
    // NOP
    // 0x200418: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x200418u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x20041c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x20041cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    ctx->pc = 0x200420u;
}
