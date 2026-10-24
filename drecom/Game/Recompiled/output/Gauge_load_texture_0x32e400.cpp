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

// Function: Gauge_load_texture
// Address: 0x32e400 - 0x32e4b8
void Gauge_load_texture_0x32e400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Gauge_load_texture_0x32e400");
#endif

    switch (ctx->pc) {
        case 0x32e424u: goto label_32e424;
        case 0x32e438u: goto label_32e438;
        case 0x32e450u: goto label_32e450;
        case 0x32e47cu: goto label_32e47c;
        default: break;
    }

    ctx->pc = 0x32e400u;

    // 0x32e400: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x32e400u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x32e404: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x32e404u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x32e408: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x32e408u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x32e40c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x32e40cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x32e410: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x32e410u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x32e414: 0xafa50038  sw          $a1, 0x38($sp)
    ctx->pc = 0x32e414u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 5));
    // 0x32e418: 0x8fb00030  lw          $s0, 0x30($sp)
    ctx->pc = 0x32e418u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x32e41c: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x32E41Cu;
    {
        const bool branch_taken_0x32e41c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32e41c) {
            ctx->pc = 0x32E488u;
            goto label_32e488;
        }
    }
    ctx->pc = 0x32E424u;
label_32e424:
    // 0x32e424: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x32e424u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x32e428: 0x94420006  lhu         $v0, 0x6($v0)
    ctx->pc = 0x32e428u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x32e42c: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x32e42cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x32e430: 0xc05e990  jal         func_17A640
    ctx->pc = 0x32E430u;
    SET_GPR_U32(ctx, 31, 0x32E438u);
    ctx->pc = 0x17A640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A640u, 0x32E430u, 0x32E438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32E438u;
label_32e438:
    // 0x32e438: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x32e438u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x32e43c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x32e43cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x32e440: 0x94420006  lhu         $v0, 0x6($v0)
    ctx->pc = 0x32e440u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x32e444: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x32e444u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x32e448: 0xc05e990  jal         func_17A640
    ctx->pc = 0x32E448u;
    SET_GPR_U32(ctx, 31, 0x32E450u);
    ctx->pc = 0x17A640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A640u, 0x32E448u, 0x32E450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32E450u;
label_32e450:
    // 0x32e450: 0x72001e28  paddub      $v1, $s0, $zero
    ctx->pc = 0x32e450u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x32e454: 0x24700001  addiu       $s0, $v1, 0x1
    ctx->pc = 0x32e454u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x32e458: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x32e458u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x32e45c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x32e45cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x32e460: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x32e460u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x32e464: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x32e464u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x32e468: 0x94630004  lhu         $v1, 0x4($v1)
    ctx->pc = 0x32e468u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x32e46c: 0x3066ffff  andi        $a2, $v1, 0xFFFF
    ctx->pc = 0x32e46cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x32e470: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x32e470u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x32e474: 0xc05e2e0  jal         func_178B80
    ctx->pc = 0x32E474u;
    SET_GPR_U32(ctx, 31, 0x32E47Cu);
    ctx->pc = 0x178B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178B80u, 0x32E474u, 0x32E47Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32E47Cu;
label_32e47c:
    // 0x32e47c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x32e47cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x32e480: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x32e480u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x32e484: 0xafa30038  sw          $v1, 0x38($sp)
    ctx->pc = 0x32e484u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 3));
label_32e488:
    // 0x32e488: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x32e488u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x32e48c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x32e48cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x32e490: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x32e490u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x32e494: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x32e494u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x32e498: 0x1060ffe2  beqz        $v1, . + 4 + (-0x1E << 2)
    ctx->pc = 0x32E498u;
    {
        const bool branch_taken_0x32e498 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x32e498) {
            ctx->pc = 0x32E424u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_32e424;
        }
    }
    ctx->pc = 0x32E4A0u;
    // 0x32e4a0: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x32e4a0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x32e4a4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x32e4a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32e4a8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x32e4a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32e4ac: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x32e4acu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x32e4b0: 0x3e00008  jr          $ra
    ctx->pc = 0x32E4B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32E4B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32E4B8u;
}
