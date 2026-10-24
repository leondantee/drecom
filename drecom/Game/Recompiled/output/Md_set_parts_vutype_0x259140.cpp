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

// Function: Md_set_parts_vutype
// Address: 0x259140 - 0x2591ac
void Md_set_parts_vutype_0x259140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Md_set_parts_vutype_0x259140");
#endif

    switch (ctx->pc) {
        case 0x259164u: goto label_259164;
        case 0x25917cu: goto label_25917c;
        default: break;
    }

    ctx->pc = 0x259140u;

    // 0x259140: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x259140u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x259144: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x259144u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x259148: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x259148u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x25914c: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x25914cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
    // 0x259150: 0xa3a50030  sb          $a1, 0x30($sp)
    ctx->pc = 0x259150u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 48), (uint8_t)GPR_U32(ctx, 5));
    // 0x259154: 0xafa60038  sw          $a2, 0x38($sp)
    ctx->pc = 0x259154u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 6));
    // 0x259158: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x259158u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x25915c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x25915Cu;
    {
        const bool branch_taken_0x25915c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25915c) {
            ctx->pc = 0x259188u;
            goto label_259188;
        }
    }
    ctx->pc = 0x259164u;
label_259164:
    // 0x259164: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x259164u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x259168: 0x93a50030  lbu         $a1, 0x30($sp)
    ctx->pc = 0x259168u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25916c: 0x72003628  paddub      $a2, $s0, $zero
    ctx->pc = 0x25916cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x259170: 0x8fa70038  lw          $a3, 0x38($sp)
    ctx->pc = 0x259170u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x259174: 0xc09646c  jal         func_2591B0
    ctx->pc = 0x259174u;
    SET_GPR_U32(ctx, 31, 0x25917Cu);
    ctx->pc = 0x2591B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2591B0u, 0x259174u, 0x25917Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25917Cu;
label_25917c:
    // 0x25917c: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x25917cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x259180: 0x307000ff  andi        $s0, $v1, 0xFF
    ctx->pc = 0x259180u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x259184: 0x0  nop
    ctx->pc = 0x259184u;
    // NOP
label_259188:
    // 0x259188: 0x320300ff  andi        $v1, $s0, 0xFF
    ctx->pc = 0x259188u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x25918c: 0x28630002  slti        $v1, $v1, 0x2
    ctx->pc = 0x25918cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x259190: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x259190u;
    {
        const bool branch_taken_0x259190 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x259190) {
            ctx->pc = 0x259164u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_259164;
        }
    }
    ctx->pc = 0x259198u;
    // 0x259198: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x259198u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25919c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x25919cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2591a0: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x2591a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2591a4: 0x3e00008  jr          $ra
    ctx->pc = 0x2591A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2591A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2591ACu;
}
