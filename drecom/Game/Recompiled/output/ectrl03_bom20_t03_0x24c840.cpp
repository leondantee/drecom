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

// Function: ectrl03_bom20_t03
// Address: 0x24c840 - 0x24c8e4
void ectrl03_bom20_t03_0x24c840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ectrl03_bom20_t03_0x24c840");
#endif

    switch (ctx->pc) {
        case 0x24c8c8u: goto label_24c8c8;
        case 0x24c8d4u: goto label_24c8d4;
        default: break;
    }

    ctx->pc = 0x24c840u;

    // 0x24c840: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x24c840u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x24c844: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x24c844u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x24c848: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x24c848u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x24c84c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x24c84cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x24c850: 0x8c6400d4  lw          $a0, 0xD4($v1)
    ctx->pc = 0x24c850u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 212)));
    // 0x24c854: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x24c854u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x24c858: 0x10830014  beq         $a0, $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x24C858u;
    {
        const bool branch_taken_0x24c858 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x24c858) {
            ctx->pc = 0x24C8ACu;
            goto label_24c8ac;
        }
    }
    ctx->pc = 0x24C860u;
    // 0x24c860: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x24c860u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x24c864: 0x10830011  beq         $a0, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x24C864u;
    {
        const bool branch_taken_0x24c864 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x24c864) {
            ctx->pc = 0x24C8ACu;
            goto label_24c8ac;
        }
    }
    ctx->pc = 0x24C86Cu;
    // 0x24c86c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x24c86cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x24c870: 0x1083000e  beq         $a0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x24C870u;
    {
        const bool branch_taken_0x24c870 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x24c870) {
            ctx->pc = 0x24C8ACu;
            goto label_24c8ac;
        }
    }
    ctx->pc = 0x24C878u;
    // 0x24c878: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x24c878u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24c87c: 0x1083000b  beq         $a0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x24C87Cu;
    {
        const bool branch_taken_0x24c87c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x24c87c) {
            ctx->pc = 0x24C8ACu;
            goto label_24c8ac;
        }
    }
    ctx->pc = 0x24C884u;
    // 0x24c884: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x24c884u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x24c888: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x24C888u;
    {
        const bool branch_taken_0x24c888 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x24c888) {
            ctx->pc = 0x24C898u;
            goto label_24c898;
        }
    }
    ctx->pc = 0x24C890u;
    // 0x24c890: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x24C890u;
    {
        const bool branch_taken_0x24c890 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24c890) {
            ctx->pc = 0x24C8D4u;
            goto label_24c8d4;
        }
    }
    ctx->pc = 0x24C898u;
label_24c898:
    // 0x24c898: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x24c898u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x24c89c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x24c89cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24c8a0: 0x34430010  ori         $v1, $v0, 0x10
    ctx->pc = 0x24c8a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x24c8a4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x24c8a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x24c8a8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x24c8a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_24c8ac:
    // 0x24c8ac: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x24c8acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x24c8b0: 0x3404a507  ori         $a0, $zero, 0xA507
    ctx->pc = 0x24c8b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)42247);
    // 0x24c8b4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x24c8b4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x24c8b8: 0x244600a0  addiu       $a2, $v0, 0xA0
    ctx->pc = 0x24c8b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    // 0x24c8bc: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x24c8bcu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x24c8c0: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x24C8C0u;
    SET_GPR_U32(ctx, 31, 0x24C8C8u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x24C8C0u, 0x24C8C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C8C8u;
label_24c8c8:
    // 0x24c8c8: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x24c8c8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x24c8cc: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x24C8CCu;
    SET_GPR_U32(ctx, 31, 0x24C8D4u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x24C8CCu, 0x24C8D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C8D4u;
label_24c8d4:
    // 0x24c8d4: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x24c8d4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24c8d8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x24c8d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x24c8dc: 0x3e00008  jr          $ra
    ctx->pc = 0x24C8DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24C8DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24C8E4u;
}
