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

// Function: Md_parts_set_tex0_db
// Address: 0x2590a0 - 0x25913c
void Md_parts_set_tex0_db_0x2590a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Md_parts_set_tex0_db_0x2590a0");
#endif

    switch (ctx->pc) {
        case 0x2590ccu: goto label_2590cc;
        case 0x2590e8u: goto label_2590e8;
        default: break;
    }

    ctx->pc = 0x2590a0u;

    // 0x2590a0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2590a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2590a4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2590a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2590a8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2590a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2590ac: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2590acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2590b0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2590b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2590b4: 0xafa40048  sw          $a0, 0x48($sp)
    ctx->pc = 0x2590b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 4));
    // 0x2590b8: 0xffa50050  sd          $a1, 0x50($sp)
    ctx->pc = 0x2590b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 5));
    // 0x2590bc: 0xa3a60058  sb          $a2, 0x58($sp)
    ctx->pc = 0x2590bcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 88), (uint8_t)GPR_U32(ctx, 6));
    // 0x2590c0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2590c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2590c4: 0x8c720034  lw          $s2, 0x34($v1)
    ctx->pc = 0x2590c4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x2590c8: 0x70009e28  paddub      $s3, $zero, $zero
    ctx->pc = 0x2590c8u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_2590cc:
    // 0x2590cc: 0x93a30058  lbu         $v1, 0x58($sp)
    ctx->pc = 0x2590ccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2590d0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2590d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2590d4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2590d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2590d8: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x2590d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x2590dc: 0x8c700018  lw          $s0, 0x18($v1)
    ctx->pc = 0x2590dcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x2590e0: 0x8e510010  lw          $s1, 0x10($s2)
    ctx->pc = 0x2590e0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x2590e4: 0x0  nop
    ctx->pc = 0x2590e4u;
    // NOP
label_2590e8:
    // 0x2590e8: 0xdfa30050  ld          $v1, 0x50($sp)
    ctx->pc = 0x2590e8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2590ec: 0xfe030020  sd          $v1, 0x20($s0)
    ctx->pc = 0x2590ecu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 32), GPR_U64(ctx, 3));
    // 0x2590f0: 0x261000a0  addiu       $s0, $s0, 0xA0
    ctx->pc = 0x2590f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
    // 0x2590f4: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x2590f4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x2590f8: 0x1620fffb  bnez        $s1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2590F8u;
    {
        const bool branch_taken_0x2590f8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x2590f8) {
            ctx->pc = 0x2590E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2590e8;
        }
    }
    ctx->pc = 0x259100u;
    // 0x259100: 0x265200c0  addiu       $s2, $s2, 0xC0
    ctx->pc = 0x259100u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 192));
    // 0x259104: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x259104u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x259108: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x259108u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x25910c: 0x90630001  lbu         $v1, 0x1($v1)
    ctx->pc = 0x25910cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
    // 0x259110: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x259110u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x259114: 0x263182b  sltu        $v1, $s3, $v1
    ctx->pc = 0x259114u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x259118: 0x1460ffec  bnez        $v1, . + 4 + (-0x14 << 2)
    ctx->pc = 0x259118u;
    {
        const bool branch_taken_0x259118 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x259118) {
            ctx->pc = 0x2590CCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2590cc;
        }
    }
    ctx->pc = 0x259120u;
    // 0x259120: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x259120u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x259124: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x259124u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x259128: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x259128u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25912c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x25912cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x259130: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x259130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x259134: 0x3e00008  jr          $ra
    ctx->pc = 0x259134u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x259134u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25913Cu;
}
