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

// Function: entry_00176e24
// Address: 0x176e24 - 0x176e50
void entry_00176e24_0x176e24(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00176e24_0x176e24");
#endif

    ctx->pc = 0x176e24u;

    // 0x176e24: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x176e24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x176e28: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x176e28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x176e2c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x176e2cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x176e30: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x176e30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x176e34: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x176e34u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x176e38: 0x0  nop
    ctx->pc = 0x176e38u;
    // NOP
    // 0x176e3c: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x176e3cu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x176e40: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x176e40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x176e44: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x176e44u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x176e48: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x176e48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x176e4c: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x176e4cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    ctx->pc = 0x176e50u;
}
