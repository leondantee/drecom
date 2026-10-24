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

// Function: Em01s_R1_dm_swim
// Address: 0x30a700 - 0x30a804
void Em01s_R1_dm_swim_0x30a700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em01s_R1_dm_swim_0x30a700");
#endif

    switch (ctx->pc) {
        case 0x30a754u: goto label_30a754;
        case 0x30a77cu: goto label_30a77c;
        case 0x30a788u: goto label_30a788;
        case 0x30a798u: goto label_30a798;
        case 0x30a7a4u: goto label_30a7a4;
        default: break;
    }

    ctx->pc = 0x30a700u;

    // 0x30a700: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x30a700u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x30a704: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x30a704u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x30a708: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x30a708u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x30a70c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x30a70cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30a710: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x30a710u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x30a714: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x30a714u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x30a718: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x30a718u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30a71c: 0x10830013  beq         $a0, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x30A71Cu;
    {
        const bool branch_taken_0x30a71c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x30a71c) {
            ctx->pc = 0x30A76Cu;
            goto label_30a76c;
        }
    }
    ctx->pc = 0x30A724u;
    // 0x30a724: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x30A724u;
    {
        const bool branch_taken_0x30a724 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x30a724) {
            ctx->pc = 0x30A734u;
            goto label_30a734;
        }
    }
    ctx->pc = 0x30A72Cu;
    // 0x30a72c: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x30A72Cu;
    {
        const bool branch_taken_0x30a72c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30a72c) {
            ctx->pc = 0x30A7F4u;
            goto label_30a7f4;
        }
    }
    ctx->pc = 0x30A734u;
label_30a734:
    // 0x30a734: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x30a734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30a738: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x30a738u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30a73c: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x30a73cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x30a740: 0x24063c3a  addiu       $a2, $zero, 0x3C3A
    ctx->pc = 0x30a740u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15418));
    // 0x30a744: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x30a744u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30a748: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x30a748u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x30a74c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x30A74Cu;
    SET_GPR_U32(ctx, 31, 0x30A754u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x30A74Cu, 0x30A754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30A754u;
label_30a754:
    // 0x30a754: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x30a754u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30a758: 0xa4401278  sh          $zero, 0x1278($v0)
    ctx->pc = 0x30a758u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 0));
    // 0x30a75c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x30a75cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30a760: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x30a760u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x30a764: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x30a764u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x30a768: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x30a768u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_30a76c:
    // 0x30a76c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x30a76cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30a770: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x30a770u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x30a774: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x30A774u;
    SET_GPR_U32(ctx, 31, 0x30A77Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x30A774u, 0x30A77Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30A77Cu;
label_30a77c:
    // 0x30a77c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x30a77cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30a780: 0xc05cd10  jal         func_173440
    ctx->pc = 0x30A780u;
    SET_GPR_U32(ctx, 31, 0x30A788u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x30A780u, 0x30A788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30A788u;
label_30a788:
    // 0x30a788: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x30a788u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30a78c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x30a78cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x30a790: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x30A790u;
    SET_GPR_U32(ctx, 31, 0x30A798u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x30A790u, 0x30A798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30A798u;
label_30a798:
    // 0x30a798: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x30a798u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30a79c: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x30A79Cu;
    SET_GPR_U32(ctx, 31, 0x30A7A4u);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x30A79Cu, 0x30A7A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30A7A4u;
label_30a7a4:
    // 0x30a7a4: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x30a7a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30a7a8: 0x84831278  lh          $v1, 0x1278($a0)
    ctx->pc = 0x30a7a8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4728)));
    // 0x30a7ac: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x30a7acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x30a7b0: 0xa4831278  sh          $v1, 0x1278($a0)
    ctx->pc = 0x30a7b0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x30a7b4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x30a7b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30a7b8: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x30a7b8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x30a7bc: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x30A7BCu;
    {
        const bool branch_taken_0x30a7bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x30a7bc) {
            ctx->pc = 0x30A7F4u;
            goto label_30a7f4;
        }
    }
    ctx->pc = 0x30A7C4u;
    // 0x30a7c4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x30a7c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30a7c8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x30a7c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30a7cc: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x30a7ccu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x30a7d0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x30a7d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30a7d4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x30a7d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30a7d8: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x30a7d8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x30a7dc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x30a7dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30a7e0: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x30a7e0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x30a7e4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x30a7e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30a7e8: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x30a7e8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x30a7ec: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x30a7ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30a7f0: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x30a7f0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_30a7f4:
    // 0x30a7f4: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x30a7f4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30a7f8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x30a7f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x30a7fc: 0x3e00008  jr          $ra
    ctx->pc = 0x30A7FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30A7FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30A804u;
}
