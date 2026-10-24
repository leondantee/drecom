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

// Function: Game_now_loading
// Address: 0x141590 - 0x1416c8
void Game_now_loading_0x141590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Game_now_loading_0x141590");
#endif

    switch (ctx->pc) {
        case 0x1415a8u: goto label_1415a8;
        case 0x1415c4u: goto label_1415c4;
        case 0x14165cu: goto label_14165c;
        case 0x14169cu: goto label_14169c;
        case 0x1416b4u: goto label_1416b4;
        default: break;
    }

    ctx->pc = 0x141590u;

    // 0x141590: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x141590u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x141594: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x141594u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x141598: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x141598u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x14159c: 0x24040096  addiu       $a0, $zero, 0x96
    ctx->pc = 0x14159cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 150));
    // 0x1415a0: 0xc05e990  jal         func_17A640
    ctx->pc = 0x1415A0u;
    SET_GPR_U32(ctx, 31, 0x1415A8u);
    ctx->pc = 0x17A640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A640u, 0x1415A0u, 0x1415A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1415A8u;
label_1415a8:
    // 0x1415a8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1415a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1415ac: 0x8c25fe00  lw          $a1, -0x200($at)
    ctx->pc = 0x1415acu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x5CFE00u));
    // 0x1415b0: 0x2404009a  addiu       $a0, $zero, 0x9A
    ctx->pc = 0x1415b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 154));
    // 0x1415b4: 0x24061400  addiu       $a2, $zero, 0x1400
    ctx->pc = 0x1415b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5120));
    // 0x1415b8: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x1415b8u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1415bc: 0xc05e2e0  jal         func_178B80
    ctx->pc = 0x1415BCu;
    SET_GPR_U32(ctx, 31, 0x1415C4u);
    ctx->pc = 0x178B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178B80u, 0x1415BCu, 0x1415C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1415C4u;
label_1415c4:
    // 0x1415c4: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x1415c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x1415c8: 0x245028a8  addiu       $s0, $v0, 0x28A8
    ctx->pc = 0x1415c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 10408));
    // 0x1415cc: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1415ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x1415d0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1415d0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D28A8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D28A8u, _value); } while (0);
    // 0x1415d4: 0x3c026400  lui         $v0, 0x6400
    ctx->pc = 0x1415d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)25600 << 16));
    // 0x1415d8: 0x34422b16  ori         $v0, $v0, 0x2B16
    ctx->pc = 0x1415d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)11030);
    // 0x1415dc: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x1415dcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D28ACu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D28ACu, _value); } while (0);
    // 0x1415e0: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x1415e0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x5D28B4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D28B4u, _value); } while (0);
    // 0x1415e4: 0x3c028080  lui         $v0, 0x8080
    ctx->pc = 0x1415e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32896 << 16));
    // 0x1415e8: 0x34438080  ori         $v1, $v0, 0x8080
    ctx->pc = 0x1415e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32896);
    // 0x1415ec: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x1415ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1415f0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1415f0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D28B8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D28B8u, _value); } while (0);
    // 0x1415f4: 0x26020014  addiu       $v0, $s0, 0x14
    ctx->pc = 0x1415f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x1415f8: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1415f8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x5D28BCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D28BCu, _value); } while (0);
    // 0x1415fc: 0x3c027900  lui         $v0, 0x7900
    ctx->pc = 0x1415fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)30976 << 16));
    // 0x141600: 0x34437000  ori         $v1, $v0, 0x7000
    ctx->pc = 0x141600u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28672);
    // 0x141604: 0x26020018  addiu       $v0, $s0, 0x18
    ctx->pc = 0x141604u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x141608: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x141608u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D28C0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D28C0u, _value); } while (0);
    // 0x14160c: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x14160cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x141610: 0x2602001c  addiu       $v0, $s0, 0x1C
    ctx->pc = 0x141610u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
    // 0x141614: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x141614u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D28C4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D28C4u, _value); } while (0);
    // 0x141618: 0x3c021e00  lui         $v0, 0x1E00
    ctx->pc = 0x141618u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7680 << 16));
    // 0x14161c: 0x34432800  ori         $v1, $v0, 0x2800
    ctx->pc = 0x14161cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)10240);
    // 0x141620: 0x26020020  addiu       $v0, $s0, 0x20
    ctx->pc = 0x141620u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x141624: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x141624u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D28C8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D28C8u, _value); } while (0);
    // 0x141628: 0x3c028800  lui         $v0, 0x8800
    ctx->pc = 0x141628u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34816 << 16));
    // 0x14162c: 0x34439000  ori         $v1, $v0, 0x9000
    ctx->pc = 0x14162cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36864);
    // 0x141630: 0x26020024  addiu       $v0, $s0, 0x24
    ctx->pc = 0x141630u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
    // 0x141634: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x141634u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D28CCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D28CCu, _value); } while (0);
    // 0x141638: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x141638u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x14163c: 0x26020028  addiu       $v0, $s0, 0x28
    ctx->pc = 0x14163cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
    // 0x141640: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x141640u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D28D0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D28D0u, _value); } while (0);
    // 0x141644: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x141644u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x141648: 0x2442e4b0  addiu       $v0, $v0, -0x1B50
    ctx->pc = 0x141648u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960304));
    // 0x14164c: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x14164cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D28B0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D28B0u, _value); } while (0);
    // 0x141650: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x141650u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x141654: 0xc0592dc  jal         func_164B70
    ctx->pc = 0x141654u;
    SET_GPR_U32(ctx, 31, 0x14165Cu);
    ctx->pc = 0x164B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164B70u, 0x141654u, 0x14165Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14165Cu;
