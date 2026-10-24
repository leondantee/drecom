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

// Function: entry_0032a0e8
// Address: 0x32a0e8 - 0x32a118
void entry_0032a0e8_0x32a0e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0032a0e8_0x32a0e8");
#endif

    ctx->pc = 0x32a0e8u;

    // 0x32a0e8: 0xc661000c  lwc1        $f1, 0xC($s3)
    ctx->pc = 0x32a0e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x32a0ec: 0xc6600004  lwc1        $f0, 0x4($s3)
    ctx->pc = 0x32a0ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32a0f0: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x32a0f0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x32a0f4: 0xc7a00054  lwc1        $f0, 0x54($sp)
    ctx->pc = 0x32a0f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32a0f8: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x32a0f8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x32a0fc: 0xc6600004  lwc1        $f0, 0x4($s3)
    ctx->pc = 0x32a0fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32a100: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x32a100u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x32a104: 0x111900  sll         $v1, $s1, 4
    ctx->pc = 0x32a104u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x32a108: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x32a108u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x32a10c: 0xe4601828  swc1        $f0, 0x1828($v1)
    ctx->pc = 0x32a10cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 6184), bits); }
    // 0x32a110: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x32a110u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x32a114: 0x0  nop
    ctx->pc = 0x32a114u;
    // NOP
    ctx->pc = 0x32a118u;
}
