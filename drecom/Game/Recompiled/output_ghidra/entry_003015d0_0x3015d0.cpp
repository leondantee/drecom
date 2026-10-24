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

// Function: entry_003015d0
// Address: 0x3015d0 - 0x301650
void entry_003015d0_0x3015d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003015d0_0x3015d0");
#endif

    switch (ctx->pc) {
        case 0x3015e8u: goto label_3015e8;
        default: break;
    }

    ctx->pc = 0x3015d0u;

    // 0x3015d0: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x3015d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x3015d4: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x3015d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x3015d8: 0x26060030  addiu       $a2, $s0, 0x30
    ctx->pc = 0x3015d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x3015dc: 0x240707c0  addiu       $a3, $zero, 0x7C0
    ctx->pc = 0x3015dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1984));
    // 0x3015e0: 0xc059e1c  jal         func_167870
    ctx->pc = 0x3015E0u;
    SET_GPR_U32(ctx, 31, 0x3015E8u);
    ctx->pc = 0x167870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167870u, 0x3015E0u, 0x3015E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3015E8u;
label_3015e8:
    // 0x3015e8: 0x7040a628  paddub      $s4, $v0, $zero
    ctx->pc = 0x3015e8u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x3015ec: 0x12800018  beqz        $s4, . + 4 + (0x18 << 2)
    ctx->pc = 0x3015ECu;
    {
        const bool branch_taken_0x3015ec = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x3015ec) {
            ctx->pc = 0x301650u;
            return;
        }
    }
    ctx->pc = 0x3015F4u;
    // 0x3015f4: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x3015f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x3015f8: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x3015f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x3015fc: 0x244292e0  addiu       $v0, $v0, -0x6D20
    ctx->pc = 0x3015fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939360));
    // 0x301600: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x301600u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x301604: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x301604u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x301608: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x301608u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x30160c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x30160cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x301610: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x301610u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x301614: 0x8fa20148  lw          $v0, 0x148($sp)
    ctx->pc = 0x301614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 328)));
    // 0x301618: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x301618u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x30161c: 0x439821  addu        $s3, $v0, $v1
    ctx->pc = 0x30161cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x301620: 0xa2600000  sb          $zero, 0x0($s3)
    ctx->pc = 0x301620u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x301624: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x301624u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x301628: 0x2421004  sllv        $v0, $v0, $s2
    ctx->pc = 0x301628u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 18) & 0x1F));
    // 0x30162c: 0x402027  not         $a0, $v0
    ctx->pc = 0x30162cu;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 2) | GPR_U64(ctx, 0)));
    // 0x301630: 0x8fa30148  lw          $v1, 0x148($sp)
    ctx->pc = 0x301630u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 328)));
    // 0x301634: 0x8c621338  lw          $v0, 0x1338($v1)
    ctx->pc = 0x301634u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4920)));
    // 0x301638: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x301638u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x30163c: 0xac621338  sw          $v0, 0x1338($v1)
    ctx->pc = 0x30163cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4920), GPR_U32(ctx, 2));
    // 0x301640: 0x96020140  lhu         $v0, 0x140($s0)
    ctx->pc = 0x301640u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x301644: 0x3042ffef  andi        $v0, $v0, 0xFFEF
    ctx->pc = 0x301644u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65519);
    // 0x301648: 0xa6020140  sh          $v0, 0x140($s0)
    ctx->pc = 0x301648u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 320), (uint16_t)GPR_U32(ctx, 2));
    // 0x30164c: 0x0  nop
    ctx->pc = 0x30164cu;
    // NOP
    ctx->pc = 0x301650u;
}
