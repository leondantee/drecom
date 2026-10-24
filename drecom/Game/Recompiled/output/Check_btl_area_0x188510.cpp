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

// Function: Check_btl_area
// Address: 0x188510 - 0x1885ac
void Check_btl_area_0x188510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Check_btl_area_0x188510");
#endif

    ctx->pc = 0x188510u;

    // 0x188510: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x188510u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x188514: 0x8c230068  lw          $v1, 0x68($at)
    ctx->pc = 0x188514u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0068u));
    // 0x188518: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x188518u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x18851c: 0x10620020  beq         $v1, $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x18851Cu;
    {
        const bool branch_taken_0x18851c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x18851c) {
            ctx->pc = 0x1885A0u;
            goto label_1885a0;
        }
    }
    ctx->pc = 0x188524u;
    // 0x188524: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x188524u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x188528: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x188528u;
    {
        const bool branch_taken_0x188528 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x188528) {
            ctx->pc = 0x188538u;
            goto label_188538;
        }
    }
    ctx->pc = 0x188530u;
    // 0x188530: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x188530u;
    {
        const bool branch_taken_0x188530 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x188530) {
            ctx->pc = 0x1885A0u;
            goto label_1885a0;
        }
    }
    ctx->pc = 0x188538u;
label_188538:
    // 0x188538: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x188538u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x18853c: 0x8c23006c  lw          $v1, 0x6C($at)
    ctx->pc = 0x18853cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D006Cu));
    // 0x188540: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x188540u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x188544: 0x10620016  beq         $v1, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x188544u;
    {
        const bool branch_taken_0x188544 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x188544) {
            ctx->pc = 0x1885A0u;
            goto label_1885a0;
        }
    }
    ctx->pc = 0x18854Cu;
    // 0x18854c: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x18854cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x188550: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x188550u;
    {
        const bool branch_taken_0x188550 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x188550) {
            ctx->pc = 0x188560u;
            goto label_188560;
        }
    }
    ctx->pc = 0x188558u;
    // 0x188558: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x188558u;
    {
        const bool branch_taken_0x188558 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x188558) {
            ctx->pc = 0x1885A0u;
            goto label_1885a0;
        }
    }
    ctx->pc = 0x188560u;
label_188560:
    // 0x188560: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x188560u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x188564: 0xc421dce4  lwc1        $f1, -0x231C($at)
    ctx->pc = 0x188564u;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x188568: 0x3c0244bb  lui         $v0, 0x44BB
    ctx->pc = 0x188568u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17595 << 16));
    // 0x18856c: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x18856cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x188570: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x188570u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x188574: 0x0  nop
    ctx->pc = 0x188574u;
    // NOP
    // 0x188578: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x188578u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18857c: 0x0  nop
    ctx->pc = 0x18857cu;
    // NOP
    // 0x188580: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x188580u;
    {
        const bool branch_taken_0x188580 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x188580) {
            ctx->pc = 0x188594u;
            goto label_188594;
        }
    }
    ctx->pc = 0x188588u;
    // 0x188588: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x188588u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x18858c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x18858Cu;
    {
        const bool branch_taken_0x18858c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18858c) {
            ctx->pc = 0x1885A4u;
            goto label_1885a4;
        }
    }
    ctx->pc = 0x188594u;
label_188594:
    // 0x188594: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x188594u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x188598: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x188598u;
    {
        const bool branch_taken_0x188598 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x188598) {
            ctx->pc = 0x1885A4u;
            goto label_1885a4;
        }
    }
    ctx->pc = 0x1885A0u;
label_1885a0:
    // 0x1885a0: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x1885a0u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1885a4:
    // 0x1885a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1885A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1885A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1885ACu;
}
