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

// Function: entry_002738c4
// Address: 0x2738c4 - 0x273950
void entry_002738c4_0x2738c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002738c4_0x2738c4");
#endif

    switch (ctx->pc) {
        case 0x2738e0u: goto label_2738e0;
        case 0x2738f0u: goto label_2738f0;
        case 0x273908u: goto label_273908;
        case 0x27391cu: goto label_27391c;
        case 0x27392cu: goto label_27392c;
        default: break;
    }

    ctx->pc = 0x2738c4u;

    // 0x2738c4: 0x1219c0  sll         $v1, $s2, 7
    ctx->pc = 0x2738c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 7));
    // 0x2738c8: 0x2631821  addu        $v1, $s3, $v1
    ctx->pc = 0x2738c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x2738cc: 0x103080  sll         $a2, $s0, 2
    ctx->pc = 0x2738ccu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2738d0: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x2738d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x2738d4: 0xc46c1830  lwc1        $f12, 0x1830($v1)
    ctx->pc = 0x2738d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 6192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2738d8: 0xc047fe2  jal         func_11FF88
    ctx->pc = 0x2738D8u;
    SET_GPR_U32(ctx, 31, 0x2738E0u);
    ctx->pc = 0x11FF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FF88u, 0x2738D8u, 0x2738E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2738E0u;
label_2738e0:
    // 0x2738e0: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x2738e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
    // 0x2738e4: 0x8e641bf0  lw          $a0, 0x1BF0($s3)
    ctx->pc = 0x2738e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 7152)));
    // 0x2738e8: 0xc040044  jal         func_100110
    ctx->pc = 0x2738E8u;
    SET_GPR_U32(ctx, 31, 0x2738F0u);
    ctx->pc = 0x100110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100110u, 0x2738E8u, 0x2738F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2738F0u;
label_2738f0:
    // 0x2738f0: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x2738f0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2738f4: 0x3c034095  lui         $v1, 0x4095
    ctx->pc = 0x2738f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16533 << 16));
    // 0x2738f8: 0x3466b800  ori         $a2, $v1, 0xB800
    ctx->pc = 0x2738f8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)47104);
    // 0x2738fc: 0x6203c  dsll32      $a0, $a2, 0
    ctx->pc = 0x2738fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) << (32 + 0));
    // 0x273900: 0xc047af0  jal         func_11EBC0
    ctx->pc = 0x273900u;
    SET_GPR_U32(ctx, 31, 0x273908u);
    ctx->pc = 0x11EBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EBC0u, 0x273900u, 0x273908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273908u;
label_273908:
    // 0x273908: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x273908u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x27390c: 0x3c03402e  lui         $v1, 0x402E
    ctx->pc = 0x27390cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16430 << 16));
    // 0x273910: 0x3283c  dsll32      $a1, $v1, 0
    ctx->pc = 0x273910u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 0));
    // 0x273914: 0xc047b9a  jal         func_11EE68
    ctx->pc = 0x273914u;
    SET_GPR_U32(ctx, 31, 0x27391Cu);
    ctx->pc = 0x11EE68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EE68u, 0x273914u, 0x27391Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27391Cu;
label_27391c:
    // 0x27391c: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x27391cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x273920: 0x7ba400a0  lq          $a0, 0xA0($sp)
    ctx->pc = 0x273920u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x273924: 0xc040048  jal         func_100120
    ctx->pc = 0x273924u;
    SET_GPR_U32(ctx, 31, 0x27392Cu);
    ctx->pc = 0x100120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100120u, 0x273924u, 0x27392Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27392Cu;
label_27392c:
    // 0x27392c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x27392cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x273930: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x273930u;
    {
        const bool branch_taken_0x273930 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x273930) {
            ctx->pc = 0x273950u;
            return;
        }
    }
    ctx->pc = 0x273938u;
    // 0x273938: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x273938u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27393c: 0x123140  sll         $a2, $s2, 5
    ctx->pc = 0x27393cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 18), 5));
    // 0x273940: 0x2661821  addu        $v1, $s3, $a2
    ctx->pc = 0x273940u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 6)));
    // 0x273944: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x273944u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x273948: 0xa0671b30  sb          $a3, 0x1B30($v1)
    ctx->pc = 0x273948u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 6960), (uint8_t)GPR_U32(ctx, 7));
    // 0x27394c: 0x0  nop
    ctx->pc = 0x27394cu;
    // NOP
    ctx->pc = 0x273950u;
}
