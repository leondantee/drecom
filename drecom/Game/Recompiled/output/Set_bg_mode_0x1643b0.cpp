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

// Function: Set_bg_mode
// Address: 0x1643b0 - 0x164514
void Set_bg_mode_0x1643b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Set_bg_mode_0x1643b0");
#endif

    ctx->pc = 0x1643b0u;

    // 0x1643b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1643b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1643b4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x1643b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x1643b8: 0xa3a50008  sb          $a1, 0x8($sp)
    ctx->pc = 0x1643b8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 8), (uint8_t)GPR_U32(ctx, 5));
    // 0x1643bc: 0xa3a60010  sb          $a2, 0x10($sp)
    ctx->pc = 0x1643bcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 16), (uint8_t)GPR_U32(ctx, 6));
    // 0x1643c0: 0xa3a70018  sb          $a3, 0x18($sp)
    ctx->pc = 0x1643c0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 24), (uint8_t)GPR_U32(ctx, 7));
    // 0x1643c4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1643c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1643c8: 0x9023160d  lbu         $v1, 0x160D($at)
    ctx->pc = 0x1643c8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x5D160Du));
    // 0x1643cc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1643ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1643d0: 0xa023160e  sb          $v1, 0x160E($at)
    ctx->pc = 0x1643d0u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D160Eu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5D160Eu, _value); } while (0);
    // 0x1643d4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1643d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1643d8: 0x902302f0  lbu         $v1, 0x2F0($at)
    ctx->pc = 0x1643d8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x5D02F0u));
    // 0x1643dc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1643dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1643e0: 0xa023160f  sb          $v1, 0x160F($at)
    ctx->pc = 0x1643e0u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D160Fu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5D160Fu, _value); } while (0);
    // 0x1643e4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1643e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1643e8: 0x902302f1  lbu         $v1, 0x2F1($at)
    ctx->pc = 0x1643e8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x5D02F1u));
    // 0x1643ec: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1643ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1643f0: 0xa0231610  sb          $v1, 0x1610($at)
    ctx->pc = 0x1643f0u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D1610u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5D1610u, _value); } while (0);
    // 0x1643f4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1643f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1643f8: 0x902302f2  lbu         $v1, 0x2F2($at)
    ctx->pc = 0x1643f8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x5D02F2u));
    // 0x1643fc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1643fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x164400: 0xa0231611  sb          $v1, 0x1611($at)
    ctx->pc = 0x164400u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D1611u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5D1611u, _value); } while (0);
    // 0x164404: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x164404u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x164408: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x164408u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x16440c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x16440cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x164410: 0xa023160d  sb          $v1, 0x160D($at)
    ctx->pc = 0x164410u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D160Du, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5D160Du, _value); } while (0);
    // 0x164414: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x164414u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x164418: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x164418u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16441c: 0x10830019  beq         $a0, $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x16441Cu;
    {
        const bool branch_taken_0x16441c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x16441c) {
            ctx->pc = 0x164484u;
            goto label_164484;
        }
    }
    ctx->pc = 0x164424u;
    // 0x164424: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x164424u;
    {
        const bool branch_taken_0x164424 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x164424) {
            ctx->pc = 0x164434u;
            goto label_164434;
        }
    }
    ctx->pc = 0x16442Cu;
    // 0x16442c: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x16442Cu;
    {
        const bool branch_taken_0x16442c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16442c) {
            ctx->pc = 0x164508u;
            goto label_164508;
        }
    }
    ctx->pc = 0x164434u;
