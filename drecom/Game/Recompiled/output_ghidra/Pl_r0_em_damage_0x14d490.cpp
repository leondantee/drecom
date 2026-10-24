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

// Function: Pl_r0_em_damage
// Address: 0x14d490 - 0x14d51c
void Pl_r0_em_damage_0x14d490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Pl_r0_em_damage_0x14d490");
#endif

    switch (ctx->pc) {
        case 0x14d490u: goto label_14d490;
        case 0x14d494u: goto label_14d494;
        case 0x14d498u: goto label_14d498;
        case 0x14d49cu: goto label_14d49c;
        case 0x14d4a0u: goto label_14d4a0;
        case 0x14d4a4u: goto label_14d4a4;
        case 0x14d4a8u: goto label_14d4a8;
        case 0x14d4acu: goto label_14d4ac;
        case 0x14d4b0u: goto label_14d4b0;
        case 0x14d4b4u: goto label_14d4b4;
        case 0x14d4b8u: goto label_14d4b8;
        case 0x14d4bcu: goto label_14d4bc;
        case 0x14d4c0u: goto label_14d4c0;
        case 0x14d4c4u: goto label_14d4c4;
        case 0x14d4c8u: goto label_14d4c8;
        case 0x14d4ccu: goto label_14d4cc;
        case 0x14d4d0u: goto label_14d4d0;
        case 0x14d4d4u: goto label_14d4d4;
        case 0x14d4d8u: goto label_14d4d8;
        case 0x14d4dcu: goto label_14d4dc;
        case 0x14d4e0u: goto label_14d4e0;
        case 0x14d4e4u: goto label_14d4e4;
        case 0x14d4e8u: goto label_14d4e8;
        case 0x14d4ecu: goto label_14d4ec;
        case 0x14d4f0u: goto label_14d4f0;
        case 0x14d4f4u: goto label_14d4f4;
        case 0x14d4f8u: goto label_14d4f8;
        case 0x14d4fcu: goto label_14d4fc;
        case 0x14d500u: goto label_14d500;
        case 0x14d504u: goto label_14d504;
        case 0x14d508u: goto label_14d508;
        case 0x14d50cu: goto label_14d50c;
        case 0x14d510u: goto label_14d510;
        case 0x14d514u: goto label_14d514;
        case 0x14d518u: goto label_14d518;
        default: break;
    }

    ctx->pc = 0x14d490u;

label_14d490:
    // 0x14d490: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x14d490u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_14d494:
    // 0x14d494: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x14d494u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
label_14d498:
    // 0x14d498: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x14d498u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_14d49c:
    // 0x14d49c: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x14d49cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
label_14d4a0:
    // 0x14d4a0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x14d4a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_14d4a4:
    // 0x14d4a4: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x14d4a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6808)));
label_14d4a8:
    // 0x14d4a8: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x14d4a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_14d4ac:
    // 0x14d4ac: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x14d4acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_14d4b0:
    // 0x14d4b0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x14d4b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_14d4b4:
    // 0x14d4b4: 0xac221a98  sw          $v0, 0x1A98($at)
    ctx->pc = 0x14d4b4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 6808), GPR_U32(ctx, 2));
label_14d4b8:
    // 0x14d4b8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14d4b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14d4bc:
    // 0x14d4bc: 0xa4401574  sh          $zero, 0x1574($v0)
    ctx->pc = 0x14d4bcu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 5492), (uint16_t)GPR_U32(ctx, 0));
label_14d4c0:
    // 0x14d4c0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14d4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14d4c4:
    // 0x14d4c4: 0x8c501210  lw          $s0, 0x1210($v0)
    ctx->pc = 0x14d4c4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4624)));
label_14d4c8:
    // 0x14d4c8: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x14d4c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14d4cc:
    // 0x14d4cc: 0x92020012  lbu         $v0, 0x12($s0)
    ctx->pc = 0x14d4ccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 18)));
label_14d4d0:
    // 0x14d4d0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x14d4d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_14d4d4:
    // 0x14d4d4: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x14d4d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_14d4d8:
    // 0x14d4d8: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x14d4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
label_14d4dc:
    // 0x14d4dc: 0x24425410  addiu       $v0, $v0, 0x5410
    ctx->pc = 0x14d4dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21520));
label_14d4e0:
    // 0x14d4e0: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x14d4e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_14d4e4:
    // 0x14d4e4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14d4e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14d4e8:
    // 0x14d4e8: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x14d4e8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_14d4ec:
    // 0x14d4ec: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x14d4ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_14d4f0:
    // 0x14d4f0: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x14d4f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_14d4f4:
    // 0x14d4f4: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x14d4f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_14d4f8:
    // 0x14d4f8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x14d4f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_14d4fc:
    // 0x14d4fc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x14d4fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_14d500:
    // 0x14d500: 0x40f809  jalr        $v0
label_14d504:
    if (ctx->pc == 0x14D504u) {
        ctx->pc = 0x14D508u;
        goto label_14d508;
    }
    ctx->pc = 0x14D500u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x14D508u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14D500u, 0x14D508u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x14D508u;
label_14d508:
    // 0x14d508: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x14d508u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_14d50c:
    // 0x14d50c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x14d50cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_14d510:
    // 0x14d510: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x14d510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_14d514:
    // 0x14d514: 0x3e00008  jr          $ra
label_14d518:
    if (ctx->pc == 0x14D518u) {
        ctx->pc = 0x14D51Cu;
        goto label_fallthrough_0x14d514;
    }
    ctx->pc = 0x14D514u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14D514u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x14d514:
    ctx->pc = 0x14D51Cu;
}
