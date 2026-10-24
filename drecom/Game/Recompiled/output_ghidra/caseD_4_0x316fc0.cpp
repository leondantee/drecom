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

// Function: caseD_4
// Address: 0x316fc0 - 0x318020
void caseD_4_0x316fc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_4_0x316fc0");
#endif

    switch (ctx->pc) {
        case 0x317058u: goto label_317058;
        case 0x317064u: goto label_317064;
        case 0x3170b4u: goto label_3170b4;
        case 0x3170c0u: goto label_3170c0;
        case 0x3170f8u: goto label_3170f8;
        case 0x317104u: goto label_317104;
        case 0x317244u: goto label_317244;
        case 0x317250u: goto label_317250;
        case 0x317364u: goto label_317364;
        case 0x317370u: goto label_317370;
        case 0x317488u: goto label_317488;
        case 0x317494u: goto label_317494;
        case 0x3175b0u: goto label_3175b0;
        case 0x3175bcu: goto label_3175bc;
        case 0x3176d8u: goto label_3176d8;
        case 0x3176e4u: goto label_3176e4;
        case 0x317808u: goto label_317808;
        case 0x317814u: goto label_317814;
        case 0x317938u: goto label_317938;
        case 0x317944u: goto label_317944;
        case 0x317a60u: goto label_317a60;
        case 0x317a6cu: goto label_317a6c;
        case 0x317b84u: goto label_317b84;
        case 0x317b90u: goto label_317b90;
        case 0x317cb4u: goto label_317cb4;
        case 0x317cc0u: goto label_317cc0;
        case 0x317d40u: goto label_317d40;
        case 0x317d4cu: goto label_317d4c;
        case 0x317e9cu: goto label_317e9c;
        case 0x317ea8u: goto label_317ea8;
        case 0x317fc8u: goto label_317fc8;
        case 0x317fd4u: goto label_317fd4;
        default: break;
    }

    ctx->pc = 0x316fc0u;

    // 0x316fc0: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x316fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x316fc4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x316fc4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x316fc8: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x316fc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x316fcc: 0xe48001a0  swc1        $f0, 0x1A0($a0)
    ctx->pc = 0x316fccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 416), bits); }
    // 0x316fd0: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x316fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x316fd4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x316fd4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x316fd8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x316fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x316fdc: 0xe46001a4  swc1        $f0, 0x1A4($v1)
    ctx->pc = 0x316fdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 420), bits); }
    // 0x316fe0: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x316fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x316fe4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x316fe4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x316fe8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x316fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x316fec: 0xe44001a8  swc1        $f0, 0x1A8($v0)
    ctx->pc = 0x316fecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 424), bits); }
    // 0x316ff0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x316ff0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x316ff4: 0x0  nop
    ctx->pc = 0x316ff4u;
    // NOP
    // 0x316ff8: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x316ff8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x316ffc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x316ffcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x317000: 0x0  nop
    ctx->pc = 0x317000u;
    // NOP
    // 0x317004: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x317004u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x317008: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x317008u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31700c: 0x0  nop
    ctx->pc = 0x31700cu;
    // NOP
    // 0x317010: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x317010u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x317014: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x317014u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x317018: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x317018u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31701c: 0x0  nop
    ctx->pc = 0x31701cu;
    // NOP
    // 0x317020: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x317020u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x317024: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x317024u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x317028: 0x8c430130  lw          $v1, 0x130($v0)
    ctx->pc = 0x317028u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x31702c: 0x3303c  dsll32      $a2, $v1, 0
    ctx->pc = 0x31702cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 0));
    // 0x317030: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x317030u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x317034: 0x3404ffff  ori         $a0, $zero, 0xFFFF
    ctx->pc = 0x317034u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x317038: 0x41438  dsll        $v0, $a0, 16
    ctx->pc = 0x317038u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << 16);
    // 0x31703c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x31703cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x317040: 0xc23824  and         $a3, $a2, $v0
    ctx->pc = 0x317040u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x317044: 0x24044500  addiu       $a0, $zero, 0x4500
    ctx->pc = 0x317044u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17664));
    // 0x317048: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x317048u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x31704c: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x31704cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x317050: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x317050u;
    SET_GPR_U32(ctx, 31, 0x317058u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x317050u, 0x317058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x317058u;
label_317058:
    // 0x317058: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x317058u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x31705c: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x31705Cu;
    SET_GPR_U32(ctx, 31, 0x317064u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x31705Cu, 0x317064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x317064u;
label_317064:
    // 0x317064: 0x3c044040  lui         $a0, 0x4040
    ctx->pc = 0x317064u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16448 << 16));
    // 0x317068: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x317068u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31706c: 0x0  nop
    ctx->pc = 0x31706cu;
    // NOP
    // 0x317070: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x317070u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x317074: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x317074u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x317078: 0x8c8b1298  lw          $t3, 0x1298($a0)
    ctx->pc = 0x317078u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4760)));
    // 0x31707c: 0xb1180  sll         $v0, $t3, 6
    ctx->pc = 0x31707cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 11), 6));
    // 0x317080: 0x8e0a0130  lw          $t2, 0x130($s0)
    ctx->pc = 0x317080u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
    // 0x317084: 0x1423821  addu        $a3, $t2, $v0
    ctx->pc = 0x317084u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
    // 0x317088: 0x7303c  dsll32      $a2, $a3, 0
    ctx->pc = 0x317088u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) << (32 + 0));
    // 0x31708c: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x31708cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x317090: 0x3404ffff  ori         $a0, $zero, 0xFFFF
    ctx->pc = 0x317090u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x317094: 0x41438  dsll        $v0, $a0, 16
    ctx->pc = 0x317094u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << 16);
    // 0x317098: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x317098u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x31709c: 0xc23824  and         $a3, $a2, $v0
    ctx->pc = 0x31709cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x3170a0: 0x24045703  addiu       $a0, $zero, 0x5703
    ctx->pc = 0x3170a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 22275));
    // 0x3170a4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x3170a4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3170a8: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x3170a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3170ac: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x3170ACu;
    SET_GPR_U32(ctx, 31, 0x3170B4u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x3170ACu, 0x3170B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3170B4u;
label_3170b4:
    // 0x3170b4: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x3170b4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x3170b8: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x3170B8u;
    SET_GPR_U32(ctx, 31, 0x3170C0u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x3170B8u, 0x3170C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3170C0u;
label_3170c0:
    // 0x3170c0: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x3170c0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x3170c4: 0x8fa90048  lw          $t1, 0x48($sp)
    ctx->pc = 0x3170c4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3170c8: 0x8d240130  lw          $a0, 0x130($t1)
    ctx->pc = 0x3170c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 304)));
    // 0x3170cc: 0x4403c  dsll32      $t0, $a0, 0
    ctx->pc = 0x3170ccu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 4) << (32 + 0));
    // 0x3170d0: 0x8403e  dsrl32      $t0, $t0, 0
    ctx->pc = 0x3170d0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) >> (32 + 0));
    // 0x3170d4: 0x3407ffff  ori         $a3, $zero, 0xFFFF
    ctx->pc = 0x3170d4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x3170d8: 0x72438  dsll        $a0, $a3, 16
    ctx->pc = 0x3170d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) << 16);
    // 0x3170dc: 0x3482ffff  ori         $v0, $a0, 0xFFFF
    ctx->pc = 0x3170dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x3170e0: 0x1023824  and         $a3, $t0, $v0
    ctx->pc = 0x3170e0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
    // 0x3170e4: 0x24045703  addiu       $a0, $zero, 0x5703
    ctx->pc = 0x3170e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 22275));
    // 0x3170e8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x3170e8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3170ec: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x3170ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3170f0: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x3170F0u;
    SET_GPR_U32(ctx, 31, 0x3170F8u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x3170F0u, 0x3170F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3170F8u;
label_3170f8:
    // 0x3170f8: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x3170f8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x3170fc: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x3170FCu;
    SET_GPR_U32(ctx, 31, 0x317104u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x3170FCu, 0x317104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x317104u;
label_317104:
    // 0x317104: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x317104u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x317108: 0x0  nop
    ctx->pc = 0x317108u;
    // NOP
    // 0x31710c: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x31710cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x317110: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x317110u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x317114: 0x0  nop
    ctx->pc = 0x317114u;
    // NOP
    // 0x317118: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x317118u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x31711c: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x31711cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x317120: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x317120u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x317124: 0x0  nop
    ctx->pc = 0x317124u;
    // NOP
    // 0x317128: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x317128u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x31712c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x31712cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x317130: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x317130u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x317134: 0x0  nop
    ctx->pc = 0x317134u;
    // NOP
    // 0x317138: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x317138u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x31713c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x31713cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x317140: 0x0  nop
    ctx->pc = 0x317140u;
    // NOP
    // 0x317144: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x317144u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x317148: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x317148u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31714c: 0x0  nop
    ctx->pc = 0x31714cu;
    // NOP
    // 0x317150: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x317150u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x317154: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x317154u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x317158: 0x0  nop
    ctx->pc = 0x317158u;
    // NOP
    // 0x31715c: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x31715cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x317160: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x317160u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x317164: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x317164u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x317168: 0x0  nop
    ctx->pc = 0x317168u;
    // NOP
    // 0x31716c: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x31716cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x317170: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x317170u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x317174: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x317174u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x317178: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x317178u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x31717c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x31717cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x317180: 0x21c38  dsll        $v1, $v0, 16
    ctx->pc = 0x317180u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << 16);
    // 0x317184: 0x3462ffff  ori         $v0, $v1, 0xFFFF
    ctx->pc = 0x317184u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x317188: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x317188u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x31718c: 0x2283c  dsll32      $a1, $v0, 0
    ctx->pc = 0x31718cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 0));
    // 0x317190: 0x27a70030  addiu       $a3, $sp, 0x30
    ctx->pc = 0x317190u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x317194: 0x7203c  dsll32      $a0, $a3, 0
    ctx->pc = 0x317194u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) << (32 + 0));
    // 0x317198: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x317198u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x31719c: 0x3406ffff  ori         $a2, $zero, 0xFFFF
    ctx->pc = 0x31719cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x3171a0: 0x61438  dsll        $v0, $a2, 16
    ctx->pc = 0x3171a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << 16);
    // 0x3171a4: 0x3443ffff  ori         $v1, $v0, 0xFFFF
    ctx->pc = 0x3171a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3171a8: 0x833024  and         $a2, $a0, $v1
    ctx->pc = 0x3171a8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x3171ac: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x3171acu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    // 0x3171b0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x3171b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3171b4: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x3171b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x3171b8: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x3171b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x3171bc: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x3171bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x3171c0: 0x34438  dsll        $t0, $v1, 16
    ctx->pc = 0x3171c0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) << 16);
    // 0x3171c4: 0x3503ffff  ori         $v1, $t0, 0xFFFF
    ctx->pc = 0x3171c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x3171c8: 0x833824  and         $a3, $a0, $v1
    ctx->pc = 0x3171c8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x3171cc: 0x7303c  dsll32      $a2, $a3, 0
    ctx->pc = 0x3171ccu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) << (32 + 0));
    // 0x3171d0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x3171d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3171d4: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x3171d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x3171d8: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x3171d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x3171dc: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x3171dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x3171e0: 0x35438  dsll        $t2, $v1, 16
    ctx->pc = 0x3171e0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) << 16);
    // 0x3171e4: 0x3543ffff  ori         $v1, $t2, 0xFFFF
    ctx->pc = 0x3171e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)65535);
    // 0x3171e8: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x3171e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x3171ec: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x3171ecu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x3171f0: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x3171f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3171f4: 0x8c830130  lw          $v1, 0x130($a0)
    ctx->pc = 0x3171f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
    // 0x3171f8: 0x3383c  dsll32      $a3, $v1, 0
    ctx->pc = 0x3171f8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) << (32 + 0));
    // 0x3171fc: 0x7383e  dsrl32      $a3, $a3, 0
    ctx->pc = 0x3171fcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) >> (32 + 0));
    // 0x317200: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x317200u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x317204: 0x34438  dsll        $t0, $v1, 16
    ctx->pc = 0x317204u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) << 16);
    // 0x317208: 0x3504ffff  ori         $a0, $t0, 0xFFFF
    ctx->pc = 0x317208u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x31720c: 0xe41824  and         $v1, $a3, $a0
    ctx->pc = 0x31720cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & GPR_U64(ctx, 4));
    // 0x317210: 0x3483c  dsll32      $t1, $v1, 0
    ctx->pc = 0x317210u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 3) << (32 + 0));
    // 0x317214: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x317214u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x317218: 0x8c630130  lw          $v1, 0x130($v1)
    ctx->pc = 0x317218u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x31721c: 0x3383c  dsll32      $a3, $v1, 0
    ctx->pc = 0x31721cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) << (32 + 0));
    // 0x317220: 0x7383e  dsrl32      $a3, $a3, 0
    ctx->pc = 0x317220u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) >> (32 + 0));
    // 0x317224: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x317224u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x317228: 0x34438  dsll        $t0, $v1, 16
    ctx->pc = 0x317228u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) << 16);
    // 0x31722c: 0x3504ffff  ori         $a0, $t0, 0xFFFF
    ctx->pc = 0x31722cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x317230: 0xe41024  and         $v0, $a3, $a0
    ctx->pc = 0x317230u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 4));
    // 0x317234: 0x1223825  or          $a3, $t1, $v0
    ctx->pc = 0x317234u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 9) | GPR_U64(ctx, 2));
    // 0x317238: 0x24041100  addiu       $a0, $zero, 0x1100
    ctx->pc = 0x317238u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4352));
    // 0x31723c: 0xc0631f0  jal         func_18C7C0
    ctx->pc = 0x31723Cu;
    SET_GPR_U32(ctx, 31, 0x317244u);
    ctx->pc = 0x18C7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C7C0u, 0x31723Cu, 0x317244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x317244u;
