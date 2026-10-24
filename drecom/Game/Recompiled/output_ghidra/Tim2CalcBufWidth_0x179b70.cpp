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

// Function: Tim2CalcBufWidth
// Address: 0x179b70 - 0x179c84
void Tim2CalcBufWidth_0x179b70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Tim2CalcBufWidth_0x179b70");
#endif

    ctx->pc = 0x179b70u;

    // 0x179b70: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x179b70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x179b74: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x179b74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x179b78: 0xafa50008  sw          $a1, 0x8($sp)
    ctx->pc = 0x179b78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 5));
    // 0x179b7c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x179b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x179b80: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x179b80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x179b84: 0x1062002c  beq         $v1, $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x179B84u;
    {
        const bool branch_taken_0x179b84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x179b84) {
            ctx->pc = 0x179C38u;
            goto label_179c38;
        }
    }
    ctx->pc = 0x179B8Cu;
    // 0x179b8c: 0x24020013  addiu       $v0, $zero, 0x13
    ctx->pc = 0x179b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x179b90: 0x10620029  beq         $v1, $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x179B90u;
    {
        const bool branch_taken_0x179b90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x179b90) {
            ctx->pc = 0x179C38u;
            goto label_179c38;
        }
    }
    ctx->pc = 0x179B98u;
    // 0x179b98: 0x2402003a  addiu       $v0, $zero, 0x3A
    ctx->pc = 0x179b98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
    // 0x179b9c: 0x10620020  beq         $v1, $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x179B9Cu;
    {
        const bool branch_taken_0x179b9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x179b9c) {
            ctx->pc = 0x179C20u;
            goto label_179c20;
        }
    }
    ctx->pc = 0x179BA4u;
    // 0x179ba4: 0x24020032  addiu       $v0, $zero, 0x32
    ctx->pc = 0x179ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x179ba8: 0x1062001d  beq         $v1, $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x179BA8u;
    {
        const bool branch_taken_0x179ba8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x179ba8) {
            ctx->pc = 0x179C20u;
            goto label_179c20;
        }
    }
    ctx->pc = 0x179BB0u;
    // 0x179bb0: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x179bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x179bb4: 0x1062001a  beq         $v1, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x179BB4u;
    {
        const bool branch_taken_0x179bb4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x179bb4) {
            ctx->pc = 0x179C20u;
            goto label_179c20;
        }
    }
    ctx->pc = 0x179BBCu;
    // 0x179bbc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x179bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x179bc0: 0x10620017  beq         $v1, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x179BC0u;
    {
        const bool branch_taken_0x179bc0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x179bc0) {
            ctx->pc = 0x179C20u;
            goto label_179c20;
        }
    }
    ctx->pc = 0x179BC8u;
    // 0x179bc8: 0x24020031  addiu       $v0, $zero, 0x31
    ctx->pc = 0x179bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
    // 0x179bcc: 0x10620014  beq         $v1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x179BCCu;
    {
        const bool branch_taken_0x179bcc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x179bcc) {
            ctx->pc = 0x179C20u;
            goto label_179c20;
        }
    }
    ctx->pc = 0x179BD4u;
    // 0x179bd4: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x179bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x179bd8: 0x10620011  beq         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x179BD8u;
    {
        const bool branch_taken_0x179bd8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x179bd8) {
            ctx->pc = 0x179C20u;
            goto label_179c20;
        }
    }
    ctx->pc = 0x179BE0u;
    // 0x179be0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x179be0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x179be4: 0x1062000e  beq         $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x179BE4u;
    {
        const bool branch_taken_0x179be4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x179be4) {
            ctx->pc = 0x179C20u;
            goto label_179c20;
        }
    }
    ctx->pc = 0x179BECu;
    // 0x179bec: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x179BECu;
    {
        const bool branch_taken_0x179bec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x179bec) {
            ctx->pc = 0x179C20u;
            goto label_179c20;
        }
    }
    ctx->pc = 0x179BF4u;
    // 0x179bf4: 0x2402002c  addiu       $v0, $zero, 0x2C
    ctx->pc = 0x179bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x179bf8: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x179BF8u;
    {
        const bool branch_taken_0x179bf8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x179bf8) {
            ctx->pc = 0x179C20u;
            goto label_179c20;
        }
    }
    ctx->pc = 0x179C00u;
    // 0x179c00: 0x24020024  addiu       $v0, $zero, 0x24
    ctx->pc = 0x179c00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x179c04: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x179C04u;
    {
        const bool branch_taken_0x179c04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x179c04) {
            ctx->pc = 0x179C20u;
            goto label_179c20;
        }
    }
    ctx->pc = 0x179C0Cu;
    // 0x179c0c: 0x2402001b  addiu       $v0, $zero, 0x1B
    ctx->pc = 0x179c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x179c10: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x179C10u;
    {
        const bool branch_taken_0x179c10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x179c10) {
            ctx->pc = 0x179C20u;
            goto label_179c20;
        }
    }
    ctx->pc = 0x179C18u;
    // 0x179c18: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x179C18u;
    {
        const bool branch_taken_0x179c18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x179c18) {
            ctx->pc = 0x179C74u;
            goto label_179c74;
        }
    }
    ctx->pc = 0x179C20u;
label_179c20:
    // 0x179c20: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x179c20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x179c24: 0x2443003f  addiu       $v1, $v0, 0x3F
    ctx->pc = 0x179c24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 63));
    // 0x179c28: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x179c28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x179c2c: 0x31183  sra         $v0, $v1, 6
    ctx->pc = 0x179c2cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 6));
    // 0x179c30: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x179C30u;
    {
        const bool branch_taken_0x179c30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x179c30) {
            ctx->pc = 0x179C78u;
            goto label_179c78;
        }
    }
    ctx->pc = 0x179C38u;
label_179c38:
    // 0x179c38: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x179c38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x179c3c: 0x2443003f  addiu       $v1, $v0, 0x3F
    ctx->pc = 0x179c3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 63));
    // 0x179c40: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x179c40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x179c44: 0x31183  sra         $v0, $v1, 6
    ctx->pc = 0x179c44u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 6));
    // 0x179c48: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x179c48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x179c4c: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x179c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x179c50: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x179c50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x179c54: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x179C54u;
    {
        const bool branch_taken_0x179c54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x179c54) {
            ctx->pc = 0x179C68u;
            goto label_179c68;
        }
    }
    ctx->pc = 0x179C5Cu;
    // 0x179c5c: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x179c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x179c60: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x179c60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x179c64: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x179c64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
label_179c68:
    // 0x179c68: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x179c68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x179c6c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x179C6Cu;
    {
        const bool branch_taken_0x179c6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x179c6c) {
            ctx->pc = 0x179C78u;
            goto label_179c78;
        }
    }
    ctx->pc = 0x179C74u;
label_179c74:
    // 0x179c74: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x179c74u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_179c78:
    // 0x179c78: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x179c78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x179c7c: 0x3e00008  jr          $ra
    ctx->pc = 0x179C7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x179C7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x179C84u;
}
