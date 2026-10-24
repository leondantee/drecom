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

// Function: entry_0029e258
// Address: 0x29e258 - 0x29e2e4
void entry_0029e258_0x29e258(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0029e258_0x29e258");
#endif

    switch (ctx->pc) {
        case 0x29e288u: goto label_29e288;
        default: break;
    }

    ctx->pc = 0x29e258u;

    // 0x29e258: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x29e258u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x29e25c: 0x8c231a64  lw          $v1, 0x1A64($at)
    ctx->pc = 0x29e25cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A64u));
    // 0x29e260: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x29e260u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x29e264: 0x1060001f  beqz        $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x29E264u;
    {
        const bool branch_taken_0x29e264 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x29e264) {
            ctx->pc = 0x29E2E4u;
            return;
        }
    }
    ctx->pc = 0x29E26Cu;
    // 0x29e26c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x29e26cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29e270: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x29e270u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x29e274: 0x94630046  lhu         $v1, 0x46($v1)
    ctx->pc = 0x29e274u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 70)));
    // 0x29e278: 0x1460001a  bnez        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x29E278u;
    {
        const bool branch_taken_0x29e278 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x29e278) {
            ctx->pc = 0x29E2E4u;
            return;
        }
    }
    ctx->pc = 0x29E280u;
    // 0x29e280: 0xc067694  jal         func_19DA50
    ctx->pc = 0x29E280u;
    SET_GPR_U32(ctx, 31, 0x29E288u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x29E280u, 0x29E288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E288u;
label_29e288:
    // 0x29e288: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x29e288u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x29e28c: 0x30640003  andi        $a0, $v1, 0x3
    ctx->pc = 0x29e28cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x29e290: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x29e290u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29e294: 0x14830013  bne         $a0, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x29E294u;
    {
        const bool branch_taken_0x29e294 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x29e294) {
            ctx->pc = 0x29E2E4u;
            return;
        }
    }
    ctx->pc = 0x29E29Cu;
    // 0x29e29c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x29e29cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29e2a0: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x29e2a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x29e2a4: 0x8c630014  lw          $v1, 0x14($v1)
    ctx->pc = 0x29e2a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x29e2a8: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x29e2a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x29e2ac: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x29E2ACu;
    {
        const bool branch_taken_0x29e2ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x29e2ac) {
            ctx->pc = 0x29E2E4u;
            return;
        }
    }
    ctx->pc = 0x29E2B4u;
    // 0x29e2b4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x29e2b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29e2b8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x29e2b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29e2bc: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x29e2bcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x29e2c0: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x29e2c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x29e2c4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x29e2c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29e2c8: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x29e2c8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x29e2cc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x29e2ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29e2d0: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x29e2d0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x29e2d4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x29e2d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29e2d8: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x29e2d8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x29e2dc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x29e2dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29e2e0: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x29e2e0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x29e2e4u;
}