label_317244:
    // 0x317244: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x317244u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x317248: 0xc06332c  jal         func_18CCB0
    ctx->pc = 0x317248u;
    SET_GPR_U32(ctx, 31, 0x317250u);
    ctx->pc = 0x18CCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18CCB0u, 0x317248u, 0x317250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x317250u;
label_317250:
    // 0x317250: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x317250u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x317254: 0x0  nop
    ctx->pc = 0x317254u;
    // NOP
    // 0x317258: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x317258u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x31725c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x31725cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x317260: 0x0  nop
    ctx->pc = 0x317260u;
    // NOP
    // 0x317264: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x317264u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x317268: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x317268u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x31726c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x31726cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x317270: 0x0  nop
    ctx->pc = 0x317270u;
    // NOP
    // 0x317274: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x317274u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x317278: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x317278u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x31727c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x31727cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x317280: 0x0  nop
    ctx->pc = 0x317280u;
    // NOP
    // 0x317284: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x317284u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x317288: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x317288u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x31728c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x31728cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x317290: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x317290u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x317294: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x317294u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x317298: 0x22438  dsll        $a0, $v0, 16
    ctx->pc = 0x317298u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << 16);
    // 0x31729c: 0x3482ffff  ori         $v0, $a0, 0xFFFF
    ctx->pc = 0x31729cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x3172a0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x3172a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3172a4: 0x3283c  dsll32      $a1, $v1, 0
    ctx->pc = 0x3172a4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 0));
    // 0x3172a8: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x3172a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3172ac: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x3172acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3172b0: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x3172b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x3172b4: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x3172b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x3172b8: 0x21c38  dsll        $v1, $v0, 16
    ctx->pc = 0x3172b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << 16);
    // 0x3172bc: 0x3462ffff  ori         $v0, $v1, 0xFFFF
    ctx->pc = 0x3172bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x3172c0: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x3172c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x3172c4: 0xa24025  or          $t0, $a1, $v0
    ctx->pc = 0x3172c4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x3172c8: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x3172c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3172cc: 0x5183c  dsll32      $v1, $a1, 0
    ctx->pc = 0x3172ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 0));
    // 0x3172d0: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x3172d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x3172d4: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x3172d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x3172d8: 0x22438  dsll        $a0, $v0, 16
    ctx->pc = 0x3172d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << 16);
    // 0x3172dc: 0x3482ffff  ori         $v0, $a0, 0xFFFF
    ctx->pc = 0x3172dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x3172e0: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x3172e0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3172e4: 0x7303c  dsll32      $a2, $a3, 0
    ctx->pc = 0x3172e4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) << (32 + 0));
    // 0x3172e8: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x3172e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3172ec: 0x4283c  dsll32      $a1, $a0, 0
    ctx->pc = 0x3172ecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 0));
    // 0x3172f0: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x3172f0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x3172f4: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x3172f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x3172f8: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x3172f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x3172fc: 0x3444ffff  ori         $a0, $v0, 0xFFFF
    ctx->pc = 0x3172fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x317300: 0xa46024  and         $t4, $a1, $a0
    ctx->pc = 0x317300u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x317304: 0xcc5825  or          $t3, $a2, $t4
    ctx->pc = 0x317304u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 6) | GPR_U64(ctx, 12));
    // 0x317308: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x317308u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31730c: 0x8c4a0130  lw          $t2, 0x130($v0)
    ctx->pc = 0x31730cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x317310: 0xa283c  dsll32      $a1, $t2, 0
    ctx->pc = 0x317310u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 10) << (32 + 0));
    // 0x317314: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x317314u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x317318: 0x3406ffff  ori         $a2, $zero, 0xFFFF
    ctx->pc = 0x317318u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x31731c: 0x61438  dsll        $v0, $a2, 16
    ctx->pc = 0x31731cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << 16);
    // 0x317320: 0x3444ffff  ori         $a0, $v0, 0xFFFF
    ctx->pc = 0x317320u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x317324: 0xa42024  and         $a0, $a1, $a0
    ctx->pc = 0x317324u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x317328: 0x4383c  dsll32      $a3, $a0, 0
    ctx->pc = 0x317328u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) << (32 + 0));
    // 0x31732c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x31732cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x317330: 0x8c890130  lw          $t1, 0x130($a0)
    ctx->pc = 0x317330u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
    // 0x317334: 0x9303c  dsll32      $a2, $t1, 0
    ctx->pc = 0x317334u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 9) << (32 + 0));
    // 0x317338: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x317338u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x31733c: 0x3404ffff  ori         $a0, $zero, 0xFFFF
    ctx->pc = 0x31733cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x317340: 0x42c38  dsll        $a1, $a0, 16
    ctx->pc = 0x317340u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << 16);
    // 0x317344: 0x34a4ffff  ori         $a0, $a1, 0xFFFF
    ctx->pc = 0x317344u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x317348: 0xc41024  and         $v0, $a2, $a0
    ctx->pc = 0x317348u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 4));
    // 0x31734c: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x31734cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x317350: 0x24041100  addiu       $a0, $zero, 0x1100
    ctx->pc = 0x317350u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4352));
    // 0x317354: 0x71002e28  paddub      $a1, $t0, $zero
    ctx->pc = 0x317354u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x317358: 0x71603628  paddub      $a2, $t3, $zero
    ctx->pc = 0x317358u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 11), GPR_VEC(ctx, 0)));
    // 0x31735c: 0xc0631f0  jal         func_18C7C0
    ctx->pc = 0x31735Cu;
    SET_GPR_U32(ctx, 31, 0x317364u);
    ctx->pc = 0x18C7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C7C0u, 0x31735Cu, 0x317364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x317364u;
label_317364:
    // 0x317364: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x317364u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x317368: 0xc06332c  jal         func_18CCB0
    ctx->pc = 0x317368u;
    SET_GPR_U32(ctx, 31, 0x317370u);
    ctx->pc = 0x18CCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18CCB0u, 0x317368u, 0x317370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x317370u;
