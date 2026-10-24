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

// Function: entry_0018d138
// Address: 0x18d138 - 0x18d1d0
void entry_0018d138_0x18d138(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018d138_0x18d138");
#endif

    switch (ctx->pc) {
        case 0x18d170u: goto label_18d170;
        default: break;
    }

    ctx->pc = 0x18d138u;

    // 0x18d138: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x18d138u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18d13c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x18d13cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18d140: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x18d140u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x18d144: 0x14400022  bnez        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x18D144u;
    {
        const bool branch_taken_0x18d144 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18d144) {
            ctx->pc = 0x18D1D0u;
            return;
        }
    }
    ctx->pc = 0x18D14Cu;
    // 0x18d14c: 0x92220095  lbu         $v0, 0x95($s1)
    ctx->pc = 0x18d14cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 149)));
    // 0x18d150: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x18d150u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18d154: 0x92220096  lbu         $v0, 0x96($s1)
    ctx->pc = 0x18d154u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 150)));
    // 0x18d158: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x18d158u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18d15c: 0x9202034c  lbu         $v0, 0x34C($s0)
    ctx->pc = 0x18d15cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 844)));
    // 0x18d160: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x18d160u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18d164: 0x622821  addu        $a1, $v1, $v0
    ctx->pc = 0x18d164u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x18d168: 0xc05e9b0  jal         func_17A6C0
    ctx->pc = 0x18D168u;
    SET_GPR_U32(ctx, 31, 0x18D170u);
    ctx->pc = 0x17A6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A6C0u, 0x18D168u, 0x18D170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D170u;
label_18d170:
    // 0x18d170: 0x7040b628  paddub      $s6, $v0, $zero
    ctx->pc = 0x18d170u;
    SET_GPR_VEC(ctx, 22, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x18d174: 0x8e22008c  lw          $v0, 0x8C($s1)
    ctx->pc = 0x18d174u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 140)));
    // 0x18d178: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x18d178u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x18d17c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x18d17cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x18d180: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x18d180u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x18d184: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x18d184u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x18d188: 0x3c020140  lui         $v0, 0x140
    ctx->pc = 0x18d188u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)320 << 16));
    // 0x18d18c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x18d18cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x18d190: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x18d190u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x18d194: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x18d194u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x18d198: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x18d198u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x18d19c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x18d19cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x18d1a0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x18d1a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x18d1a4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x18d1a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x18d1a8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x18d1a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x18d1ac: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x18d1acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x18d1b0: 0x16103c  dsll32      $v0, $s6, 0
    ctx->pc = 0x18d1b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) << (32 + 0));
    // 0x18d1b4: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x18d1b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x18d1b8: 0x2117c  dsll32      $v0, $v0, 5
    ctx->pc = 0x18d1b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 5));
    // 0x18d1bc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x18d1bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x18d1c0: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x18d1c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x18d1c4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x18d1c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x18d1c8: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x18d1c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x18d1cc: 0xfe020aa0  sd          $v0, 0xAA0($s0)
    ctx->pc = 0x18d1ccu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 2720), GPR_U64(ctx, 2));
    ctx->pc = 0x18d1d0u;
}
