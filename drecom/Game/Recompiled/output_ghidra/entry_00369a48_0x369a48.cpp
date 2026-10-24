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

// Function: entry_00369a48
// Address: 0x369a48 - 0x369abc
void entry_00369a48_0x369a48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00369a48_0x369a48");
#endif

    ctx->pc = 0x369a48u;

    // 0x369a48: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x369a48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x369a4c: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x369a4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x369a50: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x369a50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x369a54: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x369a54u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x369a58: 0x0  nop
    ctx->pc = 0x369a58u;
    // NOP
    // 0x369a5c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x369a5cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x369a60: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x369a60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x369a64: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x369a64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x369a68: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x369a68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x369a6c: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x369a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x369a70: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x369a70u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x369a74: 0x0  nop
    ctx->pc = 0x369a74u;
    // NOP
    // 0x369a78: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x369a78u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x369a7c: 0x0  nop
    ctx->pc = 0x369a7cu;
    // NOP
    // 0x369a80: 0x4501013e  bc1t        . + 4 + (0x13E << 2)
    ctx->pc = 0x369A80u;
    {
        const bool branch_taken_0x369a80 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x369a80) {
            ctx->pc = 0x369F7Cu;
            return;
        }
    }
    ctx->pc = 0x369A88u;
    // 0x369a88: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x369a88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x369a8c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x369a8cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x369a90: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x369a90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x369a94: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x369a94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x369a98: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x369a98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x369a9c: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x369a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x369aa0: 0xa4640014  sh          $a0, 0x14($v1)
    ctx->pc = 0x369aa0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 20), (uint16_t)GPR_U32(ctx, 4));
    // 0x369aa4: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x369aa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x369aa8: 0x90830012  lbu         $v1, 0x12($a0)
    ctx->pc = 0x369aa8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 18)));
    // 0x369aac: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x369aacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x369ab0: 0xa0830012  sb          $v1, 0x12($a0)
    ctx->pc = 0x369ab0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 18), (uint8_t)GPR_U32(ctx, 3));
    // 0x369ab4: 0x10000131  b           . + 4 + (0x131 << 2)
    ctx->pc = 0x369AB4u;
    {
        const bool branch_taken_0x369ab4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x369ab4) {
            ctx->pc = 0x369F7Cu;
            return;
        }
    }
    ctx->pc = 0x369ABCu;
}
