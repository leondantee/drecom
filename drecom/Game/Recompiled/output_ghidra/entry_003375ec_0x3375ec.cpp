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

// Function: entry_003375ec
// Address: 0x3375ec - 0x33764c
void entry_003375ec_0x3375ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003375ec_0x3375ec");
#endif

    switch (ctx->pc) {
        case 0x337610u: goto label_337610;
        default: break;
    }

    ctx->pc = 0x3375ecu;

    // 0x3375ec: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3375ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x3375f0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x3375f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x3375f4: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x3375f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x3375f8: 0x3442103f  ori         $v0, $v0, 0x103F
    ctx->pc = 0x3375f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4159);
    // 0x3375fc: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x3375fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x337600: 0x26240008  addiu       $a0, $s1, 0x8
    ctx->pc = 0x337600u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x337604: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x337604u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x337608: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x337608u;
    SET_GPR_U32(ctx, 31, 0x337610u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x337608u, 0x337610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x337610u;
label_337610:
    // 0x337610: 0x26030010  addiu       $v1, $s0, 0x10
    ctx->pc = 0x337610u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x337614: 0x70608628  paddub      $s0, $v1, $zero
    ctx->pc = 0x337614u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x337618: 0x7bbf0090  lq          $ra, 0x90($sp)
    ctx->pc = 0x337618u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x33761c: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x33761cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x337620: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x337620u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x337624: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x337624u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x337628: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x337628u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x33762c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x33762cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x337630: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x337630u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x337634: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x337634u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x337638: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x337638u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x33763c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x33763cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x337640: 0x27bd00c0  addiu       $sp, $sp, 0xC0
    ctx->pc = 0x337640u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x337644: 0x3e00008  jr          $ra
    ctx->pc = 0x337644u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x337644u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33764Cu;
}
