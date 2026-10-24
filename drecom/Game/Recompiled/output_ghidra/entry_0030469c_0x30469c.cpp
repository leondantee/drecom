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

// Function: entry_0030469c
// Address: 0x30469c - 0x304770
void entry_0030469c_0x30469c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0030469c_0x30469c");
#endif

    switch (ctx->pc) {
        case 0x3046c8u: goto label_3046c8;
        case 0x3046dcu: goto label_3046dc;
        case 0x3046f4u: goto label_3046f4;
        case 0x304700u: goto label_304700;
        case 0x304710u: goto label_304710;
        case 0x30471cu: goto label_30471c;
        default: break;
    }

    ctx->pc = 0x30469cu;

    // 0x30469c: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x30469cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
    // 0x3046a0: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x3046a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x3046a4: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x3046a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x3046a8: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x3046a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3046ac: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x3046acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3046b0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x3046b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3046b4: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x3046b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x3046b8: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x3046b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3046bc: 0x24451240  addiu       $a1, $v0, 0x1240
    ctx->pc = 0x3046bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4672));
    // 0x3046c0: 0xc05c848  jal         func_172120
    ctx->pc = 0x3046C0u;
    SET_GPR_U32(ctx, 31, 0x3046C8u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x3046C0u, 0x3046C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3046C8u;
label_3046c8:
    // 0x3046c8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x3046c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3046cc: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x3046ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3046d0: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x3046d0u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x3046d4: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x3046D4u;
    SET_GPR_U32(ctx, 31, 0x3046DCu);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x3046D4u, 0x3046DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3046DCu;
label_3046dc:
    // 0x3046dc: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x3046dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3046e0: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x3046e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x3046e4: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x3046e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3046e8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x3046e8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3046ec: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x3046ECu;
    SET_GPR_U32(ctx, 31, 0x3046F4u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x3046ECu, 0x3046F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3046F4u;
label_3046f4:
    // 0x3046f4: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x3046f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3046f8: 0xc05cd10  jal         func_173440
    ctx->pc = 0x3046F8u;
    SET_GPR_U32(ctx, 31, 0x304700u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x3046F8u, 0x304700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304700u;
label_304700:
    // 0x304700: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x304700u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x304704: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x304704u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x304708: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x304708u;
    SET_GPR_U32(ctx, 31, 0x304710u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x304708u, 0x304710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304710u;
label_304710:
    // 0x304710: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x304710u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x304714: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x304714u;
    SET_GPR_U32(ctx, 31, 0x30471Cu);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x304714u, 0x30471Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30471Cu;
label_30471c:
    // 0x30471c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x30471cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x304720: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x304720u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x304724: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x304724u;
    {
        const bool branch_taken_0x304724 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x304724) {
            ctx->pc = 0x304770u;
            return;
        }
    }
    ctx->pc = 0x30472Cu;
    // 0x30472c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x30472cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x304730: 0xa06010a8  sb          $zero, 0x10A8($v1)
    ctx->pc = 0x304730u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 0));
    // 0x304734: 0x2404012c  addiu       $a0, $zero, 0x12C
    ctx->pc = 0x304734u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
    // 0x304738: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x304738u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30473c: 0xac641340  sw          $a0, 0x1340($v1)
    ctx->pc = 0x30473cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4928), GPR_U32(ctx, 4));
    // 0x304740: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x304740u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x304744: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x304744u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x304748: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x304748u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x30474c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x30474cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x304750: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x304750u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x304754: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x304754u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x304758: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x304758u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30475c: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x30475cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x304760: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x304760u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x304764: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x304764u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x304768: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x304768u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30476c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x30476cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x304770u;
}
