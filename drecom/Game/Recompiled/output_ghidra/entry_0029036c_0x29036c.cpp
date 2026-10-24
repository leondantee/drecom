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

// Function: entry_0029036c
// Address: 0x29036c - 0x290388
void entry_0029036c_0x29036c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0029036c_0x29036c");
#endif

    ctx->pc = 0x29036cu;

    // 0x29036c: 0x131042  srl         $v0, $s3, 1
    ctx->pc = 0x29036cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 19), 1));
    // 0x290370: 0x32660001  andi        $a2, $s3, 0x1
    ctx->pc = 0x290370u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
    // 0x290374: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x290374u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x290378: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x290378u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x29037c: 0x0  nop
    ctx->pc = 0x29037cu;
    // NOP
    // 0x290380: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x290380u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x290384: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x290384u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
    ctx->pc = 0x290388u;
}
