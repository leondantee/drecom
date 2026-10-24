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

// Function: camera_auto_trackud_init
// Address: 0x17fbc0 - 0x17fc58
void camera_auto_trackud_init_0x17fbc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("camera_auto_trackud_init_0x17fbc0");
#endif

    switch (ctx->pc) {
        case 0x17fc3cu: goto label_17fc3c;
        default: break;
    }

    ctx->pc = 0x17fbc0u;

    // 0x17fbc0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x17fbc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17fbc4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x17fbc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x17fbc8: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x17fbc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x17fbcc: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x17fbccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x17fbd0: 0x8422f138  lh          $v0, -0xEC8($at)
    ctx->pc = 0x17fbd0u;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x47F138u));
    // 0x17fbd4: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x17fbd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x17fbd8: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x17fbd8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x17fbdc: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x17fbdcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x17fbe0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17fbe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17fbe4: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x17fbe4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x17fbe8: 0x3c02004a  lui         $v0, 0x4A
    ctx->pc = 0x17fbe8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)74 << 16));
    // 0x17fbec: 0x24421380  addiu       $v0, $v0, 0x1380
    ctx->pc = 0x17fbecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4992));
    // 0x17fbf0: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x17fbf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17fbf4: 0x8c830158  lw          $v1, 0x158($a0)
    ctx->pc = 0x17fbf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 344)));
    // 0x17fbf8: 0x3c02bfff  lui         $v0, 0xBFFF
    ctx->pc = 0x17fbf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49151 << 16));
    // 0x17fbfc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x17fbfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x17fc00: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x17fc00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x17fc04: 0xac820158  sw          $v0, 0x158($a0)
    ctx->pc = 0x17fc04u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 344), GPR_U32(ctx, 2));
    // 0x17fc08: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x17fc08u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17fc0c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x17fc0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17fc10: 0xe4400074  swc1        $f0, 0x74($v0)
    ctx->pc = 0x17fc10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 116), bits); }
    // 0x17fc14: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x17fc14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17fc18: 0x8c4200b8  lw          $v0, 0xB8($v0)
    ctx->pc = 0x17fc18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 184)));
    // 0x17fc1c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x17FC1Cu;
    {
        const bool branch_taken_0x17fc1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17fc1c) {
            ctx->pc = 0x17FC30u;
            goto label_17fc30;
        }
    }
    ctx->pc = 0x17FC24u;
    // 0x17fc24: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x17fc24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17fc28: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x17fc28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17fc2c: 0xac4300b8  sw          $v1, 0xB8($v0)
    ctx->pc = 0x17fc2cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 184), GPR_U32(ctx, 3));
label_17fc30:
    // 0x17fc30: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x17fc30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17fc34: 0xc05ff18  jal         func_17FC60
    ctx->pc = 0x17FC34u;
    SET_GPR_U32(ctx, 31, 0x17FC3Cu);
    ctx->pc = 0x17FC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17FC60u, 0x17FC34u, 0x17FC3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17FC3Cu;
label_17fc3c:
    // 0x17fc3c: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x17fc3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x17fc40: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x17fc40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17fc44: 0xac640010  sw          $a0, 0x10($v1)
    ctx->pc = 0x17fc44u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 4));
    // 0x17fc48: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x17fc48u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17fc4c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x17fc4cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x17fc50: 0x3e00008  jr          $ra
    ctx->pc = 0x17FC50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17FC50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17FC58u;
}
