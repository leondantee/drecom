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

// Function: entry_002c6fbc
// Address: 0x2c6fbc - 0x2c70a8
void entry_002c6fbc_0x2c6fbc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002c6fbc_0x2c6fbc");
#endif

    switch (ctx->pc) {
        case 0x2c6fc8u: goto label_2c6fc8;
        case 0x2c7034u: goto label_2c7034;
        case 0x2c7040u: goto label_2c7040;
        case 0x2c709cu: goto label_2c709c;
        default: break;
    }

    ctx->pc = 0x2c6fbcu;

    // 0x2c6fbc: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x2c6fbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2c6fc0: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x2C6FC0u;
    SET_GPR_U32(ctx, 31, 0x2C6FC8u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x2C6FC0u, 0x2C6FC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C6FC8u;
label_2c6fc8:
    // 0x2c6fc8: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x2c6fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x2c6fcc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c6fccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c6fd0: 0x0  nop
    ctx->pc = 0x2c6fd0u;
    // NOP
    // 0x2c6fd4: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x2c6fd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2c6fd8: 0x3c023e99  lui         $v0, 0x3E99
    ctx->pc = 0x2c6fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16025 << 16));
    // 0x2c6fdc: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x2c6fdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x2c6fe0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c6fe0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c6fe4: 0x0  nop
    ctx->pc = 0x2c6fe4u;
    // NOP
    // 0x2c6fe8: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x2c6fe8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x2c6fec: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x2c6fecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x2c6ff0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c6ff0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c6ff4: 0x0  nop
    ctx->pc = 0x2c6ff4u;
    // NOP
    // 0x2c6ff8: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x2c6ff8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2c6ffc: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2c6ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c7000: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x2c7000u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2c7004: 0x24420080  addiu       $v0, $v0, 0x80
    ctx->pc = 0x2c7004u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x2c7008: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2c7008u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2c700c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2c700cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2c7010: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2c7010u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2c7014: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2c7014u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2c7018: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2c7018u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2c701c: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x2c701cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2c7020: 0x2404170d  addiu       $a0, $zero, 0x170D
    ctx->pc = 0x2c7020u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5901));
    // 0x2c7024: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2c7024u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2c7028: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x2c7028u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2c702c: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x2C702Cu;
    SET_GPR_U32(ctx, 31, 0x2C7034u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x2C702Cu, 0x2C7034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C7034u;
label_2c7034:
    // 0x2c7034: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2c7034u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2c7038: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x2C7038u;
    SET_GPR_U32(ctx, 31, 0x2C7040u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x2C7038u, 0x2C7040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C7040u;
label_2c7040:
    // 0x2c7040: 0x3c02c220  lui         $v0, 0xC220
    ctx->pc = 0x2c7040u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49696 << 16));
    // 0x2c7044: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c7044u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c7048: 0x0  nop
    ctx->pc = 0x2c7048u;
    // NOP
    // 0x2c704c: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x2c704cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2c7050: 0x3c023e99  lui         $v0, 0x3E99
    ctx->pc = 0x2c7050u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16025 << 16));
    // 0x2c7054: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x2c7054u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x2c7058: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c7058u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c705c: 0x0  nop
    ctx->pc = 0x2c705cu;
    // NOP
    // 0x2c7060: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x2c7060u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x2c7064: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2c7064u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c7068: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x2c7068u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2c706c: 0x24420080  addiu       $v0, $v0, 0x80
    ctx->pc = 0x2c706cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x2c7070: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2c7070u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2c7074: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2c7074u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2c7078: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2c7078u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2c707c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2c707cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2c7080: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2c7080u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2c7084: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x2c7084u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2c7088: 0x2404170d  addiu       $a0, $zero, 0x170D
    ctx->pc = 0x2c7088u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5901));
    // 0x2c708c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2c708cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2c7090: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x2c7090u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2c7094: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x2C7094u;
    SET_GPR_U32(ctx, 31, 0x2C709Cu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x2C7094u, 0x2C709Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C709Cu;
label_2c709c:
    // 0x2c709c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2c709cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2c70a0: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x2C70A0u;
    SET_GPR_U32(ctx, 31, 0x2C70A8u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x2C70A0u, 0x2C70A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C70A8u;
}
