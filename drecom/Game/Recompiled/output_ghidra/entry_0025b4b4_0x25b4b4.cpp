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

// Function: entry_0025b4b4
// Address: 0x25b4b4 - 0x25b4d0
void entry_0025b4b4_0x25b4b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0025b4b4_0x25b4b4");
#endif

    ctx->pc = 0x25b4b4u;

    // 0x25b4b4: 0x121842  srl         $v1, $s2, 1
    ctx->pc = 0x25b4b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 1));
    // 0x25b4b8: 0x32420001  andi        $v0, $s2, 0x1
    ctx->pc = 0x25b4b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
    // 0x25b4bc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x25b4bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x25b4c0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x25b4c0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25b4c4: 0x0  nop
    ctx->pc = 0x25b4c4u;
    // NOP
    // 0x25b4c8: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x25b4c8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x25b4cc: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x25b4ccu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
    ctx->pc = 0x25b4d0u;
}
