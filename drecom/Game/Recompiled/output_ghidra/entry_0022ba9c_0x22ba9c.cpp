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

// Function: entry_0022ba9c
// Address: 0x22ba9c - 0x22baf4
void entry_0022ba9c_0x22ba9c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0022ba9c_0x22ba9c");
#endif

    ctx->pc = 0x22ba9cu;

    // 0x22ba9c: 0x8fa500b8  lw          $a1, 0xB8($sp)
    ctx->pc = 0x22ba9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x22baa0: 0x24a41330  addiu       $a0, $a1, 0x1330
    ctx->pc = 0x22baa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4912));
    // 0x22baa4: 0xc481000c  lwc1        $f1, 0xC($a0)
    ctx->pc = 0x22baa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22baa8: 0x3c033cc9  lui         $v1, 0x3CC9
    ctx->pc = 0x22baa8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15561 << 16));
    // 0x22baac: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x22baacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x22bab0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x22bab0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22bab4: 0x0  nop
    ctx->pc = 0x22bab4u;
    // NOP
    // 0x22bab8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x22bab8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x22babc: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x22babcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x22bac0: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x22bac0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x22bac4: 0x24651330  addiu       $a1, $v1, 0x1330
    ctx->pc = 0x22bac4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22bac8: 0xc4a1000c  lwc1        $f1, 0xC($a1)
    ctx->pc = 0x22bac8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22bacc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22baccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22bad0: 0x0  nop
    ctx->pc = 0x22bad0u;
    // NOP
    // 0x22bad4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x22bad4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22bad8: 0x0  nop
    ctx->pc = 0x22bad8u;
    // NOP
    // 0x22badc: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x22BADCu;
    {
        const bool branch_taken_0x22badc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x22badc) {
            ctx->pc = 0x22BAF4u;
            return;
        }
    }
    ctx->pc = 0x22BAE4u;
    // 0x22bae4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22bae4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22bae8: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x22bae8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x22baec: 0x24831330  addiu       $v1, $a0, 0x1330
    ctx->pc = 0x22baecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x22baf0: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x22baf0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    ctx->pc = 0x22baf4u;
}
