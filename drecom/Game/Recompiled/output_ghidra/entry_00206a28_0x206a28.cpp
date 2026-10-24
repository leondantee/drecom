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

// Function: entry_00206a28
// Address: 0x206a28 - 0x206a58
void entry_00206a28_0x206a28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00206a28_0x206a28");
#endif

    ctx->pc = 0x206a28u;

    // 0x206a28: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x206a28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x206a2c: 0xc4410184  lwc1        $f1, 0x184($v0)
    ctx->pc = 0x206a2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x206a30: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x206a30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x206a34: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x206a34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x206a38: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x206a38u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x206a3c: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x206a3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x206a40: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x206a40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x206a44: 0xc4411280  lwc1        $f1, 0x1280($v0)
    ctx->pc = 0x206a44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x206a48: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x206a48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x206a4c: 0xc4400184  lwc1        $f0, 0x184($v0)
    ctx->pc = 0x206a4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x206a50: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x206a50u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x206a54: 0xe4400184  swc1        $f0, 0x184($v0)
    ctx->pc = 0x206a54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 388), bits); }
    ctx->pc = 0x206a58u;
}