label_317370:
    // 0x317370: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x317370u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x317374: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x317374u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x317378: 0x0  nop
    ctx->pc = 0x317378u;
    // NOP
    // 0x31737c: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x31737cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x317380: 0x3c02c416  lui         $v0, 0xC416
    ctx->pc = 0x317380u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50198 << 16));
    // 0x317384: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x317384u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x317388: 0x0  nop
    ctx->pc = 0x317388u;
    // NOP
    // 0x31738c: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x31738cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x317390: 0x3c02c4fa  lui         $v0, 0xC4FA
    ctx->pc = 0x317390u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50426 << 16));
    // 0x317394: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x317394u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x317398: 0x0  nop
    ctx->pc = 0x317398u;
    // NOP
    // 0x31739c: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x31739cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x3173a0: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x3173a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x3173a4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3173a4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3173a8: 0x0  nop
    ctx->pc = 0x3173a8u;
    // NOP
    // 0x3173ac: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x3173acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x3173b0: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x3173b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3173b4: 0x2283c  dsll32      $a1, $v0, 0
    ctx->pc = 0x3173b4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3173b8: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x3173b8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x3173bc: 0x3404ffff  ori         $a0, $zero, 0xFFFF
    ctx->pc = 0x3173bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x3173c0: 0x41438  dsll        $v0, $a0, 16
    ctx->pc = 0x3173c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << 16);
    // 0x3173c4: 0x3443ffff  ori         $v1, $v0, 0xFFFF
    ctx->pc = 0x3173c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3173c8: 0xa31024  and         $v0, $a1, $v1
    ctx->pc = 0x3173c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x3173cc: 0x2383c  dsll32      $a3, $v0, 0
    ctx->pc = 0x3173ccu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3173d0: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x3173d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3173d4: 0x4303c  dsll32      $a2, $a0, 0
    ctx->pc = 0x3173d4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) << (32 + 0));
    // 0x3173d8: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x3173d8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x3173dc: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x3173dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x3173e0: 0x21c38  dsll        $v1, $v0, 16
    ctx->pc = 0x3173e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << 16);
    // 0x3173e4: 0x3464ffff  ori         $a0, $v1, 0xFFFF
    ctx->pc = 0x3173e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x3173e8: 0xc41824  and         $v1, $a2, $a0
    ctx->pc = 0x3173e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 4));
    // 0x3173ec: 0xe32825  or          $a1, $a3, $v1
    ctx->pc = 0x3173ecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x3173f0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x3173f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3173f4: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x3173f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x3173f8: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x3173f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x3173fc: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x3173fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x317400: 0x31438  dsll        $v0, $v1, 16
    ctx->pc = 0x317400u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << 16);
    // 0x317404: 0x3446ffff  ori         $a2, $v0, 0xFFFF
    ctx->pc = 0x317404u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x317408: 0x862024  and         $a0, $a0, $a2
    ctx->pc = 0x317408u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 6));
    // 0x31740c: 0x4403c  dsll32      $t0, $a0, 0
    ctx->pc = 0x31740cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 4) << (32 + 0));
    // 0x317410: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x317410u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x317414: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x317414u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x317418: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x317418u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x31741c: 0x3407ffff  ori         $a3, $zero, 0xFFFF
    ctx->pc = 0x31741cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x317420: 0x72438  dsll        $a0, $a3, 16
    ctx->pc = 0x317420u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) << 16);
    // 0x317424: 0x3486ffff  ori         $a2, $a0, 0xFFFF
    ctx->pc = 0x317424u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x317428: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x317428u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x31742c: 0x1021025  or          $v0, $t0, $v0
    ctx->pc = 0x31742cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x317430: 0x8fa80048  lw          $t0, 0x48($sp)
    ctx->pc = 0x317430u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x317434: 0x8d040130  lw          $a0, 0x130($t0)
    ctx->pc = 0x317434u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 304)));
    // 0x317438: 0x4303c  dsll32      $a2, $a0, 0
    ctx->pc = 0x317438u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) << (32 + 0));
    // 0x31743c: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x31743cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x317440: 0x3407ffff  ori         $a3, $zero, 0xFFFF
    ctx->pc = 0x317440u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x317444: 0x72438  dsll        $a0, $a3, 16
    ctx->pc = 0x317444u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) << 16);
    // 0x317448: 0x3488ffff  ori         $t0, $a0, 0xFFFF
    ctx->pc = 0x317448u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x31744c: 0xc83824  and         $a3, $a2, $t0
    ctx->pc = 0x31744cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) & GPR_U64(ctx, 8));
    // 0x317450: 0x7383c  dsll32      $a3, $a3, 0
    ctx->pc = 0x317450u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 0));
    // 0x317454: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x317454u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x317458: 0x8c840130  lw          $a0, 0x130($a0)
    ctx->pc = 0x317458u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
    // 0x31745c: 0x4483c  dsll32      $t1, $a0, 0
    ctx->pc = 0x31745cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 4) << (32 + 0));
    // 0x317460: 0x9483e  dsrl32      $t1, $t1, 0
    ctx->pc = 0x317460u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) >> (32 + 0));
    // 0x317464: 0x3404ffff  ori         $a0, $zero, 0xFFFF
    ctx->pc = 0x317464u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x317468: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x317468u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x31746c: 0x3488ffff  ori         $t0, $a0, 0xFFFF
    ctx->pc = 0x31746cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x317470: 0x1282024  and         $a0, $t1, $t0
    ctx->pc = 0x317470u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 9) & GPR_U64(ctx, 8));
    // 0x317474: 0xe43825  or          $a3, $a3, $a0
    ctx->pc = 0x317474u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 4));
    // 0x317478: 0x24041102  addiu       $a0, $zero, 0x1102
    ctx->pc = 0x317478u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4354));
    // 0x31747c: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x31747cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x317480: 0xc0631f0  jal         func_18C7C0
    ctx->pc = 0x317480u;
    SET_GPR_U32(ctx, 31, 0x317488u);
    ctx->pc = 0x18C7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C7C0u, 0x317480u, 0x317488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x317488u;
label_317488:
    // 0x317488: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x317488u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x31748c: 0xc06332c  jal         func_18CCB0
    ctx->pc = 0x31748Cu;
    SET_GPR_U32(ctx, 31, 0x317494u);
    ctx->pc = 0x18CCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18CCB0u, 0x31748Cu, 0x317494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x317494u;
label_317494:
    // 0x317494: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x317494u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x317498: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x317498u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31749c: 0x0  nop
    ctx->pc = 0x31749cu;
    // NOP
    // 0x3174a0: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x3174a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x3174a4: 0x3c084416  lui         $t0, 0x4416
    ctx->pc = 0x3174a4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)17430 << 16));
    // 0x3174a8: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x3174a8u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3174ac: 0x0  nop
    ctx->pc = 0x3174acu;
    // NOP
    // 0x3174b0: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x3174b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x3174b4: 0x3c02c4fa  lui         $v0, 0xC4FA
    ctx->pc = 0x3174b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50426 << 16));
    // 0x3174b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3174b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3174bc: 0x0  nop
    ctx->pc = 0x3174bcu;
    // NOP
    // 0x3174c0: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x3174c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x3174c4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3174c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x3174c8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3174c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3174cc: 0x0  nop
    ctx->pc = 0x3174ccu;
    // NOP
    // 0x3174d0: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x3174d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x3174d4: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x3174d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3174d8: 0x2383c  dsll32      $a3, $v0, 0
    ctx->pc = 0x3174d8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3174dc: 0x7383e  dsrl32      $a3, $a3, 0
    ctx->pc = 0x3174dcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) >> (32 + 0));
    // 0x3174e0: 0x3405ffff  ori         $a1, $zero, 0xFFFF
    ctx->pc = 0x3174e0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x3174e4: 0x52438  dsll        $a0, $a1, 16
    ctx->pc = 0x3174e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) << 16);
    // 0x3174e8: 0x3486ffff  ori         $a2, $a0, 0xFFFF
    ctx->pc = 0x3174e8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x3174ec: 0xe61824  and         $v1, $a3, $a2
    ctx->pc = 0x3174ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & GPR_U64(ctx, 6));
    // 0x3174f0: 0x3383c  dsll32      $a3, $v1, 0
    ctx->pc = 0x3174f0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) << (32 + 0));
    // 0x3174f4: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x3174f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3174f8: 0x3303c  dsll32      $a2, $v1, 0
    ctx->pc = 0x3174f8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 0));
    // 0x3174fc: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x3174fcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x317500: 0x3405ffff  ori         $a1, $zero, 0xFFFF
    ctx->pc = 0x317500u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x317504: 0x51c38  dsll        $v1, $a1, 16
    ctx->pc = 0x317504u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << 16);
    // 0x317508: 0x3464ffff  ori         $a0, $v1, 0xFFFF
    ctx->pc = 0x317508u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x31750c: 0xc41824  and         $v1, $a2, $a0
    ctx->pc = 0x31750cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 4));
    // 0x317510: 0xe34025  or          $t0, $a3, $v1
    ctx->pc = 0x317510u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x317514: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x317514u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x317518: 0x3303c  dsll32      $a2, $v1, 0
    ctx->pc = 0x317518u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 0));
    // 0x31751c: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x31751cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x317520: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x317520u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x317524: 0x32438  dsll        $a0, $v1, 16
    ctx->pc = 0x317524u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << 16);
    // 0x317528: 0x3485ffff  ori         $a1, $a0, 0xFFFF
    ctx->pc = 0x317528u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x31752c: 0xc52024  and         $a0, $a2, $a1
    ctx->pc = 0x31752cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & GPR_U64(ctx, 5));
    // 0x317530: 0x4383c  dsll32      $a3, $a0, 0
    ctx->pc = 0x317530u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) << (32 + 0));
    // 0x317534: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x317534u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x317538: 0x4303c  dsll32      $a2, $a0, 0
    ctx->pc = 0x317538u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) << (32 + 0));
    // 0x31753c: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x31753cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x317540: 0x340affff  ori         $t2, $zero, 0xFFFF
    ctx->pc = 0x317540u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x317544: 0xa2438  dsll        $a0, $t2, 16
    ctx->pc = 0x317544u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 10) << 16);
    // 0x317548: 0x3489ffff  ori         $t1, $a0, 0xFFFF
    ctx->pc = 0x317548u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x31754c: 0xc92024  and         $a0, $a2, $t1
    ctx->pc = 0x31754cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & GPR_U64(ctx, 9));
    // 0x317550: 0xe45825  or          $t3, $a3, $a0
    ctx->pc = 0x317550u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 7) | GPR_U64(ctx, 4));
    // 0x317554: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x317554u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x317558: 0x8ca40130  lw          $a0, 0x130($a1)
    ctx->pc = 0x317558u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 304)));
    // 0x31755c: 0x4503c  dsll32      $t2, $a0, 0
    ctx->pc = 0x31755cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 4) << (32 + 0));
    // 0x317560: 0xa503e  dsrl32      $t2, $t2, 0
    ctx->pc = 0x317560u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) >> (32 + 0));
    // 0x317564: 0x3407ffff  ori         $a3, $zero, 0xFFFF
    ctx->pc = 0x317564u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x317568: 0x72c38  dsll        $a1, $a3, 16
    ctx->pc = 0x317568u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) << 16);
    // 0x31756c: 0x34a6ffff  ori         $a2, $a1, 0xFFFF
    ctx->pc = 0x31756cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x317570: 0x1462024  and         $a0, $t2, $a2
    ctx->pc = 0x317570u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 10) & GPR_U64(ctx, 6));
    // 0x317574: 0x4483c  dsll32      $t1, $a0, 0
    ctx->pc = 0x317574u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 4) << (32 + 0));
    // 0x317578: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x317578u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31757c: 0x8ca40130  lw          $a0, 0x130($a1)
    ctx->pc = 0x31757cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 304)));
    // 0x317580: 0x4303c  dsll32      $a2, $a0, 0
    ctx->pc = 0x317580u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) << (32 + 0));
    // 0x317584: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x317584u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x317588: 0x3404ffff  ori         $a0, $zero, 0xFFFF
    ctx->pc = 0x317588u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x31758c: 0x43c38  dsll        $a3, $a0, 16
    ctx->pc = 0x31758cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) << 16);
    // 0x317590: 0x34e5ffff  ori         $a1, $a3, 0xFFFF
    ctx->pc = 0x317590u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x317594: 0xc52024  and         $a0, $a2, $a1
    ctx->pc = 0x317594u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & GPR_U64(ctx, 5));
    // 0x317598: 0x1243825  or          $a3, $t1, $a0
    ctx->pc = 0x317598u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 9) | GPR_U64(ctx, 4));
    // 0x31759c: 0x24041102  addiu       $a0, $zero, 0x1102
    ctx->pc = 0x31759cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4354));
    // 0x3175a0: 0x71002e28  paddub      $a1, $t0, $zero
    ctx->pc = 0x3175a0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x3175a4: 0x71603628  paddub      $a2, $t3, $zero
    ctx->pc = 0x3175a4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 11), GPR_VEC(ctx, 0)));
    // 0x3175a8: 0xc0631f0  jal         func_18C7C0
    ctx->pc = 0x3175A8u;
    SET_GPR_U32(ctx, 31, 0x3175B0u);
    ctx->pc = 0x18C7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C7C0u, 0x3175A8u, 0x3175B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3175B0u;
label_3175b0:
    // 0x3175b0: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x3175b0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x3175b4: 0xc06332c  jal         func_18CCB0
    ctx->pc = 0x3175B4u;
    SET_GPR_U32(ctx, 31, 0x3175BCu);
    ctx->pc = 0x18CCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18CCB0u, 0x3175B4u, 0x3175BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3175BCu;
