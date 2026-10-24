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

// Function: Mod_ot_set_tag
// Address: 0x1ab800 - 0x1ab8b4
void Mod_ot_set_tag_0x1ab800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Mod_ot_set_tag_0x1ab800");
#endif

    ctx->pc = 0x1ab800u;

    // 0x1ab800: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1ab800u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1ab804: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1ab804u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1ab808: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1ab808u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1ab80c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x1ab80cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x1ab810: 0xafa50028  sw          $a1, 0x28($sp)
    ctx->pc = 0x1ab810u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 5));
    // 0x1ab814: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x1ab814u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x1ab818: 0xa3a70038  sb          $a3, 0x38($sp)
    ctx->pc = 0x1ab818u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 56), (uint8_t)GPR_U32(ctx, 7));
    // 0x1ab81c: 0x93a30038  lbu         $v1, 0x38($sp)
    ctx->pc = 0x1ab81cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1ab820: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1ab820u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1ab824: 0x41a00  sll         $v1, $a0, 8
    ctx->pc = 0x1ab824u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x1ab828: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1ab828u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1ab82c: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x1ab82cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1ab830: 0x3c03005f  lui         $v1, 0x5F
    ctx->pc = 0x1ab830u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)95 << 16));
    // 0x1ab834: 0x2463cfc0  addiu       $v1, $v1, -0x3040
    ctx->pc = 0x1ab834u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954944));
    // 0x1ab838: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x1ab838u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1ab83c: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1ab83cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ab840: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1ab840u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1ab844: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1ab844u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1ab848: 0x648021  addu        $s0, $v1, $a0
    ctx->pc = 0x1ab848u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1ab84c: 0xde030000  ld          $v1, 0x0($s0)
    ctx->pc = 0x1ab84cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1ab850: 0x3883e  dsrl32      $s1, $v1, 0
    ctx->pc = 0x1ab850u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1ab854: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1ab854u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ab858: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1ab858u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1ab85c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1ab85cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1ab860: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1ab860u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1ab864: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x1ab864u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x1ab868: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1ab868u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1ab86c: 0xfe030000  sd          $v1, 0x0($s0)
    ctx->pc = 0x1ab86cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 3));
    // 0x1ab870: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1ab870u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ab874: 0xdc830000  ld          $v1, 0x0($a0)
    ctx->pc = 0x1ab874u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1ab878: 0x3193c  dsll32      $v1, $v1, 4
    ctx->pc = 0x1ab878u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 4));
    // 0x1ab87c: 0x3193e  dsrl32      $v1, $v1, 4
    ctx->pc = 0x1ab87cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 4));
    // 0x1ab880: 0xfc830000  sd          $v1, 0x0($a0)
    ctx->pc = 0x1ab880u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 3));
    // 0x1ab884: 0x11203c  dsll32      $a0, $s1, 0
    ctx->pc = 0x1ab884u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) << (32 + 0));
    // 0x1ab888: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x1ab888u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x1ab88c: 0x832825  or          $a1, $a0, $v1
    ctx->pc = 0x1ab88cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1ab890: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1ab890u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ab894: 0xdc830000  ld          $v1, 0x0($a0)
    ctx->pc = 0x1ab894u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1ab898: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x1ab898u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x1ab89c: 0xfc830000  sd          $v1, 0x0($a0)
    ctx->pc = 0x1ab89cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 3));
    // 0x1ab8a0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1ab8a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ab8a4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1ab8a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ab8a8: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1ab8a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1ab8ac: 0x3e00008  jr          $ra
    ctx->pc = 0x1AB8ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AB8ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AB8B4u;
}
