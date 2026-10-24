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

// Function: entry_0026aa00
// Address: 0x26aa00 - 0x26aa5c
void entry_0026aa00_0x26aa00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0026aa00_0x26aa00");
#endif

    ctx->pc = 0x26aa00u;

    // 0x26aa00: 0xc6011b50  lwc1        $f1, 0x1B50($s0)
    ctx->pc = 0x26aa00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26aa04: 0x3c023a83  lui         $v0, 0x3A83
    ctx->pc = 0x26aa04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14979 << 16));
    // 0x26aa08: 0x3442126f  ori         $v0, $v0, 0x126F
    ctx->pc = 0x26aa08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4719);
    // 0x26aa0c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x26aa0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26aa10: 0x0  nop
    ctx->pc = 0x26aa10u;
    // NOP
    // 0x26aa14: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x26aa14u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x26aa18: 0xe6001b50  swc1        $f0, 0x1B50($s0)
    ctx->pc = 0x26aa18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 6992), bits); }
    // 0x26aa1c: 0xc6011b50  lwc1        $f1, 0x1B50($s0)
    ctx->pc = 0x26aa1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26aa20: 0x3c023ccc  lui         $v0, 0x3CCC
    ctx->pc = 0x26aa20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15564 << 16));
    // 0x26aa24: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x26aa24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x26aa28: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x26aa28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26aa2c: 0x0  nop
    ctx->pc = 0x26aa2cu;
    // NOP
    // 0x26aa30: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x26aa30u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26aa34: 0x0  nop
    ctx->pc = 0x26aa34u;
    // NOP
    // 0x26aa38: 0x45010046  bc1t        . + 4 + (0x46 << 2)
    ctx->pc = 0x26AA38u;
    {
        const bool branch_taken_0x26aa38 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x26aa38) {
            ctx->pc = 0x26AB54u;
            return;
        }
    }
    ctx->pc = 0x26AA40u;
    // 0x26aa40: 0x3c023ccc  lui         $v0, 0x3CCC
    ctx->pc = 0x26aa40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15564 << 16));
    // 0x26aa44: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x26aa44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x26aa48: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x26aa48u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26aa4c: 0x0  nop
    ctx->pc = 0x26aa4cu;
    // NOP
    // 0x26aa50: 0xe6001b50  swc1        $f0, 0x1B50($s0)
    ctx->pc = 0x26aa50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 6992), bits); }
    // 0x26aa54: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x26AA54u;
    {
        const bool branch_taken_0x26aa54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26aa54) {
            ctx->pc = 0x26AB54u;
            return;
        }
    }
    ctx->pc = 0x26AA5Cu;
}
