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

// Function: entry_00358ecc
// Address: 0x358ecc - 0x358fbc
void entry_00358ecc_0x358ecc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00358ecc_0x358ecc");
#endif

    switch (ctx->pc) {
        case 0x358f74u: goto label_358f74;
        case 0x358f80u: goto label_358f80;
        default: break;
    }

    ctx->pc = 0x358eccu;

    // 0x358ecc: 0xc7a10030  lwc1        $f1, 0x30($sp)
    ctx->pc = 0x358eccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x358ed0: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x358ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x358ed4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x358ed4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x358ed8: 0x0  nop
    ctx->pc = 0x358ed8u;
    // NOP
    // 0x358edc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x358edcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x358ee0: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x358ee0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x358ee4: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x358ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x358ee8: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x358ee8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x358eec: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x358eecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x358ef0: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x358ef0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x358ef4: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x358ef4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x358ef8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x358ef8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x358efc: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x358efcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x358f00: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x358f00u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x358f04: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x358f04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x358f08: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x358f08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x358f0c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x358f0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x358f10: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x358f10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x358f14: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x358f14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x358f18: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x358f18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x358f1c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x358f1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x358f20: 0x822825  or          $a1, $a0, $v0
    ctx->pc = 0x358f20u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x358f24: 0x26020180  addiu       $v0, $s0, 0x180
    ctx->pc = 0x358f24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 384));
    // 0x358f28: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x358f28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x358f2c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x358f2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x358f30: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x358f30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x358f34: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x358f34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x358f38: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x358f38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x358f3c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x358f3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x358f40: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x358f40u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x358f44: 0x26020180  addiu       $v0, $s0, 0x180
    ctx->pc = 0x358f44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 384));
    // 0x358f48: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x358f48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x358f4c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x358f4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x358f50: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x358f50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x358f54: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x358f54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x358f58: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x358f58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x358f5c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x358f5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x358f60: 0x823825  or          $a3, $a0, $v0
    ctx->pc = 0x358f60u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x358f64: 0x24041101  addiu       $a0, $zero, 0x1101
    ctx->pc = 0x358f64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4353));
    // 0x358f68: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x358f68u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x358f6c: 0xc0631f0  jal         func_18C7C0
    ctx->pc = 0x358F6Cu;
    SET_GPR_U32(ctx, 31, 0x358F74u);
    ctx->pc = 0x18C7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C7C0u, 0x358F6Cu, 0x358F74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358F74u;
label_358f74:
    // 0x358f74: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x358f74u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x358f78: 0xc06332c  jal         func_18CCB0
    ctx->pc = 0x358F78u;
    SET_GPR_U32(ctx, 31, 0x358F80u);
    ctx->pc = 0x18CCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18CCB0u, 0x358F78u, 0x358F80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358F80u;
label_358f80:
    // 0x358f80: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x358f80u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x358f84: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x358f84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x358f88: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x358f88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x358f8c: 0x1223000b  beq         $s1, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x358F8Cu;
    {
        const bool branch_taken_0x358f8c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        if (branch_taken_0x358f8c) {
            ctx->pc = 0x358FBCu;
            return;
        }
    }
    ctx->pc = 0x358F94u;
    // 0x358f94: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x358f94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x358f98: 0xac700100  sw          $s0, 0x100($v1)
    ctx->pc = 0x358f98u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 256), GPR_U32(ctx, 16));
    // 0x358f9c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x358f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x358fa0: 0xac710104  sw          $s1, 0x104($v1)
    ctx->pc = 0x358fa0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 260), GPR_U32(ctx, 17));
    // 0x358fa4: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x358fa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x358fa8: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x358fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x358fac: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x358facu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x358fb0: 0xac830014  sw          $v1, 0x14($a0)
    ctx->pc = 0x358fb0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 3));
    // 0x358fb4: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x358FB4u;
    {
        const bool branch_taken_0x358fb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x358fb4) {
            ctx->pc = 0x358FF4u;
            return;
        }
    }
    ctx->pc = 0x358FBCu;
}
