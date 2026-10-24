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

// Function: entry_003031f0
// Address: 0x3031f0 - 0x3032c8
void entry_003031f0_0x3031f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003031f0_0x3031f0");
#endif

    switch (ctx->pc) {
        case 0x303210u: goto label_303210;
        case 0x30321cu: goto label_30321c;
        case 0x30322cu: goto label_30322c;
        case 0x303238u: goto label_303238;
        default: break;
    }

    ctx->pc = 0x3031f0u;

    // 0x3031f0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x3031f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3031f4: 0x84621278  lh          $v0, 0x1278($v1)
    ctx->pc = 0x3031f4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x3031f8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3031f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3031fc: 0xa4621278  sh          $v0, 0x1278($v1)
    ctx->pc = 0x3031fcu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 2));
    // 0x303200: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x303200u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x303204: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x303204u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x303208: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x303208u;
    SET_GPR_U32(ctx, 31, 0x303210u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x303208u, 0x303210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x303210u;
label_303210:
    // 0x303210: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x303210u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x303214: 0xc05cd10  jal         func_173440
    ctx->pc = 0x303214u;
    SET_GPR_U32(ctx, 31, 0x30321Cu);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x303214u, 0x30321Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30321Cu;
label_30321c:
    // 0x30321c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x30321cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x303220: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x303220u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x303224: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x303224u;
    SET_GPR_U32(ctx, 31, 0x30322Cu);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x303224u, 0x30322Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30322Cu;
label_30322c:
    // 0x30322c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x30322cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x303230: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x303230u;
    SET_GPR_U32(ctx, 31, 0x303238u);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x303230u, 0x303238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x303238u;
label_303238:
    // 0x303238: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x303238u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30323c: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x30323cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x303240: 0x10600037  beqz        $v1, . + 4 + (0x37 << 2)
    ctx->pc = 0x303240u;
    {
        const bool branch_taken_0x303240 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x303240) {
            ctx->pc = 0x303320u;
            return;
        }
    }
    ctx->pc = 0x303248u;
    // 0x303248: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x303248u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30324c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x30324cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x303250: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x303250u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x303254: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x303254u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x303258: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x303258u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30325c: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x30325cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x303260: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x303260u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x303264: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x303264u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x303268: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x303268u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30326c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x30326cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x303270: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x303270u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x303274: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x303274u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x303278: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x303278u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x30327c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x30327cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x303280: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x303280u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x303284: 0x240400b4  addiu       $a0, $zero, 0xB4
    ctx->pc = 0x303284u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
    // 0x303288: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x303288u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30328c: 0xac64136c  sw          $a0, 0x136C($v1)
    ctx->pc = 0x30328cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4972), GPR_U32(ctx, 4));
    // 0x303290: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x303290u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x303294: 0x8463127a  lh          $v1, 0x127A($v1)
    ctx->pc = 0x303294u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4730)));
    // 0x303298: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x303298u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x30329c: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x30329cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x3032a0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3032a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3032a4: 0x10830018  beq         $a0, $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x3032A4u;
    {
        const bool branch_taken_0x3032a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3032a4) {
            ctx->pc = 0x303308u;
            return;
        }
    }
    ctx->pc = 0x3032ACu;
    // 0x3032ac: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3032acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3032b0: 0x1083000d  beq         $a0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x3032B0u;
    {
        const bool branch_taken_0x3032b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3032b0) {
            ctx->pc = 0x3032E8u;
            return;
        }
    }
    ctx->pc = 0x3032B8u;
    // 0x3032b8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3032B8u;
    {
        const bool branch_taken_0x3032b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3032b8) {
            ctx->pc = 0x3032C8u;
            return;
        }
    }
    ctx->pc = 0x3032C0u;
    // 0x3032c0: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x3032C0u;
    {
        const bool branch_taken_0x3032c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3032c0) {
            ctx->pc = 0x303320u;
            return;
        }
    }
    ctx->pc = 0x3032C8u;
}
