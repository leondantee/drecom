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

// Function: entry_0013ba18
// Address: 0x13ba18 - 0x13bab8
void entry_0013ba18_0x13ba18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013ba18_0x13ba18");
#endif

    switch (ctx->pc) {
        case 0x13ba38u: goto label_13ba38;
        default: break;
    }

    ctx->pc = 0x13ba18u;

    // 0x13ba18: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x13ba18u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x13ba1c: 0x304200fd  andi        $v0, $v0, 0xFD
    ctx->pc = 0x13ba1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)253);
    // 0x13ba20: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x13ba20u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x13ba24: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x13ba24u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x13ba28: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x13ba28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x13ba2c: 0x72403628  paddub      $a2, $s2, $zero
    ctx->pc = 0x13ba2cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x13ba30: 0xc04f560  jal         func_13D580
    ctx->pc = 0x13BA30u;
    SET_GPR_U32(ctx, 31, 0x13BA38u);
    ctx->pc = 0x13D580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13D580u, 0x13BA30u, 0x13BA38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13BA38u;
label_13ba38:
    // 0x13ba38: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x13ba38u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x13ba3c: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x13ba3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x13ba40: 0x8c730008  lw          $s3, 0x8($v1)
    ctx->pc = 0x13ba40u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x13ba44: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x13ba44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x13ba48: 0x8c23b7b8  lw          $v1, -0x4848($at)
    ctx->pc = 0x13ba48u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x38B7B8u));
    // 0x13ba4c: 0x3193c  dsll32      $v1, $v1, 4
    ctx->pc = 0x13ba4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 4));
    // 0x13ba50: 0x3193e  dsrl32      $v1, $v1, 4
    ctx->pc = 0x13ba50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 4));
    // 0x13ba54: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x13ba54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x13ba58: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x13ba58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x13ba5c: 0x3283c  dsll32      $a1, $v1, 0
    ctx->pc = 0x13ba5cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 0));
    // 0x13ba60: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x13ba60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x13ba64: 0x8c23b7bc  lw          $v1, -0x4844($at)
    ctx->pc = 0x13ba64u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x38B7BCu));
    // 0x13ba68: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x13ba68u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x13ba6c: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x13ba6cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x13ba70: 0x3c033000  lui         $v1, 0x3000
    ctx->pc = 0x13ba70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12288 << 16));
    // 0x13ba74: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x13ba74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x13ba78: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x13ba78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x13ba7c: 0xfe630000  sd          $v1, 0x0($s3)
    ctx->pc = 0x13ba7cu;
    WRITE64(ADD32(GPR_U32(ctx, 19), 0), GPR_U64(ctx, 3));
    // 0x13ba80: 0x8e0300a8  lw          $v1, 0xA8($s0)
    ctx->pc = 0x13ba80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 168)));
    // 0x13ba84: 0x74082a  slt         $at, $v1, $s4
    ctx->pc = 0x13ba84u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x13ba88: 0x10200097  beqz        $at, . + 4 + (0x97 << 2)
    ctx->pc = 0x13BA88u;
    {
        const bool branch_taken_0x13ba88 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x13ba88) {
            ctx->pc = 0x13BCE8u;
            return;
        }
    }
    ctx->pc = 0x13BA90u;
    // 0x13ba90: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x13ba90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x13ba94: 0x8c241a98  lw          $a0, 0x1A98($at)
    ctx->pc = 0x13ba94u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x13ba98: 0x3c030004  lui         $v1, 0x4
    ctx->pc = 0x13ba98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
    // 0x13ba9c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x13ba9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x13baa0: 0x10600091  beqz        $v1, . + 4 + (0x91 << 2)
    ctx->pc = 0x13BAA0u;
    {
        const bool branch_taken_0x13baa0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x13baa0) {
            ctx->pc = 0x13BCE8u;
            return;
        }
    }
    ctx->pc = 0x13BAA8u;
    // 0x13baa8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x13baa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x13baac: 0xa2030102  sb          $v1, 0x102($s0)
    ctx->pc = 0x13baacu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 258), (uint8_t)GPR_U32(ctx, 3));
    // 0x13bab0: 0x1000008d  b           . + 4 + (0x8D << 2)
    ctx->pc = 0x13BAB0u;
    {
        const bool branch_taken_0x13bab0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13bab0) {
            ctx->pc = 0x13BCE8u;
            return;
        }
    }
    ctx->pc = 0x13BAB8u;
}
