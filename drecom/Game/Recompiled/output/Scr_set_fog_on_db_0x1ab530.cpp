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

// Function: Scr_set_fog_on_db
// Address: 0x1ab530 - 0x1ab5d8
void Scr_set_fog_on_db_0x1ab530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Scr_set_fog_on_db_0x1ab530");
#endif

    switch (ctx->pc) {
        case 0x1ab558u: goto label_1ab558;
        case 0x1ab578u: goto label_1ab578;
        default: break;
    }

    ctx->pc = 0x1ab530u;

    // 0x1ab530: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1ab530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1ab534: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1ab534u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1ab538: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1ab538u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1ab53c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1ab53cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1ab540: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1ab540u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1ab544: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x1ab544u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x1ab548: 0xa3a50048  sb          $a1, 0x48($sp)
    ctx->pc = 0x1ab548u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 72), (uint8_t)GPR_U32(ctx, 5));
    // 0x1ab54c: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1ab54cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ab550: 0x8c720034  lw          $s2, 0x34($v1)
    ctx->pc = 0x1ab550u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x1ab554: 0x70009e28  paddub      $s3, $zero, $zero
    ctx->pc = 0x1ab554u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1ab558:
    // 0x1ab558: 0x93a30048  lbu         $v1, 0x48($sp)
    ctx->pc = 0x1ab558u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ab55c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1ab55cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1ab560: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1ab560u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1ab564: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x1ab564u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x1ab568: 0x8c700018  lw          $s0, 0x18($v1)
    ctx->pc = 0x1ab568u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x1ab56c: 0x8e510010  lw          $s1, 0x10($s2)
    ctx->pc = 0x1ab56cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x1ab570: 0x0  nop
    ctx->pc = 0x1ab570u;
    // NOP
    // 0x1ab574: 0x0  nop
    ctx->pc = 0x1ab574u;
    // NOP
label_1ab578:
    // 0x1ab578: 0xde040030  ld          $a0, 0x30($s0)
    ctx->pc = 0x1ab578u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x1ab57c: 0x3c030010  lui         $v1, 0x10
    ctx->pc = 0x1ab57cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16 << 16));
    // 0x1ab580: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1ab580u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1ab584: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1ab584u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1ab588: 0xfe030030  sd          $v1, 0x30($s0)
    ctx->pc = 0x1ab588u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 48), GPR_U64(ctx, 3));
    // 0x1ab58c: 0x261000a0  addiu       $s0, $s0, 0xA0
    ctx->pc = 0x1ab58cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
    // 0x1ab590: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x1ab590u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x1ab594: 0x1620fff8  bnez        $s1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1AB594u;
    {
        const bool branch_taken_0x1ab594 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ab594) {
            ctx->pc = 0x1AB578u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ab578;
        }
    }
    ctx->pc = 0x1AB59Cu;
    // 0x1ab59c: 0x265200c0  addiu       $s2, $s2, 0xC0
    ctx->pc = 0x1ab59cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 192));
    // 0x1ab5a0: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1ab5a0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x1ab5a4: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1ab5a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ab5a8: 0x90630001  lbu         $v1, 0x1($v1)
    ctx->pc = 0x1ab5a8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
    // 0x1ab5ac: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1ab5acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1ab5b0: 0x263182b  sltu        $v1, $s3, $v1
    ctx->pc = 0x1ab5b0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1ab5b4: 0x1460ffe8  bnez        $v1, . + 4 + (-0x18 << 2)
    ctx->pc = 0x1AB5B4u;
    {
        const bool branch_taken_0x1ab5b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ab5b4) {
            ctx->pc = 0x1AB558u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ab558;
        }
    }
    ctx->pc = 0x1AB5BCu;
    // 0x1ab5bc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1ab5bcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ab5c0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1ab5c0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ab5c4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1ab5c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ab5c8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1ab5c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ab5cc: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x1ab5ccu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1ab5d0: 0x3e00008  jr          $ra
    ctx->pc = 0x1AB5D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AB5D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AB5D8u;
}
