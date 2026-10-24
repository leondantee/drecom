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

// Function: entry_0026303c
// Address: 0x26303c - 0x263058
void entry_0026303c_0x26303c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0026303c_0x26303c");
#endif

    ctx->pc = 0x26303cu;

    // 0x26303c: 0x87842  srl         $t7, $t0, 1
    ctx->pc = 0x26303cu;
    SET_GPR_S32(ctx, 15, (int32_t)SRL32(GPR_U32(ctx, 8), 1));
    // 0x263040: 0x31080001  andi        $t0, $t0, 0x1
    ctx->pc = 0x263040u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)1);
    // 0x263044: 0x1e87825  or          $t7, $t7, $t0
    ctx->pc = 0x263044u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | GPR_U64(ctx, 8));
    // 0x263048: 0x448f0000  mtc1        $t7, $f0
    ctx->pc = 0x263048u;
    { uint32_t bits = GPR_U32(ctx, 15); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26304c: 0x0  nop
    ctx->pc = 0x26304cu;
    // NOP
    // 0x263050: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x263050u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x263054: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x263054u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    ctx->pc = 0x263058u;
}
