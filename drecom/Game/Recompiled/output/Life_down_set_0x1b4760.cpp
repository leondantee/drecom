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

// Function: Life_down_set
// Address: 0x1b4760 - 0x1b4898
void Life_down_set_0x1b4760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Life_down_set_0x1b4760");
#endif

    ctx->pc = 0x1b4760u;

    // 0x1b4760: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1b4760u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1b4764: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1b4764u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1b4768: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x1b4768u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x1b476c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x1b476cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x1b4770: 0xa7a60028  sh          $a2, 0x28($sp)
    ctx->pc = 0x1b4770u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 40), (uint16_t)GPR_U32(ctx, 6));
    // 0x1b4774: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1b4774u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b4778: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B4778u;
    {
        const bool branch_taken_0x1b4778 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b4778) {
            ctx->pc = 0x1B4798u;
            goto label_1b4798;
        }
    }
    ctx->pc = 0x1B4780u;
    // 0x1b4780: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1b4780u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1b4784: 0x8463122e  lh          $v1, 0x122E($v1)
    ctx->pc = 0x1b4784u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4654)));
    // 0x1b4788: 0x3843c  dsll32      $s0, $v1, 16
    ctx->pc = 0x1b4788u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1b478c: 0x10843f  dsra32      $s0, $s0, 16
    ctx->pc = 0x1b478cu;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 16));
    // 0x1b4790: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x1B4790u;
    {
        const bool branch_taken_0x1b4790 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b4790) {
            ctx->pc = 0x1B4808u;
            goto label_1b4808;
        }
    }
    ctx->pc = 0x1B4798u;
label_1b4798:
    // 0x1b4798: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1b4798u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b479c: 0x90630012  lbu         $v1, 0x12($v1)
    ctx->pc = 0x1b479cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 18)));
    // 0x1b47a0: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1b47a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1b47a4: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1b47a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1b47a8: 0x1483000c  bne         $a0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x1B47A8u;
    {
        const bool branch_taken_0x1b47a8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1b47a8) {
            ctx->pc = 0x1B47DCu;
            goto label_1b47dc;
        }
    }
    ctx->pc = 0x1B47B0u;
    // 0x1b47b0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1b47b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1b47b4: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x1b47b4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x1b47b8: 0x30638000  andi        $v1, $v1, 0x8000
    ctx->pc = 0x1b47b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
    // 0x1b47bc: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B47BCu;
    {
        const bool branch_taken_0x1b47bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b47bc) {
            ctx->pc = 0x1B47DCu;
            goto label_1b47dc;
        }
    }
    ctx->pc = 0x1B47C4u;
    // 0x1b47c4: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1b47c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b47c8: 0x8463122c  lh          $v1, 0x122C($v1)
    ctx->pc = 0x1b47c8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4652)));
    // 0x1b47cc: 0x3843c  dsll32      $s0, $v1, 16
    ctx->pc = 0x1b47ccu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1b47d0: 0x10843f  dsra32      $s0, $s0, 16
    ctx->pc = 0x1b47d0u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 16));
    // 0x1b47d4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1B47D4u;
    {
        const bool branch_taken_0x1b47d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b47d4) {
            ctx->pc = 0x1B4808u;
            goto label_1b4808;
        }
    }
    ctx->pc = 0x1B47DCu;
label_1b47dc:
    // 0x1b47dc: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1b47dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b47e0: 0x8463122c  lh          $v1, 0x122C($v1)
    ctx->pc = 0x1b47e0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4652)));
    // 0x1b47e4: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x1b47e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1b47e8: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x1b47e8u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x1b47ec: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1b47ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1b47f0: 0x8463122e  lh          $v1, 0x122E($v1)
    ctx->pc = 0x1b47f0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4654)));
    // 0x1b47f4: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x1b47f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1b47f8: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1b47f8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1b47fc: 0x838018  mult        $s0, $a0, $v1
    ctx->pc = 0x1b47fcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x1b4800: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x1b4800u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1b4804: 0x108203  sra         $s0, $s0, 8
    ctx->pc = 0x1b4804u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 8));
label_1b4808:
    // 0x1b4808: 0x87a30028  lh          $v1, 0x28($sp)
    ctx->pc = 0x1b4808u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1b480c: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x1b480cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1b4810: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1b4810u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1b4814: 0x708018  mult        $s0, $v1, $s0
    ctx->pc = 0x1b4814u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x1b4818: 0x87a30028  lh          $v1, 0x28($sp)
    ctx->pc = 0x1b4818u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1b481c: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x1b481cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1b4820: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1b4820u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1b4824: 0x18600005  blez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B4824u;
    {
        const bool branch_taken_0x1b4824 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x1b4824) {
            ctx->pc = 0x1B483Cu;
            goto label_1b483c;
        }
    }
    ctx->pc = 0x1B482Cu;
    // 0x1b482c: 0x2a010100  slti        $at, $s0, 0x100
    ctx->pc = 0x1b482cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x1b4830: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1B4830u;
    {
        const bool branch_taken_0x1b4830 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b4830) {
            ctx->pc = 0x1B483Cu;
            goto label_1b483c;
        }
    }
    ctx->pc = 0x1B4838u;
    // 0x1b4838: 0x24100100  addiu       $s0, $zero, 0x100
    ctx->pc = 0x1b4838u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_1b483c:
    // 0x1b483c: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x1b483cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1b4840: 0x101a03  sra         $v1, $s0, 8
    ctx->pc = 0x1b4840u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 16), 8));
    // 0x1b4844: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x1b4844u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1b4848: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1b4848u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1b484c: 0xa7a30028  sh          $v1, 0x28($sp)
    ctx->pc = 0x1b484cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 40), (uint16_t)GPR_U32(ctx, 3));
    // 0x1b4850: 0x8fa50018  lw          $a1, 0x18($sp)
    ctx->pc = 0x1b4850u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1b4854: 0x84a410a6  lh          $a0, 0x10A6($a1)
    ctx->pc = 0x1b4854u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4262)));
    // 0x1b4858: 0x87a30028  lh          $v1, 0x28($sp)
    ctx->pc = 0x1b4858u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1b485c: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x1b485cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1b4860: 0xa4a310a6  sh          $v1, 0x10A6($a1)
    ctx->pc = 0x1b4860u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4262), (uint16_t)GPR_U32(ctx, 3));
    // 0x1b4864: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1b4864u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1b4868: 0x846310a6  lh          $v1, 0x10A6($v1)
    ctx->pc = 0x1b4868u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4262)));
    // 0x1b486c: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x1b486cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1b4870: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1b4870u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1b4874: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B4874u;
    {
        const bool branch_taken_0x1b4874 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x1b4874) {
            ctx->pc = 0x1B4888u;
            goto label_1b4888;
        }
    }
    ctx->pc = 0x1B487Cu;
    // 0x1b487c: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x1b487cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1b4880: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1b4880u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1b4884: 0xa46410a6  sh          $a0, 0x10A6($v1)
    ctx->pc = 0x1b4884u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4262), (uint16_t)GPR_U32(ctx, 4));
label_1b4888:
    // 0x1b4888: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1b4888u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b488c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1b488cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1b4890: 0x3e00008  jr          $ra
    ctx->pc = 0x1B4890u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B4890u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B4898u;
}
