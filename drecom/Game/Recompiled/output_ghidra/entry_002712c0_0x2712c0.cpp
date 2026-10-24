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

// Function: entry_002712c0
// Address: 0x2712c0 - 0x27139c
void entry_002712c0_0x2712c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002712c0_0x2712c0");
#endif

    ctx->pc = 0x2712c0u;

    // 0x2712c0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2712c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2712c4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2712c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2712c8: 0xa022d411  sb          $v0, -0x2BEF($at)
    ctx->pc = 0x2712c8u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5CD411u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5CD411u, _value); } while (0);
    // 0x2712cc: 0x24020091  addiu       $v0, $zero, 0x91
    ctx->pc = 0x2712ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 145));
    // 0x2712d0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2712d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2712d4: 0xa022d413  sb          $v0, -0x2BED($at)
    ctx->pc = 0x2712d4u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5CD413u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5CD413u, _value); } while (0);
    // 0x2712d8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2712d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2712dc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2712dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2712e0: 0xa422d418  sh          $v0, -0x2BE8($at)
    ctx->pc = 0x2712e0u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5CD418u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x5CD418u, _value); } while (0);
    // 0x2712e4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2712e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2712e8: 0xa420d41a  sh          $zero, -0x2BE6($at)
    ctx->pc = 0x2712e8u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x5CD41Au, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x5CD41Au, _value); } while (0);
    // 0x2712ec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2712ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2712f0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2712f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2712f4: 0xa422d41c  sh          $v0, -0x2BE4($at)
    ctx->pc = 0x2712f4u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5CD41Cu, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x5CD41Cu, _value); } while (0);
    // 0x2712f8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2712f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2712fc: 0xa420d41e  sh          $zero, -0x2BE2($at)
    ctx->pc = 0x2712fcu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x5CD41Eu, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x5CD41Eu, _value); } while (0);
    // 0x271300: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x271300u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x271304: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x271304u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x271308: 0xa022d551  sb          $v0, -0x2AAF($at)
    ctx->pc = 0x271308u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5CD551u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5CD551u, _value); } while (0);
    // 0x27130c: 0x24020091  addiu       $v0, $zero, 0x91
    ctx->pc = 0x27130cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 145));
    // 0x271310: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x271310u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x271314: 0xa022d553  sb          $v0, -0x2AAD($at)
    ctx->pc = 0x271314u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5CD553u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5CD553u, _value); } while (0);
    // 0x271318: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x271318u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x27131c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x27131cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x271320: 0xa422d558  sh          $v0, -0x2AA8($at)
    ctx->pc = 0x271320u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5CD558u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x5CD558u, _value); } while (0);
    // 0x271324: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x271324u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x271328: 0xa420d55a  sh          $zero, -0x2AA6($at)
    ctx->pc = 0x271328u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x5CD55Au, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x5CD55Au, _value); } while (0);
    // 0x27132c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27132cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x271330: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x271330u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x271334: 0xa422d55c  sh          $v0, -0x2AA4($at)
    ctx->pc = 0x271334u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5CD55Cu, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x5CD55Cu, _value); } while (0);
    // 0x271338: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x271338u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x27133c: 0xa420d55e  sh          $zero, -0x2AA2($at)
    ctx->pc = 0x27133cu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x5CD55Eu, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x5CD55Eu, _value); } while (0);
    // 0x271340: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x271340u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x271344: 0xac20fd58  sw          $zero, -0x2A8($at)
    ctx->pc = 0x271344u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x61FD58u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x61FD58u, _value); } while (0);
    // 0x271348: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x271348u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x27134c: 0xac20fd68  sw          $zero, -0x298($at)
    ctx->pc = 0x27134cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x61FD68u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x61FD68u, _value); } while (0);
    // 0x271350: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x271350u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x271354: 0x8c22fd60  lw          $v0, -0x2A0($at)
    ctx->pc = 0x271354u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x61FD60u));
    // 0x271358: 0x1440002b  bnez        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x271358u;
    {
        const bool branch_taken_0x271358 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x271358) {
            ctx->pc = 0x271408u;
            return;
        }
    }
    ctx->pc = 0x271360u;
    // 0x271360: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x271360u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x271364: 0xc421dce4  lwc1        $f1, -0x231C($at)
    ctx->pc = 0x271364u;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x271368: 0x3c0245b8  lui         $v0, 0x45B8
    ctx->pc = 0x271368u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17848 << 16));
    // 0x27136c: 0x34426000  ori         $v0, $v0, 0x6000
    ctx->pc = 0x27136cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)24576);
    // 0x271370: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x271370u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x271374: 0x0  nop
    ctx->pc = 0x271374u;
    // NOP
    // 0x271378: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x271378u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27137c: 0x0  nop
    ctx->pc = 0x27137cu;
    // NOP
    // 0x271380: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x271380u;
    {
        const bool branch_taken_0x271380 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x271380) {
            ctx->pc = 0x27139Cu;
            return;
        }
    }
    ctx->pc = 0x271388u;
    // 0x271388: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x271388u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x27138c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x27138cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x271390: 0xac22fd60  sw          $v0, -0x2A0($at)
    ctx->pc = 0x271390u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x61FD60u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x61FD60u, _value); } while (0);
    // 0x271394: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x271394u;
    {
        const bool branch_taken_0x271394 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x271394) {
            ctx->pc = 0x271408u;
            return;
        }
    }
    ctx->pc = 0x27139Cu;
}
