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

// Function: entry_002d5730
// Address: 0x2d5730 - 0x2d5794
void entry_002d5730_0x2d5730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002d5730_0x2d5730");
#endif

    switch (ctx->pc) {
        case 0x2d574cu: goto label_2d574c;
        case 0x2d5758u: goto label_2d5758;
        default: break;
    }

    ctx->pc = 0x2d5730u;

    // 0x2d5730: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d5730u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d5734: 0x3c010086  lui         $at, 0x86
    ctx->pc = 0x2d5734u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)134 << 16));
    // 0x2d5738: 0xac22add0  sw          $v0, -0x5230($at)
    ctx->pc = 0x2d5738u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x85ADD0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x85ADD0u, _value); } while (0);
    // 0x2d573c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2d573cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d5740: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2d5740u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2d5744: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x2D5744u;
    SET_GPR_U32(ctx, 31, 0x2D574Cu);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x2D5744u, 0x2D574Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D574Cu;
label_2d574c:
    // 0x2d574c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2d574cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d5750: 0xc0974e8  jal         func_25D3A0
    ctx->pc = 0x2D5750u;
    SET_GPR_U32(ctx, 31, 0x2D5758u);
    ctx->pc = 0x25D3A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D3A0u, 0x2D5750u, 0x2D5758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5758u;
label_2d5758:
    // 0x2d5758: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d5758u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d575c: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x2d575cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x2d5760: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x2D5760u;
    {
        const bool branch_taken_0x2d5760 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d5760) {
            ctx->pc = 0x2D5794u;
            return;
        }
    }
    ctx->pc = 0x2D5768u;
    // 0x2d5768: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x2d5768u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2d576c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d576cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d5770: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2d5770u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2d5774: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d5774u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d5778: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x2d5778u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d577c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d577cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d5780: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2d5780u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d5784: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d5784u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d5788: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2d5788u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d578c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d578cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d5790: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2d5790u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x2d5794u;
}
