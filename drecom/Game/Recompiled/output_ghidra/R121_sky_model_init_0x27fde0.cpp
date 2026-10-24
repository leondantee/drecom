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

// Function: R121_sky_model_init
// Address: 0x27fde0 - 0x27fe98
void R121_sky_model_init_0x27fde0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("R121_sky_model_init_0x27fde0");
#endif

    switch (ctx->pc) {
        case 0x27fe1cu: goto label_27fe1c;
        case 0x27fe3cu: goto label_27fe3c;
        case 0x27fe68u: goto label_27fe68;
        default: break;
    }

    ctx->pc = 0x27fde0u;

    // 0x27fde0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x27fde0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x27fde4: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x27fde4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x27fde8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x27fde8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x27fdec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x27fdecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x27fdf0: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x27fdf0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x27fdf4: 0x8c30f9e4  lw          $s0, -0x61C($at)
    ctx->pc = 0x27fdf4u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x61F9E4u));
    // 0x27fdf8: 0x9602000c  lhu         $v0, 0xC($s0)
    ctx->pc = 0x27fdf8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x27fdfc: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x27fdfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x27fe00: 0xa602000c  sh          $v0, 0xC($s0)
    ctx->pc = 0x27fe00u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x27fe04: 0x24027fe0  addiu       $v0, $zero, 0x7FE0
    ctx->pc = 0x27fe04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32736));
    // 0x27fe08: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x27fe08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    // 0x27fe0c: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x27fe0cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x27fe10: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x27fe10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x27fe14: 0xc077a6c  jal         func_1DE9B0
    ctx->pc = 0x27FE14u;
    SET_GPR_U32(ctx, 31, 0x27FE1Cu);
    ctx->pc = 0x1DE9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE9B0u, 0x27FE14u, 0x27FE1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FE1Cu;
label_27fe1c:
    // 0x27fe1c: 0x9602000c  lhu         $v0, 0xC($s0)
    ctx->pc = 0x27fe1cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x27fe20: 0x34420021  ori         $v0, $v0, 0x21
    ctx->pc = 0x27fe20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)33);
    // 0x27fe24: 0xa602000c  sh          $v0, 0xC($s0)
    ctx->pc = 0x27fe24u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x27fe28: 0x8e110058  lw          $s1, 0x58($s0)
    ctx->pc = 0x27fe28u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x27fe2c: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x27fe2cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x27fe30: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x27fe30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27fe34: 0xc0963b8  jal         func_258EE0
    ctx->pc = 0x27FE34u;
    SET_GPR_U32(ctx, 31, 0x27FE3Cu);
    ctx->pc = 0x258EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258EE0u, 0x27FE34u, 0x27FE3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FE3Cu;
label_27fe3c:
    // 0x27fe3c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x27fe3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x27fe40: 0x8c30f9e8  lw          $s0, -0x618($at)
    ctx->pc = 0x27fe40u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x61F9E8u));
    // 0x27fe44: 0x9602000c  lhu         $v0, 0xC($s0)
    ctx->pc = 0x27fe44u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x27fe48: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x27fe48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x27fe4c: 0xa602000c  sh          $v0, 0xC($s0)
    ctx->pc = 0x27fe4cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x27fe50: 0x24027fc0  addiu       $v0, $zero, 0x7FC0
    ctx->pc = 0x27fe50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32704));
    // 0x27fe54: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x27fe54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    // 0x27fe58: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x27fe58u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x27fe5c: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x27fe5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x27fe60: 0xc077a6c  jal         func_1DE9B0
    ctx->pc = 0x27FE60u;
    SET_GPR_U32(ctx, 31, 0x27FE68u);
    ctx->pc = 0x1DE9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE9B0u, 0x27FE60u, 0x27FE68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FE68u;
label_27fe68:
    // 0x27fe68: 0x9603000c  lhu         $v1, 0xC($s0)
    ctx->pc = 0x27fe68u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x27fe6c: 0x34630021  ori         $v1, $v1, 0x21
    ctx->pc = 0x27fe6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)33);
    // 0x27fe70: 0xa603000c  sh          $v1, 0xC($s0)
    ctx->pc = 0x27fe70u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x27fe74: 0x9603000c  lhu         $v1, 0xC($s0)
    ctx->pc = 0x27fe74u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x27fe78: 0x34631000  ori         $v1, $v1, 0x1000
    ctx->pc = 0x27fe78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4096);
    // 0x27fe7c: 0xa603000c  sh          $v1, 0xC($s0)
    ctx->pc = 0x27fe7cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x27fe80: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x27fe80u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27fe84: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x27fe84u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27fe88: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x27fe88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27fe8c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x27fe8cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x27fe90: 0x3e00008  jr          $ra
    ctx->pc = 0x27FE90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27FE90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27FE98u;
}
