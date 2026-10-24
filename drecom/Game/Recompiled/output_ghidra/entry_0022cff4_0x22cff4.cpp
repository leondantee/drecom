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

// Function: entry_0022cff4
// Address: 0x22cff4 - 0x22d038
void entry_0022cff4_0x22cff4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0022cff4_0x22cff4");
#endif

    ctx->pc = 0x22cff4u;

    // 0x22cff4: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x22cff4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22cff8: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x22cff8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22cffc: 0xc44100a0  lwc1        $f1, 0xA0($v0)
    ctx->pc = 0x22cffcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22d000: 0xc7a00064  lwc1        $f0, 0x64($sp)
    ctx->pc = 0x22d000u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22d004: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x22d004u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22d008: 0x0  nop
    ctx->pc = 0x22d008u;
    // NOP
    // 0x22d00c: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x22D00Cu;
    {
        const bool branch_taken_0x22d00c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x22d00c) {
            ctx->pc = 0x22D038u;
            return;
        }
    }
    ctx->pc = 0x22D014u;
    // 0x22d014: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x22d014u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22d018: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x22d018u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22d01c: 0xc46100a0  lwc1        $f1, 0xA0($v1)
    ctx->pc = 0x22d01cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22d020: 0x3c023ca3  lui         $v0, 0x3CA3
    ctx->pc = 0x22d020u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15523 << 16));
    // 0x22d024: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x22d024u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x22d028: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22d028u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22d02c: 0x0  nop
    ctx->pc = 0x22d02cu;
    // NOP
    // 0x22d030: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x22d030u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x22d034: 0xe46000a0  swc1        $f0, 0xA0($v1)
    ctx->pc = 0x22d034u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 160), bits); }
    ctx->pc = 0x22d038u;
}
