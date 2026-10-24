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

// Function: entry_00157050
// Address: 0x157050 - 0x157134
void entry_00157050_0x157050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00157050_0x157050");
#endif

    switch (ctx->pc) {
        case 0x157098u: goto label_157098;
        case 0x1570d8u: goto label_1570d8;
        case 0x157108u: goto label_157108;
        default: break;
    }

    ctx->pc = 0x157050u;

    // 0x157050: 0x2e220004  sltiu       $v0, $s1, 0x4
    ctx->pc = 0x157050u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x157054: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x157054u;
    {
        const bool branch_taken_0x157054 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x157054) {
            ctx->pc = 0x157028u;
            return;
        }
    }
    ctx->pc = 0x15705Cu;
    // 0x15705c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x15705cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x157060: 0xae620010  sw          $v0, 0x10($s3)
    ctx->pc = 0x157060u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 2));
    // 0x157064: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x157064u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
    // 0x157068: 0x34621043  ori         $v0, $v1, 0x1043
    ctx->pc = 0x157068u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4163);
    // 0x15706c: 0xae620014  sw          $v0, 0x14($s3)
    ctx->pc = 0x15706cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 2));
    // 0x157070: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x157070u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x157074: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x157074u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x157078: 0x24030044  addiu       $v1, $zero, 0x44
    ctx->pc = 0x157078u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x15707c: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x15707cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x157080: 0xfe620018  sd          $v0, 0x18($s3)
    ctx->pc = 0x157080u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 24), GPR_U64(ctx, 2));
    // 0x157084: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x157084u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x157088: 0x24441614  addiu       $a0, $v0, 0x1614
    ctx->pc = 0x157088u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 5652));
    // 0x15708c: 0x26650010  addiu       $a1, $s3, 0x10
    ctx->pc = 0x15708cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x157090: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x157090u;
    SET_GPR_U32(ctx, 31, 0x157098u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x157090u, 0x157098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157098u;
label_157098:
    // 0x157098: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x157098u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x15709c: 0xae630040  sw          $v1, 0x40($s3)
    ctx->pc = 0x15709cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 64), GPR_U32(ctx, 3));
    // 0x1570a0: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x1570a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
    // 0x1570a4: 0x3462104f  ori         $v0, $v1, 0x104F
    ctx->pc = 0x1570a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4175);
    // 0x1570a8: 0xae620044  sw          $v0, 0x44($s3)
    ctx->pc = 0x1570a8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 68), GPR_U32(ctx, 2));
    // 0x1570ac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1570acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1570b0: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x1570b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1570b4: 0x3c030a00  lui         $v1, 0xA00
    ctx->pc = 0x1570b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2560 << 16));
    // 0x1570b8: 0x34620070  ori         $v0, $v1, 0x70
    ctx->pc = 0x1570b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)112);
    // 0x1570bc: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x1570bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x1570c0: 0xfe620048  sd          $v0, 0x48($s3)
    ctx->pc = 0x1570c0u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 72), GPR_U64(ctx, 2));
    // 0x1570c4: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x1570c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x1570c8: 0x24441614  addiu       $a0, $v0, 0x1614
    ctx->pc = 0x1570c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 5652));
    // 0x1570cc: 0x26650040  addiu       $a1, $s3, 0x40
    ctx->pc = 0x1570ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 64));
    // 0x1570d0: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x1570D0u;
    SET_GPR_U32(ctx, 31, 0x1570D8u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x1570D0u, 0x1570D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1570D8u;
label_1570d8:
    // 0x1570d8: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1570d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x1570dc: 0xae620020  sw          $v0, 0x20($s3)
    ctx->pc = 0x1570dcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 32), GPR_U32(ctx, 2));
    // 0x1570e0: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x1570e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x1570e4: 0x34421015  ori         $v0, $v0, 0x1015
    ctx->pc = 0x1570e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4117);
    // 0x1570e8: 0xae620024  sw          $v0, 0x24($s3)
    ctx->pc = 0x1570e8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 36), GPR_U32(ctx, 2));
    // 0x1570ec: 0x24020060  addiu       $v0, $zero, 0x60
    ctx->pc = 0x1570ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x1570f0: 0xfe620028  sd          $v0, 0x28($s3)
    ctx->pc = 0x1570f0u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 40), GPR_U64(ctx, 2));
    // 0x1570f4: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x1570f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x1570f8: 0x24441614  addiu       $a0, $v0, 0x1614
    ctx->pc = 0x1570f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 5652));
    // 0x1570fc: 0x26650020  addiu       $a1, $s3, 0x20
    ctx->pc = 0x1570fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
    // 0x157100: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x157100u;
    SET_GPR_U32(ctx, 31, 0x157108u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x157100u, 0x157108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157108u;
label_157108:
    // 0x157108: 0x7bbf0070  lq          $ra, 0x70($sp)
    ctx->pc = 0x157108u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x15710c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x15710cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x157110: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x157110u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x157114: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x157114u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x157118: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x157118u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x15711c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x15711cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x157120: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x157120u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x157124: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x157124u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x157128: 0x27bd00d0  addiu       $sp, $sp, 0xD0
    ctx->pc = 0x157128u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x15712c: 0x3e00008  jr          $ra
    ctx->pc = 0x15712Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15712Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x157134u;
}
