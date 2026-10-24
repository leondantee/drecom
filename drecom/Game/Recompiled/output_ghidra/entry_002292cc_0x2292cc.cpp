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

// Function: entry_002292cc
// Address: 0x2292cc - 0x2293d4
void entry_002292cc_0x2292cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002292cc_0x2292cc");
#endif

    ctx->pc = 0x2292ccu;

    // 0x2292cc: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2292ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2292d0: 0x8442127e  lh          $v0, 0x127E($v0)
    ctx->pc = 0x2292d0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4734)));
    // 0x2292d4: 0x144001de  bnez        $v0, . + 4 + (0x1DE << 2)
    ctx->pc = 0x2292D4u;
    {
        const bool branch_taken_0x2292d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2292d4) {
            ctx->pc = 0x229A50u;
            return;
        }
    }
    ctx->pc = 0x2292DCu;
    // 0x2292dc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2292dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2292e0: 0x8c221a58  lw          $v0, 0x1A58($at)
    ctx->pc = 0x2292e0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D1A58u));
    // 0x2292e4: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x2292e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x2292e8: 0x144001d9  bnez        $v0, . + 4 + (0x1D9 << 2)
    ctx->pc = 0x2292E8u;
    {
        const bool branch_taken_0x2292e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2292e8) {
            ctx->pc = 0x229A50u;
            return;
        }
    }
    ctx->pc = 0x2292F0u;
    // 0x2292f0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2292f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2292f4: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2292f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2292f8: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x2292f8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x2292fc: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x2292fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x229300: 0x84a4127a  lh          $a0, 0x127A($a1)
    ctx->pc = 0x229300u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4730)));
    // 0x229304: 0x24830100  addiu       $v1, $a0, 0x100
    ctx->pc = 0x229304u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 256));
    // 0x229308: 0xa4a3127a  sh          $v1, 0x127A($a1)
    ctx->pc = 0x229308u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4730), (uint16_t)GPR_U32(ctx, 3));
    // 0x22930c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x22930cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x229310: 0x8c231a58  lw          $v1, 0x1A58($at)
    ctx->pc = 0x229310u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A58u));
    // 0x229314: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x229314u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x229318: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x229318u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x22931c: 0xac231a58  sw          $v1, 0x1A58($at)
    ctx->pc = 0x22931cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D1A58u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A58u, _value); } while (0);
    // 0x229320: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x229320u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x229324: 0x24651330  addiu       $a1, $v1, 0x1330
    ctx->pc = 0x229324u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x229328: 0x8ca40030  lw          $a0, 0x30($a1)
    ctx->pc = 0x229328u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x22932c: 0x3c030004  lui         $v1, 0x4
    ctx->pc = 0x22932cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
    // 0x229330: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x229330u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x229334: 0xaca40030  sw          $a0, 0x30($a1)
    ctx->pc = 0x229334u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 48), GPR_U32(ctx, 4));
    // 0x229338: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x229338u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x22933c: 0x8463127a  lh          $v1, 0x127A($v1)
    ctx->pc = 0x22933cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4730)));
    // 0x229340: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x229340u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x229344: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x229344u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x229348: 0x31a03  sra         $v1, $v1, 8
    ctx->pc = 0x229348u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 8));
    // 0x22934c: 0x28630002  slti        $v1, $v1, 0x2
    ctx->pc = 0x22934cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x229350: 0x146001bf  bnez        $v1, . + 4 + (0x1BF << 2)
    ctx->pc = 0x229350u;
    {
        const bool branch_taken_0x229350 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x229350) {
            ctx->pc = 0x229A50u;
            return;
        }
    }
    ctx->pc = 0x229358u;
    // 0x229358: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x229358u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x22935c: 0x8c231a50  lw          $v1, 0x1A50($at)
    ctx->pc = 0x22935cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A50u));
    // 0x229360: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x229360u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x229364: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x229364u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x229368: 0xac231a50  sw          $v1, 0x1A50($at)
    ctx->pc = 0x229368u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D1A50u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A50u, _value); } while (0);
    // 0x22936c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x22936cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x229370: 0x8c241a50  lw          $a0, 0x1A50($at)
    ctx->pc = 0x229370u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1A50u));
    // 0x229374: 0x3c03fffe  lui         $v1, 0xFFFE
    ctx->pc = 0x229374u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65534 << 16));
    // 0x229378: 0x3463fffe  ori         $v1, $v1, 0xFFFE
    ctx->pc = 0x229378u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65534);
    // 0x22937c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x22937cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x229380: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x229380u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x229384: 0xac231a50  sw          $v1, 0x1A50($at)
    ctx->pc = 0x229384u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D1A50u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A50u, _value); } while (0);
    // 0x229388: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x229388u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22938c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x22938cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x229390: 0xa0650002  sb          $a1, 0x2($v1)
    ctx->pc = 0x229390u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 5));
    // 0x229394: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x229394u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x229398: 0x8c241a58  lw          $a0, 0x1A58($at)
    ctx->pc = 0x229398u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1A58u));
    // 0x22939c: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x22939cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x2293a0: 0x34637fff  ori         $v1, $v1, 0x7FFF
    ctx->pc = 0x2293a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32767);
    // 0x2293a4: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x2293a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x2293a8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2293a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2293ac: 0xac231a58  sw          $v1, 0x1A58($at)
    ctx->pc = 0x2293acu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D1A58u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A58u, _value); } while (0);
    // 0x2293b0: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2293b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2293b4: 0x24651330  addiu       $a1, $v1, 0x1330
    ctx->pc = 0x2293b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2293b8: 0x8ca40030  lw          $a0, 0x30($a1)
    ctx->pc = 0x2293b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x2293bc: 0x3c03fffb  lui         $v1, 0xFFFB
    ctx->pc = 0x2293bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65531 << 16));
    // 0x2293c0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x2293c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x2293c4: 0x831024  and         $v0, $a0, $v1
    ctx->pc = 0x2293c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x2293c8: 0xaca20030  sw          $v0, 0x30($a1)
    ctx->pc = 0x2293c8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 48), GPR_U32(ctx, 2));
    // 0x2293cc: 0x100001a0  b           . + 4 + (0x1A0 << 2)
    ctx->pc = 0x2293CCu;
    {
        const bool branch_taken_0x2293cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2293cc) {
            ctx->pc = 0x229A50u;
            return;
        }
    }
    ctx->pc = 0x2293D4u;
}
