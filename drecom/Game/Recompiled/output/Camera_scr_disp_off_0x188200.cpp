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

// Function: Camera_scr_disp_off
// Address: 0x188200 - 0x188358
void Camera_scr_disp_off_0x188200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Camera_scr_disp_off_0x188200");
#endif

    switch (ctx->pc) {
        case 0x188258u: goto label_188258;
        case 0x1882e8u: goto label_1882e8;
        default: break;
    }

    ctx->pc = 0x188200u;

    // 0x188200: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x188200u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x188204: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x188204u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x188208: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x188208u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x18820c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x18820cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x188210: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x188210u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x188214: 0xafa50038  sw          $a1, 0x38($sp)
    ctx->pc = 0x188214u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 5));
    // 0x188218: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x188218u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x18821c: 0x8c320de0  lw          $s2, 0xDE0($at)
    ctx->pc = 0x18821cu;
    SET_GPR_S32(ctx, 18, (int32_t)FAST_READ32(0x5D0DE0u));
    // 0x188220: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x188220u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x188224: 0x4600022  bltz        $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x188224u;
    {
        const bool branch_taken_0x188224 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x188224) {
            ctx->pc = 0x1882B0u;
            goto label_1882b0;
        }
    }
    ctx->pc = 0x18822Cu;
    // 0x18822c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x18822cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x188230: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x188230u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x188234: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x188234u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x188238: 0x32140  sll         $a0, $v1, 5
    ctx->pc = 0x188238u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x18823c: 0x3c03004a  lui         $v1, 0x4A
    ctx->pc = 0x18823cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)74 << 16));
    // 0x188240: 0x24631380  addiu       $v1, $v1, 0x1380
    ctx->pc = 0x188240u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4992));
    // 0x188244: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x188244u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x188248: 0x24700190  addiu       $s0, $v1, 0x190
    ctx->pc = 0x188248u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 400));
    // 0x18824c: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x18824cu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x188250: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x188250u;
    {
        const bool branch_taken_0x188250 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x188250) {
            ctx->pc = 0x1882A0u;
            goto label_1882a0;
        }
    }
    ctx->pc = 0x188258u;
label_188258:
    // 0x188258: 0x86030000  lh          $v1, 0x0($s0)
    ctx->pc = 0x188258u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x18825c: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x18825cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x188260: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x188260u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x188264: 0x460000c  bltz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x188264u;
    {
        const bool branch_taken_0x188264 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x188264) {
            ctx->pc = 0x188298u;
            goto label_188298;
        }
    }
    ctx->pc = 0x18826Cu;
    // 0x18826c: 0x86030000  lh          $v1, 0x0($s0)
    ctx->pc = 0x18826cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x188270: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x188270u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x188274: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x188274u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x188278: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x188278u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x18827c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x18827cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x188280: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x188280u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x188284: 0x2432021  addu        $a0, $s2, $v1
    ctx->pc = 0x188284u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x188288: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x188288u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x18828c: 0x306300fb  andi        $v1, $v1, 0xFB
    ctx->pc = 0x18828cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)251);
    // 0x188290: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x188290u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x188294: 0x0  nop
    ctx->pc = 0x188294u;
    // NOP
label_188298:
    // 0x188298: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x188298u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x18829c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18829cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1882a0:
    // 0x1882a0: 0x2e230008  sltiu       $v1, $s1, 0x8
    ctx->pc = 0x1882a0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x1882a4: 0x1460ffec  bnez        $v1, . + 4 + (-0x14 << 2)
    ctx->pc = 0x1882A4u;
    {
        const bool branch_taken_0x1882a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1882a4) {
            ctx->pc = 0x188258u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_188258;
        }
    }
    ctx->pc = 0x1882ACu;
    // 0x1882ac: 0x0  nop
    ctx->pc = 0x1882acu;
    // NOP
label_1882b0:
    // 0x1882b0: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1882b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1882b4: 0x4600022  bltz        $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x1882B4u;
    {
        const bool branch_taken_0x1882b4 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x1882b4) {
            ctx->pc = 0x188340u;
            goto label_188340;
        }
    }
    ctx->pc = 0x1882BCu;
    // 0x1882bc: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x1882bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1882c0: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x1882c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x1882c4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1882c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1882c8: 0x32140  sll         $a0, $v1, 5
    ctx->pc = 0x1882c8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x1882cc: 0x3c03004a  lui         $v1, 0x4A
    ctx->pc = 0x1882ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)74 << 16));
    // 0x1882d0: 0x24631380  addiu       $v1, $v1, 0x1380
    ctx->pc = 0x1882d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4992));
    // 0x1882d4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1882d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1882d8: 0x24700190  addiu       $s0, $v1, 0x190
    ctx->pc = 0x1882d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 400));
    // 0x1882dc: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x1882dcu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1882e0: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1882E0u;
    {
        const bool branch_taken_0x1882e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1882e0) {
            ctx->pc = 0x188330u;
            goto label_188330;
        }
    }
    ctx->pc = 0x1882E8u;
label_1882e8:
    // 0x1882e8: 0x86030000  lh          $v1, 0x0($s0)
    ctx->pc = 0x1882e8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1882ec: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x1882ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1882f0: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1882f0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1882f4: 0x460000c  bltz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x1882F4u;
    {
        const bool branch_taken_0x1882f4 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x1882f4) {
            ctx->pc = 0x188328u;
            goto label_188328;
        }
    }
    ctx->pc = 0x1882FCu;
    // 0x1882fc: 0x86030000  lh          $v1, 0x0($s0)
    ctx->pc = 0x1882fcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x188300: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x188300u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x188304: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x188304u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x188308: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x188308u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x18830c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x18830cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x188310: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x188310u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x188314: 0x2432021  addu        $a0, $s2, $v1
    ctx->pc = 0x188314u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x188318: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x188318u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x18831c: 0x34630004  ori         $v1, $v1, 0x4
    ctx->pc = 0x18831cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
    // 0x188320: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x188320u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x188324: 0x0  nop
    ctx->pc = 0x188324u;
    // NOP
label_188328:
    // 0x188328: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x188328u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x18832c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18832cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_188330:
    // 0x188330: 0x2e230008  sltiu       $v1, $s1, 0x8
    ctx->pc = 0x188330u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x188334: 0x1460ffec  bnez        $v1, . + 4 + (-0x14 << 2)
    ctx->pc = 0x188334u;
    {
        const bool branch_taken_0x188334 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x188334) {
            ctx->pc = 0x1882E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1882e8;
        }
    }
    ctx->pc = 0x18833Cu;
    // 0x18833c: 0x0  nop
    ctx->pc = 0x18833cu;
    // NOP
label_188340:
    // 0x188340: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x188340u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x188344: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x188344u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x188348: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x188348u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18834c: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x18834cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x188350: 0x3e00008  jr          $ra
    ctx->pc = 0x188350u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x188350u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x188358u;
}
