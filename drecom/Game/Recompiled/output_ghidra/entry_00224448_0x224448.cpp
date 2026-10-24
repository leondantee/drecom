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

// Function: entry_00224448
// Address: 0x224448 - 0x22448c
void entry_00224448_0x224448(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00224448_0x224448");
#endif

    ctx->pc = 0x224448u;

    // 0x224448: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x224448u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x22444c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x22444cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x224450: 0xc4410010  lwc1        $f1, 0x10($v0)
    ctx->pc = 0x224450u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x224454: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x224454u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x224458: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x224458u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22445c: 0x0  nop
    ctx->pc = 0x22445cu;
    // NOP
    // 0x224460: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x224460u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x224464: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x224464u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x224468: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x224468u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22446c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x22446cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x224470: 0x0  nop
    ctx->pc = 0x224470u;
    // NOP
    // 0x224474: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x224474u;
    {
        const bool branch_taken_0x224474 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x224474) {
            ctx->pc = 0x22448Cu;
            return;
        }
    }
    ctx->pc = 0x22447Cu;
    // 0x22447c: 0x3c02c0a0  lui         $v0, 0xC0A0
    ctx->pc = 0x22447cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49312 << 16));
    // 0x224480: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x224480u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x224484: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x224484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x224488: 0xe4400184  swc1        $f0, 0x184($v0)
    ctx->pc = 0x224488u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 388), bits); }
    ctx->pc = 0x22448cu;
}
