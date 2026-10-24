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

// Function: entry_001dc364
// Address: 0x1dc364 - 0x1dc3e8
void entry_001dc364_0x1dc364(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001dc364_0x1dc364");
#endif

    switch (ctx->pc) {
        case 0x1dc3e0u: goto label_1dc3e0;
        default: break;
    }

    ctx->pc = 0x1dc364u;

    // 0x1dc364: 0x8e23133c  lw          $v1, 0x133C($s1)
    ctx->pc = 0x1dc364u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4924)));
    // 0x1dc368: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x1dc368u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x1dc36c: 0x106000a7  beqz        $v1, . + 4 + (0xA7 << 2)
    ctx->pc = 0x1DC36Cu;
    {
        const bool branch_taken_0x1dc36c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dc36c) {
            ctx->pc = 0x1DC60Cu;
            return;
        }
    }
    ctx->pc = 0x1DC374u;
    // 0x1dc374: 0x8e241248  lw          $a0, 0x1248($s1)
    ctx->pc = 0x1dc374u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4680)));
    // 0x1dc378: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x1dc378u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1dc37c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1dc37cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1dc380: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x1dc380u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1dc384: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x1dc384u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x1dc388: 0x2463c100  addiu       $v1, $v1, -0x3F00
    ctx->pc = 0x1dc388u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294951168));
    // 0x1dc38c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1dc38cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1dc390: 0x24720074  addiu       $s2, $v1, 0x74
    ctx->pc = 0x1dc390u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 116));
    // 0x1dc394: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1dc394u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1dc398: 0x1060009c  beqz        $v1, . + 4 + (0x9C << 2)
    ctx->pc = 0x1DC398u;
    {
        const bool branch_taken_0x1dc398 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dc398) {
            ctx->pc = 0x1DC60Cu;
            return;
        }
    }
    ctx->pc = 0x1DC3A0u;
    // 0x1dc3a0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1dc3a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1dc3a4: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x1dc3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0140u));
    // 0x1dc3a8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1dc3a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1dc3ac: 0x2422021  addu        $a0, $s2, $v0
    ctx->pc = 0x1dc3acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1dc3b0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1dc3b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1dc3b4: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x1dc3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0140u));
    // 0x1dc3b8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1dc3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1dc3bc: 0x2421821  addu        $v1, $s2, $v0
    ctx->pc = 0x1dc3bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1dc3c0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1dc3c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1dc3c4: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x1dc3c4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0140u));
    // 0x1dc3c8: 0x304700ff  andi        $a3, $v0, 0xFF
    ctx->pc = 0x1dc3c8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1dc3cc: 0x8c840010  lw          $a0, 0x10($a0)
    ctx->pc = 0x1dc3ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1dc3d0: 0x8c650018  lw          $a1, 0x18($v1)
    ctx->pc = 0x1dc3d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x1dc3d4: 0x72003628  paddub      $a2, $s0, $zero
    ctx->pc = 0x1dc3d4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1dc3d8: 0xc06afa0  jal         func_1ABE80
    ctx->pc = 0x1DC3D8u;
    SET_GPR_U32(ctx, 31, 0x1DC3E0u);
    ctx->pc = 0x1ABE80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ABE80u, 0x1DC3D8u, 0x1DC3E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC3E0u;
label_1dc3e0:
    // 0x1dc3e0: 0x1000008a  b           . + 4 + (0x8A << 2)
    ctx->pc = 0x1DC3E0u;
    {
        const bool branch_taken_0x1dc3e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dc3e0) {
            ctx->pc = 0x1DC60Cu;
            return;
        }
    }
    ctx->pc = 0x1DC3E8u;
}
