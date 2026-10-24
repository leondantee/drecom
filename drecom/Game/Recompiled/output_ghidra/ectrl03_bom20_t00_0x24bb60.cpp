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

// Function: ectrl03_bom20_t00
// Address: 0x24bb60 - 0x24bc34
void ectrl03_bom20_t00_0x24bb60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ectrl03_bom20_t00_0x24bb60");
#endif

    switch (ctx->pc) {
        case 0x24bbe8u: goto label_24bbe8;
        case 0x24bbf4u: goto label_24bbf4;
        case 0x24bc18u: goto label_24bc18;
        case 0x24bc24u: goto label_24bc24;
        default: break;
    }

    ctx->pc = 0x24bb60u;

    // 0x24bb60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x24bb60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x24bb64: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x24bb64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x24bb68: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x24bb68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x24bb6c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x24bb6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x24bb70: 0x8c6400d4  lw          $a0, 0xD4($v1)
    ctx->pc = 0x24bb70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 212)));
    // 0x24bb74: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x24bb74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x24bb78: 0x10830020  beq         $a0, $v1, . + 4 + (0x20 << 2)
    ctx->pc = 0x24BB78u;
    {
        const bool branch_taken_0x24bb78 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x24bb78) {
            ctx->pc = 0x24BBFCu;
            goto label_24bbfc;
        }
    }
    ctx->pc = 0x24BB80u;
    // 0x24bb80: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x24bb80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x24bb84: 0x10830011  beq         $a0, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x24BB84u;
    {
        const bool branch_taken_0x24bb84 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x24bb84) {
            ctx->pc = 0x24BBCCu;
            goto label_24bbcc;
        }
    }
    ctx->pc = 0x24BB8Cu;
    // 0x24bb8c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x24bb8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x24bb90: 0x1083000e  beq         $a0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x24BB90u;
    {
        const bool branch_taken_0x24bb90 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x24bb90) {
            ctx->pc = 0x24BBCCu;
            goto label_24bbcc;
        }
    }
    ctx->pc = 0x24BB98u;
    // 0x24bb98: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x24bb98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24bb9c: 0x1083000b  beq         $a0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x24BB9Cu;
    {
        const bool branch_taken_0x24bb9c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x24bb9c) {
            ctx->pc = 0x24BBCCu;
            goto label_24bbcc;
        }
    }
    ctx->pc = 0x24BBA4u;
    // 0x24bba4: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x24bba4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x24bba8: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x24BBA8u;
    {
        const bool branch_taken_0x24bba8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x24bba8) {
            ctx->pc = 0x24BBB8u;
            goto label_24bbb8;
        }
    }
    ctx->pc = 0x24BBB0u;
    // 0x24bbb0: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x24BBB0u;
    {
        const bool branch_taken_0x24bbb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24bbb0) {
            ctx->pc = 0x24BC24u;
            goto label_24bc24;
        }
    }
    ctx->pc = 0x24BBB8u;
label_24bbb8:
    // 0x24bbb8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x24bbb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x24bbbc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x24bbbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24bbc0: 0x34430010  ori         $v1, $v0, 0x10
    ctx->pc = 0x24bbc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x24bbc4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x24bbc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x24bbc8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x24bbc8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_24bbcc:
    // 0x24bbcc: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x24bbccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x24bbd0: 0x3404a301  ori         $a0, $zero, 0xA301
    ctx->pc = 0x24bbd0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)41729);
    // 0x24bbd4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x24bbd4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x24bbd8: 0x244600a0  addiu       $a2, $v0, 0xA0
    ctx->pc = 0x24bbd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    // 0x24bbdc: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x24bbdcu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x24bbe0: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x24BBE0u;
    SET_GPR_U32(ctx, 31, 0x24BBE8u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x24BBE0u, 0x24BBE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24BBE8u;
label_24bbe8:
    // 0x24bbe8: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x24bbe8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x24bbec: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x24BBECu;
    SET_GPR_U32(ctx, 31, 0x24BBF4u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x24BBECu, 0x24BBF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24BBF4u;
label_24bbf4:
    // 0x24bbf4: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x24BBF4u;
    {
        const bool branch_taken_0x24bbf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24bbf4) {
            ctx->pc = 0x24BC24u;
            goto label_24bc24;
        }
    }
    ctx->pc = 0x24BBFCu;
label_24bbfc:
    // 0x24bbfc: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x24bbfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x24bc00: 0x3404a301  ori         $a0, $zero, 0xA301
    ctx->pc = 0x24bc00u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)41729);
    // 0x24bc04: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x24bc04u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x24bc08: 0x244600a0  addiu       $a2, $v0, 0xA0
    ctx->pc = 0x24bc08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    // 0x24bc0c: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x24bc0cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x24bc10: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x24BC10u;
    SET_GPR_U32(ctx, 31, 0x24BC18u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x24BC10u, 0x24BC18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24BC18u;
label_24bc18:
    // 0x24bc18: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x24bc18u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x24bc1c: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x24BC1Cu;
    SET_GPR_U32(ctx, 31, 0x24BC24u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x24BC1Cu, 0x24BC24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24BC24u;
label_24bc24:
    // 0x24bc24: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x24bc24u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24bc28: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x24bc28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x24bc2c: 0x3e00008  jr          $ra
    ctx->pc = 0x24BC2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24BC2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24BC34u;
}
