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

// Function: entry_00179684
// Address: 0x179684 - 0x17973c
void entry_00179684_0x179684(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00179684_0x179684");
#endif

    switch (ctx->pc) {
        case 0x1796a0u: goto label_1796a0;
        case 0x1796e8u: goto label_1796e8;
        case 0x1796f4u: goto label_1796f4;
        case 0x179704u: goto label_179704;
        case 0x179714u: goto label_179714;
        default: break;
    }

    ctx->pc = 0x179684u;

    // 0x179684: 0x3234000f  andi        $s4, $s1, 0xF
    ctx->pc = 0x179684u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)15);
    // 0x179688: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x179688u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x17968c: 0x111903  sra         $v1, $s1, 4
    ctx->pc = 0x17968cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 17), 4));
    // 0x179690: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x179690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x179694: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x179694u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x179698: 0xc05e990  jal         func_17A640
    ctx->pc = 0x179698u;
    SET_GPR_U32(ctx, 31, 0x1796A0u);
    ctx->pc = 0x17A640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A640u, 0x179698u, 0x1796A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1796A0u;
label_1796a0:
    // 0x1796a0: 0x22c3c  dsll32      $a1, $v0, 16
    ctx->pc = 0x1796a0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1796a4: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x1796a4u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x1796a8: 0x123c3c  dsll32      $a3, $s2, 16
    ctx->pc = 0x1796a8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 18) << (32 + 16));
    // 0x1796ac: 0x73c3f  dsra32      $a3, $a3, 16
    ctx->pc = 0x1796acu;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 16));
    // 0x1796b0: 0x32820001  andi        $v0, $s4, 0x1
    ctx->pc = 0x1796b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)1);
    // 0x1796b4: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1796b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1796b8: 0x2443c  dsll32      $t0, $v0, 16
    ctx->pc = 0x1796b8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1796bc: 0x8443f  dsra32      $t0, $t0, 16
    ctx->pc = 0x1796bcu;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 16));
    // 0x1796c0: 0x141042  srl         $v0, $s4, 1
    ctx->pc = 0x1796c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 20), 1));
    // 0x1796c4: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1796c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1796c8: 0x24c3c  dsll32      $t1, $v0, 16
    ctx->pc = 0x1796c8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1796cc: 0x94c3f  dsra32      $t1, $t1, 16
    ctx->pc = 0x1796ccu;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 9) >> (32 + 16));
    // 0x1796d0: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1796d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1796d4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1796d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1796d8: 0x240a0008  addiu       $t2, $zero, 0x8
    ctx->pc = 0x1796d8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1796dc: 0x240b0002  addiu       $t3, $zero, 0x2
    ctx->pc = 0x1796dcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1796e0: 0xc040330  jal         func_100CC0
    ctx->pc = 0x1796E0u;
    SET_GPR_U32(ctx, 31, 0x1796E8u);
    ctx->pc = 0x100CC0u;
    {
        ctx->pc = 0x1796E8u;
        ps2_stubs::sceGsSetDefLoadImage(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1796E8u) { return; }
    ctx->pc = 0x1796E8u;
label_1796e8:
    // 0x1796e8: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1796e8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1796ec: 0xc084b28  jal         func_212CA0
    ctx->pc = 0x1796ECu;
    SET_GPR_U32(ctx, 31, 0x1796F4u);
    ctx->pc = 0x212CA0u;
    {
        ctx->pc = 0x1796F4u;
        ps2_syscalls::FlushCache(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1796F4u) { return; }
    ctx->pc = 0x1796F4u;
label_1796f4:
    // 0x1796f4: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1796f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1796f8: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x1796f8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1796fc: 0xc0403fa  jal         func_100FE8
    ctx->pc = 0x1796FCu;
    SET_GPR_U32(ctx, 31, 0x179704u);
    ctx->pc = 0x100FE8u;
    {
        ctx->pc = 0x179704u;
        ps2_stubs::sceGsExecLoadImage(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x179704u) { return; }
    ctx->pc = 0x179704u;
label_179704:
    // 0x179704: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x179704u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x179708: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x179708u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x17970c: 0xc04026a  jal         func_1009A8
    ctx->pc = 0x17970Cu;
    SET_GPR_U32(ctx, 31, 0x179714u);
    ctx->pc = 0x1009A8u;
    {
        ctx->pc = 0x179714u;
        ps2_stubs::sceGsSyncPath(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x179714u) { return; }
    ctx->pc = 0x179714u;
label_179714:
    // 0x179714: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x179714u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x179718: 0x90420012  lbu         $v0, 0x12($v0)
    ctx->pc = 0x179718u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 18)));
    // 0x17971c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x17971cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x179720: 0x3043003f  andi        $v1, $v0, 0x3F
    ctx->pc = 0x179720u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x179724: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x179724u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x179728: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x179728u;
    {
        const bool branch_taken_0x179728 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x179728) {
            ctx->pc = 0x17973Cu;
            return;
        }
    }
    ctx->pc = 0x179730u;
    // 0x179730: 0x26100020  addiu       $s0, $s0, 0x20
    ctx->pc = 0x179730u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x179734: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x179734u;
    {
        const bool branch_taken_0x179734 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x179734) {
            ctx->pc = 0x179768u;
            return;
        }
    }
    ctx->pc = 0x17973Cu;
}
