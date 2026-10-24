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

// Function: Status_load_texture
// Address: 0x292910 - 0x2929ac
void Status_load_texture_0x292910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Status_load_texture_0x292910");
#endif

    switch (ctx->pc) {
        case 0x292930u: goto label_292930;
        case 0x292944u: goto label_292944;
        case 0x292970u: goto label_292970;
        default: break;
    }

    ctx->pc = 0x292910u;

    // 0x292910: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x292910u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x292914: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x292914u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x292918: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x292918u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x29291c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x29291cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x292920: 0xafa50028  sw          $a1, 0x28($sp)
    ctx->pc = 0x292920u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 5));
    // 0x292924: 0x8fb00020  lw          $s0, 0x20($sp)
    ctx->pc = 0x292924u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x292928: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x292928u;
    {
        const bool branch_taken_0x292928 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x292928) {
            ctx->pc = 0x292980u;
            goto label_292980;
        }
    }
    ctx->pc = 0x292930u;
label_292930:
    // 0x292930: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x292930u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x292934: 0x94420006  lhu         $v0, 0x6($v0)
    ctx->pc = 0x292934u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x292938: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x292938u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x29293c: 0xc05e990  jal         func_17A640
    ctx->pc = 0x29293Cu;
    SET_GPR_U32(ctx, 31, 0x292944u);
    ctx->pc = 0x17A640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A640u, 0x29293Cu, 0x292944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292944u;
label_292944:
    // 0x292944: 0x72001e28  paddub      $v1, $s0, $zero
    ctx->pc = 0x292944u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x292948: 0x24700001  addiu       $s0, $v1, 0x1
    ctx->pc = 0x292948u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x29294c: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x29294cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x292950: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x292950u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x292954: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x292954u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x292958: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x292958u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x29295c: 0x94630004  lhu         $v1, 0x4($v1)
    ctx->pc = 0x29295cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x292960: 0x3066ffff  andi        $a2, $v1, 0xFFFF
    ctx->pc = 0x292960u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x292964: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x292964u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x292968: 0xc05e2e0  jal         func_178B80
    ctx->pc = 0x292968u;
    SET_GPR_U32(ctx, 31, 0x292970u);
    ctx->pc = 0x178B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178B80u, 0x292968u, 0x292970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292970u;
label_292970:
    // 0x292970: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x292970u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x292974: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x292974u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x292978: 0xafa30028  sw          $v1, 0x28($sp)
    ctx->pc = 0x292978u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 3));
    // 0x29297c: 0x0  nop
    ctx->pc = 0x29297cu;
    // NOP
label_292980:
    // 0x292980: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x292980u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x292984: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x292984u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x292988: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x292988u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x29298c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x29298cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x292990: 0x1060ffe7  beqz        $v1, . + 4 + (-0x19 << 2)
    ctx->pc = 0x292990u;
    {
        const bool branch_taken_0x292990 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x292990) {
            ctx->pc = 0x292930u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_292930;
        }
    }
    ctx->pc = 0x292998u;
    // 0x292998: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x292998u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29299c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x29299cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2929a0: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2929a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2929a4: 0x3e00008  jr          $ra
    ctx->pc = 0x2929A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2929A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2929ACu;
}
