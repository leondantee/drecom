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

// Function: Ck_em02
// Address: 0x2ce860 - 0x2ce96c
void Ck_em02_0x2ce860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Ck_em02_0x2ce860");
#endif

    switch (ctx->pc) {
        case 0x2ce8c0u: goto label_2ce8c0;
        default: break;
    }

    ctx->pc = 0x2ce860u;

    // 0x2ce860: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2ce860u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2ce864: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2ce864u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2ce868: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2ce868u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2ce86c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2ce86cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2ce870: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2ce870u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2ce874: 0xafa40048  sw          $a0, 0x48($sp)
    ctx->pc = 0x2ce874u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 4));
    // 0x2ce878: 0xafa50050  sw          $a1, 0x50($sp)
    ctx->pc = 0x2ce878u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 5));
    // 0x2ce87c: 0xafa60058  sw          $a2, 0x58($sp)
    ctx->pc = 0x2ce87cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 6));
    // 0x2ce880: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x2ce880u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x2ce884: 0x2452bb48  addiu       $s2, $v0, -0x44B8
    ctx->pc = 0x2ce884u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949704));
    // 0x2ce888: 0x70009e28  paddub      $s3, $zero, $zero
    ctx->pc = 0x2ce888u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2ce88c: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x2ce88cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x2ce890: 0x8c22bb40  lw          $v0, -0x44C0($at)
    ctx->pc = 0x2ce890u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x47BB40u));
    // 0x2ce894: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CE894u;
    {
        const bool branch_taken_0x2ce894 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ce894) {
            ctx->pc = 0x2CE8A8u;
            goto label_2ce8a8;
        }
    }
    ctx->pc = 0x2CE89Cu;
    // 0x2ce89c: 0x72601628  paddub      $v0, $s3, $zero
    ctx->pc = 0x2ce89cu;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x2ce8a0: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x2CE8A0u;
    {
        const bool branch_taken_0x2ce8a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ce8a0) {
            ctx->pc = 0x2CE950u;
            goto label_2ce950;
        }
    }
    ctx->pc = 0x2CE8A8u;
label_2ce8a8:
    // 0x2ce8a8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2ce8a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ce8ac: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2ce8acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2ce8b0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2ce8b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2ce8b4: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x2ce8b4u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2ce8b8: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x2CE8B8u;
    {
        const bool branch_taken_0x2ce8b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ce8b8) {
            ctx->pc = 0x2CE938u;
            goto label_2ce938;
        }
    }
    ctx->pc = 0x2CE8C0u;
label_2ce8c0:
    // 0x2ce8c0: 0x8e500000  lw          $s0, 0x0($s2)
    ctx->pc = 0x2ce8c0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2ce8c4: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x2ce8c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2ce8c8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2ce8c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2ce8cc: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x2CE8CCu;
    {
        const bool branch_taken_0x2ce8cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ce8cc) {
            ctx->pc = 0x2CE930u;
            goto label_2ce930;
        }
    }
    ctx->pc = 0x2CE8D4u;
    // 0x2ce8d4: 0x92020012  lbu         $v0, 0x12($s0)
    ctx->pc = 0x2ce8d4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x2ce8d8: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2ce8d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2ce8dc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2ce8dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2ce8e0: 0x14620013  bne         $v1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2CE8E0u;
    {
        const bool branch_taken_0x2ce8e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2ce8e0) {
            ctx->pc = 0x2CE930u;
            goto label_2ce930;
        }
    }
    ctx->pc = 0x2CE8E8u;
    // 0x2ce8e8: 0x9602000e  lhu         $v0, 0xE($s0)
    ctx->pc = 0x2ce8e8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
    // 0x2ce8ec: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2ce8ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2ce8f0: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2ce8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2ce8f4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2ce8f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2ce8f8: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2CE8F8u;
    {
        const bool branch_taken_0x2ce8f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ce8f8) {
            ctx->pc = 0x2CE930u;
            goto label_2ce930;
        }
    }
    ctx->pc = 0x2CE900u;
    // 0x2ce900: 0x860210a6  lh          $v0, 0x10A6($s0)
    ctx->pc = 0x2ce900u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4262)));
    // 0x2ce904: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x2ce904u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2ce908: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2ce908u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2ce90c: 0x4400008  bltz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2CE90Cu;
    {
        const bool branch_taken_0x2ce90c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x2ce90c) {
            ctx->pc = 0x2CE930u;
            goto label_2ce930;
        }
    }
    ctx->pc = 0x2CE914u;
    // 0x2ce914: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2ce914u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ce918: 0x2221004  sllv        $v0, $v0, $s1
    ctx->pc = 0x2ce918u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 17) & 0x1F));
    // 0x2ce91c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2ce91cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2ce920: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2ce920u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2ce924: 0x2629825  or          $s3, $s3, $v0
    ctx->pc = 0x2ce924u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | GPR_U64(ctx, 2));
    // 0x2ce928: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2ce928u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2ce92c: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x2ce92cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
label_2ce930:
    // 0x2ce930: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x2ce930u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x2ce934: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2ce934u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_2ce938:
    // 0x2ce938: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x2ce938u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x2ce93c: 0x8c22bb40  lw          $v0, -0x44C0($at)
    ctx->pc = 0x2ce93cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x47BB40u));
    // 0x2ce940: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x2ce940u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2ce944: 0x1440ffde  bnez        $v0, . + 4 + (-0x22 << 2)
    ctx->pc = 0x2CE944u;
    {
        const bool branch_taken_0x2ce944 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ce944) {
            ctx->pc = 0x2CE8C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ce8c0;
        }
    }
    ctx->pc = 0x2CE94Cu;
    // 0x2ce94c: 0x72601628  paddub      $v0, $s3, $zero
    ctx->pc = 0x2ce94cu;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
label_2ce950:
    // 0x2ce950: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2ce950u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2ce954: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2ce954u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ce958: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2ce958u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ce95c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2ce95cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ce960: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x2ce960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2ce964: 0x3e00008  jr          $ra
    ctx->pc = 0x2CE964u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CE964u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CE96Cu;
}
