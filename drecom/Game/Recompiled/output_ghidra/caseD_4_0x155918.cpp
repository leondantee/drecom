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

// Function: caseD_4
// Address: 0x155918 - 0x155984
void caseD_4_0x155918(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_4_0x155918");
#endif

    switch (ctx->pc) {
        case 0x15592cu: goto label_15592c;
        default: break;
    }

    ctx->pc = 0x155918u;

    // 0x155918: 0x8e041344  lw          $a0, 0x1344($s0)
    ctx->pc = 0x155918u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4932)));
    // 0x15591c: 0x8e051334  lw          $a1, 0x1334($s0)
    ctx->pc = 0x15591cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4916)));
    // 0x155920: 0x8e06133c  lw          $a2, 0x133C($s0)
    ctx->pc = 0x155920u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4924)));
    // 0x155924: 0xc050f5c  jal         func_143D70
    ctx->pc = 0x155924u;
    SET_GPR_U32(ctx, 31, 0x15592Cu);
    ctx->pc = 0x143D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143D70u, 0x155924u, 0x15592Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15592Cu;
label_15592c:
    // 0x15592c: 0x8e030058  lw          $v1, 0x58($s0)
    ctx->pc = 0x15592cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x155930: 0xa06002d0  sb          $zero, 0x2D0($v1)
    ctx->pc = 0x155930u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 720), (uint8_t)GPR_U32(ctx, 0));
    // 0x155934: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x155934u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x155938: 0x8e030058  lw          $v1, 0x58($s0)
    ctx->pc = 0x155938u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x15593c: 0xa0640b40  sb          $a0, 0xB40($v1)
    ctx->pc = 0x15593cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2880), (uint8_t)GPR_U32(ctx, 4));
    // 0x155940: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x155940u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x155944: 0x8e030058  lw          $v1, 0x58($s0)
    ctx->pc = 0x155944u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x155948: 0xa0640bd0  sb          $a0, 0xBD0($v1)
    ctx->pc = 0x155948u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3024), (uint8_t)GPR_U32(ctx, 4));
    // 0x15594c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x15594cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x155950: 0x8e030058  lw          $v1, 0x58($s0)
    ctx->pc = 0x155950u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x155954: 0xa0640c60  sb          $a0, 0xC60($v1)
    ctx->pc = 0x155954u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3168), (uint8_t)GPR_U32(ctx, 4));
    // 0x155958: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x155958u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15595c: 0x8e030058  lw          $v1, 0x58($s0)
    ctx->pc = 0x15595cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x155960: 0xa0640cf0  sb          $a0, 0xCF0($v1)
    ctx->pc = 0x155960u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3312), (uint8_t)GPR_U32(ctx, 4));
    // 0x155964: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x155964u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x155968: 0x8e030058  lw          $v1, 0x58($s0)
    ctx->pc = 0x155968u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x15596c: 0xa0640d80  sb          $a0, 0xD80($v1)
    ctx->pc = 0x15596cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3456), (uint8_t)GPR_U32(ctx, 4));
    // 0x155970: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x155970u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x155974: 0x8e030058  lw          $v1, 0x58($s0)
    ctx->pc = 0x155974u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x155978: 0xa0640e10  sb          $a0, 0xE10($v1)
    ctx->pc = 0x155978u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3600), (uint8_t)GPR_U32(ctx, 4));
    // 0x15597c: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x15597Cu;
    {
        const bool branch_taken_0x15597c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15597c) {
            ctx->pc = 0x155A40u;
            return;
        }
    }
    ctx->pc = 0x155984u;
}
