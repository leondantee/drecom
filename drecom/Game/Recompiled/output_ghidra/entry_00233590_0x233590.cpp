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

// Function: entry_00233590
// Address: 0x233590 - 0x2335ac
void entry_00233590_0x233590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00233590_0x233590");
#endif

    ctx->pc = 0x233590u;

    // 0x233590: 0x3a842  srl         $s5, $v1, 1
    ctx->pc = 0x233590u;
    SET_GPR_S32(ctx, 21, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x233594: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x233594u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x233598: 0x2a3a825  or          $s5, $s5, $v1
    ctx->pc = 0x233598u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | GPR_U64(ctx, 3));
    // 0x23359c: 0x44950000  mtc1        $s5, $f0
    ctx->pc = 0x23359cu;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2335a0: 0x0  nop
    ctx->pc = 0x2335a0u;
    // NOP
    // 0x2335a4: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x2335a4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2335a8: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x2335a8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
    ctx->pc = 0x2335acu;
}
