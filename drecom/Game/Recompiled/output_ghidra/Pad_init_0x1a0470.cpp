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

// Function: Pad_init
// Address: 0x1a0470 - 0x1a0584
void Pad_init_0x1a0470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Pad_init_0x1a0470");
#endif

    switch (ctx->pc) {
        case 0x1a0484u: goto label_1a0484;
        case 0x1a0494u: goto label_1a0494;
        case 0x1a04a4u: goto label_1a04a4;
        case 0x1a04c4u: goto label_1a04c4;
        case 0x1a04dcu: goto label_1a04dc;
        case 0x1a0544u: goto label_1a0544;
        default: break;
    }

    ctx->pc = 0x1a0470u;

    // 0x1a0470: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a0470u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a0474: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x1a0474u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x1a0478: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1a0478u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1a047c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1A047Cu;
    {
        const bool branch_taken_0x1a047c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a047c) {
            ctx->pc = 0x1A0498u;
            goto label_1a0498;
        }
    }
    ctx->pc = 0x1A0484u;
label_1a0484:
    // 0x1a0484: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x1a0484u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x1a0488: 0x2444ef60  addiu       $a0, $v0, -0x10A0
    ctx->pc = 0x1a0488u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963040));
    // 0x1a048c: 0xc046760  jal         func_119D80
    ctx->pc = 0x1A048Cu;
    SET_GPR_U32(ctx, 31, 0x1A0494u);
    ctx->pc = 0x119D80u;
    {
        ctx->pc = 0x1A0494u;
        ps2_stubs::printf(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1A0494u) { return; }
    ctx->pc = 0x1A0494u;
label_1a0494:
    // 0x1a0494: 0x0  nop
    ctx->pc = 0x1a0494u;
    // NOP
label_1a0498:
    // 0x1a0498: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1a0498u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1a049c: 0xc042f96  jal         func_10BE58
    ctx->pc = 0x1A049Cu;
    SET_GPR_U32(ctx, 31, 0x1A04A4u);
    ctx->pc = 0x10BE58u;
    {
        ctx->pc = 0x1A04A4u;
        ps2_stubs::scePadInit(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1A04A4u) { return; }
    ctx->pc = 0x1A04A4u;
label_1a04a4:
    // 0x1a04a4: 0x1040fff7  beqz        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1A04A4u;
    {
        const bool branch_taken_0x1a04a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a04a4) {
            ctx->pc = 0x1A0484u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a0484;
        }
    }
    ctx->pc = 0x1A04ACu;
    // 0x1a04ac: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1a04acu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1a04b0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1a04b0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1a04b4: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x1a04b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x1a04b8: 0x24462780  addiu       $a2, $v0, 0x2780
    ctx->pc = 0x1a04b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 10112));
    // 0x1a04bc: 0xc04302e  jal         func_10C0B8
    ctx->pc = 0x1A04BCu;
    SET_GPR_U32(ctx, 31, 0x1A04C4u);
    ctx->pc = 0x10C0B8u;
    {
        ctx->pc = 0x1A04C4u;
        ps2_stubs::scePadPortOpen(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1A04C4u) { return; }
    ctx->pc = 0x1A04C4u;
label_1a04c4:
    // 0x1a04c4: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A04C4u;
    {
        const bool branch_taken_0x1a04c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a04c4) {
            ctx->pc = 0x1A04DCu;
            goto label_1a04dc;
        }
    }
    ctx->pc = 0x1A04CCu;
    // 0x1a04cc: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x1a04ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x1a04d0: 0x2444ef70  addiu       $a0, $v0, -0x1090
    ctx->pc = 0x1a04d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963056));
    // 0x1a04d4: 0xc046760  jal         func_119D80
    ctx->pc = 0x1A04D4u;
    SET_GPR_U32(ctx, 31, 0x1A04DCu);
    ctx->pc = 0x119D80u;
    {
        ctx->pc = 0x1A04DCu;
        ps2_stubs::printf(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1A04DCu) { return; }
    ctx->pc = 0x1A04DCu;
label_1a04dc:
    // 0x1a04dc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a04dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1a04e0: 0xa4202740  sh          $zero, 0x2740($at)
    ctx->pc = 0x1a04e0u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x5D2740u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x5D2740u, _value); } while (0);
    // 0x1a04e4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a04e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1a04e8: 0xac202748  sw          $zero, 0x2748($at)
    ctx->pc = 0x1a04e8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x5D2748u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D2748u, _value); } while (0);
    // 0x1a04ec: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a04ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1a04f0: 0xa4202742  sh          $zero, 0x2742($at)
    ctx->pc = 0x1a04f0u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x5D2742u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x5D2742u, _value); } while (0);
    // 0x1a04f4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a04f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1a04f8: 0xa020274c  sb          $zero, 0x274C($at)
    ctx->pc = 0x1a04f8u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x5D274Cu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5D274Cu, _value); } while (0);
    // 0x1a04fc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1a04fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a0500: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a0500u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1a0504: 0xa023274d  sb          $v1, 0x274D($at)
    ctx->pc = 0x1a0504u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D274Du, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5D274Du, _value); } while (0);
    // 0x1a0508: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x1a0508u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1a050c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a050cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1a0510: 0xa0232751  sb          $v1, 0x2751($at)
    ctx->pc = 0x1a0510u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D2751u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5D2751u, _value); } while (0);
    // 0x1a0514: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1a0514u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1a0518: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a0518u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1a051c: 0xa0232750  sb          $v1, 0x2750($at)
    ctx->pc = 0x1a051cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D2750u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5D2750u, _value); } while (0);
    // 0x1a0520: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1a0520u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1a0524: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a0524u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1a0528: 0xa023274f  sb          $v1, 0x274F($at)
    ctx->pc = 0x1a0528u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D274Fu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5D274Fu, _value); } while (0);
    // 0x1a052c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1a052cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1a0530: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a0530u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1a0534: 0xa023274e  sb          $v1, 0x274E($at)
    ctx->pc = 0x1a0534u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D274Eu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5D274Eu, _value); } while (0);
    // 0x1a0538: 0x24100006  addiu       $s0, $zero, 0x6
    ctx->pc = 0x1a0538u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1a053c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1A053Cu;
    {
        const bool branch_taken_0x1a053c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a053c) {
            ctx->pc = 0x1A0558u;
            goto label_1a0558;
        }
    }
    ctx->pc = 0x1A0544u;
label_1a0544:
    // 0x1a0544: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x1a0544u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x1a0548: 0x24632530  addiu       $v1, $v1, 0x2530
    ctx->pc = 0x1a0548u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9520));
    // 0x1a054c: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1a054cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1a0550: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x1a0550u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a0554: 0x0  nop
    ctx->pc = 0x1a0554u;
    // NOP
label_1a0558:
    // 0x1a0558: 0x72001e28  paddub      $v1, $s0, $zero
    ctx->pc = 0x1a0558u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1a055c: 0x2470ffff  addiu       $s0, $v1, -0x1
    ctx->pc = 0x1a055cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1a0560: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1A0560u;
    {
        const bool branch_taken_0x1a0560 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a0560) {
            ctx->pc = 0x1A0544u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a0544;
        }
    }
    ctx->pc = 0x1A0568u;
    // 0x1a0568: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a0568u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1a056c: 0xac201b34  sw          $zero, 0x1B34($at)
    ctx->pc = 0x1a056cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x5D1B34u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1B34u, _value); } while (0);
    // 0x1a0570: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x1a0570u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a0574: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a0574u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a0578: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1a0578u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1a057c: 0x3e00008  jr          $ra
    ctx->pc = 0x1A057Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A057Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A0584u;
}
