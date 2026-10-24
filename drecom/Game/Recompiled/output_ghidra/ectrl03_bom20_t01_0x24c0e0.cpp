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

// Function: ectrl03_bom20_t01
// Address: 0x24c0e0 - 0x24c184
void ectrl03_bom20_t01_0x24c0e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ectrl03_bom20_t01_0x24c0e0");
#endif

    switch (ctx->pc) {
        case 0x24c168u: goto label_24c168;
        case 0x24c174u: goto label_24c174;
        default: break;
    }

    ctx->pc = 0x24c0e0u;

    // 0x24c0e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x24c0e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x24c0e4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x24c0e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x24c0e8: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x24c0e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x24c0ec: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x24c0ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x24c0f0: 0x8c6400d4  lw          $a0, 0xD4($v1)
    ctx->pc = 0x24c0f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 212)));
    // 0x24c0f4: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x24c0f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x24c0f8: 0x10830014  beq         $a0, $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x24C0F8u;
    {
        const bool branch_taken_0x24c0f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x24c0f8) {
            ctx->pc = 0x24C14Cu;
            goto label_24c14c;
        }
    }
    ctx->pc = 0x24C100u;
    // 0x24c100: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x24c100u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x24c104: 0x10830011  beq         $a0, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x24C104u;
    {
        const bool branch_taken_0x24c104 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x24c104) {
            ctx->pc = 0x24C14Cu;
            goto label_24c14c;
        }
    }
    ctx->pc = 0x24C10Cu;
    // 0x24c10c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x24c10cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x24c110: 0x1083000e  beq         $a0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x24C110u;
    {
        const bool branch_taken_0x24c110 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x24c110) {
            ctx->pc = 0x24C14Cu;
            goto label_24c14c;
        }
    }
    ctx->pc = 0x24C118u;
    // 0x24c118: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x24c118u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24c11c: 0x1083000b  beq         $a0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x24C11Cu;
    {
        const bool branch_taken_0x24c11c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x24c11c) {
            ctx->pc = 0x24C14Cu;
            goto label_24c14c;
        }
    }
    ctx->pc = 0x24C124u;
    // 0x24c124: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x24c124u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x24c128: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x24C128u;
    {
        const bool branch_taken_0x24c128 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x24c128) {
            ctx->pc = 0x24C138u;
            goto label_24c138;
        }
    }
    ctx->pc = 0x24C130u;
    // 0x24c130: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x24C130u;
    {
        const bool branch_taken_0x24c130 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24c130) {
            ctx->pc = 0x24C174u;
            goto label_24c174;
        }
    }
    ctx->pc = 0x24C138u;
label_24c138:
    // 0x24c138: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x24c138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x24c13c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x24c13cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24c140: 0x34430010  ori         $v1, $v0, 0x10
    ctx->pc = 0x24c140u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x24c144: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x24c144u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x24c148: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x24c148u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_24c14c:
    // 0x24c14c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x24c14cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x24c150: 0x3404a507  ori         $a0, $zero, 0xA507
    ctx->pc = 0x24c150u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)42247);
    // 0x24c154: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x24c154u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x24c158: 0x244600a0  addiu       $a2, $v0, 0xA0
    ctx->pc = 0x24c158u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    // 0x24c15c: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x24c15cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x24c160: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x24C160u;
    SET_GPR_U32(ctx, 31, 0x24C168u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x24C160u, 0x24C168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C168u;
label_24c168:
    // 0x24c168: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x24c168u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x24c16c: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x24C16Cu;
    SET_GPR_U32(ctx, 31, 0x24C174u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x24C16Cu, 0x24C174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C174u;
label_24c174:
    // 0x24c174: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x24c174u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24c178: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x24c178u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x24c17c: 0x3e00008  jr          $ra
    ctx->pc = 0x24C17Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24C17Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24C184u;
}
