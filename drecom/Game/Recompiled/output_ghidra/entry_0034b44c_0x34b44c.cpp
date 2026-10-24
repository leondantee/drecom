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

// Function: entry_0034b44c
// Address: 0x34b44c - 0x34b4ec
void entry_0034b44c_0x34b44c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0034b44c_0x34b44c");
#endif

    switch (ctx->pc) {
        case 0x34b45cu: goto label_34b45c;
        case 0x34b468u: goto label_34b468;
        case 0x34b478u: goto label_34b478;
        case 0x34b484u: goto label_34b484;
        default: break;
    }

    ctx->pc = 0x34b44cu;

    // 0x34b44c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x34b44cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34b450: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x34b450u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x34b454: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x34B454u;
    SET_GPR_U32(ctx, 31, 0x34B45Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x34B454u, 0x34B45Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34B45Cu;
label_34b45c:
    // 0x34b45c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x34b45cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34b460: 0xc05cd10  jal         func_173440
    ctx->pc = 0x34B460u;
    SET_GPR_U32(ctx, 31, 0x34B468u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x34B460u, 0x34B468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34B468u;
label_34b468:
    // 0x34b468: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x34b468u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34b46c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x34b46cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x34b470: 0xc0d0704  jal         func_341C10
    ctx->pc = 0x34B470u;
    SET_GPR_U32(ctx, 31, 0x34B478u);
    ctx->pc = 0x341C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341C10u, 0x34B470u, 0x34B478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34B478u;
label_34b478:
    // 0x34b478: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x34b478u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34b47c: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x34B47Cu;
    SET_GPR_U32(ctx, 31, 0x34B484u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x34B47Cu, 0x34B484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34B484u;
label_34b484:
    // 0x34b484: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x34b484u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34b488: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x34b488u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x34b48c: 0x10600017  beqz        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x34B48Cu;
    {
        const bool branch_taken_0x34b48c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x34b48c) {
            ctx->pc = 0x34B4ECu;
            return;
        }
    }
    ctx->pc = 0x34B494u;
    // 0x34b494: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x34b494u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34b498: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x34b498u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34b49c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x34b49cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x34b4a0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x34b4a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34b4a4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x34b4a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34b4a8: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x34b4a8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x34b4ac: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x34b4acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34b4b0: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x34b4b0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x34b4b4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x34b4b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34b4b8: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x34b4b8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x34b4bc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x34b4bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34b4c0: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x34b4c0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x34b4c4: 0x24040078  addiu       $a0, $zero, 0x78
    ctx->pc = 0x34b4c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x34b4c8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x34b4c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34b4cc: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x34b4ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34b4d0: 0xa4640068  sh          $a0, 0x68($v1)
    ctx->pc = 0x34b4d0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 104), (uint16_t)GPR_U32(ctx, 4));
    // 0x34b4d4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x34b4d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34b4d8: 0x24651330  addiu       $a1, $v1, 0x1330
    ctx->pc = 0x34b4d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34b4dc: 0x8ca4000c  lw          $a0, 0xC($a1)
    ctx->pc = 0x34b4dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x34b4e0: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x34b4e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x34b4e4: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x34b4e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x34b4e8: 0xaca3000c  sw          $v1, 0xC($a1)
    ctx->pc = 0x34b4e8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 3));
    ctx->pc = 0x34b4ecu;
}
