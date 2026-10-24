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

// Function: entry_001819ac
// Address: 0x1819ac - 0x1819c8
void entry_001819ac_0x1819ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001819ac_0x1819ac");
#endif

    ctx->pc = 0x1819acu;

    // 0x1819ac: 0x61842  srl         $v1, $a2, 1
    ctx->pc = 0x1819acu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 6), 1));
    // 0x1819b0: 0x30c40001  andi        $a0, $a2, 0x1
    ctx->pc = 0x1819b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
    // 0x1819b4: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1819b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1819b8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1819b8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1819bc: 0x0  nop
    ctx->pc = 0x1819bcu;
    // NOP
    // 0x1819c0: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1819c0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1819c4: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1819c4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
    ctx->pc = 0x1819c8u;
}
