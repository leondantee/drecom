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

// Function: R106_get_sword
// Address: 0x27e390 - 0x27e478
void R106_get_sword_0x27e390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("R106_get_sword_0x27e390");
#endif

    switch (ctx->pc) {
        case 0x27e3e4u: goto label_27e3e4;
        case 0x27e444u: goto label_27e444;
        case 0x27e45cu: goto label_27e45c;
        case 0x27e464u: goto label_27e464;
        default: break;
    }

    ctx->pc = 0x27e390u;

    // 0x27e390: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x27e390u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x27e394: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x27e394u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x27e398: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x27e398u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x27e39c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x27e39cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x27e3a0: 0x8c30f9fc  lw          $s0, -0x604($at)
    ctx->pc = 0x27e3a0u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x61F9FCu));
    // 0x27e3a4: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x27e3a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x27e3a8: 0x94221b46  lhu         $v0, 0x1B46($at)
    ctx->pc = 0x27e3a8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x621B46u));
    // 0x27e3ac: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x27e3acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x27e3b0: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x27e3b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x27e3b4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x27e3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x27e3b8: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x27e3b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x27e3bc: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x27e3bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x27e3c0: 0x2442bd00  addiu       $v0, $v0, -0x4300
    ctx->pc = 0x27e3c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950144));
    // 0x27e3c4: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x27e3c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x27e3c8: 0x8c62007c  lw          $v0, 0x7C($v1)
    ctx->pc = 0x27e3c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 124)));
    // 0x27e3cc: 0x34420007  ori         $v0, $v0, 0x7
    ctx->pc = 0x27e3ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)7);
    // 0x27e3d0: 0xac62007c  sw          $v0, 0x7C($v1)
    ctx->pc = 0x27e3d0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 124), GPR_U32(ctx, 2));
    // 0x27e3d4: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x27e3d4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x27e3d8: 0x3405ffff  ori         $a1, $zero, 0xFFFF
    ctx->pc = 0x27e3d8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x27e3dc: 0xc0d85c4  jal         func_361710
    ctx->pc = 0x27E3DCu;
    SET_GPR_U32(ctx, 31, 0x27E3E4u);
    ctx->pc = 0x361710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x361710u, 0x27E3DCu, 0x27E3E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E3E4u;
label_27e3e4:
    // 0x27e3e4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27e3e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27e3e8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x27e3e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x27e3ec: 0xa022df51  sb          $v0, -0x20AF($at)
    ctx->pc = 0x27e3ecu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5CDF51u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5CDF51u, _value); } while (0);
    // 0x27e3f0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x27e3f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x27e3f4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x27e3f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x27e3f8: 0xa022df58  sb          $v0, -0x20A8($at)
    ctx->pc = 0x27e3f8u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5CDF58u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5CDF58u, _value); } while (0);
    // 0x27e3fc: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x27e3fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x27e400: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x27e400u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x27e404: 0xa022df59  sb          $v0, -0x20A7($at)
    ctx->pc = 0x27e404u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5CDF59u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5CDF59u, _value); } while (0);
    // 0x27e408: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27e408u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27e40c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x27e40cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x27e410: 0xa022df5a  sb          $v0, -0x20A6($at)
    ctx->pc = 0x27e410u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5CDF5Au, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5CDF5Au, _value); } while (0);
    // 0x27e414: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x27e414u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x27e418: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x27e418u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x27e41c: 0xa022df5b  sb          $v0, -0x20A5($at)
    ctx->pc = 0x27e41cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5CDF5Bu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5CDF5Bu, _value); } while (0);
    // 0x27e420: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x27e420u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x27e424: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x27e424u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x27e428: 0xa022df5c  sb          $v0, -0x20A4($at)
    ctx->pc = 0x27e428u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5CDF5Cu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5CDF5Cu, _value); } while (0);
    // 0x27e42c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x27e42cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x27e430: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x27e430u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x27e434: 0xa022df5d  sb          $v0, -0x20A3($at)
    ctx->pc = 0x27e434u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5CDF5Du, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5CDF5Du, _value); } while (0);
    // 0x27e438: 0x24040012  addiu       $a0, $zero, 0x12
    ctx->pc = 0x27e438u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x27e43c: 0xc0a12a8  jal         func_284AA0
    ctx->pc = 0x27E43Cu;
    SET_GPR_U32(ctx, 31, 0x27E444u);
    ctx->pc = 0x284AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x284AA0u, 0x27E43Cu, 0x27E444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E444u;
label_27e444:
    // 0x27e444: 0x8e070130  lw          $a3, 0x130($s0)
    ctx->pc = 0x27e444u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
    // 0x27e448: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x27e448u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x27e44c: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x27e44cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x27e450: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x27e450u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x27e454: 0xc0654fc  jal         func_1953F0
    ctx->pc = 0x27E454u;
    SET_GPR_U32(ctx, 31, 0x27E45Cu);
    ctx->pc = 0x1953F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1953F0u, 0x27E454u, 0x27E45Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E45Cu;
label_27e45c:
    // 0x27e45c: 0xc084934  jal         func_2124D0
    ctx->pc = 0x27E45Cu;
    SET_GPR_U32(ctx, 31, 0x27E464u);
    ctx->pc = 0x2124D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2124D0u, 0x27E45Cu, 0x27E464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E464u;
label_27e464:
    // 0x27e464: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x27e464u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27e468: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x27e468u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27e46c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x27e46cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x27e470: 0x3e00008  jr          $ra
    ctx->pc = 0x27E470u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27E470u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27E478u;
}
