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

// Function: entry_002e065c
// Address: 0x2e065c - 0x2e0728
void entry_002e065c_0x2e065c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002e065c_0x2e065c");
#endif

    switch (ctx->pc) {
        case 0x2e0680u: goto label_2e0680;
        case 0x2e0698u: goto label_2e0698;
        case 0x2e06acu: goto label_2e06ac;
        case 0x2e06bcu: goto label_2e06bc;
        case 0x2e06c8u: goto label_2e06c8;
        default: break;
    }

    ctx->pc = 0x2e065cu;

    // 0x2e065c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2e065cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e0660: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2e0660u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e0664: 0x3c023ec9  lui         $v0, 0x3EC9
    ctx->pc = 0x2e0664u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16073 << 16));
    // 0x2e0668: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x2e0668u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x2e066c: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x2e066cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2e0670: 0xc48c1290  lwc1        $f12, 0x1290($a0)
    ctx->pc = 0x2e0670u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2e0674: 0xc46d00d4  lwc1        $f13, 0xD4($v1)
    ctx->pc = 0x2e0674u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2e0678: 0xc058f50  jal         func_163D40
    ctx->pc = 0x2E0678u;
    SET_GPR_U32(ctx, 31, 0x2E0680u);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x2E0678u, 0x2E0680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E0680u;
label_2e0680:
    // 0x2e0680: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2e0680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e0684: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x2e0684u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x2e0688: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2e0688u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e068c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2e068cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2e0690: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x2E0690u;
    SET_GPR_U32(ctx, 31, 0x2E0698u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2E0690u, 0x2E0698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E0698u;
label_2e0698:
    // 0x2e0698: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2e0698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e069c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2e069cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e06a0: 0xc44c1290  lwc1        $f12, 0x1290($v0)
    ctx->pc = 0x2e06a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2e06a4: 0xc05cd58  jal         func_173560
    ctx->pc = 0x2E06A4u;
    SET_GPR_U32(ctx, 31, 0x2E06ACu);
    ctx->pc = 0x173560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173560u, 0x2E06A4u, 0x2E06ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E06ACu;
label_2e06ac:
    // 0x2e06ac: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2e06acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e06b0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2e06b0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2e06b4: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x2E06B4u;
    SET_GPR_U32(ctx, 31, 0x2E06BCu);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x2E06B4u, 0x2E06BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E06BCu;
label_2e06bc:
    // 0x2e06bc: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2e06bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e06c0: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x2E06C0u;
    SET_GPR_U32(ctx, 31, 0x2E06C8u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x2E06C0u, 0x2E06C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E06C8u;
label_2e06c8:
    // 0x2e06c8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2e06c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e06cc: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x2e06ccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x2e06d0: 0x10600015  beqz        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x2E06D0u;
    {
        const bool branch_taken_0x2e06d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e06d0) {
            ctx->pc = 0x2E0728u;
            return;
        }
    }
    ctx->pc = 0x2E06D8u;
    // 0x2e06d8: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x2e06d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e06dc: 0x8ca411a0  lw          $a0, 0x11A0($a1)
    ctx->pc = 0x2e06dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4512)));
    // 0x2e06e0: 0x3c03bfff  lui         $v1, 0xBFFF
    ctx->pc = 0x2e06e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49151 << 16));
    // 0x2e06e4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x2e06e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x2e06e8: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x2e06e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x2e06ec: 0xaca311a0  sw          $v1, 0x11A0($a1)
    ctx->pc = 0x2e06ecu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4512), GPR_U32(ctx, 3));
    // 0x2e06f0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2e06f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e06f4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2e06f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e06f8: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2e06f8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2e06fc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2e06fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e0700: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2e0700u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e0704: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2e0704u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2e0708: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2e0708u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e070c: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2e070cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e0710: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2e0710u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e0714: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2e0714u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e0718: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2e0718u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e071c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2e071cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x2e0720: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x2E0720u;
    {
        const bool branch_taken_0x2e0720 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e0720) {
            ctx->pc = 0x2E0728u;
            return;
        }
    }
    ctx->pc = 0x2E0728u;
}
