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

// Function: entry_0022c054
// Address: 0x22c054 - 0x22c0a4
void entry_0022c054_0x22c054(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0022c054_0x22c054");
#endif

    ctx->pc = 0x22c054u;

    // 0x22c054: 0x16600013  bnez        $s3, . + 4 + (0x13 << 2)
    ctx->pc = 0x22C054u;
    {
        const bool branch_taken_0x22c054 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x22c054) {
            ctx->pc = 0x22C0A4u;
            return;
        }
    }
    ctx->pc = 0x22C05Cu;
    // 0x22c05c: 0x16800011  bnez        $s4, . + 4 + (0x11 << 2)
    ctx->pc = 0x22C05Cu;
    {
        const bool branch_taken_0x22c05c = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x22c05c) {
            ctx->pc = 0x22C0A4u;
            return;
        }
    }
    ctx->pc = 0x22C064u;
    // 0x22c064: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x22c064u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x22c068: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x22c068u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22c06c: 0xc4610098  lwc1        $f1, 0x98($v1)
    ctx->pc = 0x22c06cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22c070: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x22c070u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x22c074: 0xc4600124  lwc1        $f0, 0x124($v1)
    ctx->pc = 0x22c074u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22c078: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x22c078u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22c07c: 0x0  nop
    ctx->pc = 0x22c07cu;
    // NOP
    // 0x22c080: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x22C080u;
    {
        const bool branch_taken_0x22c080 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x22c080) {
            ctx->pc = 0x22C0A4u;
            return;
        }
    }
    ctx->pc = 0x22C088u;
    // 0x22c088: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x22c088u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x22c08c: 0xc4810124  lwc1        $f1, 0x124($a0)
    ctx->pc = 0x22c08cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22c090: 0x3c0340e0  lui         $v1, 0x40E0
    ctx->pc = 0x22c090u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16608 << 16));
    // 0x22c094: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x22c094u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22c098: 0x0  nop
    ctx->pc = 0x22c098u;
    // NOP
    // 0x22c09c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x22c09cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x22c0a0: 0xe4800124  swc1        $f0, 0x124($a0)
    ctx->pc = 0x22c0a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 292), bits); }
    ctx->pc = 0x22c0a4u;
}
