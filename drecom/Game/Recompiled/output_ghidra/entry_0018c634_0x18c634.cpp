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

// Function: entry_0018c634
// Address: 0x18c634 - 0x18c6cc
void entry_0018c634_0x18c634(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018c634_0x18c634");
#endif

    switch (ctx->pc) {
        case 0x18c66cu: goto label_18c66c;
        default: break;
    }

    ctx->pc = 0x18c634u;

    // 0x18c634: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x18c634u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18c638: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x18c638u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18c63c: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x18c63cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x18c640: 0x14400022  bnez        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x18C640u;
    {
        const bool branch_taken_0x18c640 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18c640) {
            ctx->pc = 0x18C6CCu;
            return;
        }
    }
    ctx->pc = 0x18C648u;
    // 0x18c648: 0x92220095  lbu         $v0, 0x95($s1)
    ctx->pc = 0x18c648u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 149)));
    // 0x18c64c: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x18c64cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18c650: 0x92220096  lbu         $v0, 0x96($s1)
    ctx->pc = 0x18c650u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 150)));
    // 0x18c654: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x18c654u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18c658: 0x9202011b  lbu         $v0, 0x11B($s0)
    ctx->pc = 0x18c658u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 283)));
    // 0x18c65c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x18c65cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18c660: 0x622821  addu        $a1, $v1, $v0
    ctx->pc = 0x18c660u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x18c664: 0xc05e9b0  jal         func_17A6C0
    ctx->pc = 0x18C664u;
    SET_GPR_U32(ctx, 31, 0x18C66Cu);
    ctx->pc = 0x17A6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A6C0u, 0x18C664u, 0x18C66Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C66Cu;
label_18c66c:
    // 0x18c66c: 0x7040a628  paddub      $s4, $v0, $zero
    ctx->pc = 0x18c66cu;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x18c670: 0x8e22008c  lw          $v0, 0x8C($s1)
    ctx->pc = 0x18c670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 140)));
    // 0x18c674: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x18c674u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x18c678: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x18c678u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x18c67c: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x18c67cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x18c680: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x18c680u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x18c684: 0x3c020140  lui         $v0, 0x140
    ctx->pc = 0x18c684u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)320 << 16));
    // 0x18c688: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x18c688u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x18c68c: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x18c68cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x18c690: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x18c690u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x18c694: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x18c694u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x18c698: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x18c698u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x18c69c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x18c69cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x18c6a0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x18c6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x18c6a4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x18c6a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x18c6a8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x18c6a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x18c6ac: 0x14103c  dsll32      $v0, $s4, 0
    ctx->pc = 0x18c6acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) << (32 + 0));
    // 0x18c6b0: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x18c6b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x18c6b4: 0x2117c  dsll32      $v0, $v0, 5
    ctx->pc = 0x18c6b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 5));
    // 0x18c6b8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x18c6b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x18c6bc: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x18c6bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x18c6c0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x18c6c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x18c6c4: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x18c6c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x18c6c8: 0xfe0201e0  sd          $v0, 0x1E0($s0)
    ctx->pc = 0x18c6c8u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 480), GPR_U64(ctx, 2));
    ctx->pc = 0x18c6ccu;
}
