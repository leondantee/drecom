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

// Function: Weapon_select_debug_trans
// Address: 0x28f4a0 - 0x28f5ec
void Weapon_select_debug_trans_0x28f4a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Weapon_select_debug_trans_0x28f4a0");
#endif

    switch (ctx->pc) {
        case 0x28f4e0u: goto label_28f4e0;
        case 0x28f508u: goto label_28f508;
        case 0x28f514u: goto label_28f514;
        case 0x28f53cu: goto label_28f53c;
        case 0x28f548u: goto label_28f548;
        case 0x28f570u: goto label_28f570;
        case 0x28f57cu: goto label_28f57c;
        case 0x28f5a4u: goto label_28f5a4;
        case 0x28f5b0u: goto label_28f5b0;
        case 0x28f5d8u: goto label_28f5d8;
        default: break;
    }

    ctx->pc = 0x28f4a0u;

    // 0x28f4a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x28f4a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x28f4a4: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x28f4a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x28f4a8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x28f4a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x28f4ac: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x28f4acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x28f4b0: 0x24506150  addiu       $s0, $v0, 0x6150
    ctx->pc = 0x28f4b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 24912));
    // 0x28f4b4: 0x92025dfc  lbu         $v0, 0x5DFC($s0)
    ctx->pc = 0x28f4b4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x62BF4Cu));
    // 0x28f4b8: 0x304600ff  andi        $a2, $v0, 0xFF
    ctx->pc = 0x28f4b8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x28f4bc: 0x24020808  addiu       $v0, $zero, 0x808
    ctx->pc = 0x28f4bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2056));
    // 0x28f4c0: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x28f4c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x28f4c4: 0x3c021c07  lui         $v0, 0x1C07
    ctx->pc = 0x28f4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7175 << 16));
    // 0x28f4c8: 0x3442280c  ori         $v0, $v0, 0x280C
    ctx->pc = 0x28f4c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)10252);
    // 0x28f4cc: 0x432025  or          $a0, $v0, $v1
    ctx->pc = 0x28f4ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x28f4d0: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x28f4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x28f4d4: 0x244516a0  addiu       $a1, $v0, 0x16A0
    ctx->pc = 0x28f4d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 5792));
    // 0x28f4d8: 0xc059b14  jal         func_166C50
    ctx->pc = 0x28F4D8u;
    SET_GPR_U32(ctx, 31, 0x28F4E0u);
    ctx->pc = 0x166C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166C50u, 0x28F4D8u, 0x28F4E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F4E0u;
label_28f4e0:
    // 0x28f4e0: 0x24020808  addiu       $v0, $zero, 0x808
    ctx->pc = 0x28f4e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2056));
    // 0x28f4e4: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x28f4e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x28f4e8: 0x3c021c07  lui         $v0, 0x1C07
    ctx->pc = 0x28f4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7175 << 16));
    // 0x28f4ec: 0x3442280d  ori         $v0, $v0, 0x280D
    ctx->pc = 0x28f4ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)10253);
    // 0x28f4f0: 0x432025  or          $a0, $v0, $v1
    ctx->pc = 0x28f4f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x28f4f4: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x28f4f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x28f4f8: 0x244516c0  addiu       $a1, $v0, 0x16C0
    ctx->pc = 0x28f4f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 5824));
    // 0x28f4fc: 0x8e065db0  lw          $a2, 0x5DB0($s0)
    ctx->pc = 0x28f4fcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 23984)));
    // 0x28f500: 0xc059b14  jal         func_166C50
    ctx->pc = 0x28F500u;
    SET_GPR_U32(ctx, 31, 0x28F508u);
    ctx->pc = 0x166C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166C50u, 0x28F500u, 0x28F508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F508u;
label_28f508:
    // 0x28f508: 0xc60c5df0  lwc1        $f12, 0x5DF0($s0)
    ctx->pc = 0x28f508u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24048)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x28f50c: 0xc047fe2  jal         func_11FF88
    ctx->pc = 0x28F50Cu;
    SET_GPR_U32(ctx, 31, 0x28F514u);
    ctx->pc = 0x11FF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FF88u, 0x28F50Cu, 0x28F514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F514u;
label_28f514:
    // 0x28f514: 0x24030808  addiu       $v1, $zero, 0x808
    ctx->pc = 0x28f514u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2056));
    // 0x28f518: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x28f518u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x28f51c: 0x3c031c07  lui         $v1, 0x1C07
    ctx->pc = 0x28f51cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)7175 << 16));
    // 0x28f520: 0x3463280e  ori         $v1, $v1, 0x280E
    ctx->pc = 0x28f520u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)10254);
    // 0x28f524: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x28f524u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x28f528: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x28f528u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x28f52c: 0x246516e0  addiu       $a1, $v1, 0x16E0
    ctx->pc = 0x28f52cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 5856));
    // 0x28f530: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x28f530u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28f534: 0xc059b14  jal         func_166C50
    ctx->pc = 0x28F534u;
    SET_GPR_U32(ctx, 31, 0x28F53Cu);
    ctx->pc = 0x166C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166C50u, 0x28F534u, 0x28F53Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F53Cu;
