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

// Function: entry_0027009c
// Address: 0x27009c - 0x270154
void entry_0027009c_0x27009c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0027009c_0x27009c");
#endif

    switch (ctx->pc) {
        case 0x27010cu: goto label_27010c;
        default: break;
    }

    ctx->pc = 0x27009cu;

    // 0x27009c: 0x8fa70028  lw          $a3, 0x28($sp)
    ctx->pc = 0x27009cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2700a0: 0x90e809db  lbu         $t0, 0x9DB($a3)
    ctx->pc = 0x2700a0u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 2523)));
    // 0x2700a4: 0x310200ff  andi        $v0, $t0, 0xFF
    ctx->pc = 0x2700a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
    // 0x2700a8: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x2700a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x2700ac: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x2700ACu;
    {
        const bool branch_taken_0x2700ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2700ac) {
            ctx->pc = 0x270154u;
            return;
        }
    }
    ctx->pc = 0x2700B4u;
    // 0x2700b4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2700b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2700b8: 0x8c241a98  lw          $a0, 0x1A98($at)
    ctx->pc = 0x2700b8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x2700bc: 0x34828000  ori         $v0, $a0, 0x8000
    ctx->pc = 0x2700bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32768);
    // 0x2700c0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2700c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2700c4: 0xac221a98  sw          $v0, 0x1A98($at)
    ctx->pc = 0x2700c4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A98u, _value); } while (0);
    // 0x2700c8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2700c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2700cc: 0x8c221a98  lw          $v0, 0x1A98($at)
    ctx->pc = 0x2700ccu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x2700d0: 0x2404dfff  addiu       $a0, $zero, -0x2001
    ctx->pc = 0x2700d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294959103));
    // 0x2700d4: 0x443024  and         $a2, $v0, $a0
    ctx->pc = 0x2700d4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x2700d8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2700d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2700dc: 0xac261a98  sw          $a2, 0x1A98($at)
    ctx->pc = 0x2700dcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x5D1A98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A98u, _value); } while (0);
    // 0x2700e0: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x2700e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2700e4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2700e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2700e8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2700e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2700ec: 0x8ca61344  lw          $a2, 0x1344($a1)
    ctx->pc = 0x2700ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4932)));
    // 0x2700f0: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x2700f0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x2700f4: 0x8c671334  lw          $a3, 0x1334($v1)
    ctx->pc = 0x2700f4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4916)));
    // 0x2700f8: 0x70e02e28  paddub      $a1, $a3, $zero
    ctx->pc = 0x2700f8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x2700fc: 0x8c48133c  lw          $t0, 0x133C($v0)
    ctx->pc = 0x2700fcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4924)));
    // 0x270100: 0x71003628  paddub      $a2, $t0, $zero
    ctx->pc = 0x270100u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x270104: 0xc050f5c  jal         func_143D70
    ctx->pc = 0x270104u;
    SET_GPR_U32(ctx, 31, 0x27010Cu);
    ctx->pc = 0x143D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143D70u, 0x270104u, 0x27010Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27010Cu;
label_27010c:
    // 0x27010c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x27010cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x270110: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x270110u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x270114: 0x8c820058  lw          $v0, 0x58($a0)
    ctx->pc = 0x270114u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
    // 0x270118: 0xa0430090  sb          $v1, 0x90($v0)
    ctx->pc = 0x270118u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 144), (uint8_t)GPR_U32(ctx, 3));
    // 0x27011c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x27011cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x270120: 0x8c440058  lw          $a0, 0x58($v0)
    ctx->pc = 0x270120u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x270124: 0xa0800630  sb          $zero, 0x630($a0)
    ctx->pc = 0x270124u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1584), (uint8_t)GPR_U32(ctx, 0));
    // 0x270128: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x270128u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27012c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x27012cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x270130: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x270130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x270134: 0xa04307e0  sb          $v1, 0x7E0($v0)
    ctx->pc = 0x270134u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2016), (uint8_t)GPR_U32(ctx, 3));
    // 0x270138: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x270138u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27013c: 0x8fa60028  lw          $a2, 0x28($sp)
    ctx->pc = 0x27013cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x270140: 0x8cc70058  lw          $a3, 0x58($a2)
    ctx->pc = 0x270140u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 88)));
    // 0x270144: 0xa0e50870  sb          $a1, 0x870($a3)
    ctx->pc = 0x270144u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 2160), (uint8_t)GPR_U32(ctx, 5));
    // 0x270148: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x270148u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27014c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x27014cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x270150: 0xac481b64  sw          $t0, 0x1B64($v0)
    ctx->pc = 0x270150u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 7012), GPR_U32(ctx, 8));
    ctx->pc = 0x270154u;
}
