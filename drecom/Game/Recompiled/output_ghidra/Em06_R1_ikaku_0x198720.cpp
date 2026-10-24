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

// Function: Em06_R1_ikaku
// Address: 0x198720 - 0x198844
void Em06_R1_ikaku_0x198720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em06_R1_ikaku_0x198720");
#endif

    switch (ctx->pc) {
        case 0x198774u: goto label_198774;
        case 0x19879cu: goto label_19879c;
        case 0x1987bcu: goto label_1987bc;
        case 0x1987c8u: goto label_1987c8;
        case 0x1987d8u: goto label_1987d8;
        case 0x1987e4u: goto label_1987e4;
        default: break;
    }

    ctx->pc = 0x198720u;

    // 0x198720: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x198720u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x198724: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x198724u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x198728: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x198728u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x19872c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x19872cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x198730: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x198730u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x198734: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x198734u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x198738: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x198738u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19873c: 0x10830013  beq         $a0, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x19873Cu;
    {
        const bool branch_taken_0x19873c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x19873c) {
            ctx->pc = 0x19878Cu;
            goto label_19878c;
        }
    }
    ctx->pc = 0x198744u;
    // 0x198744: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x198744u;
    {
        const bool branch_taken_0x198744 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x198744) {
            ctx->pc = 0x198754u;
            goto label_198754;
        }
    }
    ctx->pc = 0x19874Cu;
    // 0x19874c: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x19874Cu;
    {
        const bool branch_taken_0x19874c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19874c) {
            ctx->pc = 0x198834u;
            goto label_198834;
        }
    }
    ctx->pc = 0x198754u;
label_198754:
    // 0x198754: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x198754u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x198758: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x198758u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19875c: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x19875cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x198760: 0x24065a1d  addiu       $a2, $zero, 0x5A1D
    ctx->pc = 0x198760u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 23069));
    // 0x198764: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x198764u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x198768: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x198768u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x19876c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x19876Cu;
    SET_GPR_U32(ctx, 31, 0x198774u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x19876Cu, 0x198774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198774u;
label_198774:
    // 0x198774: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x198774u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x198778: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x198778u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x19877c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x19877cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x198780: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x198780u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x198784: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x198784u;
    {
        const bool branch_taken_0x198784 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x198784) {
            ctx->pc = 0x198834u;
            goto label_198834;
        }
    }
    ctx->pc = 0x19878Cu;
label_19878c:
    // 0x19878c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x19878cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x198790: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x198790u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x198794: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x198794u;
    SET_GPR_U32(ctx, 31, 0x19879Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x198794u, 0x19879Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19879Cu;
label_19879c:
    // 0x19879c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x19879cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1987a0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1987a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1987a4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1987a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1987a8: 0x24840180  addiu       $a0, $a0, 0x180
    ctx->pc = 0x1987a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 384));
    // 0x1987ac: 0x24650180  addiu       $a1, $v1, 0x180
    ctx->pc = 0x1987acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 384));
    // 0x1987b0: 0xc44c01a8  lwc1        $f12, 0x1A8($v0)
    ctx->pc = 0x1987b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1987b4: 0xc040ed8  jal         func_103B60
    ctx->pc = 0x1987B4u;
    SET_GPR_U32(ctx, 31, 0x1987BCu);
    ctx->pc = 0x103B60u;
    {
        ctx->pc = 0x1987BCu;
        ps2_stubs::sceVu0ScaleVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1987BCu) { return; }
    ctx->pc = 0x1987BCu;
label_1987bc:
    // 0x1987bc: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x1987bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1987c0: 0xc05cd10  jal         func_173440
    ctx->pc = 0x1987C0u;
    SET_GPR_U32(ctx, 31, 0x1987C8u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x1987C0u, 0x1987C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1987C8u;
label_1987c8:
    // 0x1987c8: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x1987c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1987cc: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1987ccu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1987d0: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x1987D0u;
    SET_GPR_U32(ctx, 31, 0x1987D8u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x1987D0u, 0x1987D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1987D8u;
label_1987d8:
    // 0x1987d8: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x1987d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1987dc: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x1987DCu;
    SET_GPR_U32(ctx, 31, 0x1987E4u);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x1987DCu, 0x1987E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1987E4u;
label_1987e4:
    // 0x1987e4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1987e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1987e8: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x1987e8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x1987ec: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x1987ECu;
    {
        const bool branch_taken_0x1987ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1987ec) {
            ctx->pc = 0x198834u;
            goto label_198834;
        }
    }
    ctx->pc = 0x1987F4u;
    // 0x1987f4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1987f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1987f8: 0xac601334  sw          $zero, 0x1334($v1)
    ctx->pc = 0x1987f8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4916), GPR_U32(ctx, 0));
    // 0x1987fc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1987fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x198800: 0xac601330  sw          $zero, 0x1330($v1)
    ctx->pc = 0x198800u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4912), GPR_U32(ctx, 0));
    // 0x198804: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x198804u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x198808: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x198808u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19880c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x19880cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x198810: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x198810u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x198814: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x198814u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x198818: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x198818u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x19881c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x19881cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x198820: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x198820u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x198824: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x198824u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x198828: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x198828u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x19882c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x19882cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x198830: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x198830u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_198834:
    // 0x198834: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x198834u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x198838: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x198838u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x19883c: 0x3e00008  jr          $ra
    ctx->pc = 0x19883Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19883Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x198844u;
}
