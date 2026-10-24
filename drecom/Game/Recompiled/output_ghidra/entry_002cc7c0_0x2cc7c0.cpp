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

// Function: entry_002cc7c0
// Address: 0x2cc7c0 - 0x2cc840
void entry_002cc7c0_0x2cc7c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002cc7c0_0x2cc7c0");
#endif

    switch (ctx->pc) {
        case 0x2cc7f8u: goto label_2cc7f8;
        case 0x2cc814u: goto label_2cc814;
        default: break;
    }

    ctx->pc = 0x2cc7c0u;

    // 0x2cc7c0: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2cc7c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2cc7c4: 0x84621278  lh          $v0, 0x1278($v1)
    ctx->pc = 0x2cc7c4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x2cc7c8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2cc7c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2cc7cc: 0xa4621278  sh          $v0, 0x1278($v1)
    ctx->pc = 0x2cc7ccu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 2));
    // 0x2cc7d0: 0x8fb00058  lw          $s0, 0x58($sp)
    ctx->pc = 0x2cc7d0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2cc7d4: 0x86031278  lh          $v1, 0x1278($s0)
    ctx->pc = 0x2cc7d4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4728)));
    // 0x2cc7d8: 0x3143c  dsll32      $v0, $v1, 16
    ctx->pc = 0x2cc7d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 16));
    // 0x2cc7dc: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2cc7dcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2cc7e0: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x2cc7e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x2cc7e4: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2CC7E4u;
    {
        const bool branch_taken_0x2cc7e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cc7e4) {
            ctx->pc = 0x2CC840u;
            return;
        }
    }
    ctx->pc = 0x2CC7ECu;
    // 0x2cc7ec: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x2cc7ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2cc7f0: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x2CC7F0u;
    SET_GPR_U32(ctx, 31, 0x2CC7F8u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x2CC7F0u, 0x2CC7F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC7F8u;
label_2cc7f8:
    // 0x2cc7f8: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x2cc7f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x2cc7fc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2cc7fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2cc800: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x2cc800u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2cc804: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2cc804u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2cc808: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x2cc808u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2cc80c: 0xc0c4acc  jal         func_312B30
    ctx->pc = 0x2CC80Cu;
    SET_GPR_U32(ctx, 31, 0x2CC814u);
    ctx->pc = 0x312B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312B30u, 0x2CC80Cu, 0x2CC814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC814u;
label_2cc814:
    // 0x2cc814: 0x3c02c348  lui         $v0, 0xC348
    ctx->pc = 0x2cc814u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49992 << 16));
    // 0x2cc818: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2cc818u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cc81c: 0x0  nop
    ctx->pc = 0x2cc81cu;
    // NOP
    // 0x2cc820: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x2cc820u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x2cc824: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x2cc824u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x2cc828: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2cc828u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2cc82c: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x2cc82cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2cc830: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2cc830u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2cc834: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x2cc834u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2cc838: 0xc0c4acc  jal         func_312B30
    ctx->pc = 0x2CC838u;
    SET_GPR_U32(ctx, 31, 0x2CC840u);
    ctx->pc = 0x312B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312B30u, 0x2CC838u, 0x2CC840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC840u;
}
