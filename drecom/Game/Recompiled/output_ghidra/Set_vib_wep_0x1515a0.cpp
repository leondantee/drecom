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

// Function: Set_vib_wep
// Address: 0x1515a0 - 0x151640
void Set_vib_wep_0x1515a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Set_vib_wep_0x1515a0");
#endif

    switch (ctx->pc) {
        case 0x1515ecu: goto label_1515ec;
        case 0x15162cu: goto label_15162c;
        default: break;
    }

    ctx->pc = 0x1515a0u;

    // 0x1515a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1515a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1515a4: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x1515a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x1515a8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1515a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1515ac: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x1515acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
    // 0x1515b0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1515b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1515b4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1515b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1515b8: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x1515b8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1515bc: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x1515bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x1515c0: 0x246352e0  addiu       $v1, $v1, 0x52E0
    ctx->pc = 0x1515c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 21216));
    // 0x1515c4: 0x648021  addu        $s0, $v1, $a0
    ctx->pc = 0x1515c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1515c8: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x1515c8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1515cc: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1515CCu;
    {
        const bool branch_taken_0x1515cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1515cc) {
            ctx->pc = 0x1515ECu;
            goto label_1515ec;
        }
    }
    ctx->pc = 0x1515D4u;
    // 0x1515d4: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x1515d4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1515d8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1515d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1515dc: 0x22c00  sll         $a1, $v0, 16
    ctx->pc = 0x1515dcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1515e0: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x1515e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x1515e4: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x1515E4u;
    SET_GPR_U32(ctx, 31, 0x1515ECu);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x1515E4u, 0x1515ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1515ECu;
label_1515ec:
    // 0x1515ec: 0x92030001  lbu         $v1, 0x1($s0)
    ctx->pc = 0x1515ecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x1515f0: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x1515F0u;
    {
        const bool branch_taken_0x1515f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1515f0) {
            ctx->pc = 0x15162Cu;
            goto label_15162c;
        }
    }
    ctx->pc = 0x1515F8u;
    // 0x1515f8: 0x92020002  lbu         $v0, 0x2($s0)
    ctx->pc = 0x1515f8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x1515fc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1515fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x151600: 0x21a00  sll         $v1, $v0, 8
    ctx->pc = 0x151600u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x151604: 0x3c020600  lui         $v0, 0x600
    ctx->pc = 0x151604u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1536 << 16));
    // 0x151608: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x151608u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x15160c: 0x92020003  lbu         $v0, 0x3($s0)
    ctx->pc = 0x15160cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
    // 0x151610: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x151610u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x151614: 0x622025  or          $a0, $v1, $v0
    ctx->pc = 0x151614u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x151618: 0x92020001  lbu         $v0, 0x1($s0)
    ctx->pc = 0x151618u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x15161c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x15161cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x151620: 0x22c00  sll         $a1, $v0, 16
    ctx->pc = 0x151620u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x151624: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x151624u;
    SET_GPR_U32(ctx, 31, 0x15162Cu);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x151624u, 0x15162Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15162Cu;
label_15162c:
    // 0x15162c: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x15162cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x151630: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x151630u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x151634: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x151634u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x151638: 0x3e00008  jr          $ra
    ctx->pc = 0x151638u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x151638u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x151640u;
}
