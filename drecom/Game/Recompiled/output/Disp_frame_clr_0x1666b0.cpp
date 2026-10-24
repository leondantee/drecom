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

// Function: Disp_frame_clr
// Address: 0x1666b0 - 0x166804
void Disp_frame_clr_0x1666b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Disp_frame_clr_0x1666b0");
#endif

    switch (ctx->pc) {
        case 0x1666e0u: goto label_1666e0;
        case 0x1667ecu: goto label_1667ec;
        default: break;
    }

    ctx->pc = 0x1666b0u;

    // 0x1666b0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1666b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1666b4: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x1666b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x1666b8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1666b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1666bc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1666bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1666c0: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x1666c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x1666c4: 0xafa50038  sw          $a1, 0x38($sp)
    ctx->pc = 0x1666c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 5));
    // 0x1666c8: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1666c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x1666cc: 0x3444a000  ori         $a0, $v0, 0xA000
    ctx->pc = 0x1666ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)40960);
    // 0x1666d0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1666d0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1666d4: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1666d4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1666d8: 0xc0409c6  jal         func_102718
    ctx->pc = 0x1666D8u;
    SET_GPR_U32(ctx, 31, 0x1666E0u);
    ctx->pc = 0x102718u;
    {
        ctx->pc = 0x1666E0u;
        ps2_stubs::sceDmaSync(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1666E0u) { return; }
    ctx->pc = 0x1666E0u;
label_1666e0:
    // 0x1666e0: 0x3c107000  lui         $s0, 0x7000
    ctx->pc = 0x1666e0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)28672 << 16));
    // 0x1666e4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1666e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1666e8: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x1666E8u;
    {
        const bool branch_taken_0x1666e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1666e8) {
            ctx->pc = 0x166764u;
            goto label_166764;
        }
    }
    ctx->pc = 0x1666F0u;
    // 0x1666f0: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1666f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1666f4: 0x944201e0  lhu         $v0, 0x1E0($v0)
    ctx->pc = 0x1666f4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 480)));
    // 0x1666f8: 0x30517fff  andi        $s1, $v0, 0x7FFF
    ctx->pc = 0x1666f8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x1666fc: 0x24020016  addiu       $v0, $zero, 0x16
    ctx->pc = 0x1666fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x166700: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x166700u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x166704: 0x94a401e0  lhu         $a0, 0x1E0($a1)
    ctx->pc = 0x166704u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 480)));
    // 0x166708: 0x30437fff  andi        $v1, $v0, 0x7FFF
    ctx->pc = 0x166708u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x16670c: 0x24028000  addiu       $v0, $zero, -0x8000
    ctx->pc = 0x16670cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934528));
    // 0x166710: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x166710u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x166714: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x166714u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x166718: 0xa4a201e0  sh          $v0, 0x1E0($a1)
    ctx->pc = 0x166718u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 480), (uint16_t)GPR_U32(ctx, 2));
    // 0x16671c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x16671cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x166720: 0x944201e0  lhu         $v0, 0x1E0($v0)
    ctx->pc = 0x166720u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 480)));
    // 0x166724: 0x30427fff  andi        $v0, $v0, 0x7FFF
    ctx->pc = 0x166724u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x166728: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x166728u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x16672c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x16672cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x166730: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x166730u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x166734: 0x244201e0  addiu       $v0, $v0, 0x1E0
    ctx->pc = 0x166734u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 480));
    // 0x166738: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x166738u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x16673c: 0x3222ffff  andi        $v0, $s1, 0xFFFF
    ctx->pc = 0x16673cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
    // 0x166740: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x166740u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x166744: 0x94a401e0  lhu         $a0, 0x1E0($a1)
    ctx->pc = 0x166744u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 480)));
    // 0x166748: 0x30437fff  andi        $v1, $v0, 0x7FFF
    ctx->pc = 0x166748u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x16674c: 0x24028000  addiu       $v0, $zero, -0x8000
    ctx->pc = 0x16674cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934528));
    // 0x166750: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x166750u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x166754: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x166754u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x166758: 0xa4a201e0  sh          $v0, 0x1E0($a1)
    ctx->pc = 0x166758u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 480), (uint16_t)GPR_U32(ctx, 2));
    // 0x16675c: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x16675Cu;
    {
        const bool branch_taken_0x16675c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16675c) {
            ctx->pc = 0x1667D0u;
            goto label_1667d0;
        }
    }
    ctx->pc = 0x166764u;
