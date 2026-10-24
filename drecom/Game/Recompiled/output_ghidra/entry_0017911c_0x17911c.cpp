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

// Function: entry_0017911c
// Address: 0x17911c - 0x1791c0
void entry_0017911c_0x17911c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017911c_0x17911c");
#endif

    switch (ctx->pc) {
        case 0x179150u: goto label_179150;
        default: break;
    }

    ctx->pc = 0x17911cu;

    // 0x17911c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x17911cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x179120: 0x118843  sra         $s1, $s1, 1
    ctx->pc = 0x179120u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 17), 1));
    // 0x179124: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x179124u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x179128: 0x139843  sra         $s3, $s3, 1
    ctx->pc = 0x179128u;
    SET_GPR_S32(ctx, 19, SRA32(GPR_S32(ctx, 19), 1));
    // 0x17912c: 0x2602ffff  addiu       $v0, $s0, -0x1
    ctx->pc = 0x17912cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x179130: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x179130u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x179134: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x179134u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x179138: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x179138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x17913c: 0x2c2b021  addu        $s6, $s6, $v0
    ctx->pc = 0x17913cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x179140: 0x72a02628  paddub      $a0, $s5, $zero
    ctx->pc = 0x179140u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
    // 0x179144: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x179144u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x179148: 0xc05e6dc  jal         func_179B70
    ctx->pc = 0x179148u;
    SET_GPR_U32(ctx, 31, 0x179150u);
    ctx->pc = 0x179B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x179B70u, 0x179148u, 0x179150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x179150u;
label_179150:
    // 0x179150: 0x7040a628  paddub      $s4, $v0, $zero
    ctx->pc = 0x179150u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x179154: 0x2a010004  slti        $at, $s0, 0x4
    ctx->pc = 0x179154u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x179158: 0x10200019  beqz        $at, . + 4 + (0x19 << 2)
    ctx->pc = 0x179158u;
    {
        const bool branch_taken_0x179158 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x179158) {
            ctx->pc = 0x1791C0u;
            return;
        }
    }
    ctx->pc = 0x179160u;
    // 0x179160: 0x2603ffff  addiu       $v1, $s0, -0x1
    ctx->pc = 0x179160u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x179164: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x179164u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x179168: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x179168u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17916c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x17916cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x179170: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x179170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x179174: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x179174u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x179178: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x179178u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x17917c: 0x621814  dsllv       $v1, $v0, $v1
    ctx->pc = 0x17917cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (GPR_U32(ctx, 3) & 0x3F));
    // 0x179180: 0xde420000  ld          $v0, 0x0($s2)
    ctx->pc = 0x179180u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x179184: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x179184u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x179188: 0xfe420000  sd          $v0, 0x0($s2)
    ctx->pc = 0x179188u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 2));
    // 0x17918c: 0x2603ffff  addiu       $v1, $s0, -0x1
    ctx->pc = 0x17918cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x179190: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x179190u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x179194: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x179194u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x179198: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x179198u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x17919c: 0x2443000e  addiu       $v1, $v0, 0xE
    ctx->pc = 0x17919cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 14));
    // 0x1791a0: 0x14103c  dsll32      $v0, $s4, 0
    ctx->pc = 0x1791a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) << (32 + 0));
    // 0x1791a4: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1791a4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1791a8: 0x621814  dsllv       $v1, $v0, $v1
    ctx->pc = 0x1791a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (GPR_U32(ctx, 3) & 0x3F));
    // 0x1791ac: 0xde420000  ld          $v0, 0x0($s2)
    ctx->pc = 0x1791acu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1791b0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1791b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1791b4: 0xfe420000  sd          $v0, 0x0($s2)
    ctx->pc = 0x1791b4u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 2));
    // 0x1791b8: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x1791B8u;
    {
        const bool branch_taken_0x1791b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1791b8) {
            ctx->pc = 0x179218u;
            return;
        }
    }
    ctx->pc = 0x1791C0u;
}
