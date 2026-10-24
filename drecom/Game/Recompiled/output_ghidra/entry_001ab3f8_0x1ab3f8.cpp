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

// Function: entry_001ab3f8
// Address: 0x1ab3f8 - 0x1ab490
void entry_001ab3f8_0x1ab3f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ab3f8_0x1ab3f8");
#endif

    ctx->pc = 0x1ab3f8u;

label_1ab3f8:
    // 0x1ab3f8: 0xde050030  ld          $a1, 0x30($s0)
    ctx->pc = 0x1ab3f8u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x1ab3fc: 0x3c03ffef  lui         $v1, 0xFFEF
    ctx->pc = 0x1ab3fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65519 << 16));
    // 0x1ab400: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1ab400u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1ab404: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1ab404u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1ab408: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x1ab408u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1ab40c: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x1ab40cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x1ab410: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1ab410u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1ab414: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1ab414u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1ab418: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x1ab418u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x1ab41c: 0xfe030030  sd          $v1, 0x30($s0)
    ctx->pc = 0x1ab41cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 48), GPR_U64(ctx, 3));
    // 0x1ab420: 0x261000a0  addiu       $s0, $s0, 0xA0
    ctx->pc = 0x1ab420u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
    // 0x1ab424: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x1ab424u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x1ab428: 0x1620fff3  bnez        $s1, . + 4 + (-0xD << 2)
    ctx->pc = 0x1AB428u;
    {
        const bool branch_taken_0x1ab428 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ab428) {
            ctx->pc = 0x1AB3F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ab3f8;
        }
    }
    ctx->pc = 0x1AB430u;
    // 0x1ab430: 0x265200c0  addiu       $s2, $s2, 0xC0
    ctx->pc = 0x1ab430u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 192));
    // 0x1ab434: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1ab434u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x1ab438: 0x92630001  lbu         $v1, 0x1($s3)
    ctx->pc = 0x1ab438u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
    // 0x1ab43c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1ab43cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1ab440: 0x283182b  sltu        $v1, $s4, $v1
    ctx->pc = 0x1ab440u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1ab444: 0x1460ffe4  bnez        $v1, . + 4 + (-0x1C << 2)
    ctx->pc = 0x1AB444u;
    {
        const bool branch_taken_0x1ab444 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ab444) {
            ctx->pc = 0x1AB3D8u;
            return;
        }
    }
    ctx->pc = 0x1AB44Cu;
    // 0x1ab44c: 0x26730090  addiu       $s3, $s3, 0x90
    ctx->pc = 0x1ab44cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 144));
    // 0x1ab450: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x1ab450u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x1ab454: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x1ab454u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1ab458: 0x94630052  lhu         $v1, 0x52($v1)
    ctx->pc = 0x1ab458u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 82)));
    // 0x1ab45c: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1ab45cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1ab460: 0x2a3182b  sltu        $v1, $s5, $v1
    ctx->pc = 0x1ab460u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1ab464: 0x1460ffda  bnez        $v1, . + 4 + (-0x26 << 2)
    ctx->pc = 0x1AB464u;
    {
        const bool branch_taken_0x1ab464 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ab464) {
            ctx->pc = 0x1AB3D0u;
            return;
        }
    }
    ctx->pc = 0x1AB46Cu;
    // 0x1ab46c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1ab46cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1ab470: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1ab470u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ab474: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1ab474u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ab478: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1ab478u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ab47c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1ab47cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ab480: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1ab480u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ab484: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x1ab484u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1ab488: 0x3e00008  jr          $ra
    ctx->pc = 0x1AB488u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AB488u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AB490u;
}
