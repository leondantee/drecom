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

// Function: srp_id17_type00
// Address: 0x2c1700 - 0x2c1788
void srp_id17_type00_0x2c1700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("srp_id17_type00_0x2c1700");
#endif

    ctx->pc = 0x2c1700u;

    // 0x2c1700: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2c1700u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2c1704: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x2c1704u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x2c1708: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2c1708u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2c170c: 0xa0600342  sb          $zero, 0x342($v1)
    ctx->pc = 0x2c170cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 834), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c1710: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x2c1710u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2c1714: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2c1714u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2c1718: 0xa0640347  sb          $a0, 0x347($v1)
    ctx->pc = 0x2c1718u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 839), (uint8_t)GPR_U32(ctx, 4));
    // 0x2c171c: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x2c171cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2c1720: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2c1720u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2c1724: 0xa0640344  sb          $a0, 0x344($v1)
    ctx->pc = 0x2c1724u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 836), (uint8_t)GPR_U32(ctx, 4));
    // 0x2c1728: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2c1728u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c172c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2c172cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2c1730: 0xa064036d  sb          $a0, 0x36D($v1)
    ctx->pc = 0x2c1730u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 877), (uint8_t)GPR_U32(ctx, 4));
    // 0x2c1734: 0x3c0343c8  lui         $v1, 0x43C8
    ctx->pc = 0x2c1734u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17352 << 16));
    // 0x2c1738: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2c1738u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c173c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2c173cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2c1740: 0xe4600338  swc1        $f0, 0x338($v1)
    ctx->pc = 0x2c1740u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 824), bits); }
    // 0x2c1744: 0x3c034348  lui         $v1, 0x4348
    ctx->pc = 0x2c1744u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17224 << 16));
    // 0x2c1748: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2c1748u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c174c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2c174cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2c1750: 0xe460033c  swc1        $f0, 0x33C($v1)
    ctx->pc = 0x2c1750u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 828), bits); }
    // 0x2c1754: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2c1754u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2c1758: 0xa0600348  sb          $zero, 0x348($v1)
    ctx->pc = 0x2c1758u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 840), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c175c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2c175cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2c1760: 0xa0600345  sb          $zero, 0x345($v1)
    ctx->pc = 0x2c1760u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 837), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c1764: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2c1764u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c1768: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2c1768u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2c176c: 0xa064036b  sb          $a0, 0x36B($v1)
    ctx->pc = 0x2c176cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 875), (uint8_t)GPR_U32(ctx, 4));
    // 0x2c1770: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2c1770u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c1774: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2c1774u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2c1778: 0xa064036c  sb          $a0, 0x36C($v1)
    ctx->pc = 0x2c1778u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 876), (uint8_t)GPR_U32(ctx, 4));
    // 0x2c177c: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2c177cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2c1780: 0x3e00008  jr          $ra
    ctx->pc = 0x2C1780u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C1780u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C1788u;
}
