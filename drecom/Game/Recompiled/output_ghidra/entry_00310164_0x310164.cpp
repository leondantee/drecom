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

// Function: entry_00310164
// Address: 0x310164 - 0x3101e4
void entry_00310164_0x310164(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00310164_0x310164");
#endif

    switch (ctx->pc) {
        case 0x31016cu: goto label_31016c;
        case 0x310188u: goto label_310188;
        case 0x3101d0u: goto label_3101d0;
        case 0x3101dcu: goto label_3101dc;
        default: break;
    }

    ctx->pc = 0x310164u;

    // 0x310164: 0xc06765c  jal         func_19D970
    ctx->pc = 0x310164u;
    SET_GPR_U32(ctx, 31, 0x31016Cu);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x310164u, 0x31016Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31016Cu;
label_31016c:
    // 0x31016c: 0x3c02437a  lui         $v0, 0x437A
    ctx->pc = 0x31016cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17274 << 16));
    // 0x310170: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x310170u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x310174: 0x0  nop
    ctx->pc = 0x310174u;
    // NOP
    // 0x310178: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x310178u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x31017c: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x31017cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x310180: 0xc06765c  jal         func_19D970
    ctx->pc = 0x310180u;
    SET_GPR_U32(ctx, 31, 0x310188u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x310180u, 0x310188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x310188u;
label_310188:
    // 0x310188: 0x3c02437a  lui         $v0, 0x437A
    ctx->pc = 0x310188u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17274 << 16));
    // 0x31018c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x31018cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x310190: 0x0  nop
    ctx->pc = 0x310190u;
    // NOP
    // 0x310194: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x310194u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x310198: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x310198u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x31019c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x31019cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3101a0: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x3101a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x3101a4: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x3101a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3101a8: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x3101a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x3101ac: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x3101acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x3101b0: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x3101b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x3101b4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3101b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3101b8: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x3101b8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3101bc: 0x24045500  addiu       $a0, $zero, 0x5500
    ctx->pc = 0x3101bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 21760));
    // 0x3101c0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x3101c0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3101c4: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x3101c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3101c8: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x3101C8u;
    SET_GPR_U32(ctx, 31, 0x3101D0u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x3101C8u, 0x3101D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3101D0u;
label_3101d0:
    // 0x3101d0: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x3101d0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x3101d4: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x3101D4u;
    SET_GPR_U32(ctx, 31, 0x3101DCu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x3101D4u, 0x3101DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3101DCu;
label_3101dc:
    // 0x3101dc: 0x100000e3  b           . + 4 + (0xE3 << 2)
    ctx->pc = 0x3101DCu;
    {
        const bool branch_taken_0x3101dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3101dc) {
            ctx->pc = 0x31056Cu;
            return;
        }
    }
    ctx->pc = 0x3101E4u;
}
