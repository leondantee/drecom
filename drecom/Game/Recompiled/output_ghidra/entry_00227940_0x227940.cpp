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

// Function: entry_00227940
// Address: 0x227940 - 0x2279a0
void entry_00227940_0x227940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00227940_0x227940");
#endif

    ctx->pc = 0x227940u;

    // 0x227940: 0x8fa50088  lw          $a1, 0x88($sp)
    ctx->pc = 0x227940u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x227944: 0x84a3127e  lh          $v1, 0x127E($a1)
    ctx->pc = 0x227944u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4734)));
    // 0x227948: 0x14600025  bnez        $v1, . + 4 + (0x25 << 2)
    ctx->pc = 0x227948u;
    {
        const bool branch_taken_0x227948 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x227948) {
            ctx->pc = 0x2279E0u;
            return;
        }
    }
    ctx->pc = 0x227950u;
    // 0x227950: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x227950u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x227954: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x227954u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x227958: 0xc461009c  lwc1        $f1, 0x9C($v1)
    ctx->pc = 0x227958u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22795c: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x22795cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
    // 0x227960: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x227960u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x227964: 0x0  nop
    ctx->pc = 0x227964u;
    // NOP
    // 0x227968: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x227968u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x22796c: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x22796cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x227970: 0xc4600124  lwc1        $f0, 0x124($v1)
    ctx->pc = 0x227970u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x227974: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x227974u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x227978: 0x0  nop
    ctx->pc = 0x227978u;
    // NOP
    // 0x22797c: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x22797Cu;
    {
        const bool branch_taken_0x22797c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x22797c) {
            ctx->pc = 0x2279A0u;
            return;
        }
    }
    ctx->pc = 0x227984u;
    // 0x227984: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x227984u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x227988: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x227988u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22798c: 0xc4610098  lwc1        $f1, 0x98($v1)
    ctx->pc = 0x22798cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x227990: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x227990u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x227994: 0xc4600124  lwc1        $f0, 0x124($v1)
    ctx->pc = 0x227994u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x227998: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x227998u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x22799c: 0xe4600124  swc1        $f0, 0x124($v1)
    ctx->pc = 0x22799cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 292), bits); }
    ctx->pc = 0x2279a0u;
}
