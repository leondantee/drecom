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

// Function: entry_0017f9e8
// Address: 0x17f9e8 - 0x17fa74
void entry_0017f9e8_0x17f9e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017f9e8_0x17f9e8");
#endif

    ctx->pc = 0x17f9e8u;

    // 0x17f9e8: 0x26020190  addiu       $v0, $s0, 0x190
    ctx->pc = 0x17f9e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 400));
    // 0x17f9ec: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x17f9ecu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17f9f0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x17f9f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x17f9f4: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x17f9f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x17f9f8: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x17f9f8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x17f9fc: 0x260201a0  addiu       $v0, $s0, 0x1A0
    ctx->pc = 0x17f9fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 416));
    // 0x17fa00: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x17fa00u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17fa04: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x17fa04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x17fa08: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x17fa08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x17fa0c: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x17fa0cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x17fa10: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x17fa10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x17fa14: 0x8422f138  lh          $v0, -0xEC8($at)
    ctx->pc = 0x17fa14u;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x47F138u));
    // 0x17fa18: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x17fa18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x17fa1c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x17fa1cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x17fa20: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x17fa20u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x17fa24: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17fa24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17fa28: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x17fa28u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x17fa2c: 0x3c02004a  lui         $v0, 0x4A
    ctx->pc = 0x17fa2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)74 << 16));
    // 0x17fa30: 0x24421380  addiu       $v0, $v0, 0x1380
    ctx->pc = 0x17fa30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4992));
    // 0x17fa34: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17fa34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17fa38: 0x24420090  addiu       $v0, $v0, 0x90
    ctx->pc = 0x17fa38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
    // 0x17fa3c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x17fa3cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17fa40: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x17fa40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x17fa44: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x17fa44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x17fa48: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x17fa48u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x17fa4c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x17fa4cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17fa50: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x17fa50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x17fa54: 0xe4400074  swc1        $f0, 0x74($v0)
    ctx->pc = 0x17fa54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 116), bits); }
    // 0x17fa58: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x17fa58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x17fa5c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17fa5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17fa60: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x17fa60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x17fa64: 0xe440003c  swc1        $f0, 0x3C($v0)
    ctx->pc = 0x17fa64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 60), bits); }
    // 0x17fa68: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x17fa68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x17fa6c: 0xc05fc1c  jal         func_17F070
    ctx->pc = 0x17FA6Cu;
    SET_GPR_U32(ctx, 31, 0x17FA74u);
    ctx->pc = 0x17F070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17F070u, 0x17FA6Cu, 0x17FA74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17FA74u;
}
