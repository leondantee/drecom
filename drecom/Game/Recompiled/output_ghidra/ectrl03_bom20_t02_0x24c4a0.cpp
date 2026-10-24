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

// Function: ectrl03_bom20_t02
// Address: 0x24c4a0 - 0x24c564
void ectrl03_bom20_t02_0x24c4a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ectrl03_bom20_t02_0x24c4a0");
#endif

    switch (ctx->pc) {
        case 0x24c548u: goto label_24c548;
        case 0x24c554u: goto label_24c554;
        default: break;
    }

    ctx->pc = 0x24c4a0u;

    // 0x24c4a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x24c4a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x24c4a4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x24c4a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x24c4a8: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x24c4a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
    // 0x24c4ac: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x24c4acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x24c4b0: 0x8c6400d4  lw          $a0, 0xD4($v1)
    ctx->pc = 0x24c4b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 212)));
    // 0x24c4b4: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x24c4b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x24c4b8: 0x10830014  beq         $a0, $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x24C4B8u;
    {
        const bool branch_taken_0x24c4b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x24c4b8) {
            ctx->pc = 0x24C50Cu;
            goto label_24c50c;
        }
    }
    ctx->pc = 0x24C4C0u;
    // 0x24c4c0: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x24c4c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x24c4c4: 0x10830011  beq         $a0, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x24C4C4u;
    {
        const bool branch_taken_0x24c4c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x24c4c4) {
            ctx->pc = 0x24C50Cu;
            goto label_24c50c;
        }
    }
    ctx->pc = 0x24C4CCu;
    // 0x24c4cc: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x24c4ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x24c4d0: 0x1083000e  beq         $a0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x24C4D0u;
    {
        const bool branch_taken_0x24c4d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x24c4d0) {
            ctx->pc = 0x24C50Cu;
            goto label_24c50c;
        }
    }
    ctx->pc = 0x24C4D8u;
    // 0x24c4d8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x24c4d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24c4dc: 0x1083000b  beq         $a0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x24C4DCu;
    {
        const bool branch_taken_0x24c4dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x24c4dc) {
            ctx->pc = 0x24C50Cu;
            goto label_24c50c;
        }
    }
    ctx->pc = 0x24C4E4u;
    // 0x24c4e4: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x24c4e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x24c4e8: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x24C4E8u;
    {
        const bool branch_taken_0x24c4e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x24c4e8) {
            ctx->pc = 0x24C4F8u;
            goto label_24c4f8;
        }
    }
    ctx->pc = 0x24C4F0u;
    // 0x24c4f0: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x24C4F0u;
    {
        const bool branch_taken_0x24c4f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24c4f0) {
            ctx->pc = 0x24C554u;
            goto label_24c554;
        }
    }
    ctx->pc = 0x24C4F8u;
label_24c4f8:
    // 0x24c4f8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x24c4f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x24c4fc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x24c4fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24c500: 0x34430010  ori         $v1, $v0, 0x10
    ctx->pc = 0x24c500u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x24c504: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x24c504u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x24c508: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x24c508u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_24c50c:
    // 0x24c50c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x24c50cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x24c510: 0x244200a0  addiu       $v0, $v0, 0xA0
    ctx->pc = 0x24c510u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    // 0x24c514: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x24c514u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24c518: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x24c518u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x24c51c: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x24c51cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x24c520: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x24c520u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x24c524: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x24c524u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24c528: 0x0  nop
    ctx->pc = 0x24c528u;
    // NOP
    // 0x24c52c: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x24c52cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x24c530: 0x2404050c  addiu       $a0, $zero, 0x50C
    ctx->pc = 0x24c530u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1292));
    // 0x24c534: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x24c534u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x24c538: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x24c538u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x24c53c: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x24c53cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x24c540: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x24C540u;
    SET_GPR_U32(ctx, 31, 0x24C548u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x24C540u, 0x24C548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C548u;
label_24c548:
    // 0x24c548: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x24c548u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x24c54c: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x24C54Cu;
    SET_GPR_U32(ctx, 31, 0x24C554u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x24C54Cu, 0x24C554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C554u;
label_24c554:
    // 0x24c554: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x24c554u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24c558: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x24c558u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x24c55c: 0x3e00008  jr          $ra
    ctx->pc = 0x24C55Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24C55Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24C564u;
}
