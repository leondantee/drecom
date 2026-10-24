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

// Function: caseD_2
// Address: 0x20bac4 - 0x20bb5c
void caseD_2_0x20bac4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_2_0x20bac4");
#endif

    switch (ctx->pc) {
        case 0x20bad4u: goto label_20bad4;
        case 0x20baf0u: goto label_20baf0;
        case 0x20bb00u: goto label_20bb00;
        case 0x20bb0cu: goto label_20bb0c;
        default: break;
    }

    ctx->pc = 0x20bac4u;

    // 0x20bac4: 0x8fa40108  lw          $a0, 0x108($sp)
    ctx->pc = 0x20bac4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x20bac8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x20bac8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x20bacc: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x20BACCu;
    SET_GPR_U32(ctx, 31, 0x20BAD4u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x20BACCu, 0x20BAD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BAD4u;
label_20bad4:
    // 0x20bad4: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x20bad4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x20bad8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x20bad8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20badc: 0x8fa20108  lw          $v0, 0x108($sp)
    ctx->pc = 0x20badcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x20bae0: 0xe4400184  swc1        $f0, 0x184($v0)
    ctx->pc = 0x20bae0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 388), bits); }
    // 0x20bae4: 0x8fa40108  lw          $a0, 0x108($sp)
    ctx->pc = 0x20bae4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x20bae8: 0xc05cd34  jal         func_1734D0
    ctx->pc = 0x20BAE8u;
    SET_GPR_U32(ctx, 31, 0x20BAF0u);
    ctx->pc = 0x1734D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1734D0u, 0x20BAE8u, 0x20BAF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BAF0u;
label_20baf0:
    // 0x20baf0: 0x8fa40108  lw          $a0, 0x108($sp)
    ctx->pc = 0x20baf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x20baf4: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x20baf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x20baf8: 0xc080f60  jal         func_203D80
    ctx->pc = 0x20BAF8u;
    SET_GPR_U32(ctx, 31, 0x20BB00u);
    ctx->pc = 0x203D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203D80u, 0x20BAF8u, 0x20BB00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BB00u;
label_20bb00:
    // 0x20bb00: 0x8fa40108  lw          $a0, 0x108($sp)
    ctx->pc = 0x20bb00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x20bb04: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x20BB04u;
    SET_GPR_U32(ctx, 31, 0x20BB0Cu);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x20BB04u, 0x20BB0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BB0Cu;
label_20bb0c:
    // 0x20bb0c: 0x8fa30108  lw          $v1, 0x108($sp)
    ctx->pc = 0x20bb0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x20bb10: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x20bb10u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x20bb14: 0x106001b9  beqz        $v1, . + 4 + (0x1B9 << 2)
    ctx->pc = 0x20BB14u;
    {
        const bool branch_taken_0x20bb14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x20bb14) {
            ctx->pc = 0x20C1FCu;
            return;
        }
    }
    ctx->pc = 0x20BB1Cu;
    // 0x20bb1c: 0x8fa30108  lw          $v1, 0x108($sp)
    ctx->pc = 0x20bb1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x20bb20: 0xc4610124  lwc1        $f1, 0x124($v1)
    ctx->pc = 0x20bb20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20bb24: 0x3c0346ea  lui         $v1, 0x46EA
    ctx->pc = 0x20bb24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18154 << 16));
    // 0x20bb28: 0x34636000  ori         $v1, $v1, 0x6000
    ctx->pc = 0x20bb28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)24576);
    // 0x20bb2c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x20bb2cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20bb30: 0x0  nop
    ctx->pc = 0x20bb30u;
    // NOP
    // 0x20bb34: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x20bb34u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20bb38: 0x0  nop
    ctx->pc = 0x20bb38u;
    // NOP
    // 0x20bb3c: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x20BB3Cu;
    {
        const bool branch_taken_0x20bb3c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x20bb3c) {
            ctx->pc = 0x20BB5Cu;
            return;
        }
    }
    ctx->pc = 0x20BB44u;
    // 0x20bb44: 0x8fa40108  lw          $a0, 0x108($sp)
    ctx->pc = 0x20bb44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x20bb48: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x20bb48u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x20bb4c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x20bb4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x20bb50: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x20bb50u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x20bb54: 0x100001a9  b           . + 4 + (0x1A9 << 2)
    ctx->pc = 0x20BB54u;
    {
        const bool branch_taken_0x20bb54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20bb54) {
            ctx->pc = 0x20C1FCu;
            return;
        }
    }
    ctx->pc = 0x20BB5Cu;
}
