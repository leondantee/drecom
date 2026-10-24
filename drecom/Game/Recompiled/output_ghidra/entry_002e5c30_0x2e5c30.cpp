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

// Function: entry_002e5c30
// Address: 0x2e5c30 - 0x2e5c84
void entry_002e5c30_0x2e5c30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002e5c30_0x2e5c30");
#endif

    ctx->pc = 0x2e5c30u;

    // 0x2e5c30: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2e5c30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e5c34: 0xc4420124  lwc1        $f2, 0x124($v0)
    ctx->pc = 0x2e5c34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2e5c38: 0x3c02443b  lui         $v0, 0x443B
    ctx->pc = 0x2e5c38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17467 << 16));
    // 0x2e5c3c: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x2e5c3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x2e5c40: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2e5c40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e5c44: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2e5c44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2e5c48: 0xc420dce4  lwc1        $f0, -0x231C($at)
    ctx->pc = 0x2e5c48u;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e5c4c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2e5c4cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2e5c50: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x2e5c50u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e5c54: 0x0  nop
    ctx->pc = 0x2e5c54u;
    // NOP
    // 0x2e5c58: 0x4501000a  bc1t        . + 4 + (0xA << 2)
    ctx->pc = 0x2E5C58u;
    {
        const bool branch_taken_0x2e5c58 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e5c58) {
            ctx->pc = 0x2E5C84u;
            return;
        }
    }
    ctx->pc = 0x2E5C60u;
    // 0x2e5c60: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2e5c60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e5c64: 0xc4610184  lwc1        $f1, 0x184($v1)
    ctx->pc = 0x2e5c64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e5c68: 0x3c023f40  lui         $v0, 0x3F40
    ctx->pc = 0x2e5c68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16192 << 16));
    // 0x2e5c6c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e5c6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e5c70: 0x0  nop
    ctx->pc = 0x2e5c70u;
    // NOP
    // 0x2e5c74: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2e5c74u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2e5c78: 0xe4600184  swc1        $f0, 0x184($v1)
    ctx->pc = 0x2e5c78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 388), bits); }
    // 0x2e5c7c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2E5C7Cu;
    {
        const bool branch_taken_0x2e5c7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e5c7c) {
            ctx->pc = 0x2E5C90u;
            return;
        }
    }
    ctx->pc = 0x2E5C84u;
}
