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

// Function: entry_0022d038
// Address: 0x22d038 - 0x22d07c
void entry_0022d038_0x22d038(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0022d038_0x22d038");
#endif

    ctx->pc = 0x22d038u;

    // 0x22d038: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x22d038u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22d03c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x22d03cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22d040: 0xc44100a0  lwc1        $f1, 0xA0($v0)
    ctx->pc = 0x22d040u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22d044: 0xc7a00064  lwc1        $f0, 0x64($sp)
    ctx->pc = 0x22d044u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22d048: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x22d048u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22d04c: 0x0  nop
    ctx->pc = 0x22d04cu;
    // NOP
    // 0x22d050: 0x4501000a  bc1t        . + 4 + (0xA << 2)
    ctx->pc = 0x22D050u;
    {
        const bool branch_taken_0x22d050 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x22d050) {
            ctx->pc = 0x22D07Cu;
            return;
        }
    }
    ctx->pc = 0x22D058u;
    // 0x22d058: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x22d058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22d05c: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x22d05cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22d060: 0xc46100a0  lwc1        $f1, 0xA0($v1)
    ctx->pc = 0x22d060u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22d064: 0x3c023cf5  lui         $v0, 0x3CF5
    ctx->pc = 0x22d064u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15605 << 16));
    // 0x22d068: 0x3442c28f  ori         $v0, $v0, 0xC28F
    ctx->pc = 0x22d068u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49807);
    // 0x22d06c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22d06cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22d070: 0x0  nop
    ctx->pc = 0x22d070u;
    // NOP
    // 0x22d074: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x22d074u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x22d078: 0xe46000a0  swc1        $f0, 0xA0($v1)
    ctx->pc = 0x22d078u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 160), bits); }
    ctx->pc = 0x22d07cu;
}
