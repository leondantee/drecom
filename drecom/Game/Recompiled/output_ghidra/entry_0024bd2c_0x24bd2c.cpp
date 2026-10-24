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

// Function: entry_0024bd2c
// Address: 0x24bd2c - 0x24bdd0
void entry_0024bd2c_0x24bd2c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0024bd2c_0x24bd2c");
#endif

    switch (ctx->pc) {
        case 0x24bd38u: goto label_24bd38;
        case 0x24bd4cu: goto label_24bd4c;
        case 0x24bdbcu: goto label_24bdbc;
        case 0x24bdc8u: goto label_24bdc8;
        default: break;
    }

    ctx->pc = 0x24bd2cu;

    // 0x24bd2c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x24bd2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x24bd30: 0xc040cbc  jal         func_1032F0
    ctx->pc = 0x24BD30u;
    SET_GPR_U32(ctx, 31, 0x24BD38u);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x24BD38u;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x24BD38u) { return; }
    ctx->pc = 0x24BD38u;
label_24bd38:
    // 0x24bd38: 0x26040180  addiu       $a0, $s0, 0x180
    ctx->pc = 0x24bd38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 384));
    // 0x24bd3c: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x24bd3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x24bd40: 0x260600b0  addiu       $a2, $s0, 0xB0
    ctx->pc = 0x24bd40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
    // 0x24bd44: 0xc040c92  jal         func_103248
    ctx->pc = 0x24BD44u;
    SET_GPR_U32(ctx, 31, 0x24BD4Cu);
    ctx->pc = 0x103248u;
    {
        ctx->pc = 0x24BD4Cu;
        ps2_stubs::sceVu0TransMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x24BD4Cu) { return; }
    ctx->pc = 0x24BD4Cu;
label_24bd4c:
    // 0x24bd4c: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x24bd4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x24bd50: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x24bd50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24bd54: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x24bd54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x24bd58: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x24bd58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24bd5c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x24bd5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x24bd60: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x24bd60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x24bd64: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x24bd64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x24bd68: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x24bd68u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24bd6c: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x24bd6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x24bd70: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x24bd70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24bd74: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x24bd74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x24bd78: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x24bd78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24bd7c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x24bd7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x24bd80: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x24bd80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x24bd84: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x24bd84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x24bd88: 0x822825  or          $a1, $a0, $v0
    ctx->pc = 0x24bd88u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x24bd8c: 0x26020180  addiu       $v0, $s0, 0x180
    ctx->pc = 0x24bd8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 384));
    // 0x24bd90: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x24bd90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24bd94: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x24bd94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x24bd98: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x24bd98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24bd9c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x24bd9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x24bda0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x24bda0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x24bda4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x24bda4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x24bda8: 0x2383c  dsll32      $a3, $v0, 0
    ctx->pc = 0x24bda8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24bdac: 0x24042400  addiu       $a0, $zero, 0x2400
    ctx->pc = 0x24bdacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9216));
    // 0x24bdb0: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x24bdb0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x24bdb4: 0xc0631f0  jal         func_18C7C0
    ctx->pc = 0x24BDB4u;
    SET_GPR_U32(ctx, 31, 0x24BDBCu);
    ctx->pc = 0x18C7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C7C0u, 0x24BDB4u, 0x24BDBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24BDBCu;
label_24bdbc:
    // 0x24bdbc: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x24bdbcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x24bdc0: 0xc06332c  jal         func_18CCB0
    ctx->pc = 0x24BDC0u;
    SET_GPR_U32(ctx, 31, 0x24BDC8u);
    ctx->pc = 0x18CCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18CCB0u, 0x24BDC0u, 0x24BDC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24BDC8u;
label_24bdc8:
    // 0x24bdc8: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x24bdc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x24bdcc: 0xac620104  sw          $v0, 0x104($v1)
    ctx->pc = 0x24bdccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 260), GPR_U32(ctx, 2));
    ctx->pc = 0x24bdd0u;
}
