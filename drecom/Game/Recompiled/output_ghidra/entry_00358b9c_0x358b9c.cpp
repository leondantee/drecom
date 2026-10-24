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

// Function: entry_00358b9c
// Address: 0x358b9c - 0x358c7c
void entry_00358b9c_0x358b9c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00358b9c_0x358b9c");
#endif

    switch (ctx->pc) {
        case 0x358bf8u: goto label_358bf8;
        case 0x358c04u: goto label_358c04;
        case 0x358c3cu: goto label_358c3c;
        case 0x358c54u: goto label_358c54;
        case 0x358c68u: goto label_358c68;
        default: break;
    }

    ctx->pc = 0x358b9cu;

    // 0x358b9c: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x358b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x358ba0: 0x8c4200c0  lw          $v0, 0xC0($v0)
    ctx->pc = 0x358ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x358ba4: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x358ba4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x358ba8: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x358ba8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x358bac: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x358bacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x358bb0: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x358bb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x358bb4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x358bb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x358bb8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x358bb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x358bbc: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x358bbcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x358bc0: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x358bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x358bc4: 0x8c4200c0  lw          $v0, 0xC0($v0)
    ctx->pc = 0x358bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x358bc8: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x358bc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x358bcc: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x358bccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x358bd0: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x358bd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x358bd4: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x358bd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x358bd8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x358bd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x358bdc: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x358bdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x358be0: 0x823825  or          $a3, $a0, $v0
    ctx->pc = 0x358be0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x358be4: 0x24041601  addiu       $a0, $zero, 0x1601
    ctx->pc = 0x358be4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5633));
    // 0x358be8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x358be8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x358bec: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x358becu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x358bf0: 0xc0631f0  jal         func_18C7C0
    ctx->pc = 0x358BF0u;
    SET_GPR_U32(ctx, 31, 0x358BF8u);
    ctx->pc = 0x18C7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C7C0u, 0x358BF0u, 0x358BF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358BF8u;
label_358bf8:
    // 0x358bf8: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x358bf8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x358bfc: 0xc06332c  jal         func_18CCB0
    ctx->pc = 0x358BFCu;
    SET_GPR_U32(ctx, 31, 0x358C04u);
    ctx->pc = 0x18CCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18CCB0u, 0x358BFCu, 0x358C04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358C04u;
label_358c04:
    // 0x358c04: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x358c04u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x358c08: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x358c08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x358c0c: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x358c0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x358c10: 0x1203001a  beq         $s0, $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x358C10u;
    {
        const bool branch_taken_0x358c10 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x358c10) {
            ctx->pc = 0x358C7Cu;
            return;
        }
    }
    ctx->pc = 0x358C18u;
    // 0x358c18: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x358c18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x358c1c: 0xc4400100  lwc1        $f0, 0x100($v0)
    ctx->pc = 0x358c1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x358c20: 0xe6000338  swc1        $f0, 0x338($s0)
    ctx->pc = 0x358c20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 824), bits); }
    // 0x358c24: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x358c24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x358c28: 0xc4400100  lwc1        $f0, 0x100($v0)
    ctx->pc = 0x358c28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x358c2c: 0xe600033c  swc1        $f0, 0x33C($s0)
    ctx->pc = 0x358c2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 828), bits); }
    // 0x358c30: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x358c30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x358c34: 0xc040cbc  jal         func_1032F0
    ctx->pc = 0x358C34u;
    SET_GPR_U32(ctx, 31, 0x358C3Cu);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x358C3Cu;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x358C3Cu) { return; }
    ctx->pc = 0x358C3Cu;
label_358c3c:
    // 0x358c3c: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x358c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x358c40: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x358c40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x358c44: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x358c44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x358c48: 0x244600b0  addiu       $a2, $v0, 0xB0
    ctx->pc = 0x358c48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 176));
    // 0x358c4c: 0xc040d62  jal         func_103588
    ctx->pc = 0x358C4Cu;
    SET_GPR_U32(ctx, 31, 0x358C54u);
    ctx->pc = 0x103588u;
    {
        ctx->pc = 0x358C54u;
        ps2_stubs::sceVu0RotMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x358C54u) { return; }
    ctx->pc = 0x358C54u;
label_358c54:
    // 0x358c54: 0x260402f0  addiu       $a0, $s0, 0x2F0
    ctx->pc = 0x358c54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 752));
    // 0x358c58: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x358c58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x358c5c: 0x260602f0  addiu       $a2, $s0, 0x2F0
    ctx->pc = 0x358c5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 752));
    // 0x358c60: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x358C60u;
    SET_GPR_U32(ctx, 31, 0x358C68u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x358C68u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x358C68u) { return; }
    ctx->pc = 0x358C68u;
label_358c68:
    // 0x358c68: 0x26040300  addiu       $a0, $s0, 0x300
    ctx->pc = 0x358c68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 768));
    // 0x358c6c: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x358c6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x358c70: 0x26060300  addiu       $a2, $s0, 0x300
    ctx->pc = 0x358c70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 768));
    // 0x358c74: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x358C74u;
    SET_GPR_U32(ctx, 31, 0x358C7Cu);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x358C7Cu;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x358C7Cu) { return; }
    ctx->pc = 0x358C7Cu;
}
