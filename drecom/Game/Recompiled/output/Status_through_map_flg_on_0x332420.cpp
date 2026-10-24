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

// Function: Status_through_map_flg_on
// Address: 0x332420 - 0x3324d4
void Status_through_map_flg_on_0x332420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Status_through_map_flg_on_0x332420");
#endif

    ctx->pc = 0x332420u;

    // 0x332420: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x332420u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x332424: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x332424u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x332428: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x332428u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x33242c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x33242cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x332430: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x332430u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x332434: 0x24706150  addiu       $s0, $v1, 0x6150
    ctx->pc = 0x332434u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 24912));
    // 0x332438: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x332438u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x33243c: 0x2471fe10  addiu       $s1, $v1, -0x1F0
    ctx->pc = 0x33243cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966800));
    // 0x332440: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x332440u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x332444: 0x8e23025c  lw          $v1, 0x25C($s1)
    ctx->pc = 0x332444u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D006Cu));
    // 0x332448: 0x642814  dsllv       $a1, $a0, $v1
    ctx->pc = 0x332448u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (GPR_U32(ctx, 3) & 0x3F));
    // 0x33244c: 0x8e230258  lw          $v1, 0x258($s1)
    ctx->pc = 0x33244cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 600)));
    // 0x332450: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x332450u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x332454: 0x2032021  addu        $a0, $s0, $v1
    ctx->pc = 0x332454u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x332458: 0xdc8365c0  ld          $v1, 0x65C0($a0)
    ctx->pc = 0x332458u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 26048)));
    // 0x33245c: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x33245cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x332460: 0xfc8365c0  sd          $v1, 0x65C0($a0)
    ctx->pc = 0x332460u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 26048), GPR_U64(ctx, 3));
    // 0x332464: 0x92036607  lbu         $v1, 0x6607($s0)
    ctx->pc = 0x332464u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 26119)));
    // 0x332468: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x332468u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x33246c: 0xa2036607  sb          $v1, 0x6607($s0)
    ctx->pc = 0x33246cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 26119), (uint8_t)GPR_U32(ctx, 3));
    // 0x332470: 0x92036607  lbu         $v1, 0x6607($s0)
    ctx->pc = 0x332470u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 26119)));
    // 0x332474: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x332474u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x332478: 0x28610006  slti        $at, $v1, 0x6
    ctx->pc = 0x332478u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x33247c: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x33247Cu;
    {
        const bool branch_taken_0x33247c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x33247c) {
            ctx->pc = 0x332488u;
            goto label_332488;
        }
    }
    ctx->pc = 0x332484u;
    // 0x332484: 0xa2006607  sb          $zero, 0x6607($s0)
    ctx->pc = 0x332484u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 26119), (uint8_t)GPR_U32(ctx, 0));
label_332488:
    // 0x332488: 0x92036607  lbu         $v1, 0x6607($s0)
    ctx->pc = 0x332488u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 26119)));
    // 0x33248c: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x33248cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x332490: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x332490u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x332494: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x332494u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x332498: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x332498u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x33249c: 0x247265f8  addiu       $s2, $v1, 0x65F8
    ctx->pc = 0x33249cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 26104));
    // 0x3324a0: 0x8e230258  lw          $v1, 0x258($s1)
    ctx->pc = 0x3324a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 600)));
    // 0x3324a4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x3324a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3324a8: 0xa2430000  sb          $v1, 0x0($s2)
    ctx->pc = 0x3324a8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x3324ac: 0x8e23025c  lw          $v1, 0x25C($s1)
    ctx->pc = 0x3324acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 604)));
    // 0x3324b0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x3324b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3324b4: 0xa2430001  sb          $v1, 0x1($s2)
    ctx->pc = 0x3324b4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x3324b8: 0xa2400002  sb          $zero, 0x2($s2)
    ctx->pc = 0x3324b8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x3324bc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3324bcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3324c0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3324c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3324c4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3324c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3324c8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x3324c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3324cc: 0x3e00008  jr          $ra
    ctx->pc = 0x3324CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3324CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3324D4u;
}