label_28f53c:
    // 0x28f53c: 0xc60c5df4  lwc1        $f12, 0x5DF4($s0)
    ctx->pc = 0x28f53cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24052)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x28f540: 0xc047fe2  jal         func_11FF88
    ctx->pc = 0x28F540u;
    SET_GPR_U32(ctx, 31, 0x28F548u);
    ctx->pc = 0x11FF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FF88u, 0x28F540u, 0x28F548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F548u;
label_28f548:
    // 0x28f548: 0x24030808  addiu       $v1, $zero, 0x808
    ctx->pc = 0x28f548u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2056));
    // 0x28f54c: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x28f54cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x28f550: 0x3c031c07  lui         $v1, 0x1C07
    ctx->pc = 0x28f550u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)7175 << 16));
    // 0x28f554: 0x3463280f  ori         $v1, $v1, 0x280F
    ctx->pc = 0x28f554u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)10255);
    // 0x28f558: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x28f558u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x28f55c: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x28f55cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x28f560: 0x24651700  addiu       $a1, $v1, 0x1700
    ctx->pc = 0x28f560u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 5888));
    // 0x28f564: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x28f564u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28f568: 0xc059b14  jal         func_166C50
    ctx->pc = 0x28F568u;
    SET_GPR_U32(ctx, 31, 0x28F570u);
    ctx->pc = 0x166C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166C50u, 0x28F568u, 0x28F570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F570u;
label_28f570:
    // 0x28f570: 0xc60c5df8  lwc1        $f12, 0x5DF8($s0)
    ctx->pc = 0x28f570u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24056)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x28f574: 0xc047fe2  jal         func_11FF88
    ctx->pc = 0x28F574u;
    SET_GPR_U32(ctx, 31, 0x28F57Cu);
    ctx->pc = 0x11FF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FF88u, 0x28F574u, 0x28F57Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F57Cu;
label_28f57c:
    // 0x28f57c: 0x24030808  addiu       $v1, $zero, 0x808
    ctx->pc = 0x28f57cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2056));
    // 0x28f580: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x28f580u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x28f584: 0x3c031c07  lui         $v1, 0x1C07
    ctx->pc = 0x28f584u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)7175 << 16));
    // 0x28f588: 0x34632810  ori         $v1, $v1, 0x2810
    ctx->pc = 0x28f588u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)10256);
    // 0x28f58c: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x28f58cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x28f590: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x28f590u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x28f594: 0x24651720  addiu       $a1, $v1, 0x1720
    ctx->pc = 0x28f594u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 5920));
    // 0x28f598: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x28f598u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28f59c: 0xc059b14  jal         func_166C50
    ctx->pc = 0x28F59Cu;
    SET_GPR_U32(ctx, 31, 0x28F5A4u);
    ctx->pc = 0x166C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166C50u, 0x28F59Cu, 0x28F5A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F5A4u;
label_28f5a4:
    // 0x28f5a4: 0xc60c5dbc  lwc1        $f12, 0x5DBC($s0)
    ctx->pc = 0x28f5a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 23996)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x28f5a8: 0xc047fe2  jal         func_11FF88
    ctx->pc = 0x28F5A8u;
    SET_GPR_U32(ctx, 31, 0x28F5B0u);
    ctx->pc = 0x11FF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FF88u, 0x28F5A8u, 0x28F5B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F5B0u;
label_28f5b0:
    // 0x28f5b0: 0x24030808  addiu       $v1, $zero, 0x808
    ctx->pc = 0x28f5b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2056));
    // 0x28f5b4: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x28f5b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x28f5b8: 0x3c031c07  lui         $v1, 0x1C07
    ctx->pc = 0x28f5b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)7175 << 16));
    // 0x28f5bc: 0x34632811  ori         $v1, $v1, 0x2811
    ctx->pc = 0x28f5bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)10257);
    // 0x28f5c0: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x28f5c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x28f5c4: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x28f5c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x28f5c8: 0x24651740  addiu       $a1, $v1, 0x1740
    ctx->pc = 0x28f5c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 5952));
    // 0x28f5cc: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x28f5ccu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28f5d0: 0xc059b14  jal         func_166C50
    ctx->pc = 0x28F5D0u;
    SET_GPR_U32(ctx, 31, 0x28F5D8u);
    ctx->pc = 0x166C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166C50u, 0x28F5D0u, 0x28F5D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F5D8u;
label_28f5d8:
    // 0x28f5d8: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x28f5d8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28f5dc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x28f5dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28f5e0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x28f5e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x28f5e4: 0x3e00008  jr          $ra
    ctx->pc = 0x28F5E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28F5E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28F5ECu;
}
