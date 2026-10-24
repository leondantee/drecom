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

// Function: caseD_7
// Address: 0x13aa2c - 0x13aa6c
void caseD_7_0x13aa2c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_7_0x13aa2c");
#endif

    ctx->pc = 0x13aa2cu;

    // 0x13aa2c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x13aa2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x13aa30: 0xc4611b50  lwc1        $f1, 0x1B50($v1)
    ctx->pc = 0x13aa30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13aa34: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x13aa34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
    // 0x13aa38: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x13aa38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x13aa3c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x13aa3cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13aa40: 0x0  nop
    ctx->pc = 0x13aa40u;
    // NOP
    // 0x13aa44: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x13aa44u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x13aa48: 0xe4601b50  swc1        $f0, 0x1B50($v1)
    ctx->pc = 0x13aa48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 6992), bits); }
    // 0x13aa4c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x13aa4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x13aa50: 0xc4611b54  lwc1        $f1, 0x1B54($v1)
    ctx->pc = 0x13aa50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 6996)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13aa54: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x13aa54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
    // 0x13aa58: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x13aa58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x13aa5c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x13aa5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13aa60: 0x0  nop
    ctx->pc = 0x13aa60u;
    // NOP
    // 0x13aa64: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x13aa64u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x13aa68: 0xe4601b54  swc1        $f0, 0x1B54($v1)
    ctx->pc = 0x13aa68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 6996), bits); }
    ctx->pc = 0x13aa6cu;
}
