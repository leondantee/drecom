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

// Function: entry_002dd6bc
// Address: 0x2dd6bc - 0x2dd758
void entry_002dd6bc_0x2dd6bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002dd6bc_0x2dd6bc");
#endif

    switch (ctx->pc) {
        case 0x2dd6f0u: goto label_2dd6f0;
        case 0x2dd734u: goto label_2dd734;
        case 0x2dd750u: goto label_2dd750;
        default: break;
    }

    ctx->pc = 0x2dd6bcu;

    // 0x2dd6bc: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2dd6bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dd6c0: 0x948309e0  lhu         $v1, 0x9E0($a0)
    ctx->pc = 0x2dd6c0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2528)));
    // 0x2dd6c4: 0x3063feff  andi        $v1, $v1, 0xFEFF
    ctx->pc = 0x2dd6c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65279);
    // 0x2dd6c8: 0xa48309e0  sh          $v1, 0x9E0($a0)
    ctx->pc = 0x2dd6c8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2528), (uint16_t)GPR_U32(ctx, 3));
    // 0x2dd6cc: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2dd6ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dd6d0: 0x908309df  lbu         $v1, 0x9DF($a0)
    ctx->pc = 0x2dd6d0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2527)));
    // 0x2dd6d4: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2dd6d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2dd6d8: 0x30830080  andi        $v1, $a0, 0x80
    ctx->pc = 0x2dd6d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)128);
    // 0x2dd6dc: 0x10600038  beqz        $v1, . + 4 + (0x38 << 2)
    ctx->pc = 0x2DD6DCu;
    {
        const bool branch_taken_0x2dd6dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dd6dc) {
            ctx->pc = 0x2DD7C0u;
            return;
        }
    }
    ctx->pc = 0x2DD6E4u;
    // 0x2dd6e4: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x2dd6e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2dd6e8: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x2DD6E8u;
    SET_GPR_U32(ctx, 31, 0x2DD6F0u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x2DD6E8u, 0x2DD6F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD6F0u;
label_2dd6f0:
    // 0x2dd6f0: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2dd6f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dd6f4: 0x8483127e  lh          $v1, 0x127E($a0)
    ctx->pc = 0x2dd6f4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4734)));
    // 0x2dd6f8: 0x10600017  beqz        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x2DD6F8u;
    {
        const bool branch_taken_0x2dd6f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dd6f8) {
            ctx->pc = 0x2DD758u;
            return;
        }
    }
    ctx->pc = 0x2DD700u;
    // 0x2dd700: 0x3c03437a  lui         $v1, 0x437A
    ctx->pc = 0x2dd700u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17274 << 16));
    // 0x2dd704: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2dd704u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2dd708: 0x0  nop
    ctx->pc = 0x2dd708u;
    // NOP
    // 0x2dd70c: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x2dd70cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x2dd710: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2dd710u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dd714: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x2dd714u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dd718: 0x8ca30130  lw          $v1, 0x130($a1)
    ctx->pc = 0x2dd718u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 304)));
    // 0x2dd71c: 0x246503c0  addiu       $a1, $v1, 0x3C0
    ctx->pc = 0x2dd71cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 960));
    // 0x2dd720: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x2dd720u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2dd724: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x2dd724u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x2dd728: 0x24678df4  addiu       $a3, $v1, -0x720C
    ctx->pc = 0x2dd728u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 4294938100));
    // 0x2dd72c: 0xc06d02c  jal         func_1B40B0
    ctx->pc = 0x2DD72Cu;
    SET_GPR_U32(ctx, 31, 0x2DD734u);
    ctx->pc = 0x1B40B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B40B0u, 0x2DD72Cu, 0x2DD734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD734u;
label_2dd734:
    // 0x2dd734: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2DD734u;
    {
        const bool branch_taken_0x2dd734 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dd734) {
            ctx->pc = 0x2DD758u;
            return;
        }
    }
    ctx->pc = 0x2DD73Cu;
    // 0x2dd73c: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x2dd73cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2dd740: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2dd740u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dd744: 0xa443127a  sh          $v1, 0x127A($v0)
    ctx->pc = 0x2dd744u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 3));
    // 0x2dd748: 0xc0b6534  jal         func_2D94D0
    ctx->pc = 0x2DD748u;
    SET_GPR_U32(ctx, 31, 0x2DD750u);
    ctx->pc = 0x2D94D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D94D0u, 0x2DD748u, 0x2DD750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD750u;
label_2dd750:
    // 0x2dd750: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2dd750u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dd754: 0xa460127e  sh          $zero, 0x127E($v1)
    ctx->pc = 0x2dd754u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4734), (uint16_t)GPR_U32(ctx, 0));
    ctx->pc = 0x2dd758u;
}
