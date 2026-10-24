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

// Function: entry_0030ee18
// Address: 0x30ee18 - 0x30ee34
void entry_0030ee18_0x30ee18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0030ee18_0x30ee18");
#endif

    ctx->pc = 0x30ee18u;

    // 0x30ee18: 0x74042  srl         $t0, $a3, 1
    ctx->pc = 0x30ee18u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 7), 1));
    // 0x30ee1c: 0x30e20001  andi        $v0, $a3, 0x1
    ctx->pc = 0x30ee1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)1);
    // 0x30ee20: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x30ee20u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x30ee24: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x30ee24u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30ee28: 0x0  nop
    ctx->pc = 0x30ee28u;
    // NOP
    // 0x30ee2c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x30ee2cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x30ee30: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x30ee30u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
    ctx->pc = 0x30ee34u;
}
