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

// Function: entry_0028d658
// Address: 0x28d658 - 0x28d6d8
void entry_0028d658_0x28d658(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0028d658_0x28d658");
#endif

    switch (ctx->pc) {
        case 0x28d6a0u: goto label_28d6a0;
        case 0x28d6d4u: goto label_28d6d4;
        default: break;
    }

    ctx->pc = 0x28d658u;

    // 0x28d658: 0x92036624  lbu         $v1, 0x6624($s0)
    ctx->pc = 0x28d658u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 26148)));
    // 0x28d65c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x28d65cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x28d660: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x28d660u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28d664: 0x1475001c  bne         $v1, $s5, . + 4 + (0x1C << 2)
    ctx->pc = 0x28D664u;
    {
        const bool branch_taken_0x28d664 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 21));
        if (branch_taken_0x28d664) {
            ctx->pc = 0x28D6D8u;
            return;
        }
    }
    ctx->pc = 0x28D66Cu;
    // 0x28d66c: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x28d66cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x28d670: 0x2463615c  addiu       $v1, $v1, 0x615C
    ctx->pc = 0x28d670u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24924));
    // 0x28d674: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28d674u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28d678: 0xac232210  sw          $v1, 0x2210($at)
    ctx->pc = 0x28d678u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x622210u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x622210u, _value); } while (0);
    // 0x28d67c: 0x3c060062  lui         $a2, 0x62
    ctx->pc = 0x28d67cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)98 << 16));
    // 0x28d680: 0x24c32218  addiu       $v1, $a2, 0x2218
    ctx->pc = 0x28d680u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 8728));
    // 0x28d684: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x28d684u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x28d688: 0x3c130048  lui         $s3, 0x48
    ctx->pc = 0x28d688u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)72 << 16));
    // 0x28d68c: 0x2663e910  addiu       $v1, $s3, -0x16F0
    ctx->pc = 0x28d68cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 4294961424));
    // 0x28d690: 0x70602e28  paddub      $a1, $v1, $zero
    ctx->pc = 0x28d690u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x28d694: 0x24060028  addiu       $a2, $zero, 0x28
    ctx->pc = 0x28d694u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x28d698: 0xc0462a6  jal         func_118A98
    ctx->pc = 0x28D698u;
    SET_GPR_U32(ctx, 31, 0x28D6A0u);
    ctx->pc = 0x118A98u;
    {
        ctx->pc = 0x28D6A0u;
        ps2_stubs::memcpy(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x28D6A0u) { return; }
    ctx->pc = 0x28D6A0u;
label_28d6a0:
    // 0x28d6a0: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x28d6a0u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28d6a4: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28d6a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28d6a8: 0xa4202240  sh          $zero, 0x2240($at)
    ctx->pc = 0x28d6a8u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x622240u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x622240u, _value); } while (0);
    // 0x28d6ac: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28d6acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28d6b0: 0xa4202242  sh          $zero, 0x2242($at)
    ctx->pc = 0x28d6b0u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x622242u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x622242u, _value); } while (0);
    // 0x28d6b4: 0x24030200  addiu       $v1, $zero, 0x200
    ctx->pc = 0x28d6b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x28d6b8: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28d6b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28d6bc: 0xa4232244  sh          $v1, 0x2244($at)
    ctx->pc = 0x28d6bcu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x622244u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x622244u, _value); } while (0);
    // 0x28d6c0: 0x241201c0  addiu       $s2, $zero, 0x1C0
    ctx->pc = 0x28d6c0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
    // 0x28d6c4: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28d6c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28d6c8: 0xa4322246  sh          $s2, 0x2246($at)
    ctx->pc = 0x28d6c8u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 18)); ps2TraceGuestWrite(rdram, 0x622246u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x622246u, _value); } while (0);
    // 0x28d6cc: 0xc0a3c18  jal         func_28F060
    ctx->pc = 0x28D6CCu;
    SET_GPR_U32(ctx, 31, 0x28D6D4u);
    ctx->pc = 0x28F060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28F060u, 0x28D6CCu, 0x28D6D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D6D4u;
label_28d6d4:
    // 0x28d6d4: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x28d6d4u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x28d6d8u;
}
