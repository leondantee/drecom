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

// Function: entry_00285284
// Address: 0x285284 - 0x285308
void entry_00285284_0x285284(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00285284_0x285284");
#endif

    switch (ctx->pc) {
        case 0x2852d0u: goto label_2852d0;
        default: break;
    }

    ctx->pc = 0x285284u;

    // 0x285284: 0x8e03685c  lw          $v1, 0x685C($s0)
    ctx->pc = 0x285284u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 26716)));
    // 0x285288: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x285288u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x28528c: 0x146000f4  bnez        $v1, . + 4 + (0xF4 << 2)
    ctx->pc = 0x28528Cu;
    {
        const bool branch_taken_0x28528c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x28528c) {
            ctx->pc = 0x285660u;
            return;
        }
    }
    ctx->pc = 0x285294u;
    // 0x285294: 0x8e02685c  lw          $v0, 0x685C($s0)
    ctx->pc = 0x285294u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 26716)));
    // 0x285298: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x285298u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x28529c: 0xae02685c  sw          $v0, 0x685C($s0)
    ctx->pc = 0x28529cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 26716), GPR_U32(ctx, 2));
    // 0x2852a0: 0xae006870  sw          $zero, 0x6870($s0)
    ctx->pc = 0x2852a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 26736), GPR_U32(ctx, 0));
    // 0x2852a4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2852a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2852a8: 0xae020120  sw          $v0, 0x120($s0)
    ctx->pc = 0x2852a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 288), GPR_U32(ctx, 2));
    // 0x2852ac: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2852acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2852b0: 0xae020520  sw          $v0, 0x520($s0)
    ctx->pc = 0x2852b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1312), GPR_U32(ctx, 2));
    // 0x2852b4: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x2852b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x2852b8: 0xae020620  sw          $v0, 0x620($s0)
    ctx->pc = 0x2852b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1568), GPR_U32(ctx, 2));
    // 0x2852bc: 0x8e0565a0  lw          $a1, 0x65A0($s0)
    ctx->pc = 0x2852bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 26016)));
    // 0x2852c0: 0x240400a3  addiu       $a0, $zero, 0xA3
    ctx->pc = 0x2852c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 163));
    // 0x2852c4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2852c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2852c8: 0xc0764e0  jal         func_1D9380
    ctx->pc = 0x2852C8u;
    SET_GPR_U32(ctx, 31, 0x2852D0u);
    ctx->pc = 0x1D9380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9380u, 0x2852C8u, 0x2852D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2852D0u;
label_2852d0:
    // 0x2852d0: 0x70409e28  paddub      $s3, $v0, $zero
    ctx->pc = 0x2852d0u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2852d4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2852d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2852d8: 0x126300e1  beq         $s3, $v1, . + 4 + (0xE1 << 2)
    ctx->pc = 0x2852D8u;
    {
        const bool branch_taken_0x2852d8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 3));
        if (branch_taken_0x2852d8) {
            ctx->pc = 0x285660u;
            return;
        }
    }
    ctx->pc = 0x2852E0u;
    // 0x2852e0: 0x8e03685c  lw          $v1, 0x685C($s0)
    ctx->pc = 0x2852e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 26716)));
    // 0x2852e4: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x2852e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x2852e8: 0xae03685c  sw          $v1, 0x685C($s0)
    ctx->pc = 0x2852e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 26716), GPR_U32(ctx, 3));
    // 0x2852ec: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x2852ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x2852f0: 0x8c231b98  lw          $v1, 0x1B98($at)
    ctx->pc = 0x2852f0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x621B98u));
    // 0x2852f4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2852f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2852f8: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x2852f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x2852fc: 0xac231b98  sw          $v1, 0x1B98($at)
    ctx->pc = 0x2852fcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x621B98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x621B98u, _value); } while (0);
    // 0x285300: 0x100000d7  b           . + 4 + (0xD7 << 2)
    ctx->pc = 0x285300u;
    {
        const bool branch_taken_0x285300 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x285300) {
            ctx->pc = 0x285660u;
            return;
        }
    }
    ctx->pc = 0x285308u;
}