label_166764:
    // 0x166764: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x166764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x166768: 0x94420070  lhu         $v0, 0x70($v0)
    ctx->pc = 0x166768u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 112)));
    // 0x16676c: 0x30517fff  andi        $s1, $v0, 0x7FFF
    ctx->pc = 0x16676cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x166770: 0x24020016  addiu       $v0, $zero, 0x16
    ctx->pc = 0x166770u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x166774: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x166774u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x166778: 0x94a40070  lhu         $a0, 0x70($a1)
    ctx->pc = 0x166778u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 112)));
    // 0x16677c: 0x30437fff  andi        $v1, $v0, 0x7FFF
    ctx->pc = 0x16677cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x166780: 0x24028000  addiu       $v0, $zero, -0x8000
    ctx->pc = 0x166780u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934528));
    // 0x166784: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x166784u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x166788: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x166788u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x16678c: 0xa4a20070  sh          $v0, 0x70($a1)
    ctx->pc = 0x16678cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 112), (uint16_t)GPR_U32(ctx, 2));
    // 0x166790: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x166790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x166794: 0x94420070  lhu         $v0, 0x70($v0)
    ctx->pc = 0x166794u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 112)));
    // 0x166798: 0x30427fff  andi        $v0, $v0, 0x7FFF
    ctx->pc = 0x166798u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x16679c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x16679cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1667a0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1667a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1667a4: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1667a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1667a8: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x1667a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x1667ac: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x1667acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x1667b0: 0x3222ffff  andi        $v0, $s1, 0xFFFF
    ctx->pc = 0x1667b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
    // 0x1667b4: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x1667b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1667b8: 0x94a40070  lhu         $a0, 0x70($a1)
    ctx->pc = 0x1667b8u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 112)));
    // 0x1667bc: 0x30437fff  andi        $v1, $v0, 0x7FFF
    ctx->pc = 0x1667bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x1667c0: 0x24028000  addiu       $v0, $zero, -0x8000
    ctx->pc = 0x1667c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934528));
    // 0x1667c4: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x1667c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x1667c8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1667c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1667cc: 0xa4a20070  sh          $v0, 0x70($a1)
    ctx->pc = 0x1667ccu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 112), (uint16_t)GPR_U32(ctx, 2));
label_1667d0:
    // 0x1667d0: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x1667d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x1667d4: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x1667d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x1667d8: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1667d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x1667dc: 0x3444a000  ori         $a0, $v0, 0xA000
    ctx->pc = 0x1667dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)40960);
    // 0x1667e0: 0x3c05f000  lui         $a1, 0xF000
    ctx->pc = 0x1667e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)61440 << 16));
    // 0x1667e4: 0xc04086e  jal         func_1021B8
    ctx->pc = 0x1667E4u;
    SET_GPR_U32(ctx, 31, 0x1667ECu);
    ctx->pc = 0x1021B8u;
    {
        ctx->pc = 0x1667ECu;
        ps2_stubs::sceDmaSend(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1667ECu) { return; }
    ctx->pc = 0x1667ECu;
label_1667ec:
    // 0x1667ec: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x1667ecu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1667f0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1667f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1667f4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1667f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1667f8: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1667f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1667fc: 0x3e00008  jr          $ra
    ctx->pc = 0x1667FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1667FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x166804u;
}
