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

// Function: entry_0022baf4
// Address: 0x22baf4 - 0x22bb54
void entry_0022baf4_0x22baf4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0022baf4_0x22baf4");
#endif

    ctx->pc = 0x22baf4u;

    // 0x22baf4: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x22baf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x22baf8: 0x8463127e  lh          $v1, 0x127E($v1)
    ctx->pc = 0x22baf8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4734)));
    // 0x22bafc: 0x14600025  bnez        $v1, . + 4 + (0x25 << 2)
    ctx->pc = 0x22BAFCu;
    {
        const bool branch_taken_0x22bafc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x22bafc) {
            ctx->pc = 0x22BB94u;
            return;
        }
    }
    ctx->pc = 0x22BB04u;
    // 0x22bb04: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x22bb04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x22bb08: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x22bb08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22bb0c: 0xc461009c  lwc1        $f1, 0x9C($v1)
    ctx->pc = 0x22bb0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22bb10: 0x3c044348  lui         $a0, 0x4348
    ctx->pc = 0x22bb10u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17224 << 16));
    // 0x22bb14: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x22bb14u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22bb18: 0x0  nop
    ctx->pc = 0x22bb18u;
    // NOP
    // 0x22bb1c: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x22bb1cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x22bb20: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x22bb20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x22bb24: 0xc4600124  lwc1        $f0, 0x124($v1)
    ctx->pc = 0x22bb24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22bb28: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x22bb28u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22bb2c: 0x0  nop
    ctx->pc = 0x22bb2cu;
    // NOP
    // 0x22bb30: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x22BB30u;
    {
        const bool branch_taken_0x22bb30 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x22bb30) {
            ctx->pc = 0x22BB54u;
            return;
        }
    }
    ctx->pc = 0x22BB38u;
    // 0x22bb38: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x22bb38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x22bb3c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x22bb3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22bb40: 0xc4610098  lwc1        $f1, 0x98($v1)
    ctx->pc = 0x22bb40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22bb44: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x22bb44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x22bb48: 0xc4800124  lwc1        $f0, 0x124($a0)
    ctx->pc = 0x22bb48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22bb4c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x22bb4cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x22bb50: 0xe4800124  swc1        $f0, 0x124($a0)
    ctx->pc = 0x22bb50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 292), bits); }
    ctx->pc = 0x22bb54u;
}
