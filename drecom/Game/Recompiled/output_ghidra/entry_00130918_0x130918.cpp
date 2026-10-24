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

// Function: entry_00130918
// Address: 0x130918 - 0x1309ac
void entry_00130918_0x130918(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00130918_0x130918");
#endif

    switch (ctx->pc) {
        case 0x13093cu: goto label_13093c;
        case 0x130954u: goto label_130954;
        case 0x130968u: goto label_130968;
        case 0x130978u: goto label_130978;
        case 0x130984u: goto label_130984;
        default: break;
    }

    ctx->pc = 0x130918u;

    // 0x130918: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x130918u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x13091c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x13091cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x130920: 0x3c023ec9  lui         $v0, 0x3EC9
    ctx->pc = 0x130920u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16073 << 16));
    // 0x130924: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x130924u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x130928: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x130928u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x13092c: 0xc48c1290  lwc1        $f12, 0x1290($a0)
    ctx->pc = 0x13092cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x130930: 0xc46d00d4  lwc1        $f13, 0xD4($v1)
    ctx->pc = 0x130930u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x130934: 0xc058f50  jal         func_163D40
    ctx->pc = 0x130934u;
    SET_GPR_U32(ctx, 31, 0x13093Cu);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x130934u, 0x13093Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13093Cu;
label_13093c:
    // 0x13093c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x13093cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x130940: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x130940u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x130944: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x130944u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x130948: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x130948u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x13094c: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x13094Cu;
    SET_GPR_U32(ctx, 31, 0x130954u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x13094Cu, 0x130954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130954u;
label_130954:
    // 0x130954: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x130954u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x130958: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x130958u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x13095c: 0xc44c1290  lwc1        $f12, 0x1290($v0)
    ctx->pc = 0x13095cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x130960: 0xc05cd58  jal         func_173560
    ctx->pc = 0x130960u;
    SET_GPR_U32(ctx, 31, 0x130968u);
    ctx->pc = 0x173560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173560u, 0x130960u, 0x130968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130968u;
label_130968:
    // 0x130968: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x130968u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x13096c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x13096cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x130970: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x130970u;
    SET_GPR_U32(ctx, 31, 0x130978u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x130970u, 0x130978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130978u;
label_130978:
    // 0x130978: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x130978u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x13097c: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x13097Cu;
    SET_GPR_U32(ctx, 31, 0x130984u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x13097Cu, 0x130984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130984u;
label_130984:
    // 0x130984: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x130984u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x130988: 0x84631278  lh          $v1, 0x1278($v1)
    ctx->pc = 0x130988u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x13098c: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x13098Cu;
    {
        const bool branch_taken_0x13098c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x13098c) {
            ctx->pc = 0x1309ACu;
            return;
        }
    }
    ctx->pc = 0x130994u;
    // 0x130994: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x130994u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x130998: 0x84831278  lh          $v1, 0x1278($a0)
    ctx->pc = 0x130998u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4728)));
    // 0x13099c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x13099cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1309a0: 0xa4831278  sh          $v1, 0x1278($a0)
    ctx->pc = 0x1309a0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x1309a4: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1309A4u;
    {
        const bool branch_taken_0x1309a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1309a4) {
            ctx->pc = 0x1309F4u;
            return;
        }
    }
    ctx->pc = 0x1309ACu;
}
