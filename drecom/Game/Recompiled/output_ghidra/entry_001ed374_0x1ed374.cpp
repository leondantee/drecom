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

// Function: entry_001ed374
// Address: 0x1ed374 - 0x1ed470
void entry_001ed374_0x1ed374(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ed374_0x1ed374");
#endif

    ctx->pc = 0x1ed374u;

    // 0x1ed374: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ed374u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ed378: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1ed378u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1ed37c: 0x8c630054  lw          $v1, 0x54($v1)
    ctx->pc = 0x1ed37cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
    // 0x1ed380: 0x1060003b  beqz        $v1, . + 4 + (0x3B << 2)
    ctx->pc = 0x1ED380u;
    {
        const bool branch_taken_0x1ed380 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ed380) {
            ctx->pc = 0x1ED470u;
            return;
        }
    }
    ctx->pc = 0x1ED388u;
    // 0x1ed388: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ed388u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ed38c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1ed38cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1ed390: 0x84630076  lh          $v1, 0x76($v1)
    ctx->pc = 0x1ed390u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 118)));
    // 0x1ed394: 0x14600036  bnez        $v1, . + 4 + (0x36 << 2)
    ctx->pc = 0x1ED394u;
    {
        const bool branch_taken_0x1ed394 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ed394) {
            ctx->pc = 0x1ED470u;
            return;
        }
    }
    ctx->pc = 0x1ED39Cu;
    // 0x1ed39c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1ed39cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ed3a0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ed3a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ed3a4: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1ed3a4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x1ed3a8: 0x24030011  addiu       $v1, $zero, 0x11
    ctx->pc = 0x1ed3a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x1ed3ac: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1ed3acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ed3b0: 0xa0830001  sb          $v1, 0x1($a0)
    ctx->pc = 0x1ed3b0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x1ed3b4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ed3b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ed3b8: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x1ed3b8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ed3bc: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1ed3bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ed3c0: 0xa0800003  sb          $zero, 0x3($a0)
    ctx->pc = 0x1ed3c0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ed3c4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ed3c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ed3c8: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1ed3c8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x1ed3cc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1ed3ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1ed3d0: 0x8c241a58  lw          $a0, 0x1A58($at)
    ctx->pc = 0x1ed3d0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1A58u));
    // 0x1ed3d4: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x1ed3d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x1ed3d8: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1ed3d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1ed3dc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1ed3dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1ed3e0: 0xac231a58  sw          $v1, 0x1A58($at)
    ctx->pc = 0x1ed3e0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D1A58u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A58u, _value); } while (0);
    // 0x1ed3e4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1ed3e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1ed3e8: 0x8c241a58  lw          $a0, 0x1A58($at)
    ctx->pc = 0x1ed3e8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1A58u));
    // 0x1ed3ec: 0x2403bfff  addiu       $v1, $zero, -0x4001
    ctx->pc = 0x1ed3ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294950911));
    // 0x1ed3f0: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1ed3f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1ed3f4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1ed3f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1ed3f8: 0xac231a58  sw          $v1, 0x1A58($at)
    ctx->pc = 0x1ed3f8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D1A58u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A58u, _value); } while (0);
    // 0x1ed3fc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ed3fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ed400: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1ed400u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1ed404: 0x8c700054  lw          $s0, 0x54($v1)
    ctx->pc = 0x1ed404u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
    // 0x1ed408: 0x240401a4  addiu       $a0, $zero, 0x1A4
    ctx->pc = 0x1ed408u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 420));
    // 0x1ed40c: 0x26031330  addiu       $v1, $s0, 0x1330
    ctx->pc = 0x1ed40cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4912));
    // 0x1ed410: 0xa4640078  sh          $a0, 0x78($v1)
    ctx->pc = 0x1ed410u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 120), (uint16_t)GPR_U32(ctx, 4));
    // 0x1ed414: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ed414u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ed418: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1ed418u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1ed41c: 0x8c700054  lw          $s0, 0x54($v1)
    ctx->pc = 0x1ed41cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
    // 0x1ed420: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ed420u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ed424: 0x846310a6  lh          $v1, 0x10A6($v1)
    ctx->pc = 0x1ed424u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4262)));
    // 0x1ed428: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x1ed428u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1ed42c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1ed42cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1ed430: 0x2861012d  slti        $at, $v1, 0x12D
    ctx->pc = 0x1ed430u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)301) ? 1 : 0);
    // 0x1ed434: 0x1420000e  bnez        $at, . + 4 + (0xE << 2)
    ctx->pc = 0x1ED434u;
    {
        const bool branch_taken_0x1ed434 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ed434) {
            ctx->pc = 0x1ED470u;
            return;
        }
    }
    ctx->pc = 0x1ED43Cu;
    // 0x1ed43c: 0x860310a6  lh          $v1, 0x10A6($s0)
    ctx->pc = 0x1ed43cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4262)));
    // 0x1ed440: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x1ed440u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1ed444: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1ed444u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1ed448: 0x28610258  slti        $at, $v1, 0x258
    ctx->pc = 0x1ed448u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)600) ? 1 : 0);
    // 0x1ed44c: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x1ED44Cu;
    {
        const bool branch_taken_0x1ed44c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ed44c) {
            ctx->pc = 0x1ED470u;
            return;
        }
    }
    ctx->pc = 0x1ED454u;
    // 0x1ed454: 0x860310a6  lh          $v1, 0x10A6($s0)
    ctx->pc = 0x1ed454u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4262)));
    // 0x1ed458: 0x24650064  addiu       $a1, $v1, 0x64
    ctx->pc = 0x1ed458u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 100));
    // 0x1ed45c: 0xa60510a6  sh          $a1, 0x10A6($s0)
    ctx->pc = 0x1ed45cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4262), (uint16_t)GPR_U32(ctx, 5));
    // 0x1ed460: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1ed460u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ed464: 0x848310a6  lh          $v1, 0x10A6($a0)
    ctx->pc = 0x1ed464u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4262)));
    // 0x1ed468: 0x2463ff9c  addiu       $v1, $v1, -0x64
    ctx->pc = 0x1ed468u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967196));
    // 0x1ed46c: 0xa48310a6  sh          $v1, 0x10A6($a0)
    ctx->pc = 0x1ed46cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4262), (uint16_t)GPR_U32(ctx, 3));
    ctx->pc = 0x1ed470u;
}
