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

// Function: entry_00275e50
// Address: 0x275e50 - 0x275e6c
void entry_00275e50_0x275e50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00275e50_0x275e50");
#endif

    ctx->pc = 0x275e50u;

    // 0x275e50: 0x41842  srl         $v1, $a0, 1
    ctx->pc = 0x275e50u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
    // 0x275e54: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x275e54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x275e58: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x275e58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x275e5c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x275e5cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x275e60: 0x0  nop
    ctx->pc = 0x275e60u;
    // NOP
    // 0x275e64: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x275e64u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x275e68: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x275e68u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
    ctx->pc = 0x275e6cu;
}