label_3175bc:
    // 0x3175bc: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x3175bcu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x3175c0: 0x3c0443c8  lui         $a0, 0x43C8
    ctx->pc = 0x3175c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17352 << 16));
    // 0x3175c4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x3175c4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3175c8: 0x0  nop
    ctx->pc = 0x3175c8u;
    // NOP
    // 0x3175cc: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x3175ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x3175d0: 0x3c0443c8  lui         $a0, 0x43C8
    ctx->pc = 0x3175d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17352 << 16));
    // 0x3175d4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x3175d4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3175d8: 0x0  nop
    ctx->pc = 0x3175d8u;
    // NOP
    // 0x3175dc: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x3175dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x3175e0: 0x3c04c47a  lui         $a0, 0xC47A
    ctx->pc = 0x3175e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)50298 << 16));
    // 0x3175e4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x3175e4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3175e8: 0x0  nop
    ctx->pc = 0x3175e8u;
    // NOP
    // 0x3175ec: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x3175ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x3175f0: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x3175f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x3175f4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3175f4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3175f8: 0x0  nop
    ctx->pc = 0x3175f8u;
    // NOP
    // 0x3175fc: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x3175fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x317600: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x317600u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x317604: 0x3283c  dsll32      $a1, $v1, 0
    ctx->pc = 0x317604u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 0));
    // 0x317608: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x317608u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x31760c: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x31760cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x317610: 0x33438  dsll        $a2, $v1, 16
    ctx->pc = 0x317610u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << 16);
    // 0x317614: 0x34c4ffff  ori         $a0, $a2, 0xFFFF
    ctx->pc = 0x317614u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x317618: 0xa41824  and         $v1, $a1, $a0
    ctx->pc = 0x317618u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x31761c: 0x3283c  dsll32      $a1, $v1, 0
    ctx->pc = 0x31761cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 0));
    // 0x317620: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x317620u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x317624: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x317624u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x317628: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x317628u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x31762c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x31762cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x317630: 0x21c38  dsll        $v1, $v0, 16
    ctx->pc = 0x317630u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << 16);
    // 0x317634: 0x3462ffff  ori         $v0, $v1, 0xFFFF
    ctx->pc = 0x317634u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x317638: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x317638u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x31763c: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x31763cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x317640: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x317640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x317644: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x317644u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x317648: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x317648u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x31764c: 0x3406ffff  ori         $a2, $zero, 0xFFFF
    ctx->pc = 0x31764cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x317650: 0x62438  dsll        $a0, $a2, 16
    ctx->pc = 0x317650u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) << 16);
    // 0x317654: 0x3482ffff  ori         $v0, $a0, 0xFFFF
    ctx->pc = 0x317654u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x317658: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x317658u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x31765c: 0x2383c  dsll32      $a3, $v0, 0
    ctx->pc = 0x31765cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 0));
    // 0x317660: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x317660u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x317664: 0x4303c  dsll32      $a2, $a0, 0
    ctx->pc = 0x317664u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) << (32 + 0));
    // 0x317668: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x317668u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x31766c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x31766cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x317670: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x317670u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x317674: 0x3444ffff  ori         $a0, $v0, 0xFFFF
    ctx->pc = 0x317674u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x317678: 0xc42024  and         $a0, $a2, $a0
    ctx->pc = 0x317678u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & GPR_U64(ctx, 4));
    // 0x31767c: 0xe45825  or          $t3, $a3, $a0
    ctx->pc = 0x31767cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 7) | GPR_U64(ctx, 4));
    // 0x317680: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x317680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x317684: 0x8c4a0130  lw          $t2, 0x130($v0)
    ctx->pc = 0x317684u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x317688: 0xa383c  dsll32      $a3, $t2, 0
    ctx->pc = 0x317688u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 10) << (32 + 0));
    // 0x31768c: 0x7383e  dsrl32      $a3, $a3, 0
    ctx->pc = 0x31768cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) >> (32 + 0));
    // 0x317690: 0x3406ffff  ori         $a2, $zero, 0xFFFF
    ctx->pc = 0x317690u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x317694: 0x62438  dsll        $a0, $a2, 16
    ctx->pc = 0x317694u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) << 16);
    // 0x317698: 0x3482ffff  ori         $v0, $a0, 0xFFFF
    ctx->pc = 0x317698u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x31769c: 0xe21024  and         $v0, $a3, $v0
    ctx->pc = 0x31769cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x3176a0: 0x2383c  dsll32      $a3, $v0, 0
    ctx->pc = 0x3176a0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3176a4: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x3176a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3176a8: 0x8c860130  lw          $a2, 0x130($a0)
    ctx->pc = 0x3176a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
    // 0x3176ac: 0x6103c  dsll32      $v0, $a2, 0
    ctx->pc = 0x3176acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 0));
    // 0x3176b0: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x3176b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x3176b4: 0x3404ffff  ori         $a0, $zero, 0xFFFF
    ctx->pc = 0x3176b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x3176b8: 0x44c38  dsll        $t1, $a0, 16
    ctx->pc = 0x3176b8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 4) << 16);
    // 0x3176bc: 0x3524ffff  ori         $a0, $t1, 0xFFFF
    ctx->pc = 0x3176bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    // 0x3176c0: 0x444024  and         $t0, $v0, $a0
    ctx->pc = 0x3176c0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x3176c4: 0xe83825  or          $a3, $a3, $t0
    ctx->pc = 0x3176c4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 8));
    // 0x3176c8: 0x24041102  addiu       $a0, $zero, 0x1102
    ctx->pc = 0x3176c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4354));
    // 0x3176cc: 0x71603628  paddub      $a2, $t3, $zero
    ctx->pc = 0x3176ccu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 11), GPR_VEC(ctx, 0)));
    // 0x3176d0: 0xc0631f0  jal         func_18C7C0
    ctx->pc = 0x3176D0u;
    SET_GPR_U32(ctx, 31, 0x3176D8u);
    ctx->pc = 0x18C7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C7C0u, 0x3176D0u, 0x3176D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3176D8u;
label_3176d8:
    // 0x3176d8: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x3176d8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x3176dc: 0xc06332c  jal         func_18CCB0
    ctx->pc = 0x3176DCu;
    SET_GPR_U32(ctx, 31, 0x3176E4u);
    ctx->pc = 0x18CCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18CCB0u, 0x3176DCu, 0x3176E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3176E4u;
label_3176e4:
    // 0x3176e4: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x3176e4u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x3176e8: 0x3c04c3c8  lui         $a0, 0xC3C8
    ctx->pc = 0x3176e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)50120 << 16));
    // 0x3176ec: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x3176ecu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3176f0: 0x0  nop
    ctx->pc = 0x3176f0u;
    // NOP
    // 0x3176f4: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x3176f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x3176f8: 0x3c0643c8  lui         $a2, 0x43C8
    ctx->pc = 0x3176f8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)17352 << 16));
    // 0x3176fc: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x3176fcu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x317700: 0x0  nop
    ctx->pc = 0x317700u;
    // NOP
    // 0x317704: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x317704u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x317708: 0x3c02c47a  lui         $v0, 0xC47A
    ctx->pc = 0x317708u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50298 << 16));
    // 0x31770c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x31770cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x317710: 0x0  nop
    ctx->pc = 0x317710u;
    // NOP
    // 0x317714: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x317714u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x317718: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x317718u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x31771c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x31771cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x317720: 0x0  nop
    ctx->pc = 0x317720u;
    // NOP
    // 0x317724: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x317724u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x317728: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x317728u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x31772c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x31772cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x317730: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x317730u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x317734: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x317734u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x317738: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x317738u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x31773c: 0x3444ffff  ori         $a0, $v0, 0xFFFF
    ctx->pc = 0x31773cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x317740: 0x641024  and         $v0, $v1, $a0
    ctx->pc = 0x317740u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x317744: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x317744u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x317748: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x317748u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x31774c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x31774cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x317750: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x317750u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x317754: 0x3405ffff  ori         $a1, $zero, 0xFFFF
    ctx->pc = 0x317754u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x317758: 0x53c38  dsll        $a3, $a1, 16
    ctx->pc = 0x317758u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) << 16);
    // 0x31775c: 0x34e4ffff  ori         $a0, $a3, 0xFFFF
    ctx->pc = 0x31775cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x317760: 0x443024  and         $a2, $v0, $a0
    ctx->pc = 0x317760u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x317764: 0x661025  or          $v0, $v1, $a2
    ctx->pc = 0x317764u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x317768: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x317768u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31776c: 0x3303c  dsll32      $a2, $v1, 0
    ctx->pc = 0x31776cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 0));
    // 0x317770: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x317770u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x317774: 0x3405ffff  ori         $a1, $zero, 0xFFFF
    ctx->pc = 0x317774u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x317778: 0x51c38  dsll        $v1, $a1, 16
    ctx->pc = 0x317778u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << 16);
    // 0x31777c: 0x3464ffff  ori         $a0, $v1, 0xFFFF
    ctx->pc = 0x31777cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x317780: 0xc41824  and         $v1, $a2, $a0
    ctx->pc = 0x317780u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 4));
    // 0x317784: 0x3403c  dsll32      $t0, $v1, 0
    ctx->pc = 0x317784u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) << (32 + 0));
    // 0x317788: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x317788u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31778c: 0x3383c  dsll32      $a3, $v1, 0
    ctx->pc = 0x31778cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) << (32 + 0));
    // 0x317790: 0x7383e  dsrl32      $a3, $a3, 0
    ctx->pc = 0x317790u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) >> (32 + 0));
    // 0x317794: 0x3406ffff  ori         $a2, $zero, 0xFFFF
    ctx->pc = 0x317794u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x317798: 0x61c38  dsll        $v1, $a2, 16
    ctx->pc = 0x317798u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) << 16);
    // 0x31779c: 0x3464ffff  ori         $a0, $v1, 0xFFFF
    ctx->pc = 0x31779cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x3177a0: 0xe41824  and         $v1, $a3, $a0
    ctx->pc = 0x3177a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & GPR_U64(ctx, 4));
    // 0x3177a4: 0x1035025  or          $t2, $t0, $v1
    ctx->pc = 0x3177a4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 8) | GPR_U64(ctx, 3));
    // 0x3177a8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x3177a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3177ac: 0x8c630130  lw          $v1, 0x130($v1)
    ctx->pc = 0x3177acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x3177b0: 0x3303c  dsll32      $a2, $v1, 0
    ctx->pc = 0x3177b0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 0));
    // 0x3177b4: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x3177b4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x3177b8: 0x3404ffff  ori         $a0, $zero, 0xFFFF
    ctx->pc = 0x3177b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x3177bc: 0x41c38  dsll        $v1, $a0, 16
    ctx->pc = 0x3177bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << 16);
    // 0x3177c0: 0x3467ffff  ori         $a3, $v1, 0xFFFF
    ctx->pc = 0x3177c0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x3177c4: 0xc71824  and         $v1, $a2, $a3
    ctx->pc = 0x3177c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 7));
    // 0x3177c8: 0x3403c  dsll32      $t0, $v1, 0
    ctx->pc = 0x3177c8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) << (32 + 0));
    // 0x3177cc: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x3177ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3177d0: 0x8c830130  lw          $v1, 0x130($a0)
    ctx->pc = 0x3177d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
    // 0x3177d4: 0x3483c  dsll32      $t1, $v1, 0
    ctx->pc = 0x3177d4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 3) << (32 + 0));
    // 0x3177d8: 0x9483e  dsrl32      $t1, $t1, 0
    ctx->pc = 0x3177d8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) >> (32 + 0));
    // 0x3177dc: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x3177dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x3177e0: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x3177e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x3177e4: 0x3467ffff  ori         $a3, $v1, 0xFFFF
    ctx->pc = 0x3177e4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x3177e8: 0x1271824  and         $v1, $t1, $a3
    ctx->pc = 0x3177e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) & GPR_U64(ctx, 7));
    // 0x3177ec: 0x1034025  or          $t0, $t0, $v1
    ctx->pc = 0x3177ecu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 3));
    // 0x3177f0: 0x24041102  addiu       $a0, $zero, 0x1102
    ctx->pc = 0x3177f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4354));
    // 0x3177f4: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x3177f4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x3177f8: 0x71403628  paddub      $a2, $t2, $zero
    ctx->pc = 0x3177f8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x3177fc: 0x71003e28  paddub      $a3, $t0, $zero
    ctx->pc = 0x3177fcu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x317800: 0xc0631f0  jal         func_18C7C0
    ctx->pc = 0x317800u;
    SET_GPR_U32(ctx, 31, 0x317808u);
    ctx->pc = 0x18C7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C7C0u, 0x317800u, 0x317808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x317808u;
