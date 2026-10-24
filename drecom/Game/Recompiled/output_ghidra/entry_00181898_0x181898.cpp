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

// Function: entry_00181898
// Address: 0x181898 - 0x1818b4
void entry_00181898_0x181898(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00181898_0x181898");
#endif

    ctx->pc = 0x181898u;

    // 0x181898: 0x33842  srl         $a3, $v1, 1
    ctx->pc = 0x181898u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x18189c: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x18189cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1818a0: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x1818a0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x1818a4: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x1818a4u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1818a8: 0x0  nop
    ctx->pc = 0x1818a8u;
    // NOP
    // 0x1818ac: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1818acu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1818b0: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1818b0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
    ctx->pc = 0x1818b4u;
}