label_14165c:
    // 0x14165c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x14165cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x141660: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x141660u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x141664: 0xac228ef8  sw          $v0, -0x7108($at)
    ctx->pc = 0x141664u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3E8EF8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3E8EF8u, _value); } while (0);
    // 0x141668: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x141668u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x14166c: 0x34421015  ori         $v0, $v0, 0x1015
    ctx->pc = 0x14166cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4117);
    // 0x141670: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x141670u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x141674: 0xac228efc  sw          $v0, -0x7104($at)
    ctx->pc = 0x141674u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3E8EFCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3E8EFCu, _value); } while (0);
    // 0x141678: 0x24020060  addiu       $v0, $zero, 0x60
    ctx->pc = 0x141678u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x14167c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x14167cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x141680: 0xfc228f00  sd          $v0, -0x7100($at)
    ctx->pc = 0x141680u;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3E8F00u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x3E8F00u, _value); } while (0);
    // 0x141684: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x141684u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x141688: 0x2444161c  addiu       $a0, $v0, 0x161C
    ctx->pc = 0x141688u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 5660));
    // 0x14168c: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x14168cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x141690: 0x244528a8  addiu       $a1, $v0, 0x28A8
    ctx->pc = 0x141690u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 10408));
    // 0x141694: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x141694u;
    SET_GPR_U32(ctx, 31, 0x14169Cu);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x141694u, 0x14169Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14169Cu;
label_14169c:
    // 0x14169c: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x14169cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x1416a0: 0x2444161c  addiu       $a0, $v0, 0x161C
    ctx->pc = 0x1416a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 5660));
    // 0x1416a4: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x1416a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x1416a8: 0x24458ef8  addiu       $a1, $v0, -0x7108
    ctx->pc = 0x1416a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938360));
    // 0x1416ac: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x1416ACu;
    SET_GPR_U32(ctx, 31, 0x1416B4u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x1416ACu, 0x1416B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1416B4u;
label_1416b4:
    // 0x1416b4: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x1416b4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1416b8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1416b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1416bc: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1416bcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1416c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1416C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1416C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1416C8u;
}
