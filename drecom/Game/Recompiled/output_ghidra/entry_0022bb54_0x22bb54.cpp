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

// Function: entry_0022bb54
// Address: 0x22bb54 - 0x22bb94
void entry_0022bb54_0x22bb54(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0022bb54_0x22bb54");
#endif

    ctx->pc = 0x22bb54u;

    // 0x22bb54: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x22bb54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x22bb58: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x22bb58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22bb5c: 0xc481009c  lwc1        $f1, 0x9C($a0)
    ctx->pc = 0x22bb5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22bb60: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x22bb60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x22bb64: 0xc4600124  lwc1        $f0, 0x124($v1)
    ctx->pc = 0x22bb64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22bb68: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x22bb68u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22bb6c: 0x0  nop
    ctx->pc = 0x22bb6cu;
    // NOP
    // 0x22bb70: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x22BB70u;
    {
        const bool branch_taken_0x22bb70 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x22bb70) {
            ctx->pc = 0x22BB94u;
            return;
        }
    }
    ctx->pc = 0x22BB78u;
    // 0x22bb78: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x22bb78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x22bb7c: 0x24831330  addiu       $v1, $a0, 0x1330
    ctx->pc = 0x22bb7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x22bb80: 0xc4610098  lwc1        $f1, 0x98($v1)
    ctx->pc = 0x22bb80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22bb84: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x22bb84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x22bb88: 0xc4800124  lwc1        $f0, 0x124($a0)
    ctx->pc = 0x22bb88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22bb8c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x22bb8cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x22bb90: 0xe4800124  swc1        $f0, 0x124($a0)
    ctx->pc = 0x22bb90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 292), bits); }
    ctx->pc = 0x22bb94u;
}
