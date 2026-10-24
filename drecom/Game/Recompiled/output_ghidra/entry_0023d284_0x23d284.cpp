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

// Function: entry_0023d284
// Address: 0x23d284 - 0x23d2f8
void entry_0023d284_0x23d284(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0023d284_0x23d284");
#endif

    ctx->pc = 0x23d284u;

    // 0x23d284: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x23d284u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x23d288: 0xc4410184  lwc1        $f1, 0x184($v0)
    ctx->pc = 0x23d288u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23d28c: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x23d28cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x23d290: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x23d290u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23d294: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x23d294u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x23d298: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x23d298u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x23d29c: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x23d29cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x23d2a0: 0xc4610184  lwc1        $f1, 0x184($v1)
    ctx->pc = 0x23d2a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23d2a4: 0x3c023f33  lui         $v0, 0x3F33
    ctx->pc = 0x23d2a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16179 << 16));
    // 0x23d2a8: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x23d2a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
    // 0x23d2ac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23d2acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23d2b0: 0x0  nop
    ctx->pc = 0x23d2b0u;
    // NOP
    // 0x23d2b4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x23d2b4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x23d2b8: 0xe4600184  swc1        $f0, 0x184($v1)
    ctx->pc = 0x23d2b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 388), bits); }
    // 0x23d2bc: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x23d2bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x23d2c0: 0xc4410184  lwc1        $f1, 0x184($v0)
    ctx->pc = 0x23d2c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23d2c4: 0x3c024170  lui         $v0, 0x4170
    ctx->pc = 0x23d2c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16752 << 16));
    // 0x23d2c8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23d2c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23d2cc: 0x0  nop
    ctx->pc = 0x23d2ccu;
    // NOP
    // 0x23d2d0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x23d2d0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23d2d4: 0x0  nop
    ctx->pc = 0x23d2d4u;
    // NOP
    // 0x23d2d8: 0x4501018a  bc1t        . + 4 + (0x18A << 2)
    ctx->pc = 0x23D2D8u;
    {
        const bool branch_taken_0x23d2d8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x23d2d8) {
            ctx->pc = 0x23D904u;
            return;
        }
    }
    ctx->pc = 0x23D2E0u;
    // 0x23d2e0: 0x3c044170  lui         $a0, 0x4170
    ctx->pc = 0x23d2e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16752 << 16));
    // 0x23d2e4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x23d2e4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23d2e8: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x23d2e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x23d2ec: 0xe4400184  swc1        $f0, 0x184($v0)
    ctx->pc = 0x23d2ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 388), bits); }
    // 0x23d2f0: 0x10000184  b           . + 4 + (0x184 << 2)
    ctx->pc = 0x23D2F0u;
    {
        const bool branch_taken_0x23d2f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23d2f0) {
            ctx->pc = 0x23D904u;
            return;
        }
    }
    ctx->pc = 0x23D2F8u;
}
