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

// Function: Tim2CalcBufSize
// Address: 0x179c90 - 0x179dcc
void Tim2CalcBufSize_0x179c90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Tim2CalcBufSize_0x179c90");
#endif

    ctx->pc = 0x179c90u;

    // 0x179c90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x179c90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x179c94: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x179c94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x179c98: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x179c98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x179c9c: 0xafa60018  sw          $a2, 0x18($sp)
    ctx->pc = 0x179c9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 6));
    // 0x179ca0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x179ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x179ca4: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x179ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x179ca8: 0x1062003d  beq         $v1, $v0, . + 4 + (0x3D << 2)
    ctx->pc = 0x179CA8u;
    {
        const bool branch_taken_0x179ca8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x179ca8) {
            ctx->pc = 0x179DA0u;
            goto label_179da0;
        }
    }
    ctx->pc = 0x179CB0u;
    // 0x179cb0: 0x24020013  addiu       $v0, $zero, 0x13
    ctx->pc = 0x179cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x179cb4: 0x10620033  beq         $v1, $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x179CB4u;
    {
        const bool branch_taken_0x179cb4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x179cb4) {
            ctx->pc = 0x179D84u;
            goto label_179d84;
        }
    }
    ctx->pc = 0x179CBCu;
    // 0x179cbc: 0x2402003a  addiu       $v0, $zero, 0x3A
    ctx->pc = 0x179cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
    // 0x179cc0: 0x10620028  beq         $v1, $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x179CC0u;
    {
        const bool branch_taken_0x179cc0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x179cc0) {
            ctx->pc = 0x179D64u;
            goto label_179d64;
        }
    }
    ctx->pc = 0x179CC8u;
    // 0x179cc8: 0x24020032  addiu       $v0, $zero, 0x32
    ctx->pc = 0x179cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x179ccc: 0x10620025  beq         $v1, $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x179CCCu;
    {
        const bool branch_taken_0x179ccc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x179ccc) {
            ctx->pc = 0x179D64u;
            goto label_179d64;
        }
    }
    ctx->pc = 0x179CD4u;
    // 0x179cd4: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x179cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x179cd8: 0x10620022  beq         $v1, $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x179CD8u;
    {
        const bool branch_taken_0x179cd8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x179cd8) {
            ctx->pc = 0x179D64u;
            goto label_179d64;
        }
    }
    ctx->pc = 0x179CE0u;
    // 0x179ce0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x179ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x179ce4: 0x1062001f  beq         $v1, $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x179CE4u;
    {
        const bool branch_taken_0x179ce4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x179ce4) {
            ctx->pc = 0x179D64u;
            goto label_179d64;
        }
    }
    ctx->pc = 0x179CECu;
    // 0x179cec: 0x24020031  addiu       $v0, $zero, 0x31
    ctx->pc = 0x179cecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
    // 0x179cf0: 0x10620014  beq         $v1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x179CF0u;
    {
        const bool branch_taken_0x179cf0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x179cf0) {
            ctx->pc = 0x179D44u;
            goto label_179d44;
        }
    }
    ctx->pc = 0x179CF8u;
    // 0x179cf8: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x179cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x179cfc: 0x10620011  beq         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x179CFCu;
    {
        const bool branch_taken_0x179cfc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x179cfc) {
            ctx->pc = 0x179D44u;
            goto label_179d44;
        }
    }
    ctx->pc = 0x179D04u;
    // 0x179d04: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x179d04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x179d08: 0x1062000e  beq         $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x179D08u;
    {
        const bool branch_taken_0x179d08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x179d08) {
            ctx->pc = 0x179D44u;
            goto label_179d44;
        }
    }
    ctx->pc = 0x179D10u;
    // 0x179d10: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x179D10u;
    {
        const bool branch_taken_0x179d10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x179d10) {
            ctx->pc = 0x179D44u;
            goto label_179d44;
        }
    }
    ctx->pc = 0x179D18u;
    // 0x179d18: 0x2402002c  addiu       $v0, $zero, 0x2C
    ctx->pc = 0x179d18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x179d1c: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x179D1Cu;
    {
        const bool branch_taken_0x179d1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x179d1c) {
            ctx->pc = 0x179D44u;
            goto label_179d44;
        }
    }
    ctx->pc = 0x179D24u;
    // 0x179d24: 0x24020024  addiu       $v0, $zero, 0x24
    ctx->pc = 0x179d24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x179d28: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x179D28u;
    {
        const bool branch_taken_0x179d28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x179d28) {
            ctx->pc = 0x179D44u;
            goto label_179d44;
        }
    }
    ctx->pc = 0x179D30u;
    // 0x179d30: 0x2402001b  addiu       $v0, $zero, 0x1B
    ctx->pc = 0x179d30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x179d34: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x179D34u;
    {
        const bool branch_taken_0x179d34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x179d34) {
            ctx->pc = 0x179D44u;
            goto label_179d44;
        }
    }
    ctx->pc = 0x179D3Cu;
    // 0x179d3c: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x179D3Cu;
    {
        const bool branch_taken_0x179d3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x179d3c) {
            ctx->pc = 0x179DBCu;
            goto label_179dbc;
        }
    }
    ctx->pc = 0x179D44u;
label_179d44:
    // 0x179d44: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x179d44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x179d48: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x179d48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x179d4c: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x179d4cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x179d50: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x179d50u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x179d54: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x179d54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x179d58: 0x31203  sra         $v0, $v1, 8
    ctx->pc = 0x179d58u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 8));
    // 0x179d5c: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x179D5Cu;
    {
        const bool branch_taken_0x179d5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x179d5c) {
            ctx->pc = 0x179DC0u;
            goto label_179dc0;
        }
    }
    ctx->pc = 0x179D64u;
label_179d64:
    // 0x179d64: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x179d64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x179d68: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x179d68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x179d6c: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x179d6cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x179d70: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x179d70u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x179d74: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x179d74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x179d78: 0x31203  sra         $v0, $v1, 8
    ctx->pc = 0x179d78u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 8));
    // 0x179d7c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x179D7Cu;
    {
        const bool branch_taken_0x179d7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x179d7c) {
            ctx->pc = 0x179DC0u;
            goto label_179dc0;
        }
    }
    ctx->pc = 0x179D84u;
label_179d84:
    // 0x179d84: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x179d84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x179d88: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x179d88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x179d8c: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x179d8cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x179d90: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x179d90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x179d94: 0x31203  sra         $v0, $v1, 8
    ctx->pc = 0x179d94u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 8));
    // 0x179d98: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x179D98u;
    {
        const bool branch_taken_0x179d98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x179d98) {
            ctx->pc = 0x179DC0u;
            goto label_179dc0;
        }
    }
    ctx->pc = 0x179DA0u;
label_179da0:
    // 0x179da0: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x179da0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x179da4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x179da4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x179da8: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x179da8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x179dac: 0x24020200  addiu       $v0, $zero, 0x200
    ctx->pc = 0x179dacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x179db0: 0x31243  sra         $v0, $v1, 9
    ctx->pc = 0x179db0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 9));
    // 0x179db4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x179DB4u;
    {
        const bool branch_taken_0x179db4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x179db4) {
            ctx->pc = 0x179DC0u;
            goto label_179dc0;
        }
    }
    ctx->pc = 0x179DBCu;
label_179dbc:
    // 0x179dbc: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x179dbcu;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_179dc0:
    // 0x179dc0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x179dc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x179dc4: 0x3e00008  jr          $ra
    ctx->pc = 0x179DC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x179DC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x179DCCu;
}
