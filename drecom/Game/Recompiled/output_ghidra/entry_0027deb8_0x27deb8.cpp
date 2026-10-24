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

// Function: entry_0027deb8
// Address: 0x27deb8 - 0x27df08
void entry_0027deb8_0x27deb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0027deb8_0x27deb8");
#endif

    ctx->pc = 0x27deb8u;

    // 0x27deb8: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x27deb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x27debc: 0x84221b4e  lh          $v0, 0x1B4E($at)
    ctx->pc = 0x27debcu;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x621B4Eu));
    // 0x27dec0: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x27dec0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x27dec4: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x27dec4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x27dec8: 0xa4221b4e  sh          $v0, 0x1B4E($at)
    ctx->pc = 0x27dec8u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x621B4Eu, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x621B4Eu, _value); } while (0);
    // 0x27decc: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x27deccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x27ded0: 0x84221b4e  lh          $v0, 0x1B4E($at)
    ctx->pc = 0x27ded0u;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x621B4Eu));
    // 0x27ded4: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x27ded4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x27ded8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x27ded8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x27dedc: 0x440000a  bltz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x27DEDCu;
    {
        const bool branch_taken_0x27dedc = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x27dedc) {
            ctx->pc = 0x27DF08u;
            return;
        }
    }
    ctx->pc = 0x27DEE4u;
    // 0x27dee4: 0x240201e0  addiu       $v0, $zero, 0x1E0
    ctx->pc = 0x27dee4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 480));
    // 0x27dee8: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x27dee8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x27deec: 0xa4221b4e  sh          $v0, 0x1B4E($at)
    ctx->pc = 0x27deecu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x621B4Eu, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x621B4Eu, _value); } while (0);
    // 0x27def0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x27def0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x27def4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27def4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27def8: 0x0  nop
    ctx->pc = 0x27def8u;
    // NOP
    // 0x27defc: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x27defcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x27df00: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x27DF00u;
    {
        const bool branch_taken_0x27df00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27df00) {
            ctx->pc = 0x27DF3Cu;
            return;
        }
    }
    ctx->pc = 0x27DF08u;
}