label_317808:
    // 0x317808: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x317808u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x31780c: 0xc06332c  jal         func_18CCB0
    ctx->pc = 0x31780Cu;
    SET_GPR_U32(ctx, 31, 0x317814u);
    ctx->pc = 0x18CCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18CCB0u, 0x31780Cu, 0x317814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x317814u;
label_317814:
    // 0x317814: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x317814u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x317818: 0x3c0243c8  lui         $v0, 0x43C8
    ctx->pc = 0x317818u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17352 << 16));
    // 0x31781c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x31781cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x317820: 0x0  nop
    ctx->pc = 0x317820u;
    // NOP
    // 0x317824: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x317824u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x317828: 0x3c03c3c8  lui         $v1, 0xC3C8
    ctx->pc = 0x317828u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)50120 << 16));
    // 0x31782c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x31782cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x317830: 0x0  nop
    ctx->pc = 0x317830u;
    // NOP
    // 0x317834: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x317834u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x317838: 0x3c02c47a  lui         $v0, 0xC47A
    ctx->pc = 0x317838u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50298 << 16));
    // 0x31783c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x31783cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x317840: 0x0  nop
    ctx->pc = 0x317840u;
    // NOP
    // 0x317844: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x317844u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x317848: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x317848u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x31784c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x31784cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x317850: 0x0  nop
    ctx->pc = 0x317850u;
    // NOP
    // 0x317854: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x317854u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x317858: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x317858u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x31785c: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x31785cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x317860: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x317860u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x317864: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x317864u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x317868: 0x21c38  dsll        $v1, $v0, 16
    ctx->pc = 0x317868u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << 16);
    // 0x31786c: 0x3465ffff  ori         $a1, $v1, 0xFFFF
    ctx->pc = 0x31786cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x317870: 0x851024  and         $v0, $a0, $a1
    ctx->pc = 0x317870u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x317874: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x317874u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x317878: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x317878u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x31787c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x31787cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x317880: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x317880u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x317884: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x317884u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x317888: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x317888u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x31788c: 0x3448ffff  ori         $t0, $v0, 0xFFFF
    ctx->pc = 0x31788cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x317890: 0x682824  and         $a1, $v1, $t0
    ctx->pc = 0x317890u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & GPR_U64(ctx, 8));
    // 0x317894: 0x851825  or          $v1, $a0, $a1
    ctx->pc = 0x317894u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x317898: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x317898u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31789c: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x31789cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3178a0: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x3178a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x3178a4: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x3178a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x3178a8: 0x23c38  dsll        $a3, $v0, 16
    ctx->pc = 0x3178a8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << 16);
    // 0x3178ac: 0x34e6ffff  ori         $a2, $a3, 0xFFFF
    ctx->pc = 0x3178acu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x3178b0: 0x862024  and         $a0, $a0, $a2
    ctx->pc = 0x3178b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 6));
    // 0x3178b4: 0x4283c  dsll32      $a1, $a0, 0
    ctx->pc = 0x3178b4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 0));
    // 0x3178b8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x3178b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3178bc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3178bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3178c0: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x3178c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x3178c4: 0x3404ffff  ori         $a0, $zero, 0xFFFF
    ctx->pc = 0x3178c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x3178c8: 0x46438  dsll        $t4, $a0, 16
    ctx->pc = 0x3178c8u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 4) << 16);
    // 0x3178cc: 0x358bffff  ori         $t3, $t4, 0xFFFF
    ctx->pc = 0x3178ccu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 12) | (uint64_t)(uint16_t)65535);
    // 0x3178d0: 0x4b1024  and         $v0, $v0, $t3
    ctx->pc = 0x3178d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 11));
    // 0x3178d4: 0xa25025  or          $t2, $a1, $v0
    ctx->pc = 0x3178d4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x3178d8: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x3178d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3178dc: 0x8ca60130  lw          $a2, 0x130($a1)
    ctx->pc = 0x3178dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 304)));
    // 0x3178e0: 0x6103c  dsll32      $v0, $a2, 0
    ctx->pc = 0x3178e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 0));
    // 0x3178e4: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x3178e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x3178e8: 0x3404ffff  ori         $a0, $zero, 0xFFFF
    ctx->pc = 0x3178e8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x3178ec: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x3178ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x3178f0: 0x3487ffff  ori         $a3, $a0, 0xFFFF
    ctx->pc = 0x3178f0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x3178f4: 0x472024  and         $a0, $v0, $a3
    ctx->pc = 0x3178f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x3178f8: 0x4483c  dsll32      $t1, $a0, 0
    ctx->pc = 0x3178f8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 4) << (32 + 0));
    // 0x3178fc: 0x8fa60048  lw          $a2, 0x48($sp)
    ctx->pc = 0x3178fcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x317900: 0x8cc40130  lw          $a0, 0x130($a2)
    ctx->pc = 0x317900u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 304)));
    // 0x317904: 0x4283c  dsll32      $a1, $a0, 0
    ctx->pc = 0x317904u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 0));
    // 0x317908: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x317908u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x31790c: 0x3404ffff  ori         $a0, $zero, 0xFFFF
    ctx->pc = 0x31790cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x317910: 0x41438  dsll        $v0, $a0, 16
    ctx->pc = 0x317910u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << 16);
    // 0x317914: 0x3447ffff  ori         $a3, $v0, 0xFFFF
    ctx->pc = 0x317914u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x317918: 0xa72024  and         $a0, $a1, $a3
    ctx->pc = 0x317918u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & GPR_U64(ctx, 7));
    // 0x31791c: 0x1241025  or          $v0, $t1, $a0
    ctx->pc = 0x31791cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) | GPR_U64(ctx, 4));
    // 0x317920: 0x24041102  addiu       $a0, $zero, 0x1102
    ctx->pc = 0x317920u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4354));
    // 0x317924: 0x70602e28  paddub      $a1, $v1, $zero
    ctx->pc = 0x317924u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x317928: 0x71403628  paddub      $a2, $t2, $zero
    ctx->pc = 0x317928u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x31792c: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x31792cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x317930: 0xc0631f0  jal         func_18C7C0
    ctx->pc = 0x317930u;
    SET_GPR_U32(ctx, 31, 0x317938u);
    ctx->pc = 0x18C7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C7C0u, 0x317930u, 0x317938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x317938u;
label_317938:
    // 0x317938: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x317938u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x31793c: 0xc06332c  jal         func_18CCB0
    ctx->pc = 0x31793Cu;
    SET_GPR_U32(ctx, 31, 0x317944u);
    ctx->pc = 0x18CCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18CCB0u, 0x31793Cu, 0x317944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x317944u;
