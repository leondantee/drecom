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

// Function: LoadImageT32s
// Address: 0x17a590 - 0x17a63c
void LoadImageT32s_0x17a590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("LoadImageT32s_0x17a590");
#endif

    switch (ctx->pc) {
        case 0x17a5e8u: goto label_17a5e8;
        case 0x17a5fcu: goto label_17a5fc;
        case 0x17a614u: goto label_17a614;
        case 0x17a628u: goto label_17a628;
        default: break;
    }

    ctx->pc = 0x17a590u;

    // 0x17a590: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x17a590u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x17a594: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x17a594u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x17a598: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17a598u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x17a59c: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x17a59cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
    // 0x17a5a0: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x17a5a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x17a5a4: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x17a5a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x17a5a8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x17a5a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x17a5ac: 0x320c0  sll         $a0, $v1, 3
    ctx->pc = 0x17a5acu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x17a5b0: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x17a5b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x17a5b4: 0x2463cca0  addiu       $v1, $v1, -0x3360
    ctx->pc = 0x17a5b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954144));
    // 0x17a5b8: 0x648021  addu        $s0, $v1, $a0
    ctx->pc = 0x17a5b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x17a5bc: 0x92030001  lbu         $v1, 0x1($s0)
    ctx->pc = 0x17a5bcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x17a5c0: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x17a5c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x17a5c4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x17a5c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17a5c8: 0x14830017  bne         $a0, $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x17A5C8u;
    {
        const bool branch_taken_0x17a5c8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x17a5c8) {
            ctx->pc = 0x17A628u;
            goto label_17a628;
        }
    }
    ctx->pc = 0x17A5D0u;
    // 0x17a5d0: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x17a5d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x17a5d4: 0x3444a000  ori         $a0, $v0, 0xA000
    ctx->pc = 0x17a5d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)40960);
    // 0x17a5d8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x17a5d8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x17a5dc: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x17a5dcu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x17a5e0: 0xc0409c6  jal         func_102718
    ctx->pc = 0x17A5E0u;
    SET_GPR_U32(ctx, 31, 0x17A5E8u);
    ctx->pc = 0x102718u;
    {
        ctx->pc = 0x17A5E8u;
        ps2_stubs::sceDmaSync(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x17A5E8u) { return; }
    ctx->pc = 0x17A5E8u;
label_17a5e8:
    // 0x17a5e8: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x17a5e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x17a5ec: 0x3444a000  ori         $a0, $v0, 0xA000
    ctx->pc = 0x17a5ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)40960);
    // 0x17a5f0: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x17a5f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x17a5f4: 0xc04086e  jal         func_1021B8
    ctx->pc = 0x17A5F4u;
    SET_GPR_U32(ctx, 31, 0x17A5FCu);
    ctx->pc = 0x1021B8u;
    {
        ctx->pc = 0x17A5FCu;
        ps2_stubs::sceDmaSend(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x17A5FCu) { return; }
    ctx->pc = 0x17A5FCu;
label_17a5fc:
    // 0x17a5fc: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x17a5fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x17a600: 0x3444a000  ori         $a0, $v0, 0xA000
    ctx->pc = 0x17a600u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)40960);
    // 0x17a604: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x17a604u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x17a608: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x17a608u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x17a60c: 0xc0409c6  jal         func_102718
    ctx->pc = 0x17A60Cu;
    SET_GPR_U32(ctx, 31, 0x17A614u);
    ctx->pc = 0x102718u;
    {
        ctx->pc = 0x17A614u;
        ps2_stubs::sceDmaSync(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x17A614u) { return; }
    ctx->pc = 0x17A614u;
label_17a614:
    // 0x17a614: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x17a614u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x17a618: 0x3444a000  ori         $a0, $v0, 0xA000
    ctx->pc = 0x17a618u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)40960);
    // 0x17a61c: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x17a61cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x17a620: 0xc04086e  jal         func_1021B8
    ctx->pc = 0x17A620u;
    SET_GPR_U32(ctx, 31, 0x17A628u);
    ctx->pc = 0x1021B8u;
    {
        ctx->pc = 0x17A628u;
        ps2_stubs::sceDmaSend(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x17A628u) { return; }
    ctx->pc = 0x17A628u;
label_17a628:
    // 0x17a628: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x17a628u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17a62c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17a62cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17a630: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x17a630u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x17a634: 0x3e00008  jr          $ra
    ctx->pc = 0x17A634u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17A634u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17A63Cu;
}
