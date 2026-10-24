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

// Function: entry_001f0c24
// Address: 0x1f0c24 - 0x1f0c7c
void entry_001f0c24_0x1f0c24(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f0c24_0x1f0c24");
#endif

    ctx->pc = 0x1f0c24u;

    // 0x1f0c24: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x1f0c24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1f0c28: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x1f0c28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f0c2c: 0xc481000c  lwc1        $f1, 0xC($a0)
    ctx->pc = 0x1f0c2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f0c30: 0x3c033cc9  lui         $v1, 0x3CC9
    ctx->pc = 0x1f0c30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15561 << 16));
    // 0x1f0c34: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x1f0c34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x1f0c38: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1f0c38u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f0c3c: 0x0  nop
    ctx->pc = 0x1f0c3cu;
    // NOP
    // 0x1f0c40: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1f0c40u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1f0c44: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x1f0c44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x1f0c48: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x1f0c48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1f0c4c: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x1f0c4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f0c50: 0xc481000c  lwc1        $f1, 0xC($a0)
    ctx->pc = 0x1f0c50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f0c54: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f0c54u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f0c58: 0x0  nop
    ctx->pc = 0x1f0c58u;
    // NOP
    // 0x1f0c5c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1f0c5cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f0c60: 0x0  nop
    ctx->pc = 0x1f0c60u;
    // NOP
    // 0x1f0c64: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x1F0C64u;
    {
        const bool branch_taken_0x1f0c64 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f0c64) {
            ctx->pc = 0x1F0C7Cu;
            return;
        }
    }
    ctx->pc = 0x1F0C6Cu;
    // 0x1f0c6c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f0c6cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f0c70: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x1f0c70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1f0c74: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f0c74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f0c78: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x1f0c78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    ctx->pc = 0x1f0c7cu;
}
