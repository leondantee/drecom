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

// Function: entry_0017cf70
// Address: 0x17cf70 - 0x17cf8c
void entry_0017cf70_0x17cf70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017cf70_0x17cf70");
#endif

    ctx->pc = 0x17cf70u;

    // 0x17cf70: 0x41842  srl         $v1, $a0, 1
    ctx->pc = 0x17cf70u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
    // 0x17cf74: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x17cf74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x17cf78: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x17cf78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x17cf7c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x17cf7cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17cf80: 0x0  nop
    ctx->pc = 0x17cf80u;
    // NOP
    // 0x17cf84: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x17cf84u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x17cf88: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x17cf88u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    ctx->pc = 0x17cf8cu;
}
