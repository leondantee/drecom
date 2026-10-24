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

// Function: entry_002a63d4
// Address: 0x2a63d4 - 0x2a6454
void entry_002a63d4_0x2a63d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002a63d4_0x2a63d4");
#endif

    switch (ctx->pc) {
        case 0x2a640cu: goto label_2a640c;
        case 0x2a6438u: goto label_2a6438;
        default: break;
    }

    ctx->pc = 0x2a63d4u;

    // 0x2a63d4: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x2a63d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x2a63d8: 0x84831278  lh          $v1, 0x1278($a0)
    ctx->pc = 0x2a63d8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4728)));
    // 0x2a63dc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2a63dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2a63e0: 0xa4831278  sh          $v1, 0x1278($a0)
    ctx->pc = 0x2a63e0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a63e4: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x2a63e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x2a63e8: 0x84831278  lh          $v1, 0x1278($a0)
    ctx->pc = 0x2a63e8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4728)));
    // 0x2a63ec: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x2a63ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x2a63f0: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x2a63f0u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x2a63f4: 0x3083000f  andi        $v1, $a0, 0xF
    ctx->pc = 0x2a63f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
    // 0x2a63f8: 0x14600016  bnez        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x2A63F8u;
    {
        const bool branch_taken_0x2a63f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a63f8) {
            ctx->pc = 0x2A6454u;
            return;
        }
    }
    ctx->pc = 0x2A6400u;
    // 0x2a6400: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x2a6400u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x2a6404: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x2A6404u;
    SET_GPR_U32(ctx, 31, 0x2A640Cu);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x2A6404u, 0x2A640Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A640Cu;
label_2a640c:
    // 0x2a640c: 0x3c02c2c8  lui         $v0, 0xC2C8
    ctx->pc = 0x2a640cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49864 << 16));
    // 0x2a6410: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a6410u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a6414: 0x0  nop
    ctx->pc = 0x2a6414u;
    // NOP
    // 0x2a6418: 0xe7a00114  swc1        $f0, 0x114($sp)
    ctx->pc = 0x2a6418u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
    // 0x2a641c: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x2a641cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x2a6420: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2a6420u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2a6424: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x2a6424u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x2a6428: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2a6428u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2a642c: 0x27a60110  addiu       $a2, $sp, 0x110
    ctx->pc = 0x2a642cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x2a6430: 0xc0c4acc  jal         func_312B30
    ctx->pc = 0x2A6430u;
    SET_GPR_U32(ctx, 31, 0x2A6438u);
    ctx->pc = 0x312B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312B30u, 0x2A6430u, 0x2A6438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6438u;
label_2a6438:
    // 0x2a6438: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x2a6438u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x2a643c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2a643cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2a6440: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x2a6440u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x2a6444: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2a6444u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a6448: 0x27a60110  addiu       $a2, $sp, 0x110
    ctx->pc = 0x2a6448u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x2a644c: 0xc0c4acc  jal         func_312B30
    ctx->pc = 0x2A644Cu;
    SET_GPR_U32(ctx, 31, 0x2A6454u);
    ctx->pc = 0x312B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312B30u, 0x2A644Cu, 0x2A6454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6454u;
}
