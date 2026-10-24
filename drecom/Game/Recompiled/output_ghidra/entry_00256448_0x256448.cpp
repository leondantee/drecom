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

// Function: entry_00256448
// Address: 0x256448 - 0x2564d0
void entry_00256448_0x256448(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00256448_0x256448");
#endif

    ctx->pc = 0x256448u;

label_256448:
    // 0x256448: 0xde230008  ld          $v1, 0x8($s1)
    ctx->pc = 0x256448u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x25644c: 0xfe030020  sd          $v1, 0x20($s0)
    ctx->pc = 0x25644cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 32), GPR_U64(ctx, 3));
    // 0x256450: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x256450u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x256454: 0xfe030028  sd          $v1, 0x28($s0)
    ctx->pc = 0x256454u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 40), GPR_U64(ctx, 3));
    // 0x256458: 0xae160044  sw          $s6, 0x44($s0)
    ctx->pc = 0x256458u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 22));
    // 0x25645c: 0xae120054  sw          $s2, 0x54($s0)
    ctx->pc = 0x25645cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 18));
    // 0x256460: 0xae130064  sw          $s3, 0x64($s0)
    ctx->pc = 0x256460u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 19));
    // 0x256464: 0xae140074  sw          $s4, 0x74($s0)
    ctx->pc = 0x256464u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 20));
    // 0x256468: 0xae150084  sw          $s5, 0x84($s0)
    ctx->pc = 0x256468u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 21));
    // 0x25646c: 0x26d60240  addiu       $s6, $s6, 0x240
    ctx->pc = 0x25646cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 576));
    // 0x256470: 0x26520240  addiu       $s2, $s2, 0x240
    ctx->pc = 0x256470u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 576));
    // 0x256474: 0x267300c0  addiu       $s3, $s3, 0xC0
    ctx->pc = 0x256474u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 192));
    // 0x256478: 0x269400c0  addiu       $s4, $s4, 0xC0
    ctx->pc = 0x256478u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 192));
    // 0x25647c: 0x26b50060  addiu       $s5, $s5, 0x60
    ctx->pc = 0x25647cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 96));
    // 0x256480: 0x261000a0  addiu       $s0, $s0, 0xA0
    ctx->pc = 0x256480u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
    // 0x256484: 0x26f7ffff  addiu       $s7, $s7, -0x1
    ctx->pc = 0x256484u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 4294967295));
    // 0x256488: 0x16e0ffef  bnez        $s7, . + 4 + (-0x11 << 2)
    ctx->pc = 0x256488u;
    {
        const bool branch_taken_0x256488 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        if (branch_taken_0x256488) {
            ctx->pc = 0x256448u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_256448;
        }
    }
    ctx->pc = 0x256490u;
    // 0x256490: 0x263100c0  addiu       $s1, $s1, 0xC0
    ctx->pc = 0x256490u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 192));
    // 0x256494: 0x27deffff  addiu       $fp, $fp, -0x1
    ctx->pc = 0x256494u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 4294967295));
    // 0x256498: 0x1fc0ffcb  bgtz        $fp, . + 4 + (-0x35 << 2)
    ctx->pc = 0x256498u;
    {
        const bool branch_taken_0x256498 = (GPR_S32(ctx, 30) > 0);
        if (branch_taken_0x256498) {
            ctx->pc = 0x2563C8u;
            return;
        }
    }
    ctx->pc = 0x2564A0u;
    // 0x2564a0: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x2564a0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2564a4: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x2564a4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2564a8: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2564a8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2564ac: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2564acu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2564b0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2564b0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2564b4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2564b4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2564b8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2564b8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2564bc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2564bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2564c0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2564c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2564c4: 0x27bd00a0  addiu       $sp, $sp, 0xA0
    ctx->pc = 0x2564c4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2564c8: 0x3e00008  jr          $ra
    ctx->pc = 0x2564C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2564C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2564D0u;
}
