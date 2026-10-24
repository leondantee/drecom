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

// Function: entry_0027de08
// Address: 0x27de08 - 0x27de80
void entry_0027de08_0x27de08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0027de08_0x27de08");
#endif

    ctx->pc = 0x27de08u;

    // 0x27de08: 0xc6010124  lwc1        $f1, 0x124($s0)
    ctx->pc = 0x27de08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27de0c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x27de0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x27de10: 0xc4201b50  lwc1        $f0, 0x1B50($at)
    ctx->pc = 0x27de10u;
    { uint32_t bits = FAST_READ32(0x621B50u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27de14: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x27de14u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x27de18: 0xe6000124  swc1        $f0, 0x124($s0)
    ctx->pc = 0x27de18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 292), bits); }
    // 0x27de1c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x27de1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x27de20: 0x84221b4e  lh          $v0, 0x1B4E($at)
    ctx->pc = 0x27de20u;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x621B4Eu));
    // 0x27de24: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x27de24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x27de28: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x27de28u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x27de2c: 0x18400022  blez        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x27DE2Cu;
    {
        const bool branch_taken_0x27de2c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x27de2c) {
            ctx->pc = 0x27DEB8u;
            return;
        }
    }
    ctx->pc = 0x27DE34u;
    // 0x27de34: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x27de34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x27de38: 0x84221b4e  lh          $v0, 0x1B4E($at)
    ctx->pc = 0x27de38u;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x621B4Eu));
    // 0x27de3c: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x27de3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x27de40: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x27de40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x27de44: 0xa4221b4e  sh          $v0, 0x1B4E($at)
    ctx->pc = 0x27de44u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x621B4Eu, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x621B4Eu, _value); } while (0);
    // 0x27de48: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x27de48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x27de4c: 0x84221b4e  lh          $v0, 0x1B4E($at)
    ctx->pc = 0x27de4cu;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x621B4Eu));
    // 0x27de50: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x27de50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x27de54: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x27de54u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x27de58: 0x1c400009  bgtz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x27DE58u;
    {
        const bool branch_taken_0x27de58 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x27de58) {
            ctx->pc = 0x27DE80u;
            return;
        }
    }
    ctx->pc = 0x27DE60u;
    // 0x27de60: 0x2402fe20  addiu       $v0, $zero, -0x1E0
    ctx->pc = 0x27de60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966816));
    // 0x27de64: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x27de64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x27de68: 0xa4221b4e  sh          $v0, 0x1B4E($at)
    ctx->pc = 0x27de68u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x621B4Eu, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x621B4Eu, _value); } while (0);
    // 0x27de6c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x27de6cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27de70: 0x0  nop
    ctx->pc = 0x27de70u;
    // NOP
    // 0x27de74: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x27de74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x27de78: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x27DE78u;
    {
        const bool branch_taken_0x27de78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27de78) {
            ctx->pc = 0x27DF3Cu;
            return;
        }
    }
    ctx->pc = 0x27DE80u;
}
