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

// Function: Get_sys_light
// Address: 0x176af0 - 0x176be4
void Get_sys_light_0x176af0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Get_sys_light_0x176af0");
#endif

    ctx->pc = 0x176af0u;

    // 0x176af0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x176af0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x176af4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x176af4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x176af8: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x176af8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x176afc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x176afcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x176b00: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x176b00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x176b04: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x176b04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x176b08: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x176b08u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x176b0c: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x176b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x176b10: 0x2442bd00  addiu       $v0, $v0, -0x4300
    ctx->pc = 0x176b10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950144));
    // 0x176b14: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x176b14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x176b18: 0x24500060  addiu       $s0, $v0, 0x60
    ctx->pc = 0x176b18u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x176b1c: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x176b1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x176b20: 0x9422cc8e  lhu         $v0, -0x3372($at)
    ctx->pc = 0x176b20u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x47CC8Eu));
    // 0x176b24: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x176b24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x176b28: 0x2841004f  slti        $at, $v0, 0x4F
    ctx->pc = 0x176b28u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)79) ? 1 : 0);
    // 0x176b2c: 0x10200028  beqz        $at, . + 4 + (0x28 << 2)
    ctx->pc = 0x176B2Cu;
    {
        const bool branch_taken_0x176b2c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x176b2c) {
            ctx->pc = 0x176BD0u;
            goto label_176bd0;
        }
    }
    ctx->pc = 0x176B34u;
    // 0x176b34: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x176b34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x176b38: 0x9422cc8a  lhu         $v0, -0x3376($at)
    ctx->pc = 0x176b38u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x47CC8Au));
    // 0x176b3c: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x176b3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x176b40: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x176b40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x176b44: 0x9422cc8c  lhu         $v0, -0x3374($at)
    ctx->pc = 0x176b44u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x47CC8Cu));
    // 0x176b48: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x176b48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x176b4c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x176b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x176b50: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x176b50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x176b54: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x176b54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x176b58: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x176b58u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x176b5c: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x176b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x176b60: 0x2442bd00  addiu       $v0, $v0, -0x4300
    ctx->pc = 0x176b60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950144));
    // 0x176b64: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x176b64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x176b68: 0x24450060  addiu       $a1, $v0, 0x60
    ctx->pc = 0x176b68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x176b6c: 0x7a040000  lq          $a0, 0x0($s0)
    ctx->pc = 0x176b6cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x176b70: 0x7a030010  lq          $v1, 0x10($s0)
    ctx->pc = 0x176b70u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x176b74: 0x7a020020  lq          $v0, 0x20($s0)
    ctx->pc = 0x176b74u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x176b78: 0x7ca40000  sq          $a0, 0x0($a1)
    ctx->pc = 0x176b78u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 4));
    // 0x176b7c: 0x7ca30010  sq          $v1, 0x10($a1)
    ctx->pc = 0x176b7cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 16), GPR_VEC(ctx, 3));
    // 0x176b80: 0x7ca20020  sq          $v0, 0x20($a1)
    ctx->pc = 0x176b80u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 32), GPR_VEC(ctx, 2));
    // 0x176b84: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x176b84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x176b88: 0x34420007  ori         $v0, $v0, 0x7
    ctx->pc = 0x176b88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)7);
    // 0x176b8c: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x176b8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
    // 0x176b90: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x176b90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x176b94: 0x9422cc8c  lhu         $v0, -0x3374($at)
    ctx->pc = 0x176b94u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x47CC8Cu));
    // 0x176b98: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x176b98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x176b9c: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x176b9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x176ba0: 0xa422cc8c  sh          $v0, -0x3374($at)
    ctx->pc = 0x176ba0u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x47CC8Cu, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x47CC8Cu, _value); } while (0);
    // 0x176ba4: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x176ba4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x176ba8: 0x9422cc8e  lhu         $v0, -0x3372($at)
    ctx->pc = 0x176ba8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x47CC8Eu));
    // 0x176bac: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x176bacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x176bb0: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x176bb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x176bb4: 0xa422cc8e  sh          $v0, -0x3372($at)
    ctx->pc = 0x176bb4u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x47CC8Eu, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x47CC8Eu, _value); } while (0);
    // 0x176bb8: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x176bb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x176bbc: 0x9422cc8e  lhu         $v0, -0x3372($at)
    ctx->pc = 0x176bbcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x47CC8Eu));
    // 0x176bc0: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x176bc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x176bc4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x176bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x176bc8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x176BC8u;
    {
        const bool branch_taken_0x176bc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x176bc8) {
            ctx->pc = 0x176BD4u;
            goto label_176bd4;
        }
    }
    ctx->pc = 0x176BD0u;
label_176bd0:
    // 0x176bd0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x176bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_176bd4:
    // 0x176bd4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x176bd4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x176bd8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x176bd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x176bdc: 0x3e00008  jr          $ra
    ctx->pc = 0x176BDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x176BDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x176BE4u;
}
