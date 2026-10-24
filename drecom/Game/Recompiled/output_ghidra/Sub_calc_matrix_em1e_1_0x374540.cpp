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

// Function: Sub_calc_matrix_em1e_1
// Address: 0x374540 - 0x374644
void Sub_calc_matrix_em1e_1_0x374540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Sub_calc_matrix_em1e_1_0x374540");
#endif

    switch (ctx->pc) {
        case 0x374560u: goto label_374560;
        case 0x374604u: goto label_374604;
        default: break;
    }

    ctx->pc = 0x374540u;

    // 0x374540: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x374540u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x374544: 0x7fbf0040  sq          $ra, 0x40($sp)
    ctx->pc = 0x374544u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 31));
    // 0x374548: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x374548u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x37454c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x37454cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x374550: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x374550u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x374554: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x374554u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x374558: 0xafa40058  sw          $a0, 0x58($sp)
    ctx->pc = 0x374558u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
    // 0x37455c: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x37455cu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_374560:
    // 0x374560: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x374560u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x374564: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x374564u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x374568: 0x712021  addu        $a0, $v1, $s1
    ctx->pc = 0x374568u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x37456c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x37456cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x374570: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x374570u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x374574: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x374574u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x374578: 0x8ca302d0  lw          $v1, 0x2D0($a1)
    ctx->pc = 0x374578u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 720)));
    // 0x37457c: 0x648021  addu        $s0, $v1, $a0
    ctx->pc = 0x37457cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x374580: 0x92030143  lbu         $v1, 0x143($s0)
    ctx->pc = 0x374580u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 323)));
    // 0x374584: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x374584u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x374588: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x374588u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x37458c: 0x1083000c  beq         $a0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x37458Cu;
    {
        const bool branch_taken_0x37458c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x37458c) {
            ctx->pc = 0x3745C0u;
            goto label_3745c0;
        }
    }
    ctx->pc = 0x374594u;
    // 0x374594: 0x92030143  lbu         $v1, 0x143($s0)
    ctx->pc = 0x374594u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 323)));
    // 0x374598: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x374598u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x37459c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x37459cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x3745a0: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x3745a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3745a4: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x3745a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x3745a8: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x3745a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x3745ac: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x3745acu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x3745b0: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x3745b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x3745b4: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x3745b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x3745b8: 0x649821  addu        $s3, $v1, $a0
    ctx->pc = 0x3745b8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3745bc: 0x0  nop
    ctx->pc = 0x3745bcu;
    // NOP
label_3745c0:
    // 0x3745c0: 0x96030140  lhu         $v1, 0x140($s0)
    ctx->pc = 0x3745c0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x3745c4: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x3745c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x3745c8: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x3745c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x3745cc: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x3745CCu;
    {
        const bool branch_taken_0x3745cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3745cc) {
            ctx->pc = 0x374608u;
            goto label_374608;
        }
    }
    ctx->pc = 0x3745D4u;
    // 0x3745d4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x3745d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x3745d8: 0x111980  sll         $v1, $s1, 6
    ctx->pc = 0x3745d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 6));
    // 0x3745dc: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x3745dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x3745e0: 0x439021  addu        $s2, $v0, $v1
    ctx->pc = 0x3745e0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3745e4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x3745e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x3745e8: 0x111980  sll         $v1, $s1, 6
    ctx->pc = 0x3745e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 6));
    // 0x3745ec: 0x8c420134  lw          $v0, 0x134($v0)
    ctx->pc = 0x3745ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 308)));
    // 0x3745f0: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x3745f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3745f4: 0x72402e28  paddub      $a1, $s2, $zero
    ctx->pc = 0x3745f4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x3745f8: 0x26060040  addiu       $a2, $s0, 0x40
    ctx->pc = 0x3745f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x3745fc: 0xc0675f8  jal         func_19D7E0
    ctx->pc = 0x3745FCu;
    SET_GPR_U32(ctx, 31, 0x374604u);
    ctx->pc = 0x19D7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D7E0u, 0x3745FCu, 0x374604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x374604u;
label_374604:
    // 0x374604: 0x0  nop
    ctx->pc = 0x374604u;
    // NOP
label_374608:
    // 0x374608: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x374608u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x37460c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x37460cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x374610: 0x94630050  lhu         $v1, 0x50($v1)
    ctx->pc = 0x374610u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
    // 0x374614: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x374614u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x374618: 0x223182a  slt         $v1, $s1, $v1
    ctx->pc = 0x374618u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x37461c: 0x1460ffd0  bnez        $v1, . + 4 + (-0x30 << 2)
    ctx->pc = 0x37461Cu;
    {
        const bool branch_taken_0x37461c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x37461c) {
            ctx->pc = 0x374560u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_374560;
        }
    }
    ctx->pc = 0x374624u;
    // 0x374624: 0x7bbf0040  lq          $ra, 0x40($sp)
    ctx->pc = 0x374624u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x374628: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x374628u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x37462c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x37462cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x374630: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x374630u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x374634: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x374634u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x374638: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x374638u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x37463c: 0x3e00008  jr          $ra
    ctx->pc = 0x37463Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37463Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x374644u;
}
