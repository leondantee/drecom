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

// Function: Set_sys_light
// Address: 0x176a20 - 0x176ae4
void Set_sys_light_0x176a20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Set_sys_light_0x176a20");
#endif

    ctx->pc = 0x176a20u;

    // 0x176a20: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x176a20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x176a24: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x176a24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x176a28: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x176a28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x176a2c: 0x9422cc8e  lhu         $v0, -0x3372($at)
    ctx->pc = 0x176a2cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x47CC8Eu));
    // 0x176a30: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x176a30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x176a34: 0x2841004f  slti        $at, $v0, 0x4F
    ctx->pc = 0x176a34u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)79) ? 1 : 0);
    // 0x176a38: 0x10200026  beqz        $at, . + 4 + (0x26 << 2)
    ctx->pc = 0x176A38u;
    {
        const bool branch_taken_0x176a38 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x176a38) {
            ctx->pc = 0x176AD4u;
            goto label_176ad4;
        }
    }
    ctx->pc = 0x176A40u;
    // 0x176a40: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x176a40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x176a44: 0x9422cc8a  lhu         $v0, -0x3376($at)
    ctx->pc = 0x176a44u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x47CC8Au));
    // 0x176a48: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x176a48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x176a4c: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x176a4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x176a50: 0x9422cc8c  lhu         $v0, -0x3374($at)
    ctx->pc = 0x176a50u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x47CC8Cu));
    // 0x176a54: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x176a54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x176a58: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x176a58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x176a5c: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x176a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x176a60: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x176a60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x176a64: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x176a64u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x176a68: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x176a68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x176a6c: 0x2442bd00  addiu       $v0, $v0, -0x4300
    ctx->pc = 0x176a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950144));
    // 0x176a70: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x176a70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x176a74: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x176a74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x176a78: 0x24650060  addiu       $a1, $v1, 0x60
    ctx->pc = 0x176a78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
    // 0x176a7c: 0x78440000  lq          $a0, 0x0($v0)
    ctx->pc = 0x176a7cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x176a80: 0x78430010  lq          $v1, 0x10($v0)
    ctx->pc = 0x176a80u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x176a84: 0x78420020  lq          $v0, 0x20($v0)
    ctx->pc = 0x176a84u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x176a88: 0x7ca40000  sq          $a0, 0x0($a1)
    ctx->pc = 0x176a88u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 4));
    // 0x176a8c: 0x7ca30010  sq          $v1, 0x10($a1)
    ctx->pc = 0x176a8cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 16), GPR_VEC(ctx, 3));
    // 0x176a90: 0x7ca20020  sq          $v0, 0x20($a1)
    ctx->pc = 0x176a90u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 32), GPR_VEC(ctx, 2));
    // 0x176a94: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x176a94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x176a98: 0x9422cc8c  lhu         $v0, -0x3374($at)
    ctx->pc = 0x176a98u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x47CC8Cu));
    // 0x176a9c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x176a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x176aa0: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x176aa0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x176aa4: 0xa422cc8c  sh          $v0, -0x3374($at)
    ctx->pc = 0x176aa4u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x47CC8Cu, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x47CC8Cu, _value); } while (0);
    // 0x176aa8: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x176aa8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x176aac: 0x9422cc8e  lhu         $v0, -0x3372($at)
    ctx->pc = 0x176aacu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x47CC8Eu));
    // 0x176ab0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x176ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x176ab4: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x176ab4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x176ab8: 0xa422cc8e  sh          $v0, -0x3372($at)
    ctx->pc = 0x176ab8u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x47CC8Eu, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x47CC8Eu, _value); } while (0);
    // 0x176abc: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x176abcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x176ac0: 0x9422cc8e  lhu         $v0, -0x3372($at)
    ctx->pc = 0x176ac0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x47CC8Eu));
    // 0x176ac4: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x176ac4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x176ac8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x176ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x176acc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x176ACCu;
    {
        const bool branch_taken_0x176acc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x176acc) {
            ctx->pc = 0x176AD8u;
            goto label_176ad8;
        }
    }
    ctx->pc = 0x176AD4u;
label_176ad4:
    // 0x176ad4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x176ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_176ad8:
    // 0x176ad8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x176ad8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x176adc: 0x3e00008  jr          $ra
    ctx->pc = 0x176ADCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x176ADCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x176AE4u;
}
