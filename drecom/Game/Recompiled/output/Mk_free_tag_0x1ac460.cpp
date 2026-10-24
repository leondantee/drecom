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

// Function: Mk_free_tag
// Address: 0x1ac460 - 0x1ac56c
void Mk_free_tag_0x1ac460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Mk_free_tag_0x1ac460");
#endif

    ctx->pc = 0x1ac460u;

    // 0x1ac460: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1ac460u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1ac464: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1ac464u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1ac468: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1ac468u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1ac46c: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x1ac46cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
    // 0x1ac470: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x1ac470u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x1ac474: 0xafa60038  sw          $a2, 0x38($sp)
    ctx->pc = 0x1ac474u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 6));
    // 0x1ac478: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x1ac478u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x1ac47c: 0x24500080  addiu       $s0, $v0, 0x80
    ctx->pc = 0x1ac47cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x1ac480: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1ac480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1ac484: 0x14400030  bnez        $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x1AC484u;
    {
        const bool branch_taken_0x1ac484 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ac484) {
            ctx->pc = 0x1AC548u;
            goto label_1ac548;
        }
    }
    ctx->pc = 0x1AC48Cu;
    // 0x1ac48c: 0x26030a68  addiu       $v1, $s0, 0xA68
    ctx->pc = 0x1ac48cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 2664));
    // 0x1ac490: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1ac490u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1ac494: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x1ac494u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x1ac498: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1ac498u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1ac49c: 0x26040a68  addiu       $a0, $s0, 0xA68
    ctx->pc = 0x1ac49cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2664));
    // 0x1ac4a0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1ac4a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1ac4a4: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x1ac4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x1ac4a8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1ac4a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1ac4ac: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1ac4acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x1ac4b0: 0x8e110a68  lw          $s1, 0xA68($s0)
    ctx->pc = 0x1ac4b0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2664)));
    // 0x1ac4b4: 0x8e030a68  lw          $v1, 0xA68($s0)
    ctx->pc = 0x1ac4b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2664)));
    // 0x1ac4b8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1ac4b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ac4bc: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1ac4bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1ac4c0: 0x26040a68  addiu       $a0, $s0, 0xA68
    ctx->pc = 0x1ac4c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2664));
    // 0x1ac4c4: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1ac4c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ac4c8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1ac4c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1ac4cc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1ac4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ac4d0: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1ac4d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x1ac4d4: 0x26030a68  addiu       $v1, $s0, 0xA68
    ctx->pc = 0x1ac4d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 2664));
    // 0x1ac4d8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1ac4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1ac4dc: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x1ac4dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x1ac4e0: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1ac4e0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1ac4e4: 0x26040a68  addiu       $a0, $s0, 0xA68
    ctx->pc = 0x1ac4e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2664));
    // 0x1ac4e8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1ac4e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1ac4ec: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x1ac4ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x1ac4f0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1ac4f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1ac4f4: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1ac4f4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x1ac4f8: 0x8e030a68  lw          $v1, 0xA68($s0)
    ctx->pc = 0x1ac4f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2664)));
    // 0x1ac4fc: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1ac4fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ac500: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1ac500u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1ac504: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1ac504u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1ac508: 0x26040a68  addiu       $a0, $s0, 0xA68
    ctx->pc = 0x1ac508u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2664));
    // 0x1ac50c: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1ac50cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ac510: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1ac510u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1ac514: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1ac514u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ac518: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1ac518u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x1ac51c: 0x26030a68  addiu       $v1, $s0, 0xA68
    ctx->pc = 0x1ac51cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 2664));
    // 0x1ac520: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1ac520u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1ac524: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x1ac524u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x1ac528: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1ac528u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1ac52c: 0x26040a68  addiu       $a0, $s0, 0xA68
    ctx->pc = 0x1ac52cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2664));
    // 0x1ac530: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1ac530u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1ac534: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x1ac534u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x1ac538: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1ac538u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1ac53c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1ac53cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x1ac540: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1AC540u;
    {
        const bool branch_taken_0x1ac540 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ac540) {
            ctx->pc = 0x1AC554u;
            goto label_1ac554;
        }
    }
    ctx->pc = 0x1AC548u;
label_1ac548:
    // 0x1ac548: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1ac548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ac54c: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x1ac54cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ac550: 0x0  nop
    ctx->pc = 0x1ac550u;
    // NOP
label_1ac554:
    // 0x1ac554: 0x72201628  paddub      $v0, $s1, $zero
    ctx->pc = 0x1ac554u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1ac558: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1ac558u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ac55c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1ac55cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ac560: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1ac560u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1ac564: 0x3e00008  jr          $ra
    ctx->pc = 0x1AC564u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AC564u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AC56Cu;
}
