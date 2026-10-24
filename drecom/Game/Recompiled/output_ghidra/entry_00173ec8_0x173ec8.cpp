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

// Function: entry_00173ec8
// Address: 0x173ec8 - 0x173f28
void entry_00173ec8_0x173ec8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00173ec8_0x173ec8");
#endif

    ctx->pc = 0x173ec8u;

    // 0x173ec8: 0x12000017  beqz        $s0, . + 4 + (0x17 << 2)
    ctx->pc = 0x173EC8u;
    {
        const bool branch_taken_0x173ec8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x173ec8) {
            ctx->pc = 0x173F28u;
            return;
        }
    }
    ctx->pc = 0x173ED0u;
    // 0x173ed0: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x173ed0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x173ed4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x173ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x173ed8: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x173ed8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x173edc: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x173edcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x173ee0: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x173ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x173ee4: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x173ee4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x173ee8: 0xc6000020  lwc1        $f0, 0x20($s0)
    ctx->pc = 0x173ee8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x173eec: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x173eecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x173ef0: 0xe4400010  swc1        $f0, 0x10($v0)
    ctx->pc = 0x173ef0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x173ef4: 0xc6000024  lwc1        $f0, 0x24($s0)
    ctx->pc = 0x173ef4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x173ef8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x173ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x173efc: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x173efcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x173f00: 0xc6000028  lwc1        $f0, 0x28($s0)
    ctx->pc = 0x173f00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x173f04: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x173f04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x173f08: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x173f08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x173f0c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x173f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x173f10: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x173f10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x173f14: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x173f14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x173f18: 0xe440001c  swc1        $f0, 0x1C($v0)
    ctx->pc = 0x173f18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 28), bits); }
    // 0x173f1c: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x173f1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x173f20: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x173F20u;
    {
        const bool branch_taken_0x173f20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x173f20) {
            ctx->pc = 0x173F58u;
            return;
        }
    }
    ctx->pc = 0x173F28u;
}
