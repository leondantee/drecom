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

// Function: entry_001bd550
// Address: 0x1bd550 - 0x1bd5f8
void entry_001bd550_0x1bd550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bd550_0x1bd550");
#endif

    switch (ctx->pc) {
        case 0x1bd560u: goto label_1bd560;
        case 0x1bd584u: goto label_1bd584;
        case 0x1bd5a0u: goto label_1bd5a0;
        case 0x1bd5b4u: goto label_1bd5b4;
        case 0x1bd5c0u: goto label_1bd5c0;
        case 0x1bd5e0u: goto label_1bd5e0;
        default: break;
    }

    ctx->pc = 0x1bd550u;

    // 0x1bd550: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1bd550u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bd554: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1bd554u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1bd558: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x1BD558u;
    SET_GPR_U32(ctx, 31, 0x1BD560u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1BD558u, 0x1BD560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD560u;
label_1bd560:
    // 0x1bd560: 0x3c023e49  lui         $v0, 0x3E49
    ctx->pc = 0x1bd560u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15945 << 16));
    // 0x1bd564: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1bd564u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1bd568: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x1bd568u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1bd56c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1bd56cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bd570: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1bd570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bd574: 0xc46c1290  lwc1        $f12, 0x1290($v1)
    ctx->pc = 0x1bd574u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1bd578: 0xc44d00d4  lwc1        $f13, 0xD4($v0)
    ctx->pc = 0x1bd578u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1bd57c: 0xc058f50  jal         func_163D40
    ctx->pc = 0x1BD57Cu;
    SET_GPR_U32(ctx, 31, 0x1BD584u);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x1BD57Cu, 0x1BD584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD584u;
label_1bd584:
    // 0x1bd584: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1bd584u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bd588: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x1bd588u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x1bd58c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1bd58cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bd590: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1bd590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bd594: 0xc44c1290  lwc1        $f12, 0x1290($v0)
    ctx->pc = 0x1bd594u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1bd598: 0xc05cd58  jal         func_173560
    ctx->pc = 0x1BD598u;
    SET_GPR_U32(ctx, 31, 0x1BD5A0u);
    ctx->pc = 0x173560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173560u, 0x1BD598u, 0x1BD5A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD5A0u;
label_1bd5a0:
    // 0x1bd5a0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1bd5a0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1bd5a4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1bd5a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bd5a8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1bd5a8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1bd5ac: 0xc0573d8  jal         func_15CF60
    ctx->pc = 0x1BD5ACu;
    SET_GPR_U32(ctx, 31, 0x1BD5B4u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x1BD5ACu, 0x1BD5B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD5B4u;
label_1bd5b4:
    // 0x1bd5b4: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1bd5b4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1bd5b8: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x1BD5B8u;
    SET_GPR_U32(ctx, 31, 0x1BD5C0u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x1BD5B8u, 0x1BD5C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD5C0u;
label_1bd5c0:
    // 0x1bd5c0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1bd5c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bd5c4: 0x906309db  lbu         $v1, 0x9DB($v1)
    ctx->pc = 0x1bd5c4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2523)));
    // 0x1bd5c8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1bd5c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1bd5cc: 0x30630010  andi        $v1, $v1, 0x10
    ctx->pc = 0x1bd5ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x1bd5d0: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1BD5D0u;
    {
        const bool branch_taken_0x1bd5d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bd5d0) {
            ctx->pc = 0x1BD5F8u;
            return;
        }
    }
    ctx->pc = 0x1BD5D8u;
    // 0x1bd5d8: 0xc0585dc  jal         func_161770
    ctx->pc = 0x1BD5D8u;
    SET_GPR_U32(ctx, 31, 0x1BD5E0u);
    ctx->pc = 0x161770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x161770u, 0x1BD5D8u, 0x1BD5E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD5E0u;
label_1bd5e0:
    // 0x1bd5e0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1BD5E0u;
    {
        const bool branch_taken_0x1bd5e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bd5e0) {
            ctx->pc = 0x1BD5F8u;
            return;
        }
    }
    ctx->pc = 0x1BD5E8u;
    // 0x1bd5e8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1bd5e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bd5ec: 0xa06010a8  sb          $zero, 0x10A8($v1)
    ctx->pc = 0x1bd5ecu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 0));
    // 0x1bd5f0: 0x10000050  b           . + 4 + (0x50 << 2)
    ctx->pc = 0x1BD5F0u;
    {
        const bool branch_taken_0x1bd5f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bd5f0) {
            ctx->pc = 0x1BD734u;
            return;
        }
    }
    ctx->pc = 0x1BD5F8u;
}
