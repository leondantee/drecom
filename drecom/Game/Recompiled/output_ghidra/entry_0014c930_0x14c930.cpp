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

// Function: entry_0014c930
// Address: 0x14c930 - 0x14c9d8
void entry_0014c930_0x14c930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014c930_0x14c930");
#endif

    switch (ctx->pc) {
        case 0x14c954u: goto label_14c954;
        case 0x14c96cu: goto label_14c96c;
        case 0x14c980u: goto label_14c980;
        case 0x14c994u: goto label_14c994;
        case 0x14c9a0u: goto label_14c9a0;
        case 0x14c9c0u: goto label_14c9c0;
        default: break;
    }

    ctx->pc = 0x14c930u;

    // 0x14c930: 0x3c023ec9  lui         $v0, 0x3EC9
    ctx->pc = 0x14c930u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16073 << 16));
    // 0x14c934: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x14c934u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x14c938: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x14c938u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x14c93c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14c93cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14c940: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14c940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14c944: 0xc46c1290  lwc1        $f12, 0x1290($v1)
    ctx->pc = 0x14c944u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x14c948: 0xc44d00d4  lwc1        $f13, 0xD4($v0)
    ctx->pc = 0x14c948u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x14c94c: 0xc058f50  jal         func_163D40
    ctx->pc = 0x14C94Cu;
    SET_GPR_U32(ctx, 31, 0x14C954u);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x14C94Cu, 0x14C954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C954u;
label_14c954:
    // 0x14c954: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14c954u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14c958: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x14c958u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x14c95c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x14c95cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14c960: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x14c960u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x14c964: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x14C964u;
    SET_GPR_U32(ctx, 31, 0x14C96Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x14C964u, 0x14C96Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C96Cu;
label_14c96c:
    // 0x14c96c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14c96cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14c970: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x14c970u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14c974: 0xc44c1290  lwc1        $f12, 0x1290($v0)
    ctx->pc = 0x14c974u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x14c978: 0xc05cd58  jal         func_173560
    ctx->pc = 0x14C978u;
    SET_GPR_U32(ctx, 31, 0x14C980u);
    ctx->pc = 0x173560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173560u, 0x14C978u, 0x14C980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C980u;
label_14c980:
    // 0x14c980: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x14c980u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x14c984: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x14c984u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14c988: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x14c988u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x14c98c: 0xc0573d8  jal         func_15CF60
    ctx->pc = 0x14C98Cu;
    SET_GPR_U32(ctx, 31, 0x14C994u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x14C98Cu, 0x14C994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C994u;
label_14c994:
    // 0x14c994: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x14c994u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x14c998: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x14C998u;
    SET_GPR_U32(ctx, 31, 0x14C9A0u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x14C998u, 0x14C9A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C9A0u;
label_14c9a0:
    // 0x14c9a0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14c9a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14c9a4: 0x906309db  lbu         $v1, 0x9DB($v1)
    ctx->pc = 0x14c9a4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2523)));
    // 0x14c9a8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x14c9a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x14c9ac: 0x30630010  andi        $v1, $v1, 0x10
    ctx->pc = 0x14c9acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x14c9b0: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x14C9B0u;
    {
        const bool branch_taken_0x14c9b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14c9b0) {
            ctx->pc = 0x14C9D8u;
            return;
        }
    }
    ctx->pc = 0x14C9B8u;
    // 0x14c9b8: 0xc0585dc  jal         func_161770
    ctx->pc = 0x14C9B8u;
    SET_GPR_U32(ctx, 31, 0x14C9C0u);
    ctx->pc = 0x161770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x161770u, 0x14C9B8u, 0x14C9C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C9C0u;
label_14c9c0:
    // 0x14c9c0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x14C9C0u;
    {
        const bool branch_taken_0x14c9c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14c9c0) {
            ctx->pc = 0x14C9D8u;
            return;
        }
    }
    ctx->pc = 0x14C9C8u;
    // 0x14c9c8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14c9c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14c9cc: 0xa06010a8  sb          $zero, 0x10A8($v1)
    ctx->pc = 0x14c9ccu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 0));
    // 0x14c9d0: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x14C9D0u;
    {
        const bool branch_taken_0x14c9d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14c9d0) {
            ctx->pc = 0x14CA28u;
            return;
        }
    }
    ctx->pc = 0x14C9D8u;
}
