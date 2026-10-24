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

// Function: entry_00325ed8
// Address: 0x325ed8 - 0x325f28
void entry_00325ed8_0x325ed8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00325ed8_0x325ed8");
#endif

    ctx->pc = 0x325ed8u;

    // 0x325ed8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x325ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x325edc: 0xc4410030  lwc1        $f1, 0x30($v0)
    ctx->pc = 0x325edcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x325ee0: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x325ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
    // 0x325ee4: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x325ee4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x325ee8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x325ee8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x325eec: 0x0  nop
    ctx->pc = 0x325eecu;
    // NOP
    // 0x325ef0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x325ef0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x325ef4: 0x0  nop
    ctx->pc = 0x325ef4u;
    // NOP
    // 0x325ef8: 0x4500002b  bc1f        . + 4 + (0x2B << 2)
    ctx->pc = 0x325EF8u;
    {
        const bool branch_taken_0x325ef8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x325ef8) {
            ctx->pc = 0x325FA8u;
            return;
        }
    }
    ctx->pc = 0x325F00u;
    // 0x325f00: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x325f00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x325f04: 0xc4610030  lwc1        $f1, 0x30($v1)
    ctx->pc = 0x325f04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x325f08: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x325f08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x325f0c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x325f0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x325f10: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x325f10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x325f14: 0x0  nop
    ctx->pc = 0x325f14u;
    // NOP
    // 0x325f18: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x325f18u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x325f1c: 0xe4600030  swc1        $f0, 0x30($v1)
    ctx->pc = 0x325f1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 48), bits); }
    // 0x325f20: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x325F20u;
    {
        const bool branch_taken_0x325f20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x325f20) {
            ctx->pc = 0x325FA8u;
            return;
        }
    }
    ctx->pc = 0x325F28u;
}
