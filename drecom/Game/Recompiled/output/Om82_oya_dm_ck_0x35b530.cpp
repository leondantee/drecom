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

// Function: Om82_oya_dm_ck
// Address: 0x35b530 - 0x35b5e4
void Om82_oya_dm_ck_0x35b530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Om82_oya_dm_ck_0x35b530");
#endif

    ctx->pc = 0x35b530u;

    // 0x35b530: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x35b530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x35b534: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x35b534u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x35b538: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x35b538u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x35b53c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x35b53cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35b540: 0x8c631334  lw          $v1, 0x1334($v1)
    ctx->pc = 0x35b540u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4916)));
    // 0x35b544: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x35B544u;
    {
        const bool branch_taken_0x35b544 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x35b544) {
            ctx->pc = 0x35B55Cu;
            goto label_35b55c;
        }
    }
    ctx->pc = 0x35B54Cu;
    // 0x35b54c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x35b54cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35b550: 0x8c631334  lw          $v1, 0x1334($v1)
    ctx->pc = 0x35b550u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4916)));
    // 0x35b554: 0x1060001f  beqz        $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x35B554u;
    {
        const bool branch_taken_0x35b554 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x35b554) {
            ctx->pc = 0x35B5D4u;
            goto label_35b5d4;
        }
    }
    ctx->pc = 0x35B55Cu;
label_35b55c:
    // 0x35b55c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x35b55cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35b560: 0x8c631334  lw          $v1, 0x1334($v1)
    ctx->pc = 0x35b560u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4916)));
    // 0x35b564: 0x90630012  lbu         $v1, 0x12($v1)
    ctx->pc = 0x35b564u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 18)));
    // 0x35b568: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x35b568u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x35b56c: 0x24030040  addiu       $v1, $zero, 0x40
    ctx->pc = 0x35b56cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x35b570: 0x14830018  bne         $a0, $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x35B570u;
    {
        const bool branch_taken_0x35b570 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x35b570) {
            ctx->pc = 0x35B5D4u;
            goto label_35b5d4;
        }
    }
    ctx->pc = 0x35B578u;
    // 0x35b578: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x35b578u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35b57c: 0x8c701334  lw          $s0, 0x1334($v1)
    ctx->pc = 0x35b57cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4916)));
    // 0x35b580: 0x8e04133c  lw          $a0, 0x133C($s0)
    ctx->pc = 0x35b580u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4924)));
    // 0x35b584: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x35b584u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x35b588: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x35b588u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x35b58c: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x35B58Cu;
    {
        const bool branch_taken_0x35b58c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x35b58c) {
            ctx->pc = 0x35B5D4u;
            goto label_35b5d4;
        }
    }
    ctx->pc = 0x35B594u;
    // 0x35b594: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x35b594u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x35b598: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x35b598u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35b59c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x35b59cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x35b5a0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x35b5a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35b5a4: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x35b5a4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x35b5a8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x35b5a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35b5ac: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x35b5acu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x35b5b0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x35b5b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35b5b4: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x35b5b4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x35b5b8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x35b5b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35b5bc: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x35b5bcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x35b5c0: 0x8fa50018  lw          $a1, 0x18($sp)
    ctx->pc = 0x35b5c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35b5c4: 0x8ca4133c  lw          $a0, 0x133C($a1)
    ctx->pc = 0x35b5c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4924)));
    // 0x35b5c8: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x35b5c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x35b5cc: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x35b5ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x35b5d0: 0xaca3133c  sw          $v1, 0x133C($a1)
    ctx->pc = 0x35b5d0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4924), GPR_U32(ctx, 3));
label_35b5d4:
    // 0x35b5d4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x35b5d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35b5d8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x35b5d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x35b5dc: 0x3e00008  jr          $ra
    ctx->pc = 0x35B5DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35B5DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35B5E4u;
}
