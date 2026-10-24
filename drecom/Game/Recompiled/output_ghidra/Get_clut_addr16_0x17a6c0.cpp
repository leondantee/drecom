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

// Function: Get_clut_addr16
// Address: 0x17a6c0 - 0x17a774
void Get_clut_addr16_0x17a6c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Get_clut_addr16_0x17a6c0");
#endif

    ctx->pc = 0x17a6c0u;

    // 0x17a6c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x17a6c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17a6c4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17a6c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x17a6c8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x17a6c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x17a6cc: 0xafa50018  sw          $a1, 0x18($sp)
    ctx->pc = 0x17a6ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 5));
    // 0x17a6d0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x17a6d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17a6d4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x17a6d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x17a6d8: 0x31882  srl         $v1, $v1, 2
    ctx->pc = 0x17a6d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 2));
    // 0x17a6dc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x17a6dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17a6e0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17a6e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17a6e4: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x17a6e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x17a6e8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x17a6e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17a6ec: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x17a6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x17a6f0: 0x30620003  andi        $v0, $v1, 0x3
    ctx->pc = 0x17a6f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x17a6f4: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x17a6f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x17a6f8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x17a6f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17a6fc: 0x2c410020  sltiu       $at, $v0, 0x20
    ctx->pc = 0x17a6fcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x17a700: 0x10200011  beqz        $at, . + 4 + (0x11 << 2)
    ctx->pc = 0x17A700u;
    {
        const bool branch_taken_0x17a700 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x17a700) {
            ctx->pc = 0x17A748u;
            goto label_17a748;
        }
    }
    ctx->pc = 0x17A708u;
    // 0x17a708: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x17a708u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17a70c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x17a70cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x17a710: 0x31082  srl         $v0, $v1, 2
    ctx->pc = 0x17a710u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 2));
    // 0x17a714: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x17a714u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x17a718: 0x24501100  addiu       $s0, $v0, 0x1100
    ctx->pc = 0x17a718u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4352));
    // 0x17a71c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x17a71cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17a720: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x17a720u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x17a724: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x17a724u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x17a728: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x17a728u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x17a72c: 0x244258b0  addiu       $v0, $v0, 0x58B0
    ctx->pc = 0x17a72cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22704));
    // 0x17a730: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17a730u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17a734: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x17a734u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17a738: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x17a738u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x17a73c: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x17a73cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x17a740: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x17A740u;
    {
        const bool branch_taken_0x17a740 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17a740) {
            ctx->pc = 0x17A758u;
            goto label_17a758;
        }
    }
    ctx->pc = 0x17A748u;
label_17a748:
    // 0x17a748: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x17a748u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17a74c: 0x2442ffe0  addiu       $v0, $v0, -0x20
    ctx->pc = 0x17a74cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967264));
    // 0x17a750: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x17a750u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x17a754: 0x24501200  addiu       $s0, $v0, 0x1200
    ctx->pc = 0x17a754u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4608));
label_17a758:
    // 0x17a758: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x17a758u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17a75c: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x17a75cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x17a760: 0x72001628  paddub      $v0, $s0, $zero
    ctx->pc = 0x17a760u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x17a764: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17a764u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17a768: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x17a768u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x17a76c: 0x3e00008  jr          $ra
    ctx->pc = 0x17A76Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17A76Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17A774u;
}
