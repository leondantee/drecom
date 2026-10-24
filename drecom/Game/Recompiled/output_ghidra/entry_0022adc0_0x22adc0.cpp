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

// Function: entry_0022adc0
// Address: 0x22adc0 - 0x22adf8
void entry_0022adc0_0x22adc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0022adc0_0x22adc0");
#endif

    ctx->pc = 0x22adc0u;

    // 0x22adc0: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x22adc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x22adc4: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x22adc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22adc8: 0x944200aa  lhu         $v0, 0xAA($v0)
    ctx->pc = 0x22adc8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 170)));
    // 0x22adcc: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x22adccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x22add0: 0x30440004  andi        $a0, $v0, 0x4
    ctx->pc = 0x22add0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x22add4: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x22ADD4u;
    {
        const bool branch_taken_0x22add4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x22add4) {
            ctx->pc = 0x22ADF8u;
            return;
        }
    }
    ctx->pc = 0x22ADDCu;
    // 0x22addc: 0x8fa500b8  lw          $a1, 0xB8($sp)
    ctx->pc = 0x22addcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x22ade0: 0x24a21330  addiu       $v0, $a1, 0x1330
    ctx->pc = 0x22ade0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4912));
    // 0x22ade4: 0x3c044000  lui         $a0, 0x4000
    ctx->pc = 0x22ade4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16384 << 16));
    // 0x22ade8: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x22ade8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x22adec: 0xc4400018  lwc1        $f0, 0x18($v0)
    ctx->pc = 0x22adecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22adf0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x22adf0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x22adf4: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x22adf4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    ctx->pc = 0x22adf8u;
}
