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

// Function: entry_0028cbac
// Address: 0x28cbac - 0x28cbdc
void entry_0028cbac_0x28cbac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0028cbac_0x28cbac");
#endif

    ctx->pc = 0x28cbacu;

    // 0x28cbac: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x28cbacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28cbb0: 0xa2065e04  sb          $a2, 0x5E04($s0)
    ctx->pc = 0x28cbb0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 24068), (uint8_t)GPR_U32(ctx, 6));
    // 0x28cbb4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x28cbb4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28cbb8: 0x0  nop
    ctx->pc = 0x28cbb8u;
    // NOP
    // 0x28cbbc: 0xe6005e00  swc1        $f0, 0x5E00($s0)
    ctx->pc = 0x28cbbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24064), bits); }
    // 0x28cbc0: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x28cbc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x28cbc4: 0x8c23c294  lw          $v1, -0x3D6C($at)
    ctx->pc = 0x28cbc4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5FC294u));
    // 0x28cbc8: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x28CBC8u;
    {
        const bool branch_taken_0x28cbc8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x28cbc8) {
            ctx->pc = 0x28CBDCu;
            return;
        }
    }
    ctx->pc = 0x28CBD0u;
    // 0x28cbd0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x28cbd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28cbd4: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28cbd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28cbd8: 0xac2520e0  sw          $a1, 0x20E0($at)
    ctx->pc = 0x28cbd8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x6220E0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6220E0u, _value); } while (0);
    ctx->pc = 0x28cbdcu;
}
