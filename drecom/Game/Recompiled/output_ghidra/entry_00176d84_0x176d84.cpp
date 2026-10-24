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

// Function: entry_00176d84
// Address: 0x176d84 - 0x176db0
void entry_00176d84_0x176d84(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00176d84_0x176d84");
#endif

    ctx->pc = 0x176d84u;

    // 0x176d84: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x176d84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x176d88: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x176d88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x176d8c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x176d8cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x176d90: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x176d90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x176d94: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x176d94u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x176d98: 0x0  nop
    ctx->pc = 0x176d98u;
    // NOP
    // 0x176d9c: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x176d9cu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x176da0: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x176da0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x176da4: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x176da4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x176da8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x176da8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x176dac: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x176dacu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    ctx->pc = 0x176db0u;
}
