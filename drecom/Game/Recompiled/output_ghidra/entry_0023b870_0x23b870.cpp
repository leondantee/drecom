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

// Function: entry_0023b870
// Address: 0x23b870 - 0x23b8c8
void entry_0023b870_0x23b870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0023b870_0x23b870");
#endif

    ctx->pc = 0x23b870u;

    // 0x23b870: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x23b870u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x23b874: 0x24851330  addiu       $a1, $a0, 0x1330
    ctx->pc = 0x23b874u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x23b878: 0xc4a1000c  lwc1        $f1, 0xC($a1)
    ctx->pc = 0x23b878u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23b87c: 0x3c043cc9  lui         $a0, 0x3CC9
    ctx->pc = 0x23b87cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15561 << 16));
    // 0x23b880: 0x34830fdb  ori         $v1, $a0, 0xFDB
    ctx->pc = 0x23b880u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4059);
    // 0x23b884: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x23b884u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23b888: 0x0  nop
    ctx->pc = 0x23b888u;
    // NOP
    // 0x23b88c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x23b88cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x23b890: 0xe4a0000c  swc1        $f0, 0xC($a1)
    ctx->pc = 0x23b890u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
    // 0x23b894: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x23b894u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x23b898: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x23b898u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x23b89c: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x23b89cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23b8a0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23b8a0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23b8a4: 0x0  nop
    ctx->pc = 0x23b8a4u;
    // NOP
    // 0x23b8a8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x23b8a8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23b8ac: 0x0  nop
    ctx->pc = 0x23b8acu;
    // NOP
    // 0x23b8b0: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x23B8B0u;
    {
        const bool branch_taken_0x23b8b0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x23b8b0) {
            ctx->pc = 0x23B8C8u;
            return;
        }
    }
    ctx->pc = 0x23B8B8u;
    // 0x23b8b8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23b8b8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23b8bc: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x23b8bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x23b8c0: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x23b8c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x23b8c4: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x23b8c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    ctx->pc = 0x23b8c8u;
}