label_317944:
    // 0x317944: 0x3c03c3c8  lui         $v1, 0xC3C8
    ctx->pc = 0x317944u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)50120 << 16));
    // 0x317948: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x317948u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31794c: 0x0  nop
    ctx->pc = 0x31794cu;
    // NOP
    // 0x317950: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x317950u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x317954: 0x3c02c3c8  lui         $v0, 0xC3C8
    ctx->pc = 0x317954u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50120 << 16));
    // 0x317958: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x317958u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31795c: 0x0  nop
    ctx->pc = 0x31795cu;
    // NOP
    // 0x317960: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x317960u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x317964: 0x3c05c47a  lui         $a1, 0xC47A
    ctx->pc = 0x317964u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)50298 << 16));
    // 0x317968: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x317968u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31796c: 0x0  nop
    ctx->pc = 0x31796cu;
    // NOP
    // 0x317970: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x317970u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x317974: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x317974u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x317978: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x317978u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31797c: 0x0  nop
    ctx->pc = 0x31797cu;
    // NOP
    // 0x317980: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x317980u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x317984: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x317984u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x317988: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x317988u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x31798c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x31798cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x317990: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x317990u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x317994: 0x23c38  dsll        $a3, $v0, 16
    ctx->pc = 0x317994u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << 16);
    // 0x317998: 0x34e4ffff  ori         $a0, $a3, 0xFFFF
    ctx->pc = 0x317998u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x31799c: 0x643024  and         $a2, $v1, $a0
    ctx->pc = 0x31799cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x3179a0: 0x6103c  dsll32      $v0, $a2, 0
    ctx->pc = 0x3179a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 0));
    // 0x3179a4: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x3179a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3179a8: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x3179a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x3179ac: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x3179acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x3179b0: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x3179b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x3179b4: 0x32c38  dsll        $a1, $v1, 16
    ctx->pc = 0x3179b4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << 16);
    // 0x3179b8: 0x34a3ffff  ori         $v1, $a1, 0xFFFF
    ctx->pc = 0x3179b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x3179bc: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x3179bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x3179c0: 0x441825  or          $v1, $v0, $a0
    ctx->pc = 0x3179c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x3179c4: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x3179c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3179c8: 0x2303c  dsll32      $a2, $v0, 0
    ctx->pc = 0x3179c8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3179cc: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x3179ccu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x3179d0: 0x3404ffff  ori         $a0, $zero, 0xFFFF
    ctx->pc = 0x3179d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x3179d4: 0x44438  dsll        $t0, $a0, 16
    ctx->pc = 0x3179d4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 4) << 16);
    // 0x3179d8: 0x3502ffff  ori         $v0, $t0, 0xFFFF
    ctx->pc = 0x3179d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x3179dc: 0xc21024  and         $v0, $a2, $v0
    ctx->pc = 0x3179dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x3179e0: 0x2383c  dsll32      $a3, $v0, 0
    ctx->pc = 0x3179e0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3179e4: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x3179e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3179e8: 0x4303c  dsll32      $a2, $a0, 0
    ctx->pc = 0x3179e8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) << (32 + 0));
    // 0x3179ec: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x3179ecu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x3179f0: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x3179f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x3179f4: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x3179f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x3179f8: 0x3448ffff  ori         $t0, $v0, 0xFFFF
    ctx->pc = 0x3179f8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3179fc: 0xc82024  and         $a0, $a2, $t0
    ctx->pc = 0x3179fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & GPR_U64(ctx, 8));
    // 0x317a00: 0xe43025  or          $a2, $a3, $a0
    ctx->pc = 0x317a00u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | GPR_U64(ctx, 4));
    // 0x317a04: 0x8fa70048  lw          $a3, 0x48($sp)
    ctx->pc = 0x317a04u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x317a08: 0x8ce40130  lw          $a0, 0x130($a3)
    ctx->pc = 0x317a08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 304)));
    // 0x317a0c: 0x4403c  dsll32      $t0, $a0, 0
    ctx->pc = 0x317a0cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 4) << (32 + 0));
    // 0x317a10: 0x8403e  dsrl32      $t0, $t0, 0
    ctx->pc = 0x317a10u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) >> (32 + 0));
    // 0x317a14: 0x3407ffff  ori         $a3, $zero, 0xFFFF
    ctx->pc = 0x317a14u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x317a18: 0x73c38  dsll        $a3, $a3, 16
    ctx->pc = 0x317a18u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 16);
    // 0x317a1c: 0x34e4ffff  ori         $a0, $a3, 0xFFFF
    ctx->pc = 0x317a1cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x317a20: 0x1042024  and         $a0, $t0, $a0
    ctx->pc = 0x317a20u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 8) & GPR_U64(ctx, 4));
    // 0x317a24: 0x4483c  dsll32      $t1, $a0, 0
    ctx->pc = 0x317a24u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 4) << (32 + 0));
    // 0x317a28: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x317a28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x317a2c: 0x8c840130  lw          $a0, 0x130($a0)
    ctx->pc = 0x317a2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
    // 0x317a30: 0x4403c  dsll32      $t0, $a0, 0
    ctx->pc = 0x317a30u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 4) << (32 + 0));
    // 0x317a34: 0x8403e  dsrl32      $t0, $t0, 0
    ctx->pc = 0x317a34u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) >> (32 + 0));
    // 0x317a38: 0x3404ffff  ori         $a0, $zero, 0xFFFF
    ctx->pc = 0x317a38u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x317a3c: 0x43c38  dsll        $a3, $a0, 16
    ctx->pc = 0x317a3cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) << 16);
    // 0x317a40: 0x34e4ffff  ori         $a0, $a3, 0xFFFF
    ctx->pc = 0x317a40u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x317a44: 0x1041024  and         $v0, $t0, $a0
    ctx->pc = 0x317a44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & GPR_U64(ctx, 4));
    // 0x317a48: 0x1223825  or          $a3, $t1, $v0
    ctx->pc = 0x317a48u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 9) | GPR_U64(ctx, 2));
    // 0x317a4c: 0x24081102  addiu       $t0, $zero, 0x1102
    ctx->pc = 0x317a4cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4354));
    // 0x317a50: 0x71002628  paddub      $a0, $t0, $zero
    ctx->pc = 0x317a50u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x317a54: 0x70602e28  paddub      $a1, $v1, $zero
    ctx->pc = 0x317a54u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x317a58: 0xc0631f0  jal         func_18C7C0
    ctx->pc = 0x317A58u;
    SET_GPR_U32(ctx, 31, 0x317A60u);
    ctx->pc = 0x18C7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C7C0u, 0x317A58u, 0x317A60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x317A60u;
label_317a60:
    // 0x317a60: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x317a60u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x317a64: 0xc06332c  jal         func_18CCB0
    ctx->pc = 0x317A64u;
    SET_GPR_U32(ctx, 31, 0x317A6Cu);
    ctx->pc = 0x18CCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18CCB0u, 0x317A64u, 0x317A6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x317A6Cu;
label_317a6c:
    // 0x317a6c: 0x3c024416  lui         $v0, 0x4416
    ctx->pc = 0x317a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17430 << 16));
    // 0x317a70: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x317a70u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x317a74: 0x0  nop
    ctx->pc = 0x317a74u;
    // NOP
    // 0x317a78: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x317a78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x317a7c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x317a7cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x317a80: 0x0  nop
    ctx->pc = 0x317a80u;
    // NOP
    // 0x317a84: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x317a84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x317a88: 0x3c07c4fa  lui         $a3, 0xC4FA
    ctx->pc = 0x317a88u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)50426 << 16));
    // 0x317a8c: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x317a8cu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x317a90: 0x0  nop
    ctx->pc = 0x317a90u;
    // NOP
    // 0x317a94: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x317a94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x317a98: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x317a98u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x317a9c: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x317a9cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x317aa0: 0x0  nop
    ctx->pc = 0x317aa0u;
    // NOP
    // 0x317aa4: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x317aa4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x317aa8: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x317aa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x317aac: 0x4303c  dsll32      $a2, $a0, 0
    ctx->pc = 0x317aacu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) << (32 + 0));
    // 0x317ab0: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x317ab0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x317ab4: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x317ab4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x317ab8: 0x33c38  dsll        $a3, $v1, 16
    ctx->pc = 0x317ab8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) << 16);
    // 0x317abc: 0x34e3ffff  ori         $v1, $a3, 0xFFFF
    ctx->pc = 0x317abcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x317ac0: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x317ac0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x317ac4: 0x6283c  dsll32      $a1, $a2, 0
    ctx->pc = 0x317ac4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) << (32 + 0));
    // 0x317ac8: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x317ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x317acc: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x317accu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x317ad0: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x317ad0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x317ad4: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x317ad4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x317ad8: 0x34438  dsll        $t0, $v1, 16
    ctx->pc = 0x317ad8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) << 16);
    // 0x317adc: 0x3503ffff  ori         $v1, $t0, 0xFFFF
    ctx->pc = 0x317adcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x317ae0: 0x833024  and         $a2, $a0, $v1
    ctx->pc = 0x317ae0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x317ae4: 0xa61825  or          $v1, $a1, $a2
    ctx->pc = 0x317ae4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    // 0x317ae8: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x317ae8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x317aec: 0x4283c  dsll32      $a1, $a0, 0
    ctx->pc = 0x317aecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 0));
    // 0x317af0: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x317af0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x317af4: 0x3404ffff  ori         $a0, $zero, 0xFFFF
    ctx->pc = 0x317af4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x317af8: 0x43c38  dsll        $a3, $a0, 16
    ctx->pc = 0x317af8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) << 16);
    // 0x317afc: 0x34e4ffff  ori         $a0, $a3, 0xFFFF
    ctx->pc = 0x317afcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x317b00: 0xa43024  and         $a2, $a1, $a0
    ctx->pc = 0x317b00u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x317b04: 0x6503c  dsll32      $t2, $a2, 0
    ctx->pc = 0x317b04u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 6) << (32 + 0));
    // 0x317b08: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x317b08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x317b0c: 0x4483c  dsll32      $t1, $a0, 0
    ctx->pc = 0x317b0cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 4) << (32 + 0));
    // 0x317b10: 0x9483e  dsrl32      $t1, $t1, 0
    ctx->pc = 0x317b10u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) >> (32 + 0));
    // 0x317b14: 0x3404ffff  ori         $a0, $zero, 0xFFFF
    ctx->pc = 0x317b14u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x317b18: 0x45c38  dsll        $t3, $a0, 16
    ctx->pc = 0x317b18u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 4) << 16);
    // 0x317b1c: 0x3565ffff  ori         $a1, $t3, 0xFFFF
    ctx->pc = 0x317b1cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)65535);
    // 0x317b20: 0x1252024  and         $a0, $t1, $a1
    ctx->pc = 0x317b20u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 9) & GPR_U64(ctx, 5));
    // 0x317b24: 0x1445025  or          $t2, $t2, $a0
    ctx->pc = 0x317b24u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 4));
    // 0x317b28: 0x8fa70048  lw          $a3, 0x48($sp)
    ctx->pc = 0x317b28u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x317b2c: 0x8ce50130  lw          $a1, 0x130($a3)
    ctx->pc = 0x317b2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 304)));
    // 0x317b30: 0x5303c  dsll32      $a2, $a1, 0
    ctx->pc = 0x317b30u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) << (32 + 0));
    // 0x317b34: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x317b34u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x317b38: 0x3404ffff  ori         $a0, $zero, 0xFFFF
    ctx->pc = 0x317b38u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x317b3c: 0x44c38  dsll        $t1, $a0, 16
    ctx->pc = 0x317b3cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 4) << 16);
    // 0x317b40: 0x3525ffff  ori         $a1, $t1, 0xFFFF
    ctx->pc = 0x317b40u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    // 0x317b44: 0xc52024  and         $a0, $a2, $a1
    ctx->pc = 0x317b44u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & GPR_U64(ctx, 5));
    // 0x317b48: 0x4303c  dsll32      $a2, $a0, 0
    ctx->pc = 0x317b48u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) << (32 + 0));
    // 0x317b4c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x317b4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x317b50: 0x8c870130  lw          $a3, 0x130($a0)
    ctx->pc = 0x317b50u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
    // 0x317b54: 0x7283c  dsll32      $a1, $a3, 0
    ctx->pc = 0x317b54u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) << (32 + 0));
    // 0x317b58: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x317b58u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x317b5c: 0x3404ffff  ori         $a0, $zero, 0xFFFF
    ctx->pc = 0x317b5cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x317b60: 0x43c38  dsll        $a3, $a0, 16
    ctx->pc = 0x317b60u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) << 16);
    // 0x317b64: 0x34e4ffff  ori         $a0, $a3, 0xFFFF
    ctx->pc = 0x317b64u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x317b68: 0xa42024  and         $a0, $a1, $a0
    ctx->pc = 0x317b68u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x317b6c: 0xc43825  or          $a3, $a2, $a0
    ctx->pc = 0x317b6cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) | GPR_U64(ctx, 4));
    // 0x317b70: 0x24041102  addiu       $a0, $zero, 0x1102
    ctx->pc = 0x317b70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4354));
    // 0x317b74: 0x70602e28  paddub      $a1, $v1, $zero
    ctx->pc = 0x317b74u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x317b78: 0x71403628  paddub      $a2, $t2, $zero
    ctx->pc = 0x317b78u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x317b7c: 0xc0631f0  jal         func_18C7C0
    ctx->pc = 0x317B7Cu;
    SET_GPR_U32(ctx, 31, 0x317B84u);
    ctx->pc = 0x18C7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C7C0u, 0x317B7Cu, 0x317B84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x317B84u;
label_317b84:
    // 0x317b84: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x317b84u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x317b88: 0xc06332c  jal         func_18CCB0
    ctx->pc = 0x317B88u;
    SET_GPR_U32(ctx, 31, 0x317B90u);
    ctx->pc = 0x18CCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18CCB0u, 0x317B88u, 0x317B90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x317B90u;
