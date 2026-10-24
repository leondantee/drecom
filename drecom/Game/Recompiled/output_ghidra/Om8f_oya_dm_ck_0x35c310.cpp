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

// Function: Om8f_oya_dm_ck
// Address: 0x35c310 - 0x35c3c8
void Om8f_oya_dm_ck_0x35c310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Om8f_oya_dm_ck_0x35c310");
#endif

    ctx->pc = 0x35c310u;

    // 0x35c310: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x35c310u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x35c314: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x35c314u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x35c318: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x35c318u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x35c31c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x35c31cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35c320: 0x8c631334  lw          $v1, 0x1334($v1)
    ctx->pc = 0x35c320u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4916)));
    // 0x35c324: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x35C324u;
    {
        const bool branch_taken_0x35c324 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x35c324) {
            ctx->pc = 0x35C33Cu;
            goto label_35c33c;
        }
    }
    ctx->pc = 0x35C32Cu;
    // 0x35c32c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x35c32cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35c330: 0x8c631334  lw          $v1, 0x1334($v1)
    ctx->pc = 0x35c330u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4916)));
    // 0x35c334: 0x10600020  beqz        $v1, . + 4 + (0x20 << 2)
    ctx->pc = 0x35C334u;
    {
        const bool branch_taken_0x35c334 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x35c334) {
            ctx->pc = 0x35C3B8u;
            goto label_35c3b8;
        }
    }
    ctx->pc = 0x35C33Cu;
label_35c33c:
    // 0x35c33c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x35c33cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35c340: 0x8c631334  lw          $v1, 0x1334($v1)
    ctx->pc = 0x35c340u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4916)));
    // 0x35c344: 0x90630012  lbu         $v1, 0x12($v1)
    ctx->pc = 0x35c344u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 18)));
    // 0x35c348: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x35c348u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x35c34c: 0x24030040  addiu       $v1, $zero, 0x40
    ctx->pc = 0x35c34cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x35c350: 0x14830019  bne         $a0, $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x35C350u;
    {
        const bool branch_taken_0x35c350 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x35c350) {
            ctx->pc = 0x35C3B8u;
            goto label_35c3b8;
        }
    }
    ctx->pc = 0x35C358u;
    // 0x35c358: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x35c358u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35c35c: 0x8c701334  lw          $s0, 0x1334($v1)
    ctx->pc = 0x35c35cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4916)));
    // 0x35c360: 0x8e04133c  lw          $a0, 0x133C($s0)
    ctx->pc = 0x35c360u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4924)));
    // 0x35c364: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x35c364u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x35c368: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x35c368u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x35c36c: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x35C36Cu;
    {
        const bool branch_taken_0x35c36c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x35c36c) {
            ctx->pc = 0x35C3B8u;
            goto label_35c3b8;
        }
    }
    ctx->pc = 0x35C374u;
    // 0x35c374: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x35c374u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x35c378: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x35c378u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35c37c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x35c37cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x35c380: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x35c380u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35c384: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x35c384u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35c388: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x35c388u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x35c38c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x35c38cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35c390: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x35c390u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x35c394: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x35c394u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35c398: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x35c398u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x35c39c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x35c39cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35c3a0: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x35c3a0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x35c3a4: 0x8fa50018  lw          $a1, 0x18($sp)
    ctx->pc = 0x35c3a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35c3a8: 0x8ca4133c  lw          $a0, 0x133C($a1)
    ctx->pc = 0x35c3a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4924)));
    // 0x35c3ac: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x35c3acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x35c3b0: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x35c3b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x35c3b4: 0xaca3133c  sw          $v1, 0x133C($a1)
    ctx->pc = 0x35c3b4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4924), GPR_U32(ctx, 3));
label_35c3b8:
    // 0x35c3b8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x35c3b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35c3bc: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x35c3bcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x35c3c0: 0x3e00008  jr          $ra
    ctx->pc = 0x35C3C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35C3C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35C3C8u;
}
