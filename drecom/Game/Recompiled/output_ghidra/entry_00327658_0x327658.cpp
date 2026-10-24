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

// Function: entry_00327658
// Address: 0x327658 - 0x327674
void entry_00327658_0x327658(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00327658_0x327658");
#endif

    ctx->pc = 0x327658u;

    // 0x327658: 0x32042  srl         $a0, $v1, 1
    ctx->pc = 0x327658u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x32765c: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x32765cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x327660: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x327660u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x327664: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x327664u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x327668: 0x0  nop
    ctx->pc = 0x327668u;
    // NOP
    // 0x32766c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x32766cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x327670: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x327670u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    ctx->pc = 0x327674u;
}
