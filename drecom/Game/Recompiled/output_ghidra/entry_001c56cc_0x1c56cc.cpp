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

// Function: entry_001c56cc
// Address: 0x1c56cc - 0x1c5778
void entry_001c56cc_0x1c56cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c56cc_0x1c56cc");
#endif

    switch (ctx->pc) {
        case 0x1c56dcu: goto label_1c56dc;
        case 0x1c56e8u: goto label_1c56e8;
        case 0x1c56fcu: goto label_1c56fc;
        case 0x1c5708u: goto label_1c5708;
        case 0x1c571cu: goto label_1c571c;
        default: break;
    }

    ctx->pc = 0x1c56ccu;

    // 0x1c56cc: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c56ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c56d0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1c56d0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1c56d4: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x1C56D4u;
    SET_GPR_U32(ctx, 31, 0x1C56DCu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1C56D4u, 0x1C56DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C56DCu;
label_1c56dc:
    // 0x1c56dc: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c56dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c56e0: 0xc05cd10  jal         func_173440
    ctx->pc = 0x1C56E0u;
    SET_GPR_U32(ctx, 31, 0x1C56E8u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x1C56E0u, 0x1C56E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C56E8u;
label_1c56e8:
    // 0x1c56e8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1c56e8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c56ec: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c56ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c56f0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1c56f0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1c56f4: 0xc0573d8  jal         func_15CF60
    ctx->pc = 0x1C56F4u;
    SET_GPR_U32(ctx, 31, 0x1C56FCu);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x1C56F4u, 0x1C56FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C56FCu;
label_1c56fc:
    // 0x1c56fc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1c56fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c5700: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x1C5700u;
    SET_GPR_U32(ctx, 31, 0x1C5708u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x1C5700u, 0x1C5708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5708u;
label_1c5708:
    // 0x1c5708: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1c5708u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c570c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c570cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c5710: 0xc44c1568  lwc1        $f12, 0x1568($v0)
    ctx->pc = 0x1c5710u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 5480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1c5714: 0xc058c14  jal         func_163050
    ctx->pc = 0x1C5714u;
    SET_GPR_U32(ctx, 31, 0x1C571Cu);
    ctx->pc = 0x163050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163050u, 0x1C5714u, 0x1C571Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C571Cu;
label_1c571c:
    // 0x1c571c: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x1C571Cu;
    {
        const bool branch_taken_0x1c571c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c571c) {
            ctx->pc = 0x1C57A8u;
            return;
        }
    }
    ctx->pc = 0x1C5724u;
    // 0x1c5724: 0x8e030090  lw          $v1, 0x90($s0)
    ctx->pc = 0x1c5724u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
    // 0x1c5728: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x1c5728u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x1c572c: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x1C572Cu;
    {
        const bool branch_taken_0x1c572c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c572c) {
            ctx->pc = 0x1C5778u;
            return;
        }
    }
    ctx->pc = 0x1C5734u;
    // 0x1c5734: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c5734u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c5738: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x1c5738u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1c573c: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x1c573cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
    // 0x1c5740: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1c5740u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1c5744: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x1C5744u;
    {
        const bool branch_taken_0x1c5744 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c5744) {
            ctx->pc = 0x1C5778u;
            return;
        }
    }
    ctx->pc = 0x1C574Cu;
    // 0x1c574c: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1c574cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c5750: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x1c5750u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1c5754: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x1c5754u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x1c5758: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1c5758u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1c575c: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x1c575cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x1c5760: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1c5760u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c5764: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c5764u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c5768: 0xa064156d  sb          $a0, 0x156D($v1)
    ctx->pc = 0x1c5768u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5485), (uint8_t)GPR_U32(ctx, 4));
    // 0x1c576c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1c576cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c5770: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c5770u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c5774: 0xa0640003  sb          $a0, 0x3($v1)
    ctx->pc = 0x1c5774u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 4));
    ctx->pc = 0x1c5778u;
}
