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

// Function: entry_002a51cc
// Address: 0x2a51cc - 0x2a526c
void entry_002a51cc_0x2a51cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002a51cc_0x2a51cc");
#endif

    switch (ctx->pc) {
        case 0x2a51d8u: goto label_2a51d8;
        case 0x2a51f0u: goto label_2a51f0;
        case 0x2a521cu: goto label_2a521c;
        case 0x2a5234u: goto label_2a5234;
        case 0x2a5260u: goto label_2a5260;
        default: break;
    }

    ctx->pc = 0x2a51ccu;

    // 0x2a51cc: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x2a51ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x2a51d0: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x2A51D0u;
    SET_GPR_U32(ctx, 31, 0x2A51D8u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x2A51D0u, 0x2A51D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A51D8u;
label_2a51d8:
    // 0x2a51d8: 0x8fa40108  lw          $a0, 0x108($sp)
    ctx->pc = 0x2a51d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a51dc: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2a51dcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2a51e0: 0x27a600e0  addiu       $a2, $sp, 0xE0
    ctx->pc = 0x2a51e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x2a51e4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2a51e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a51e8: 0xc086b14  jal         func_21AC50
    ctx->pc = 0x2A51E8u;
    SET_GPR_U32(ctx, 31, 0x2A51F0u);
    ctx->pc = 0x21AC50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21AC50u, 0x2A51E8u, 0x2A51F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A51F0u;
label_2a51f0:
    // 0x2a51f0: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x2a51f0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a51f4: 0x8fa70108  lw          $a3, 0x108($sp)
    ctx->pc = 0x2a51f4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a51f8: 0x70e02628  paddub      $a0, $a3, $zero
    ctx->pc = 0x2a51f8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x2a51fc: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x2a51fcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a5200: 0x71002e28  paddub      $a1, $t0, $zero
    ctx->pc = 0x2a5200u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x2a5204: 0x27a900e0  addiu       $t1, $sp, 0xE0
    ctx->pc = 0x2a5204u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x2a5208: 0x71203628  paddub      $a2, $t1, $zero
    ctx->pc = 0x2a5208u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
    // 0x2a520c: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x2a520cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a5210: 0x71403e28  paddub      $a3, $t2, $zero
    ctx->pc = 0x2a5210u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x2a5214: 0xc086b14  jal         func_21AC50
    ctx->pc = 0x2A5214u;
    SET_GPR_U32(ctx, 31, 0x2A521Cu);
    ctx->pc = 0x21AC50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21AC50u, 0x2A5214u, 0x2A521Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A521Cu;
label_2a521c:
    // 0x2a521c: 0x8fa40108  lw          $a0, 0x108($sp)
    ctx->pc = 0x2a521cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a5220: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x2a5220u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2a5224: 0x27a600e0  addiu       $a2, $sp, 0xE0
    ctx->pc = 0x2a5224u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x2a5228: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2a5228u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a522c: 0xc086b14  jal         func_21AC50
    ctx->pc = 0x2A522Cu;
    SET_GPR_U32(ctx, 31, 0x2A5234u);
    ctx->pc = 0x21AC50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21AC50u, 0x2A522Cu, 0x2A5234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5234u;
label_2a5234:
    // 0x2a5234: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x2a5234u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a5238: 0x8fa60108  lw          $a2, 0x108($sp)
    ctx->pc = 0x2a5238u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a523c: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x2a523cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x2a5240: 0x2407000d  addiu       $a3, $zero, 0xD
    ctx->pc = 0x2a5240u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x2a5244: 0x70e02e28  paddub      $a1, $a3, $zero
    ctx->pc = 0x2a5244u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x2a5248: 0x27a800e0  addiu       $t0, $sp, 0xE0
    ctx->pc = 0x2a5248u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x2a524c: 0x71003628  paddub      $a2, $t0, $zero
    ctx->pc = 0x2a524cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x2a5250: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x2a5250u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a5254: 0x71203e28  paddub      $a3, $t1, $zero
    ctx->pc = 0x2a5254u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
    // 0x2a5258: 0xc086b14  jal         func_21AC50
    ctx->pc = 0x2A5258u;
    SET_GPR_U32(ctx, 31, 0x2A5260u);
    ctx->pc = 0x21AC50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21AC50u, 0x2A5258u, 0x2A5260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5260u;
label_2a5260:
    // 0x2a5260: 0x70405628  paddub      $t2, $v0, $zero
    ctx->pc = 0x2a5260u;
    SET_GPR_VEC(ctx, 10, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a5264: 0x100000a8  b           . + 4 + (0xA8 << 2)
    ctx->pc = 0x2A5264u;
    {
        const bool branch_taken_0x2a5264 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a5264) {
            ctx->pc = 0x2A5508u;
            return;
        }
    }
    ctx->pc = 0x2A526Cu;
}
