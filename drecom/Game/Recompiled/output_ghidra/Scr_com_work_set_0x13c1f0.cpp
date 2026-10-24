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

// Function: Scr_com_work_set
// Address: 0x13c1f0 - 0x13c2cc
void Scr_com_work_set_0x13c1f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Scr_com_work_set_0x13c1f0");
#endif

    switch (ctx->pc) {
        case 0x13c220u: goto label_13c220;
        case 0x13c290u: goto label_13c290;
        default: break;
    }

    ctx->pc = 0x13c1f0u;

    // 0x13c1f0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x13c1f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x13c1f4: 0x7fbf0040  sq          $ra, 0x40($sp)
    ctx->pc = 0x13c1f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 31));
    // 0x13c1f8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x13c1f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x13c1fc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x13c1fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x13c200: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x13c200u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x13c204: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13c204u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x13c208: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x13c208u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
    // 0x13c20c: 0xafa50058  sw          $a1, 0x58($sp)
    ctx->pc = 0x13c20cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 5));
    // 0x13c210: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x13c210u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x13c214: 0x8c44005c  lw          $a0, 0x5C($v0)
    ctx->pc = 0x13c214u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
    // 0x13c218: 0xc04f0b4  jal         func_13C2D0
    ctx->pc = 0x13C218u;
    SET_GPR_U32(ctx, 31, 0x13C220u);
    ctx->pc = 0x13C2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C2D0u, 0x13C218u, 0x13C220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C220u;
label_13c220:
    // 0x13c220: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x13c220u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x13c224: 0x8c53005c  lw          $s3, 0x5C($v0)
    ctx->pc = 0x13c224u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
    // 0x13c228: 0x96630000  lhu         $v1, 0x0($s3)
    ctx->pc = 0x13c228u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x13c22c: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x13c22cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x13c230: 0xa4430050  sh          $v1, 0x50($v0)
    ctx->pc = 0x13c230u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 80), (uint16_t)GPR_U32(ctx, 3));
    // 0x13c234: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x13c234u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x13c238: 0xa4430052  sh          $v1, 0x52($v0)
    ctx->pc = 0x13c238u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 82), (uint16_t)GPR_U32(ctx, 3));
    // 0x13c23c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x13c23cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x13c240: 0x2443000f  addiu       $v1, $v0, 0xF
    ctx->pc = 0x13c240u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x13c244: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x13c244u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x13c248: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x13c248u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x13c24c: 0xafa20058  sw          $v0, 0x58($sp)
    ctx->pc = 0x13c24cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 2));
    // 0x13c250: 0x8fb00058  lw          $s0, 0x58($sp)
    ctx->pc = 0x13c250u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x13c254: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x13c254u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x13c258: 0xac5002d0  sw          $s0, 0x2D0($v0)
    ctx->pc = 0x13c258u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 720), GPR_U32(ctx, 16));
    // 0x13c25c: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x13c25cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x13c260: 0x94420052  lhu         $v0, 0x52($v0)
    ctx->pc = 0x13c260u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 82)));
    // 0x13c264: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x13c264u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x13c268: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x13c268u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x13c26c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x13c26cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x13c270: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x13c270u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x13c274: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x13c274u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x13c278: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x13c278u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x13c27c: 0xafa20058  sw          $v0, 0x58($sp)
    ctx->pc = 0x13c27cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 2));
    // 0x13c280: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x13c280u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x13c284: 0x94420052  lhu         $v0, 0x52($v0)
    ctx->pc = 0x13c284u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 82)));
    // 0x13c288: 0x3052ffff  andi        $s2, $v0, 0xFFFF
    ctx->pc = 0x13c288u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x13c28c: 0x26710008  addiu       $s1, $s3, 0x8
    ctx->pc = 0x13c28cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
label_13c290:
    // 0x13c290: 0xae1100a0  sw          $s1, 0xA0($s0)
    ctx->pc = 0x13c290u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 17));
    // 0x13c294: 0x26310020  addiu       $s1, $s1, 0x20
    ctx->pc = 0x13c294u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x13c298: 0x26100120  addiu       $s0, $s0, 0x120
    ctx->pc = 0x13c298u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    // 0x13c29c: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x13c29cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x13c2a0: 0x1640fffb  bnez        $s2, . + 4 + (-0x5 << 2)
    ctx->pc = 0x13C2A0u;
    {
        const bool branch_taken_0x13c2a0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x13c2a0) {
            ctx->pc = 0x13C290u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13c290;
        }
    }
    ctx->pc = 0x13C2A8u;
    // 0x13c2a8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x13c2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x13c2ac: 0x7bbf0040  lq          $ra, 0x40($sp)
    ctx->pc = 0x13c2acu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x13c2b0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x13c2b0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13c2b4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x13c2b4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13c2b8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x13c2b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13c2bc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13c2bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13c2c0: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x13c2c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x13c2c4: 0x3e00008  jr          $ra
    ctx->pc = 0x13C2C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13C2C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13C2CCu;
}