label_317b90:
    // 0x317b90: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x317b90u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x317b94: 0x3c03c416  lui         $v1, 0xC416
    ctx->pc = 0x317b94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)50198 << 16));
    // 0x317b98: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x317b98u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x317b9c: 0x0  nop
    ctx->pc = 0x317b9cu;
    // NOP
    // 0x317ba0: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x317ba0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x317ba4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x317ba4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x317ba8: 0x0  nop
    ctx->pc = 0x317ba8u;
    // NOP
    // 0x317bac: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x317bacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x317bb0: 0x3c03c4fa  lui         $v1, 0xC4FA
    ctx->pc = 0x317bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)50426 << 16));
    // 0x317bb4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x317bb4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x317bb8: 0x0  nop
    ctx->pc = 0x317bb8u;
    // NOP
    // 0x317bbc: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x317bbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x317bc0: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x317bc0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x317bc4: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x317bc4u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x317bc8: 0x0  nop
    ctx->pc = 0x317bc8u;
    // NOP
    // 0x317bcc: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x317bccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x317bd0: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x317bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x317bd4: 0x3303c  dsll32      $a2, $v1, 0
    ctx->pc = 0x317bd4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 0));
    // 0x317bd8: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x317bd8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x317bdc: 0x3404ffff  ori         $a0, $zero, 0xFFFF
    ctx->pc = 0x317bdcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x317be0: 0x41c38  dsll        $v1, $a0, 16
    ctx->pc = 0x317be0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << 16);
    // 0x317be4: 0x3465ffff  ori         $a1, $v1, 0xFFFF
    ctx->pc = 0x317be4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x317be8: 0xc51024  and         $v0, $a2, $a1
    ctx->pc = 0x317be8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 5));
    // 0x317bec: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x317becu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x317bf0: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x317bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x317bf4: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x317bf4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x317bf8: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x317bf8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x317bfc: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x317bfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x317c00: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x317c00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x317c04: 0x3445ffff  ori         $a1, $v0, 0xFFFF
    ctx->pc = 0x317c04u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x317c08: 0x651024  and         $v0, $v1, $a1
    ctx->pc = 0x317c08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x317c0c: 0x821825  or          $v1, $a0, $v0
    ctx->pc = 0x317c0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x317c10: 0x8fa60048  lw          $a2, 0x48($sp)
    ctx->pc = 0x317c10u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x317c14: 0x6203c  dsll32      $a0, $a2, 0
    ctx->pc = 0x317c14u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) << (32 + 0));
    // 0x317c18: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x317c18u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x317c1c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x317c1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x317c20: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x317c20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x317c24: 0x3447ffff  ori         $a3, $v0, 0xFFFF
    ctx->pc = 0x317c24u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x317c28: 0x872024  and         $a0, $a0, $a3
    ctx->pc = 0x317c28u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 7));
    // 0x317c2c: 0x4303c  dsll32      $a2, $a0, 0
    ctx->pc = 0x317c2cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) << (32 + 0));
    // 0x317c30: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x317c30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x317c34: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x317c34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x317c38: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x317c38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x317c3c: 0x3404ffff  ori         $a0, $zero, 0xFFFF
    ctx->pc = 0x317c3cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x317c40: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x317c40u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x317c44: 0x348bffff  ori         $t3, $a0, 0xFFFF
    ctx->pc = 0x317c44u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x317c48: 0x4b1024  and         $v0, $v0, $t3
    ctx->pc = 0x317c48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 11));
    // 0x317c4c: 0xc25025  or          $t2, $a2, $v0
    ctx->pc = 0x317c4cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x317c50: 0x8fa70048  lw          $a3, 0x48($sp)
    ctx->pc = 0x317c50u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x317c54: 0x8ce60130  lw          $a2, 0x130($a3)
    ctx->pc = 0x317c54u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 304)));
    // 0x317c58: 0x6203c  dsll32      $a0, $a2, 0
    ctx->pc = 0x317c58u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) << (32 + 0));
    // 0x317c5c: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x317c5cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x317c60: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x317c60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x317c64: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x317c64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x317c68: 0x3447ffff  ori         $a3, $v0, 0xFFFF
    ctx->pc = 0x317c68u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x317c6c: 0x872024  and         $a0, $a0, $a3
    ctx->pc = 0x317c6cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 7));
    // 0x317c70: 0x4303c  dsll32      $a2, $a0, 0
    ctx->pc = 0x317c70u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) << (32 + 0));
    // 0x317c74: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x317c74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x317c78: 0x8c440130  lw          $a0, 0x130($v0)
    ctx->pc = 0x317c78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x317c7c: 0x4483c  dsll32      $t1, $a0, 0
    ctx->pc = 0x317c7cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 4) << (32 + 0));
    // 0x317c80: 0x9483e  dsrl32      $t1, $t1, 0
    ctx->pc = 0x317c80u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) >> (32 + 0));
    // 0x317c84: 0x3404ffff  ori         $a0, $zero, 0xFFFF
    ctx->pc = 0x317c84u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x317c88: 0x44438  dsll        $t0, $a0, 16
    ctx->pc = 0x317c88u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 4) << 16);
    // 0x317c8c: 0x3507ffff  ori         $a3, $t0, 0xFFFF
    ctx->pc = 0x317c8cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x317c90: 0x1272024  and         $a0, $t1, $a3
    ctx->pc = 0x317c90u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 9) & GPR_U64(ctx, 7));
    // 0x317c94: 0xc41025  or          $v0, $a2, $a0
    ctx->pc = 0x317c94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | GPR_U64(ctx, 4));
    // 0x317c98: 0x24071102  addiu       $a3, $zero, 0x1102
    ctx->pc = 0x317c98u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4354));
    // 0x317c9c: 0x70e02628  paddub      $a0, $a3, $zero
    ctx->pc = 0x317c9cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x317ca0: 0x70602e28  paddub      $a1, $v1, $zero
    ctx->pc = 0x317ca0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x317ca4: 0x71403628  paddub      $a2, $t2, $zero
    ctx->pc = 0x317ca4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x317ca8: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x317ca8u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x317cac: 0xc0631f0  jal         func_18C7C0
    ctx->pc = 0x317CACu;
    SET_GPR_U32(ctx, 31, 0x317CB4u);
    ctx->pc = 0x18C7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C7C0u, 0x317CACu, 0x317CB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x317CB4u;
label_317cb4:
    // 0x317cb4: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x317cb4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x317cb8: 0xc06332c  jal         func_18CCB0
    ctx->pc = 0x317CB8u;
    SET_GPR_U32(ctx, 31, 0x317CC0u);
    ctx->pc = 0x18CCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18CCB0u, 0x317CB8u, 0x317CC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x317CC0u;
label_317cc0:
    // 0x317cc0: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x317cc0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x317cc4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x317cc4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x317cc8: 0x0  nop
    ctx->pc = 0x317cc8u;
    // NOP
    // 0x317ccc: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x317cccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x317cd0: 0x3c02c316  lui         $v0, 0xC316
    ctx->pc = 0x317cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49942 << 16));
    // 0x317cd4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x317cd4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x317cd8: 0x0  nop
    ctx->pc = 0x317cd8u;
    // NOP
    // 0x317cdc: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x317cdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x317ce0: 0x3c0243e1  lui         $v0, 0x43E1
    ctx->pc = 0x317ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17377 << 16));
    // 0x317ce4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x317ce4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x317ce8: 0x0  nop
    ctx->pc = 0x317ce8u;
    // NOP
    // 0x317cec: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x317cecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x317cf0: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x317cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x317cf4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x317cf4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x317cf8: 0x0  nop
    ctx->pc = 0x317cf8u;
    // NOP
    // 0x317cfc: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x317cfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x317d00: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x317d00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x317d04: 0x8c621298  lw          $v0, 0x1298($v1)
    ctx->pc = 0x317d04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4760)));
    // 0x317d08: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x317d08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x317d0c: 0x8e040130  lw          $a0, 0x130($s0)
    ctx->pc = 0x317d0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
    // 0x317d10: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x317d10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x317d14: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x317d14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x317d18: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x317d18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x317d1c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x317d1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x317d20: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x317d20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x317d24: 0x3445ffff  ori         $a1, $v0, 0xFFFF
    ctx->pc = 0x317d24u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x317d28: 0x653824  and         $a3, $v1, $a1
    ctx->pc = 0x317d28u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x317d2c: 0x24044800  addiu       $a0, $zero, 0x4800
    ctx->pc = 0x317d2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18432));
    // 0x317d30: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x317d30u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x317d34: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x317d34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x317d38: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x317D38u;
    SET_GPR_U32(ctx, 31, 0x317D40u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x317D38u, 0x317D40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x317D40u;
label_317d40:
    // 0x317d40: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x317d40u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x317d44: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x317D44u;
    SET_GPR_U32(ctx, 31, 0x317D4Cu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x317D44u, 0x317D4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x317D4Cu;
label_317d4c:
    // 0x317d4c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x317d4cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x317d50: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x317d50u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x317d54: 0x0  nop
    ctx->pc = 0x317d54u;
    // NOP
    // 0x317d58: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x317d58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x317d5c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x317d5cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x317d60: 0x0  nop
    ctx->pc = 0x317d60u;
    // NOP
    // 0x317d64: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x317d64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x317d68: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x317d68u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x317d6c: 0x0  nop
    ctx->pc = 0x317d6cu;
    // NOP
    // 0x317d70: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x317d70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x317d74: 0x3c063f80  lui         $a2, 0x3F80
    ctx->pc = 0x317d74u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16256 << 16));
    // 0x317d78: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x317d78u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x317d7c: 0x0  nop
    ctx->pc = 0x317d7cu;
    // NOP
    // 0x317d80: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x317d80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x317d84: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x317d84u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x317d88: 0x0  nop
    ctx->pc = 0x317d88u;
    // NOP
    // 0x317d8c: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x317d8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x317d90: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x317d90u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x317d94: 0x0  nop
    ctx->pc = 0x317d94u;
    // NOP
    // 0x317d98: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x317d98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x317d9c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x317d9cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x317da0: 0x0  nop
    ctx->pc = 0x317da0u;
    // NOP
    // 0x317da4: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x317da4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x317da8: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x317da8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x317dac: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x317dacu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x317db0: 0x0  nop
    ctx->pc = 0x317db0u;
    // NOP
    // 0x317db4: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x317db4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x317db8: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x317db8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x317dbc: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x317dbcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x317dc0: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x317dc0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x317dc4: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x317dc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x317dc8: 0x34438  dsll        $t0, $v1, 16
    ctx->pc = 0x317dc8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) << 16);
    // 0x317dcc: 0x3503ffff  ori         $v1, $t0, 0xFFFF
    ctx->pc = 0x317dccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x317dd0: 0x833824  and         $a3, $a0, $v1
    ctx->pc = 0x317dd0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x317dd4: 0x7303c  dsll32      $a2, $a3, 0
    ctx->pc = 0x317dd4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) << (32 + 0));
    // 0x317dd8: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x317dd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x317ddc: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x317ddcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x317de0: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x317de0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x317de4: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x317de4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x317de8: 0x35438  dsll        $t2, $v1, 16
    ctx->pc = 0x317de8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) << 16);
    // 0x317dec: 0x3543ffff  ori         $v1, $t2, 0xFFFF
    ctx->pc = 0x317decu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)65535);
    // 0x317df0: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x317df0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x317df4: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x317df4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x317df8: 0x10203c  dsll32      $a0, $s0, 0
    ctx->pc = 0x317df8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) << (32 + 0));
    // 0x317dfc: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x317dfcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x317e00: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x317e00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x317e04: 0x33c38  dsll        $a3, $v1, 16
    ctx->pc = 0x317e04u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) << 16);
    // 0x317e08: 0x34e3ffff  ori         $v1, $a3, 0xFFFF
    ctx->pc = 0x317e08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x317e0c: 0x834024  and         $t0, $a0, $v1
    ctx->pc = 0x317e0cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x317e10: 0x8203c  dsll32      $a0, $t0, 0
    ctx->pc = 0x317e10u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 8) << (32 + 0));
    // 0x317e14: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x317e14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x317e18: 0x3483c  dsll32      $t1, $v1, 0
    ctx->pc = 0x317e18u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 3) << (32 + 0));
    // 0x317e1c: 0x9483e  dsrl32      $t1, $t1, 0
    ctx->pc = 0x317e1cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) >> (32 + 0));
    // 0x317e20: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x317e20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x317e24: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x317e24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x317e28: 0x3467ffff  ori         $a3, $v1, 0xFFFF
    ctx->pc = 0x317e28u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x317e2c: 0x1271824  and         $v1, $t1, $a3
    ctx->pc = 0x317e2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) & GPR_U64(ctx, 7));
    // 0x317e30: 0x834025  or          $t0, $a0, $v1
    ctx->pc = 0x317e30u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x317e34: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x317e34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x317e38: 0x8c821298  lw          $v0, 0x1298($a0)
    ctx->pc = 0x317e38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4760)));
    // 0x317e3c: 0x23980  sll         $a3, $v0, 6
    ctx->pc = 0x317e3cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x317e40: 0x8e040130  lw          $a0, 0x130($s0)
    ctx->pc = 0x317e40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
    // 0x317e44: 0x871021  addu        $v0, $a0, $a3
    ctx->pc = 0x317e44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x317e48: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x317e48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x317e4c: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x317e4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x317e50: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x317e50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x317e54: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x317e54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x317e58: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x317e58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x317e5c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x317e5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x317e60: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x317e60u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x317e64: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x317e64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x317e68: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x317e68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x317e6c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x317e6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x317e70: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x317e70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x317e74: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x317e74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x317e78: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x317e78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x317e7c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x317e7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x317e80: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x317e80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x317e84: 0x443825  or          $a3, $v0, $a0
    ctx->pc = 0x317e84u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x317e88: 0x24041700  addiu       $a0, $zero, 0x1700
    ctx->pc = 0x317e88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5888));
    // 0x317e8c: 0x70c02e28  paddub      $a1, $a2, $zero
    ctx->pc = 0x317e8cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x317e90: 0x71003628  paddub      $a2, $t0, $zero
    ctx->pc = 0x317e90u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x317e94: 0xc0631f0  jal         func_18C7C0
    ctx->pc = 0x317E94u;
    SET_GPR_U32(ctx, 31, 0x317E9Cu);
    ctx->pc = 0x18C7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C7C0u, 0x317E94u, 0x317E9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x317E9Cu;
