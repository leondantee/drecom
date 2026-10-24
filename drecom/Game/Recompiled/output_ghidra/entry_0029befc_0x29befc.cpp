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

// Function: entry_0029befc
// Address: 0x29befc - 0x29bf18
void entry_0029befc_0x29befc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0029befc_0x29befc");
#endif

    ctx->pc = 0x29befcu;

    // 0x29befc: 0x33042  srl         $a2, $v1, 1
    ctx->pc = 0x29befcu;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x29bf00: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x29bf00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x29bf04: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x29bf04u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x29bf08: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x29bf08u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29bf0c: 0x0  nop
    ctx->pc = 0x29bf0cu;
    // NOP
    // 0x29bf10: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x29bf10u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x29bf14: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x29bf14u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
    ctx->pc = 0x29bf18u;
}
