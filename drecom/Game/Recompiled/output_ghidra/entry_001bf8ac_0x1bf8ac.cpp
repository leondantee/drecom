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

// Function: entry_001bf8ac
// Address: 0x1bf8ac - 0x1bf940
void entry_001bf8ac_0x1bf8ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bf8ac_0x1bf8ac");
#endif

    switch (ctx->pc) {
        case 0x1bf8bcu: goto label_1bf8bc;
        case 0x1bf8c8u: goto label_1bf8c8;
        case 0x1bf8dcu: goto label_1bf8dc;
        case 0x1bf8e8u: goto label_1bf8e8;
        case 0x1bf8fcu: goto label_1bf8fc;
        default: break;
    }

    ctx->pc = 0x1bf8acu;

    // 0x1bf8ac: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1bf8acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bf8b0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1bf8b0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1bf8b4: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x1BF8B4u;
    SET_GPR_U32(ctx, 31, 0x1BF8BCu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1BF8B4u, 0x1BF8BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF8BCu;
label_1bf8bc:
    // 0x1bf8bc: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1bf8bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bf8c0: 0xc05cd10  jal         func_173440
    ctx->pc = 0x1BF8C0u;
    SET_GPR_U32(ctx, 31, 0x1BF8C8u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x1BF8C0u, 0x1BF8C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF8C8u;
label_1bf8c8:
    // 0x1bf8c8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1bf8c8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1bf8cc: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1bf8ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bf8d0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1bf8d0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1bf8d4: 0xc0573d8  jal         func_15CF60
    ctx->pc = 0x1BF8D4u;
    SET_GPR_U32(ctx, 31, 0x1BF8DCu);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x1BF8D4u, 0x1BF8DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF8DCu;
label_1bf8dc:
    // 0x1bf8dc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1bf8dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bf8e0: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x1BF8E0u;
    SET_GPR_U32(ctx, 31, 0x1BF8E8u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x1BF8E0u, 0x1BF8E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF8E8u;
label_1bf8e8:
    // 0x1bf8e8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1bf8e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bf8ec: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1bf8ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bf8f0: 0xc44c1568  lwc1        $f12, 0x1568($v0)
    ctx->pc = 0x1bf8f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 5480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1bf8f4: 0xc058c14  jal         func_163050
    ctx->pc = 0x1BF8F4u;
    SET_GPR_U32(ctx, 31, 0x1BF8FCu);
    ctx->pc = 0x163050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163050u, 0x1BF8F4u, 0x1BF8FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF8FCu;
label_1bf8fc:
    // 0x1bf8fc: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x1BF8FCu;
    {
        const bool branch_taken_0x1bf8fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bf8fc) {
            ctx->pc = 0x1BF9A0u;
            return;
        }
    }
    ctx->pc = 0x1BF904u;
    // 0x1bf904: 0x8e03009c  lw          $v1, 0x9C($s0)
    ctx->pc = 0x1bf904u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
    // 0x1bf908: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x1bf908u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x1bf90c: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x1BF90Cu;
    {
        const bool branch_taken_0x1bf90c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bf90c) {
            ctx->pc = 0x1BF940u;
            return;
        }
    }
    ctx->pc = 0x1BF914u;
    // 0x1bf914: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1bf914u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bf918: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x1bf918u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1bf91c: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x1bf91cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
    // 0x1bf920: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1bf920u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1bf924: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1BF924u;
    {
        const bool branch_taken_0x1bf924 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bf924) {
            ctx->pc = 0x1BF940u;
            return;
        }
    }
    ctx->pc = 0x1BF92Cu;
    // 0x1bf92c: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1bf92cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bf930: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x1bf930u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1bf934: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x1bf934u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x1bf938: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1bf938u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1bf93c: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x1bf93cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    ctx->pc = 0x1bf940u;
}
