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

// Function: entry_002244d0
// Address: 0x2244d0 - 0x224514
void entry_002244d0_0x2244d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002244d0_0x2244d0");
#endif

    ctx->pc = 0x2244d0u;

    // 0x2244d0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2244d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2244d4: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2244d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2244d8: 0xc4410010  lwc1        $f1, 0x10($v0)
    ctx->pc = 0x2244d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2244dc: 0x3c024448  lui         $v0, 0x4448
    ctx->pc = 0x2244dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17480 << 16));
    // 0x2244e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2244e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2244e4: 0x0  nop
    ctx->pc = 0x2244e4u;
    // NOP
    // 0x2244e8: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x2244e8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2244ec: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2244ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2244f0: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x2244f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2244f4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2244f4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2244f8: 0x0  nop
    ctx->pc = 0x2244f8u;
    // NOP
    // 0x2244fc: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x2244FCu;
    {
        const bool branch_taken_0x2244fc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2244fc) {
            ctx->pc = 0x224514u;
            return;
        }
    }
    ctx->pc = 0x224504u;
    // 0x224504: 0x3c02c120  lui         $v0, 0xC120
    ctx->pc = 0x224504u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49440 << 16));
    // 0x224508: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x224508u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22450c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x22450cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x224510: 0xe4400184  swc1        $f0, 0x184($v0)
    ctx->pc = 0x224510u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 388), bits); }
    ctx->pc = 0x224514u;
}
