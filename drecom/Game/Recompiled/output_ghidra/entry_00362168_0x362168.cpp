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

// Function: entry_00362168
// Address: 0x362168 - 0x3621d0
void entry_00362168_0x362168(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00362168_0x362168");
#endif

    switch (ctx->pc) {
        case 0x362170u: goto label_362170;
        case 0x3621bcu: goto label_3621bc;
        case 0x3621c8u: goto label_3621c8;
        default: break;
    }

    ctx->pc = 0x362168u;

    // 0x362168: 0xc06765c  jal         func_19D970
    ctx->pc = 0x362168u;
    SET_GPR_U32(ctx, 31, 0x362170u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x362168u, 0x362170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x362170u;
label_362170:
    // 0x362170: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x362170u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x362174: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x362174u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x362178: 0x0  nop
    ctx->pc = 0x362178u;
    // NOP
    // 0x36217c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x36217cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x362180: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x362180u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x362184: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x362184u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x362188: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x362188u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x36218c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x36218cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x362190: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x362190u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x362194: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x362194u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x362198: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x362198u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x36219c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x36219cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x3621a0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3621a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3621a4: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x3621a4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3621a8: 0x24041301  addiu       $a0, $zero, 0x1301
    ctx->pc = 0x3621a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4865));
    // 0x3621ac: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x3621acu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3621b0: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x3621b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3621b4: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x3621B4u;
    SET_GPR_U32(ctx, 31, 0x3621BCu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x3621B4u, 0x3621BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3621BCu;
label_3621bc:
    // 0x3621bc: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x3621bcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x3621c0: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x3621C0u;
    SET_GPR_U32(ctx, 31, 0x3621C8u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x3621C0u, 0x3621C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3621C8u;
label_3621c8:
    // 0x3621c8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3621c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x3621cc: 0x0  nop
    ctx->pc = 0x3621ccu;
    // NOP
    ctx->pc = 0x3621d0u;
}
