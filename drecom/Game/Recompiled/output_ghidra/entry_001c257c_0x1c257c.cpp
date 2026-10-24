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

// Function: entry_001c257c
// Address: 0x1c257c - 0x1c2628
void entry_001c257c_0x1c257c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c257c_0x1c257c");
#endif

    switch (ctx->pc) {
        case 0x1c258cu: goto label_1c258c;
        case 0x1c2598u: goto label_1c2598;
        case 0x1c25acu: goto label_1c25ac;
        case 0x1c25b8u: goto label_1c25b8;
        case 0x1c25ccu: goto label_1c25cc;
        default: break;
    }

    ctx->pc = 0x1c257cu;

    // 0x1c257c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c257cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c2580: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1c2580u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1c2584: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x1C2584u;
    SET_GPR_U32(ctx, 31, 0x1C258Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1C2584u, 0x1C258Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C258Cu;
label_1c258c:
    // 0x1c258c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c258cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c2590: 0xc05cd10  jal         func_173440
    ctx->pc = 0x1C2590u;
    SET_GPR_U32(ctx, 31, 0x1C2598u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x1C2590u, 0x1C2598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2598u;
label_1c2598:
    // 0x1c2598: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1c2598u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c259c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c259cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c25a0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1c25a0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1c25a4: 0xc0573d8  jal         func_15CF60
    ctx->pc = 0x1C25A4u;
    SET_GPR_U32(ctx, 31, 0x1C25ACu);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x1C25A4u, 0x1C25ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C25ACu;
label_1c25ac:
    // 0x1c25ac: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1c25acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c25b0: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x1C25B0u;
    SET_GPR_U32(ctx, 31, 0x1C25B8u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x1C25B0u, 0x1C25B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C25B8u;
label_1c25b8:
    // 0x1c25b8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1c25b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c25bc: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c25bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c25c0: 0xc44c1568  lwc1        $f12, 0x1568($v0)
    ctx->pc = 0x1c25c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 5480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1c25c4: 0xc058c14  jal         func_163050
    ctx->pc = 0x1C25C4u;
    SET_GPR_U32(ctx, 31, 0x1C25CCu);
    ctx->pc = 0x163050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163050u, 0x1C25C4u, 0x1C25CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C25CCu;
label_1c25cc:
    // 0x1c25cc: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x1C25CCu;
    {
        const bool branch_taken_0x1c25cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c25cc) {
            ctx->pc = 0x1C2658u;
            return;
        }
    }
    ctx->pc = 0x1C25D4u;
    // 0x1c25d4: 0x8e03009c  lw          $v1, 0x9C($s0)
    ctx->pc = 0x1c25d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
    // 0x1c25d8: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x1c25d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x1c25dc: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x1C25DCu;
    {
        const bool branch_taken_0x1c25dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c25dc) {
            ctx->pc = 0x1C2628u;
            return;
        }
    }
    ctx->pc = 0x1C25E4u;
    // 0x1c25e4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c25e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c25e8: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x1c25e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1c25ec: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x1c25ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
    // 0x1c25f0: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1c25f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1c25f4: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x1C25F4u;
    {
        const bool branch_taken_0x1c25f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c25f4) {
            ctx->pc = 0x1C2628u;
            return;
        }
    }
    ctx->pc = 0x1C25FCu;
    // 0x1c25fc: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1c25fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c2600: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x1c2600u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1c2604: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x1c2604u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x1c2608: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1c2608u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1c260c: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x1c260cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x1c2610: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1c2610u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c2614: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c2614u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c2618: 0xa064156d  sb          $a0, 0x156D($v1)
    ctx->pc = 0x1c2618u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5485), (uint8_t)GPR_U32(ctx, 4));
    // 0x1c261c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1c261cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c2620: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c2620u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c2624: 0xa0640003  sb          $a0, 0x3($v1)
    ctx->pc = 0x1c2624u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 4));
    ctx->pc = 0x1c2628u;
}
