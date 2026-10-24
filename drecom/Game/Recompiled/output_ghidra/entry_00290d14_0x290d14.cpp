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

// Function: entry_00290d14
// Address: 0x290d14 - 0x290d80
void entry_00290d14_0x290d14(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00290d14_0x290d14");
#endif

    ctx->pc = 0x290d14u;

    // 0x290d14: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x290d14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x290d18: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x290d18u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x290d1c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x290d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x290d20: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x290d20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x290d24: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x290d24u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x290d28: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x290d28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x290d2c: 0x246329b0  addiu       $v1, $v1, 0x29B0
    ctx->pc = 0x290d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10672));
    // 0x290d30: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x290d30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x290d34: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x290d34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x290d38: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x290d38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x290d3c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x290d3cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x290d40: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x290d40u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x290d44: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x290d44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x290d48: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x290d48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x290d4c: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x290d4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x290d50: 0x46010041  sub.s       $f1, $f0, $f1
    ctx->pc = 0x290d50u;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x290d54: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x290d54u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x290d58: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x290d58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x290d5c: 0x24632a00  addiu       $v1, $v1, 0x2A00
    ctx->pc = 0x290d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10752));
    // 0x290d60: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x290d60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x290d64: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x290d64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x290d68: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x290d68u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x290d6c: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x290d6cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x290d70: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x290d70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x290d74: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x290d74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x290d78: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x290d78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x290d7c: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x290d7cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    ctx->pc = 0x290d80u;
}
