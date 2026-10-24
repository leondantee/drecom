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

// Function: entry_00247fb0
// Address: 0x247fb0 - 0x247ff0
void entry_00247fb0_0x247fb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00247fb0_0x247fb0");
#endif

    ctx->pc = 0x247fb0u;

    // 0x247fb0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x247fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x247fb4: 0x8442127e  lh          $v0, 0x127E($v0)
    ctx->pc = 0x247fb4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4734)));
    // 0x247fb8: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x247fb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x247fbc: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x247fbcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x247fc0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x247fc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x247fc4: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x247FC4u;
    {
        const bool branch_taken_0x247fc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x247fc4) {
            ctx->pc = 0x247FF0u;
            return;
        }
    }
    ctx->pc = 0x247FCCu;
    // 0x247fcc: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x247fccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x247fd0: 0xc4610184  lwc1        $f1, 0x184($v1)
    ctx->pc = 0x247fd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x247fd4: 0x3c023e00  lui         $v0, 0x3E00
    ctx->pc = 0x247fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15872 << 16));
    // 0x247fd8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x247fd8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x247fdc: 0x0  nop
    ctx->pc = 0x247fdcu;
    // NOP
    // 0x247fe0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x247fe0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x247fe4: 0xe4600184  swc1        $f0, 0x184($v1)
    ctx->pc = 0x247fe4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 388), bits); }
    // 0x247fe8: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x247FE8u;
    {
        const bool branch_taken_0x247fe8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x247fe8) {
            ctx->pc = 0x248080u;
            return;
        }
    }
    ctx->pc = 0x247FF0u;
}
