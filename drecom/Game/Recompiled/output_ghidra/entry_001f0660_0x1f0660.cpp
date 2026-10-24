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

// Function: entry_001f0660
// Address: 0x1f0660 - 0x1f06a0
void entry_001f0660_0x1f0660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f0660_0x1f0660");
#endif

    ctx->pc = 0x1f0660u;

    // 0x1f0660: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x1f0660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1f0664: 0xc4411288  lwc1        $f1, 0x1288($v0)
    ctx->pc = 0x1f0664u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f0668: 0x3c0244af  lui         $v0, 0x44AF
    ctx->pc = 0x1f0668u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17583 << 16));
    // 0x1f066c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f066cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f0670: 0x0  nop
    ctx->pc = 0x1f0670u;
    // NOP
    // 0x1f0674: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1f0674u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f0678: 0x0  nop
    ctx->pc = 0x1f0678u;
    // NOP
    // 0x1f067c: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x1F067Cu;
    {
        const bool branch_taken_0x1f067c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f067c) {
            ctx->pc = 0x1F06A0u;
            return;
        }
    }
    ctx->pc = 0x1F0684u;
    // 0x1f0684: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x1f0684u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
    // 0x1f0688: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f0688u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f068c: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x1f068cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1f0690: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1f0690u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f0694: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x1f0694u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x1f0698: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x1F0698u;
    {
        const bool branch_taken_0x1f0698 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f0698) {
            ctx->pc = 0x1F06F0u;
            return;
        }
    }
    ctx->pc = 0x1F06A0u;
}
