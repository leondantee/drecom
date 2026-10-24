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

// Function: Em10_R1_br_catch
// Address: 0x12b780 - 0x12b898
void Em10_R1_br_catch_0x12b780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em10_R1_br_catch_0x12b780");
#endif

    switch (ctx->pc) {
        case 0x12b7b8u: goto label_12b7b8;
        default: break;
    }

    ctx->pc = 0x12b780u;

    // 0x12b780: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x12b780u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x12b784: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x12b784u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x12b788: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x12b788u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x12b78c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x12b78cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12b790: 0x906309df  lbu         $v1, 0x9DF($v1)
    ctx->pc = 0x12b790u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2527)));
    // 0x12b794: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x12b794u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x12b798: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x12b798u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x12b79c: 0x1060002a  beqz        $v1, . + 4 + (0x2A << 2)
    ctx->pc = 0x12B79Cu;
    {
        const bool branch_taken_0x12b79c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x12b79c) {
            ctx->pc = 0x12B848u;
            goto label_12b848;
        }
    }
    ctx->pc = 0x12B7A4u;
    // 0x12b7a4: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x12b7a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12b7a8: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x12b7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x12b7ac: 0x24454e60  addiu       $a1, $v0, 0x4E60
    ctx->pc = 0x12b7acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 20064));
    // 0x12b7b0: 0xc06cd40  jal         func_1B3500
    ctx->pc = 0x12B7B0u;
    SET_GPR_U32(ctx, 31, 0x12B7B8u);
    ctx->pc = 0x1B3500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3500u, 0x12B7B0u, 0x12B7B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B7B8u;
label_12b7b8:
    // 0x12b7b8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x12b7b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x12b7bc: 0x10430014  beq         $v0, $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x12B7BCu;
    {
        const bool branch_taken_0x12b7bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x12b7bc) {
            ctx->pc = 0x12B810u;
            goto label_12b810;
        }
    }
    ctx->pc = 0x12B7C4u;
    // 0x12b7c4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x12b7c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12b7c8: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x12B7C8u;
    {
        const bool branch_taken_0x12b7c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x12b7c8) {
            ctx->pc = 0x12B7D8u;
            goto label_12b7d8;
        }
    }
    ctx->pc = 0x12B7D0u;
    // 0x12b7d0: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x12B7D0u;
    {
        const bool branch_taken_0x12b7d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12b7d0) {
            ctx->pc = 0x12B848u;
            goto label_12b848;
        }
    }
    ctx->pc = 0x12B7D8u;
label_12b7d8:
    // 0x12b7d8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x12b7d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12b7dc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x12b7dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12b7e0: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x12b7e0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x12b7e4: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x12b7e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x12b7e8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x12b7e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12b7ec: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x12b7ecu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x12b7f0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x12b7f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12b7f4: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x12b7f4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x12b7f8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x12b7f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12b7fc: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x12b7fcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x12b800: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x12b800u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12b804: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x12b804u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x12b808: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x12B808u;
    {
        const bool branch_taken_0x12b808 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12b808) {
            ctx->pc = 0x12B888u;
            goto label_12b888;
        }
    }
    ctx->pc = 0x12B810u;
label_12b810:
    // 0x12b810: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x12b810u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12b814: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x12b814u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12b818: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x12b818u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x12b81c: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x12b81cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x12b820: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x12b820u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12b824: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x12b824u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x12b828: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x12b828u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12b82c: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x12b82cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x12b830: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x12b830u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12b834: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x12b834u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x12b838: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x12b838u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12b83c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x12b83cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x12b840: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x12B840u;
    {
        const bool branch_taken_0x12b840 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12b840) {
            ctx->pc = 0x12B888u;
            goto label_12b888;
        }
    }
    ctx->pc = 0x12B848u;
label_12b848:
    // 0x12b848: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x12b848u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12b84c: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x12b84cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x12b850: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x12B850u;
    {
        const bool branch_taken_0x12b850 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x12b850) {
            ctx->pc = 0x12B888u;
            goto label_12b888;
        }
    }
    ctx->pc = 0x12B858u;
    // 0x12b858: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x12b858u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12b85c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x12b85cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12b860: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x12b860u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x12b864: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x12b864u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x12b868: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x12b868u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12b86c: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x12b86cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x12b870: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x12b870u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12b874: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x12b874u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x12b878: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x12b878u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12b87c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x12b87cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x12b880: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x12b880u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12b884: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x12b884u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_12b888:
    // 0x12b888: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x12b888u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12b88c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x12b88cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x12b890: 0x3e00008  jr          $ra
    ctx->pc = 0x12B890u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12B890u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12B898u;
}
