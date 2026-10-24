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

// Function: entry_0018e21c
// Address: 0x18e21c - 0x18e294
void entry_0018e21c_0x18e21c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018e21c_0x18e21c");
#endif

    switch (ctx->pc) {
        case 0x18e240u: goto label_18e240;
        case 0x18e26cu: goto label_18e26c;
        case 0x18e288u: goto label_18e288;
        default: break;
    }

    ctx->pc = 0x18e21cu;

label_18e21c:
    // 0x18e21c: 0x72402628  paddub      $a0, $s2, $zero
    ctx->pc = 0x18e21cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
label_18e220:
    // 0x18e220: 0x8e420120  lw          $v0, 0x120($s2)
    ctx->pc = 0x18e220u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 288)));
label_18e224:
    // 0x18e224: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x18e224u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_18e228:
    // 0x18e228: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x18e228u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
label_18e22c:
    // 0x18e22c: 0x24427280  addiu       $v0, $v0, 0x7280
    ctx->pc = 0x18e22cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29312));
label_18e230:
    // 0x18e230: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18e230u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_18e234:
    // 0x18e234: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x18e234u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_18e238:
    // 0x18e238: 0x40f809  jalr        $v0
label_18e23c:
    if (ctx->pc == 0x18E23Cu) {
        ctx->pc = 0x18E240u;
        goto label_18e240;
    }
    ctx->pc = 0x18E238u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18E240u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18E238u, 0x18E240u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18E240u;
label_18e240:
    // 0x18e240: 0x8e43020c  lw          $v1, 0x20C($s2)
    ctx->pc = 0x18e240u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 524)));
label_18e244:
    // 0x18e244: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x18e244u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
label_18e248:
    // 0x18e248: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x18e248u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_18e24c:
    // 0x18e24c: 0x8e43020c  lw          $v1, 0x20C($s2)
    ctx->pc = 0x18e24cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 524)));
label_18e250:
    // 0x18e250: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x18e250u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
label_18e254:
    // 0x18e254: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
label_18e258:
    if (ctx->pc == 0x18E258u) {
        ctx->pc = 0x18E25Cu;
        goto label_18e25c;
    }
    ctx->pc = 0x18E254u;
    {
        const bool branch_taken_0x18e254 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x18e254) {
            ctx->pc = 0x18E294u;
            return;
        }
    }
    ctx->pc = 0x18E25Cu;
label_18e25c:
    // 0x18e25c: 0x72402628  paddub      $a0, $s2, $zero
    ctx->pc = 0x18e25cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
label_18e260:
    // 0x18e260: 0x8e4501fc  lw          $a1, 0x1FC($s2)
    ctx->pc = 0x18e260u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 508)));
label_18e264:
    // 0x18e264: 0xc0c9838  jal         func_3260E0
label_18e268:
    if (ctx->pc == 0x18E268u) {
        ctx->pc = 0x18E26Cu;
        goto label_18e26c;
    }
    ctx->pc = 0x18E264u;
    SET_GPR_U32(ctx, 31, 0x18E26Cu);
    ctx->pc = 0x3260E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3260E0u, 0x18E264u, 0x18E26Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E26Cu;
label_18e26c:
    // 0x18e26c: 0x8e43020c  lw          $v1, 0x20C($s2)
    ctx->pc = 0x18e26cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 524)));
label_18e270:
    // 0x18e270: 0x30630010  andi        $v1, $v1, 0x10
    ctx->pc = 0x18e270u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
label_18e274:
    // 0x18e274: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_18e278:
    if (ctx->pc == 0x18E278u) {
        ctx->pc = 0x18E27Cu;
        goto label_18e27c;
    }
    ctx->pc = 0x18E274u;
    {
        const bool branch_taken_0x18e274 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x18e274) {
            ctx->pc = 0x18E294u;
            return;
        }
    }
    ctx->pc = 0x18E27Cu;
label_18e27c:
    // 0x18e27c: 0x72402628  paddub      $a0, $s2, $zero
    ctx->pc = 0x18e27cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
label_18e280:
    // 0x18e280: 0xc063b08  jal         func_18EC20
label_18e284:
    if (ctx->pc == 0x18E284u) {
        ctx->pc = 0x18E288u;
        goto label_18e288;
    }
    ctx->pc = 0x18E280u;
    SET_GPR_U32(ctx, 31, 0x18E288u);
    ctx->pc = 0x18EC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18EC20u, 0x18E280u, 0x18E288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E288u;
label_18e288:
    // 0x18e288: 0x70409628  paddub      $s2, $v0, $zero
    ctx->pc = 0x18e288u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_18e28c:
    // 0x18e28c: 0x10000006  b           . + 4 + (0x6 << 2)
label_18e290:
    if (ctx->pc == 0x18E290u) {
        ctx->pc = 0x18E294u;
        goto label_fallthrough_0x18e28c;
    }
    ctx->pc = 0x18E28Cu;
    {
        const bool branch_taken_0x18e28c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18e28c) {
            ctx->pc = 0x18E2A8u;
            return;
        }
    }
label_fallthrough_0x18e28c:
    ctx->pc = 0x18E294u;
}
