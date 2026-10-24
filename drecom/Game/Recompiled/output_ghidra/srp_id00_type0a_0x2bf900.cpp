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

// Function: srp_id00_type0a
// Address: 0x2bf900 - 0x2bf9a4
void srp_id00_type0a_0x2bf900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("srp_id00_type0a_0x2bf900");
#endif

    ctx->pc = 0x2bf900u;

    // 0x2bf900: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2bf900u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2bf904: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x2bf904u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x2bf908: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2bf908u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2bf90c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2bf90cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2bf910: 0xa064036b  sb          $a0, 0x36B($v1)
    ctx->pc = 0x2bf910u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 875), (uint8_t)GPR_U32(ctx, 4));
    // 0x2bf914: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2bf914u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2bf918: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2bf918u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2bf91c: 0xa064036c  sb          $a0, 0x36C($v1)
    ctx->pc = 0x2bf91cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 876), (uint8_t)GPR_U32(ctx, 4));
    // 0x2bf920: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x2bf920u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x2bf924: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2bf924u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2bf928: 0xa0640344  sb          $a0, 0x344($v1)
    ctx->pc = 0x2bf928u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 836), (uint8_t)GPR_U32(ctx, 4));
    // 0x2bf92c: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x2bf92cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2bf930: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2bf930u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2bf934: 0xa0640347  sb          $a0, 0x347($v1)
    ctx->pc = 0x2bf934u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 839), (uint8_t)GPR_U32(ctx, 4));
    // 0x2bf938: 0x3c034416  lui         $v1, 0x4416
    ctx->pc = 0x2bf938u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17430 << 16));
    // 0x2bf93c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2bf93cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bf940: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2bf940u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2bf944: 0xe4600338  swc1        $f0, 0x338($v1)
    ctx->pc = 0x2bf944u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 824), bits); }
    // 0x2bf948: 0x3c0341a0  lui         $v1, 0x41A0
    ctx->pc = 0x2bf948u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16800 << 16));
    // 0x2bf94c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2bf94cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bf950: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2bf950u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2bf954: 0xe460033c  swc1        $f0, 0x33C($v1)
    ctx->pc = 0x2bf954u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 828), bits); }
    // 0x2bf958: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x2bf958u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x2bf95c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2bf95cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bf960: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2bf960u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2bf964: 0xe46002d0  swc1        $f0, 0x2D0($v1)
    ctx->pc = 0x2bf964u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 720), bits); }
    // 0x2bf968: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x2bf968u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x2bf96c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2bf96cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bf970: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2bf970u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2bf974: 0xe46002d4  swc1        $f0, 0x2D4($v1)
    ctx->pc = 0x2bf974u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 724), bits); }
    // 0x2bf978: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x2bf978u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x2bf97c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2bf97cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bf980: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2bf980u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2bf984: 0xe46002d8  swc1        $f0, 0x2D8($v1)
    ctx->pc = 0x2bf984u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 728), bits); }
    // 0x2bf988: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x2bf988u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x2bf98c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2bf98cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bf990: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2bf990u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2bf994: 0xe46002dc  swc1        $f0, 0x2DC($v1)
    ctx->pc = 0x2bf994u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 732), bits); }
    // 0x2bf998: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2bf998u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2bf99c: 0x3e00008  jr          $ra
    ctx->pc = 0x2BF99Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BF99Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BF9A4u;
}
