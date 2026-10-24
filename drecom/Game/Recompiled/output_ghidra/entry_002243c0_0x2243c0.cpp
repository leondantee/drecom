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

// Function: entry_002243c0
// Address: 0x2243c0 - 0x224404
void entry_002243c0_0x2243c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002243c0_0x2243c0");
#endif

    ctx->pc = 0x2243c0u;

    // 0x2243c0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2243c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2243c4: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2243c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2243c8: 0xc4410010  lwc1        $f1, 0x10($v0)
    ctx->pc = 0x2243c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2243cc: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x2243ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x2243d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2243d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2243d4: 0x0  nop
    ctx->pc = 0x2243d4u;
    // NOP
    // 0x2243d8: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x2243d8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2243dc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2243dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2243e0: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x2243e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2243e4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2243e4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2243e8: 0x0  nop
    ctx->pc = 0x2243e8u;
    // NOP
    // 0x2243ec: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x2243ECu;
    {
        const bool branch_taken_0x2243ec = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2243ec) {
            ctx->pc = 0x224404u;
            return;
        }
    }
    ctx->pc = 0x2243F4u;
    // 0x2243f4: 0x3c02c000  lui         $v0, 0xC000
    ctx->pc = 0x2243f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49152 << 16));
    // 0x2243f8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2243f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2243fc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2243fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x224400: 0xe4400184  swc1        $f0, 0x184($v0)
    ctx->pc = 0x224400u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 388), bits); }
    ctx->pc = 0x224404u;
}
