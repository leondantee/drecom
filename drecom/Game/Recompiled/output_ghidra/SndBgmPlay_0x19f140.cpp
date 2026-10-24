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

// Function: SndBgmPlay
// Address: 0x19f140 - 0x19f26c
void SndBgmPlay_0x19f140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SndBgmPlay_0x19f140");
#endif

    switch (ctx->pc) {
        case 0x19f240u: goto label_19f240;
        default: break;
    }

    ctx->pc = 0x19f140u;

    // 0x19f140: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x19f140u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x19f144: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x19f144u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x19f148: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x19f148u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x19f14c: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x19f14cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
    // 0x19f150: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x19f150u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x19f154: 0x8c231a48  lw          $v1, 0x1A48($at)
    ctx->pc = 0x19f154u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A48u));
    // 0x19f158: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x19f158u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x19f15c: 0x1460003e  bnez        $v1, . + 4 + (0x3E << 2)
    ctx->pc = 0x19F15Cu;
    {
        const bool branch_taken_0x19f15c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x19f15c) {
            ctx->pc = 0x19F258u;
            goto label_19f258;
        }
    }
    ctx->pc = 0x19F164u;
    // 0x19f164: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x19f164u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x19f168: 0x8c220068  lw          $v0, 0x68($at)
    ctx->pc = 0x19f168u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0068u));
    // 0x19f16c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x19f16cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x19f170: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x19f170u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x19f174: 0x24427e40  addiu       $v0, $v0, 0x7E40
    ctx->pc = 0x19f174u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32320));
    // 0x19f178: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x19f178u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19f17c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x19f17cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x19f180: 0x8c22006c  lw          $v0, 0x6C($at)
    ctx->pc = 0x19f180u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D006Cu));
    // 0x19f184: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x19f184u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x19f188: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x19f188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x19f18c: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x19f18cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19f190: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x19f190u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x19f194: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x19f194u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x19f198: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x19f198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x19f19c: 0x621006  srlv        $v0, $v0, $v1
    ctx->pc = 0x19f19cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x19f1a0: 0x3042003f  andi        $v0, $v0, 0x3F
    ctx->pc = 0x19f1a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x19f1a4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x19f1a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x19f1a8: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x19f1a8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x19f1ac: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x19f1acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x19f1b0: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x19f1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x19f1b4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x19f1b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19f1b8: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x19f1b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x19f1bc: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x19f1bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x19f1c0: 0x24428030  addiu       $v0, $v0, -0x7FD0
    ctx->pc = 0x19f1c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934576));
    // 0x19f1c4: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x19f1c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19f1c8: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x19f1c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x19f1cc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x19f1ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19f1d0: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x19f1d0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x19f1d4: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x19f1d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x19f1d8: 0x8c238070  lw          $v1, -0x7F90($at)
    ctx->pc = 0x19f1d8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x388070u));
    // 0x19f1dc: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x19f1dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x19f1e0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x19f1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x19f1e4: 0xa0440004  sb          $a0, 0x4($v0)
    ctx->pc = 0x19f1e4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4), (uint8_t)GPR_U32(ctx, 4));
    // 0x19f1e8: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x19f1e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x19f1ec: 0x8c238070  lw          $v1, -0x7F90($at)
    ctx->pc = 0x19f1ecu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x388070u));
    // 0x19f1f0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x19f1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x19f1f4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x19f1f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x19f1f8: 0x90420004  lbu         $v0, 0x4($v0)
    ctx->pc = 0x19f1f8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x19f1fc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x19f1fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x19f200: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x19f200u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x19f204: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x19f204u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x19f208: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x19f208u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x19f20c: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x19f20cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x19f210: 0x8c228070  lw          $v0, -0x7F90($at)
    ctx->pc = 0x19f210u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x388070u));
    // 0x19f214: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x19f214u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19f218: 0xac44001c  sw          $a0, 0x1C($v0)
    ctx->pc = 0x19f218u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 4));
    // 0x19f21c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x19f21cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x19f220: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x19f220u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x19f224: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x19f224u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x19f228: 0x8c238070  lw          $v1, -0x7F90($at)
    ctx->pc = 0x19f228u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x388070u));
    // 0x19f22c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x19f22cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x19f230: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x19f230u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x19f234: 0x90450004  lbu         $a1, 0x4($v0)
    ctx->pc = 0x19f234u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x19f238: 0xc0ce4e4  jal         func_339390
    ctx->pc = 0x19F238u;
    SET_GPR_U32(ctx, 31, 0x19F240u);
    ctx->pc = 0x339390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x339390u, 0x19F238u, 0x19F240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F240u;
label_19f240:
    // 0x19f240: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x19f240u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19f244: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x19f244u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x19f248: 0x8c248070  lw          $a0, -0x7F90($at)
    ctx->pc = 0x19f248u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x388070u));
    // 0x19f24c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x19f24cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x19f250: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x19f250u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x19f254: 0xa0650000  sb          $a1, 0x0($v1)
    ctx->pc = 0x19f254u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 5));
label_19f258:
    // 0x19f258: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x19f258u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19f25c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x19f25cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19f260: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x19f260u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x19f264: 0x3e00008  jr          $ra
    ctx->pc = 0x19F264u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19F264u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19F26Cu;
}
