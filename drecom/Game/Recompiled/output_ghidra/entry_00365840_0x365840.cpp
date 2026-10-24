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

// Function: entry_00365840
// Address: 0x365840 - 0x3658d0
void entry_00365840_0x365840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00365840_0x365840");
#endif

    switch (ctx->pc) {
        case 0x365850u: goto label_365850;
        case 0x36585cu: goto label_36585c;
        case 0x36586cu: goto label_36586c;
        case 0x365878u: goto label_365878;
        default: break;
    }

    ctx->pc = 0x365840u;

    // 0x365840: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x365840u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x365844: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x365844u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x365848: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x365848u;
    SET_GPR_U32(ctx, 31, 0x365850u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x365848u, 0x365850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365850u;
label_365850:
    // 0x365850: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x365850u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x365854: 0xc05cd10  jal         func_173440
    ctx->pc = 0x365854u;
    SET_GPR_U32(ctx, 31, 0x36585Cu);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x365854u, 0x36585Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36585Cu;
label_36585c:
    // 0x36585c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x36585cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x365860: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x365860u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x365864: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x365864u;
    SET_GPR_U32(ctx, 31, 0x36586Cu);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x365864u, 0x36586Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36586Cu;
label_36586c:
    // 0x36586c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x36586cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x365870: 0xc097478  jal         func_25D1E0
    ctx->pc = 0x365870u;
    SET_GPR_U32(ctx, 31, 0x365878u);
    ctx->pc = 0x25D1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D1E0u, 0x365870u, 0x365878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365878u;
label_365878:
    // 0x365878: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x365878u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x36587c: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x36587cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x365880: 0x1060001f  beqz        $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x365880u;
    {
        const bool branch_taken_0x365880 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x365880) {
            ctx->pc = 0x365900u;
            return;
        }
    }
    ctx->pc = 0x365888u;
    // 0x365888: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x365888u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x36588c: 0x84631278  lh          $v1, 0x1278($v1)
    ctx->pc = 0x36588cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x365890: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x365890u;
    {
        const bool branch_taken_0x365890 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x365890) {
            ctx->pc = 0x3658D0u;
            return;
        }
    }
    ctx->pc = 0x365898u;
    // 0x365898: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x365898u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36589c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x36589cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3658a0: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x3658a0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x3658a4: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x3658a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x3658a8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x3658a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3658ac: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x3658acu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x3658b0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x3658b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3658b4: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x3658b4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x3658b8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x3658b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3658bc: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x3658bcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x3658c0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x3658c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3658c4: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x3658c4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x3658c8: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x3658C8u;
    {
        const bool branch_taken_0x3658c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3658c8) {
            ctx->pc = 0x365900u;
            return;
        }
    }
    ctx->pc = 0x3658D0u;
}
