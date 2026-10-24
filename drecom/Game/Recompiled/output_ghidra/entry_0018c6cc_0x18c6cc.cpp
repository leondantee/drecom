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

// Function: entry_0018c6cc
// Address: 0x18c6cc - 0x18c75c
void entry_0018c6cc_0x18c6cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018c6cc_0x18c6cc");
#endif

    switch (ctx->pc) {
        case 0x18c6fcu: goto label_18c6fc;
        default: break;
    }

    ctx->pc = 0x18c6ccu;

    // 0x18c6cc: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x18c6ccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18c6d0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x18c6d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18c6d4: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x18c6d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x18c6d8: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x18C6D8u;
    {
        const bool branch_taken_0x18c6d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18c6d8) {
            ctx->pc = 0x18C75Cu;
            return;
        }
    }
    ctx->pc = 0x18C6E0u;
    // 0x18c6e0: 0x92220095  lbu         $v0, 0x95($s1)
    ctx->pc = 0x18c6e0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 149)));
    // 0x18c6e4: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x18c6e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18c6e8: 0x9202011b  lbu         $v0, 0x11B($s0)
    ctx->pc = 0x18c6e8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 283)));
    // 0x18c6ec: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x18c6ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18c6f0: 0x622021  addu        $a0, $v1, $v0
    ctx->pc = 0x18c6f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x18c6f4: 0xc05e990  jal         func_17A640
    ctx->pc = 0x18C6F4u;
    SET_GPR_U32(ctx, 31, 0x18C6FCu);
    ctx->pc = 0x17A640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A640u, 0x18C6F4u, 0x18C6FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C6FCu;
label_18c6fc:
    // 0x18c6fc: 0x7040a628  paddub      $s4, $v0, $zero
    ctx->pc = 0x18c6fcu;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x18c700: 0x8e22008c  lw          $v0, 0x8C($s1)
    ctx->pc = 0x18c700u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 140)));
    // 0x18c704: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x18c704u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x18c708: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x18c708u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x18c70c: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x18c70cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x18c710: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x18c710u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x18c714: 0x3c020130  lui         $v0, 0x130
    ctx->pc = 0x18c714u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)304 << 16));
    // 0x18c718: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x18c718u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x18c71c: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x18c71cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x18c720: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x18c720u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x18c724: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x18c724u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x18c728: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x18c728u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x18c72c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x18c72cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x18c730: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x18c730u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x18c734: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x18c734u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x18c738: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x18c738u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x18c73c: 0x14103c  dsll32      $v0, $s4, 0
    ctx->pc = 0x18c73cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) << (32 + 0));
    // 0x18c740: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x18c740u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x18c744: 0x2117c  dsll32      $v0, $v0, 5
    ctx->pc = 0x18c744u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 5));
    // 0x18c748: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x18c748u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x18c74c: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x18c74cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x18c750: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x18c750u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x18c754: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x18c754u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x18c758: 0xfe0201e0  sd          $v0, 0x1E0($s0)
    ctx->pc = 0x18c758u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 480), GPR_U64(ctx, 2));
    ctx->pc = 0x18c75cu;
}
