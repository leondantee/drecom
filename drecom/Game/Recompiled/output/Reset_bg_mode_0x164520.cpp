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

// Function: Reset_bg_mode
// Address: 0x164520 - 0x164640
void Reset_bg_mode_0x164520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Reset_bg_mode_0x164520");
#endif

    ctx->pc = 0x164520u;

    // 0x164520: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x164520u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x164524: 0x9023160e  lbu         $v1, 0x160E($at)
    ctx->pc = 0x164524u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x5D160Eu));
    // 0x164528: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x164528u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x16452c: 0xa023160d  sb          $v1, 0x160D($at)
    ctx->pc = 0x16452cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D160Du, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5D160Du, _value); } while (0);
    // 0x164530: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x164530u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x164534: 0x9023160f  lbu         $v1, 0x160F($at)
    ctx->pc = 0x164534u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x5D160Fu));
    // 0x164538: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x164538u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x16453c: 0xa0230460  sb          $v1, 0x460($at)
    ctx->pc = 0x16453cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D0460u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5D0460u, _value); } while (0);
    // 0x164540: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x164540u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x164544: 0xa02302f0  sb          $v1, 0x2F0($at)
    ctx->pc = 0x164544u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D02F0u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5D02F0u, _value); } while (0);
    // 0x164548: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x164548u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x16454c: 0x90231610  lbu         $v1, 0x1610($at)
    ctx->pc = 0x16454cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x5D1610u));
    // 0x164550: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x164550u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x164554: 0xa0230461  sb          $v1, 0x461($at)
    ctx->pc = 0x164554u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D0461u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5D0461u, _value); } while (0);
    // 0x164558: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x164558u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x16455c: 0xa02302f1  sb          $v1, 0x2F1($at)
    ctx->pc = 0x16455cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D02F1u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5D02F1u, _value); } while (0);
    // 0x164560: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x164560u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x164564: 0x90231611  lbu         $v1, 0x1611($at)
    ctx->pc = 0x164564u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x5D1611u));
    // 0x164568: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x164568u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x16456c: 0xa0230462  sb          $v1, 0x462($at)
    ctx->pc = 0x16456cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D0462u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5D0462u, _value); } while (0);
    // 0x164570: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x164570u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x164574: 0xa02302f2  sb          $v1, 0x2F2($at)
    ctx->pc = 0x164574u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D02F2u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5D02F2u, _value); } while (0);
    // 0x164578: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x164578u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x16457c: 0x9023160d  lbu         $v1, 0x160D($at)
    ctx->pc = 0x16457cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x5D160Du));
    // 0x164580: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x164580u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x164584: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x164584u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x164588: 0x10830019  beq         $a0, $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x164588u;
    {
        const bool branch_taken_0x164588 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x164588) {
            ctx->pc = 0x1645F0u;
            goto label_1645f0;
        }
    }
    ctx->pc = 0x164590u;
    // 0x164590: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x164590u;
    {
        const bool branch_taken_0x164590 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x164590) {
            ctx->pc = 0x1645A0u;
            goto label_1645a0;
        }
    }
    ctx->pc = 0x164598u;
    // 0x164598: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x164598u;
    {
        const bool branch_taken_0x164598 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x164598) {
            ctx->pc = 0x164638u;
            goto label_164638;
        }
    }
    ctx->pc = 0x1645A0u;
label_1645a0:
    // 0x1645a0: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x1645a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1645a4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1645a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1645a8: 0x94250330  lhu         $a1, 0x330($at)
    ctx->pc = 0x1645a8u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)FAST_READ16(0x5D0330u));
    // 0x1645ac: 0x30647fff  andi        $a0, $v1, 0x7FFF
    ctx->pc = 0x1645acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32767);
    // 0x1645b0: 0x24038000  addiu       $v1, $zero, -0x8000
    ctx->pc = 0x1645b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934528));
    // 0x1645b4: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x1645b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x1645b8: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1645b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1645bc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1645bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1645c0: 0xa4230330  sh          $v1, 0x330($at)
    ctx->pc = 0x1645c0u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D0330u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x5D0330u, _value); } while (0);
    // 0x1645c4: 0x30637fff  andi        $v1, $v1, 0x7FFF
    ctx->pc = 0x1645c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32767);
    // 0x1645c8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1645c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1645cc: 0x942501c0  lhu         $a1, 0x1C0($at)
    ctx->pc = 0x1645ccu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)FAST_READ16(0x5D01C0u));
    // 0x1645d0: 0x30647fff  andi        $a0, $v1, 0x7FFF
    ctx->pc = 0x1645d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32767);
    // 0x1645d4: 0x24038000  addiu       $v1, $zero, -0x8000
    ctx->pc = 0x1645d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934528));
    // 0x1645d8: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x1645d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x1645dc: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1645dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1645e0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1645e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1645e4: 0xa42301c0  sh          $v1, 0x1C0($at)
    ctx->pc = 0x1645e4u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D01C0u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x5D01C0u, _value); } while (0);
    // 0x1645e8: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1645E8u;
    {
        const bool branch_taken_0x1645e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1645e8) {
            ctx->pc = 0x164638u;
            goto label_164638;
        }
    }
    ctx->pc = 0x1645F0u;
label_1645f0:
    // 0x1645f0: 0x24030016  addiu       $v1, $zero, 0x16
    ctx->pc = 0x1645f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x1645f4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1645f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1645f8: 0x94250330  lhu         $a1, 0x330($at)
    ctx->pc = 0x1645f8u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)FAST_READ16(0x5D0330u));
    // 0x1645fc: 0x30647fff  andi        $a0, $v1, 0x7FFF
    ctx->pc = 0x1645fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32767);
    // 0x164600: 0x24038000  addiu       $v1, $zero, -0x8000
    ctx->pc = 0x164600u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934528));
    // 0x164604: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x164604u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x164608: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x164608u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x16460c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x16460cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x164610: 0xa4230330  sh          $v1, 0x330($at)
    ctx->pc = 0x164610u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D0330u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x5D0330u, _value); } while (0);
    // 0x164614: 0x30637fff  andi        $v1, $v1, 0x7FFF
    ctx->pc = 0x164614u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32767);
    // 0x164618: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x164618u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x16461c: 0x942501c0  lhu         $a1, 0x1C0($at)
    ctx->pc = 0x16461cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)FAST_READ16(0x5D01C0u));
    // 0x164620: 0x30647fff  andi        $a0, $v1, 0x7FFF
    ctx->pc = 0x164620u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32767);
    // 0x164624: 0x24038000  addiu       $v1, $zero, -0x8000
    ctx->pc = 0x164624u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934528));
    // 0x164628: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x164628u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x16462c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x16462cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x164630: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x164630u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x164634: 0xa42301c0  sh          $v1, 0x1C0($at)
    ctx->pc = 0x164634u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D01C0u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x5D01C0u, _value); } while (0);
label_164638:
    // 0x164638: 0x3e00008  jr          $ra
    ctx->pc = 0x164638u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x164638u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x164640u;
}