label_164434:
    // 0x164434: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x164434u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x164438: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x164438u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x16443c: 0x94250330  lhu         $a1, 0x330($at)
    ctx->pc = 0x16443cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)FAST_READ16(0x5D0330u));
    // 0x164440: 0x30647fff  andi        $a0, $v1, 0x7FFF
    ctx->pc = 0x164440u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32767);
    // 0x164444: 0x24038000  addiu       $v1, $zero, -0x8000
    ctx->pc = 0x164444u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934528));
    // 0x164448: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x164448u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x16444c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x16444cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x164450: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x164450u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x164454: 0xa4230330  sh          $v1, 0x330($at)
    ctx->pc = 0x164454u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D0330u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x5D0330u, _value); } while (0);
    // 0x164458: 0x30637fff  andi        $v1, $v1, 0x7FFF
    ctx->pc = 0x164458u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32767);
    // 0x16445c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x16445cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x164460: 0x942501c0  lhu         $a1, 0x1C0($at)
    ctx->pc = 0x164460u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)FAST_READ16(0x5D01C0u));
    // 0x164464: 0x30647fff  andi        $a0, $v1, 0x7FFF
    ctx->pc = 0x164464u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32767);
    // 0x164468: 0x24038000  addiu       $v1, $zero, -0x8000
    ctx->pc = 0x164468u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934528));
    // 0x16446c: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x16446cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x164470: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x164470u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x164474: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x164474u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x164478: 0xa42301c0  sh          $v1, 0x1C0($at)
    ctx->pc = 0x164478u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D01C0u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x5D01C0u, _value); } while (0);
    // 0x16447c: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x16447Cu;
    {
        const bool branch_taken_0x16447c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16447c) {
            ctx->pc = 0x164508u;
            goto label_164508;
        }
    }
    ctx->pc = 0x164484u;
label_164484:
    // 0x164484: 0x24030016  addiu       $v1, $zero, 0x16
    ctx->pc = 0x164484u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x164488: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x164488u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x16448c: 0x94250330  lhu         $a1, 0x330($at)
    ctx->pc = 0x16448cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)FAST_READ16(0x5D0330u));
    // 0x164490: 0x30647fff  andi        $a0, $v1, 0x7FFF
    ctx->pc = 0x164490u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32767);
    // 0x164494: 0x24038000  addiu       $v1, $zero, -0x8000
    ctx->pc = 0x164494u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934528));
    // 0x164498: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x164498u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x16449c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x16449cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1644a0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1644a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1644a4: 0xa4230330  sh          $v1, 0x330($at)
    ctx->pc = 0x1644a4u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D0330u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x5D0330u, _value); } while (0);
    // 0x1644a8: 0x30637fff  andi        $v1, $v1, 0x7FFF
    ctx->pc = 0x1644a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32767);
    // 0x1644ac: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1644acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1644b0: 0x942501c0  lhu         $a1, 0x1C0($at)
    ctx->pc = 0x1644b0u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)FAST_READ16(0x5D01C0u));
    // 0x1644b4: 0x30647fff  andi        $a0, $v1, 0x7FFF
    ctx->pc = 0x1644b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32767);
    // 0x1644b8: 0x24038000  addiu       $v1, $zero, -0x8000
    ctx->pc = 0x1644b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934528));
    // 0x1644bc: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x1644bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x1644c0: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1644c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1644c4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1644c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1644c8: 0xa42301c0  sh          $v1, 0x1C0($at)
    ctx->pc = 0x1644c8u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D01C0u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x5D01C0u, _value); } while (0);
    // 0x1644cc: 0x93a30008  lbu         $v1, 0x8($sp)
    ctx->pc = 0x1644ccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1644d0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1644d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1644d4: 0xa0230460  sb          $v1, 0x460($at)
    ctx->pc = 0x1644d4u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D0460u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5D0460u, _value); } while (0);
    // 0x1644d8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1644d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1644dc: 0xa02302f0  sb          $v1, 0x2F0($at)
    ctx->pc = 0x1644dcu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D02F0u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5D02F0u, _value); } while (0);
    // 0x1644e0: 0x93a30010  lbu         $v1, 0x10($sp)
    ctx->pc = 0x1644e0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1644e4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1644e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1644e8: 0xa0230461  sb          $v1, 0x461($at)
    ctx->pc = 0x1644e8u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D0461u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5D0461u, _value); } while (0);
    // 0x1644ec: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1644ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1644f0: 0xa02302f1  sb          $v1, 0x2F1($at)
    ctx->pc = 0x1644f0u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D02F1u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5D02F1u, _value); } while (0);
    // 0x1644f4: 0x93a30018  lbu         $v1, 0x18($sp)
    ctx->pc = 0x1644f4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1644f8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1644f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1644fc: 0xa0230462  sb          $v1, 0x462($at)
    ctx->pc = 0x1644fcu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D0462u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5D0462u, _value); } while (0);
    // 0x164500: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x164500u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x164504: 0xa02302f2  sb          $v1, 0x2F2($at)
    ctx->pc = 0x164504u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D02F2u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5D02F2u, _value); } while (0);
label_164508:
    // 0x164508: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x164508u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x16450c: 0x3e00008  jr          $ra
    ctx->pc = 0x16450Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16450Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x164514u;
}
