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

// Function: entry_0013b1f0
// Address: 0x13b1f0 - 0x13b260
void entry_0013b1f0_0x13b1f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013b1f0_0x13b1f0");
#endif

    switch (ctx->pc) {
        case 0x13b240u: goto label_13b240;
        default: break;
    }

    ctx->pc = 0x13b1f0u;

    // 0x13b1f0: 0x2a220006  slti        $v0, $s1, 0x6
    ctx->pc = 0x13b1f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x13b1f4: 0x1440feb0  bnez        $v0, . + 4 + (-0x150 << 2)
    ctx->pc = 0x13B1F4u;
    {
        const bool branch_taken_0x13b1f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13b1f4) {
            ctx->pc = 0x13ACB8u;
            return;
        }
    }
    ctx->pc = 0x13B1FCu;
    // 0x13b1fc: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x13b1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x13b200: 0x24537898  addiu       $s3, $v0, 0x7898
    ctx->pc = 0x13b200u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 30872));
    // 0x13b204: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x13b204u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x13b208: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x13b208u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3B7898u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3B7898u, _value); } while (0);
    // 0x13b20c: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x13b20cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x13b210: 0x34421043  ori         $v0, $v0, 0x1043
    ctx->pc = 0x13b210u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4163);
    // 0x13b214: 0xae620004  sw          $v0, 0x4($s3)
    ctx->pc = 0x13b214u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3B789Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3B789Cu, _value); } while (0);
    // 0x13b218: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x13b218u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x13b21c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x13b21cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x13b220: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x13b220u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x13b224: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x13b224u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x13b228: 0xfe620008  sd          $v0, 0x8($s3)
    ctx->pc = 0x13b228u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 8), GPR_U64(ctx, 2));
    // 0x13b22c: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x13b22cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x13b230: 0x24441614  addiu       $a0, $v0, 0x1614
    ctx->pc = 0x13b230u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 5652));
    // 0x13b234: 0x72602e28  paddub      $a1, $s3, $zero
    ctx->pc = 0x13b234u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x13b238: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x13B238u;
    SET_GPR_U32(ctx, 31, 0x13B240u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x13B238u, 0x13B240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B240u;
label_13b240:
    // 0x13b240: 0x7bbf0040  lq          $ra, 0x40($sp)
    ctx->pc = 0x13b240u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x13b244: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x13b244u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13b248: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x13b248u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13b24c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x13b24cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13b250: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13b250u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13b254: 0x27bd00e0  addiu       $sp, $sp, 0xE0
    ctx->pc = 0x13b254u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x13b258: 0x3e00008  jr          $ra
    ctx->pc = 0x13B258u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13B258u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13B260u;
}