label_317e9c:
    // 0x317e9c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x317e9cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x317ea0: 0xc06332c  jal         func_18CCB0
    ctx->pc = 0x317EA0u;
    SET_GPR_U32(ctx, 31, 0x317EA8u);
    ctx->pc = 0x18CCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18CCB0u, 0x317EA0u, 0x317EA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x317EA8u;
label_317ea8:
    // 0x317ea8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x317ea8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x317eac: 0x0  nop
    ctx->pc = 0x317eacu;
    // NOP
    // 0x317eb0: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x317eb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x317eb4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x317eb4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x317eb8: 0x0  nop
    ctx->pc = 0x317eb8u;
    // NOP
    // 0x317ebc: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x317ebcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x317ec0: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x317ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x317ec4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x317ec4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x317ec8: 0x0  nop
    ctx->pc = 0x317ec8u;
    // NOP
    // 0x317ecc: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x317eccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x317ed0: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x317ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x317ed4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x317ed4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x317ed8: 0x0  nop
    ctx->pc = 0x317ed8u;
    // NOP
    // 0x317edc: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x317edcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x317ee0: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x317ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x317ee4: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x317ee4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x317ee8: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x317ee8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x317eec: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x317eecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x317ef0: 0x22438  dsll        $a0, $v0, 16
    ctx->pc = 0x317ef0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << 16);
    // 0x317ef4: 0x3482ffff  ori         $v0, $a0, 0xFFFF
    ctx->pc = 0x317ef4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x317ef8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x317ef8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x317efc: 0x3283c  dsll32      $a1, $v1, 0
    ctx->pc = 0x317efcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 0));
    // 0x317f00: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x317f00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x317f04: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x317f04u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x317f08: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x317f08u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x317f0c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x317f0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x317f10: 0x21c38  dsll        $v1, $v0, 16
    ctx->pc = 0x317f10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << 16);
    // 0x317f14: 0x3462ffff  ori         $v0, $v1, 0xFFFF
    ctx->pc = 0x317f14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x317f18: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x317f18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x317f1c: 0xa24025  or          $t0, $a1, $v0
    ctx->pc = 0x317f1cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x317f20: 0x10283c  dsll32      $a1, $s0, 0
    ctx->pc = 0x317f20u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) << (32 + 0));
    // 0x317f24: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x317f24u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x317f28: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x317f28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x317f2c: 0x31438  dsll        $v0, $v1, 16
    ctx->pc = 0x317f2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << 16);
    // 0x317f30: 0x3444ffff  ori         $a0, $v0, 0xFFFF
    ctx->pc = 0x317f30u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x317f34: 0xa41024  and         $v0, $a1, $a0
    ctx->pc = 0x317f34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x317f38: 0x2383c  dsll32      $a3, $v0, 0
    ctx->pc = 0x317f38u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 0));
    // 0x317f3c: 0x8fa60048  lw          $a2, 0x48($sp)
    ctx->pc = 0x317f3cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x317f40: 0x6203c  dsll32      $a0, $a2, 0
    ctx->pc = 0x317f40u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) << (32 + 0));
    // 0x317f44: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x317f44u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x317f48: 0x3405ffff  ori         $a1, $zero, 0xFFFF
    ctx->pc = 0x317f48u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x317f4c: 0x51438  dsll        $v0, $a1, 16
    ctx->pc = 0x317f4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << 16);
    // 0x317f50: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x317f50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x317f54: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x317f54u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x317f58: 0xe46025  or          $t4, $a3, $a0
    ctx->pc = 0x317f58u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 7) | GPR_U64(ctx, 4));
    // 0x317f5c: 0x8fab0048  lw          $t3, 0x48($sp)
    ctx->pc = 0x317f5cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x317f60: 0x8d621298  lw          $v0, 0x1298($t3)
    ctx->pc = 0x317f60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 4760)));
    // 0x317f64: 0x25180  sll         $t2, $v0, 6
    ctx->pc = 0x317f64u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x317f68: 0x8e050130  lw          $a1, 0x130($s0)
    ctx->pc = 0x317f68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
    // 0x317f6c: 0xaa3021  addu        $a2, $a1, $t2
    ctx->pc = 0x317f6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 10)));
    // 0x317f70: 0x6103c  dsll32      $v0, $a2, 0
    ctx->pc = 0x317f70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 0));
    // 0x317f74: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x317f74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x317f78: 0x3404ffff  ori         $a0, $zero, 0xFFFF
    ctx->pc = 0x317f78u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x317f7c: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x317f7cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x317f80: 0x3487ffff  ori         $a3, $a0, 0xFFFF
    ctx->pc = 0x317f80u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x317f84: 0x472024  and         $a0, $v0, $a3
    ctx->pc = 0x317f84u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x317f88: 0x4483c  dsll32      $t1, $a0, 0
    ctx->pc = 0x317f88u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 4) << (32 + 0));
    // 0x317f8c: 0x8fa60048  lw          $a2, 0x48($sp)
    ctx->pc = 0x317f8cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x317f90: 0x8cc40130  lw          $a0, 0x130($a2)
    ctx->pc = 0x317f90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 304)));
    // 0x317f94: 0x4283c  dsll32      $a1, $a0, 0
    ctx->pc = 0x317f94u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 0));
    // 0x317f98: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x317f98u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x317f9c: 0x3404ffff  ori         $a0, $zero, 0xFFFF
    ctx->pc = 0x317f9cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x317fa0: 0x41438  dsll        $v0, $a0, 16
    ctx->pc = 0x317fa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << 16);
    // 0x317fa4: 0x3447ffff  ori         $a3, $v0, 0xFFFF
    ctx->pc = 0x317fa4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x317fa8: 0xa72024  and         $a0, $a1, $a3
    ctx->pc = 0x317fa8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & GPR_U64(ctx, 7));
    // 0x317fac: 0x891025  or          $v0, $a0, $t1
    ctx->pc = 0x317facu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 9));
    // 0x317fb0: 0x24041700  addiu       $a0, $zero, 0x1700
    ctx->pc = 0x317fb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5888));
    // 0x317fb4: 0x71002e28  paddub      $a1, $t0, $zero
    ctx->pc = 0x317fb4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x317fb8: 0x71803628  paddub      $a2, $t4, $zero
    ctx->pc = 0x317fb8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 12), GPR_VEC(ctx, 0)));
    // 0x317fbc: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x317fbcu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x317fc0: 0xc0631f0  jal         func_18C7C0
    ctx->pc = 0x317FC0u;
    SET_GPR_U32(ctx, 31, 0x317FC8u);
    ctx->pc = 0x18C7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C7C0u, 0x317FC0u, 0x317FC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x317FC8u;
label_317fc8:
    // 0x317fc8: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x317fc8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x317fcc: 0xc06332c  jal         func_18CCB0
    ctx->pc = 0x317FCCu;
    SET_GPR_U32(ctx, 31, 0x317FD4u);
    ctx->pc = 0x18CCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18CCB0u, 0x317FCCu, 0x317FD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x317FD4u;
label_317fd4:
    // 0x317fd4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x317fd4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x317fd8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x317fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x317fdc: 0xe4600184  swc1        $f0, 0x184($v1)
    ctx->pc = 0x317fdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 388), bits); }
    // 0x317fe0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x317fe0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x317fe4: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x317fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x317fe8: 0xe4400180  swc1        $f0, 0x180($v0)
    ctx->pc = 0x317fe8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 384), bits); }
    // 0x317fec: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x317fecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x317ff0: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x317ff0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x317ff4: 0xe4a00188  swc1        $f0, 0x188($a1)
    ctx->pc = 0x317ff4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 392), bits); }
    // 0x317ff8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x317ff8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x317ffc: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x317ffcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x318000: 0xe48012d0  swc1        $f0, 0x12D0($a0)
    ctx->pc = 0x318000u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4816), bits); }
    // 0x318004: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x318004u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x318008: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x318008u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31800c: 0xac6212b0  sw          $v0, 0x12B0($v1)
    ctx->pc = 0x31800cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4784), GPR_U32(ctx, 2));
    // 0x318010: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x318010u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x318014: 0x90470002  lbu         $a3, 0x2($v0)
    ctx->pc = 0x318014u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x318018: 0x24e40001  addiu       $a0, $a3, 0x1
    ctx->pc = 0x318018u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x31801c: 0xa0440002  sb          $a0, 0x2($v0)
    ctx->pc = 0x31801cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 4));
    ctx->pc = 0x318020u;
}
