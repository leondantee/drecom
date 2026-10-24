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

// Function: e2d_id1d_type02
// Address: 0x2b2f70 - 0x2b30ec
void e2d_id1d_type02_0x2b2f70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id1d_type02_0x2b2f70");
#endif

    switch (ctx->pc) {
        case 0x2b2f84u: goto label_2b2f84;
        default: break;
    }

    ctx->pc = 0x2b2f70u;

    // 0x2b2f70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2b2f70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2b2f74: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2b2f74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2b2f78: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2b2f78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2b2f7c: 0xc06765c  jal         func_19D970
    ctx->pc = 0x2B2F7Cu;
    SET_GPR_U32(ctx, 31, 0x2B2F84u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x2B2F7Cu, 0x2B2F84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B2F84u;
label_2b2f84:
    // 0x2b2f84: 0x3c034248  lui         $v1, 0x4248
    ctx->pc = 0x2b2f84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16968 << 16));
    // 0x2b2f88: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2b2f88u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b2f8c: 0x0  nop
    ctx->pc = 0x2b2f8cu;
    // NOP
    // 0x2b2f90: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2b2f90u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2b2f94: 0x3c034316  lui         $v1, 0x4316
    ctx->pc = 0x2b2f94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17174 << 16));
    // 0x2b2f98: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b2f98u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b2f9c: 0x0  nop
    ctx->pc = 0x2b2f9cu;
    // NOP
    // 0x2b2fa0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2b2fa0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2b2fa4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b2fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b2fa8: 0xe4600104  swc1        $f0, 0x104($v1)
    ctx->pc = 0x2b2fa8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 260), bits); }
    // 0x2b2fac: 0x3c033f6e  lui         $v1, 0x3F6E
    ctx->pc = 0x2b2facu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16238 << 16));
    // 0x2b2fb0: 0x3463147b  ori         $v1, $v1, 0x147B
    ctx->pc = 0x2b2fb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)5243);
    // 0x2b2fb4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b2fb4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b2fb8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b2fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b2fbc: 0xe46000ac  swc1        $f0, 0xAC($v1)
    ctx->pc = 0x2b2fbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 172), bits); }
    // 0x2b2fc0: 0x24040046  addiu       $a0, $zero, 0x46
    ctx->pc = 0x2b2fc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
    // 0x2b2fc4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b2fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b2fc8: 0xac640100  sw          $a0, 0x100($v1)
    ctx->pc = 0x2b2fc8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 256), GPR_U32(ctx, 4));
    // 0x2b2fcc: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2b2fccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2b2fd0: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2b2fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2b2fd4: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2b2fd4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2b2fd8: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2b2fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2b2fdc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2b2fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2b2fe0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2b2fe0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2b2fe4: 0x32a00  sll         $a1, $v1, 8
    ctx->pc = 0x2b2fe4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x2b2fe8: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2b2fe8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2b2fec: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2b2fecu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2b2ff0: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2b2ff0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2b2ff4: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2b2ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2b2ff8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2b2ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2b2ffc: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x2b2ffcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x2b3000: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x2b3000u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x2b3004: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x2b3004u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2b3008: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2b3008u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2b300c: 0xac237508  sw          $v1, 0x7508($at)
    ctx->pc = 0x2b300cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2b3010: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2b3010u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2b3014: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2b3014u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2b3018: 0x83001b  divu        $zero, $a0, $v1
    ctx->pc = 0x2b3018u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
    // 0x2b301c: 0x0  nop
    ctx->pc = 0x2b301cu;
    // NOP
    // 0x2b3020: 0x0  nop
    ctx->pc = 0x2b3020u;
    // NOP
    // 0x2b3024: 0x1810  mfhi        $v1
    ctx->pc = 0x2b3024u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x2b3028: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2b3028u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2b302c: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2b302cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2b3030: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b3030u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b3034: 0xa064013a  sb          $a0, 0x13A($v1)
    ctx->pc = 0x2b3034u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 314), (uint8_t)GPR_U32(ctx, 4));
    // 0x2b3038: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2b3038u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2b303c: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2b303cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2b3040: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2b3040u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2b3044: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2b3044u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2b3048: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2b3048u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2b304c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2b304cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2b3050: 0x32a00  sll         $a1, $v1, 8
    ctx->pc = 0x2b3050u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x2b3054: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2b3054u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2b3058: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2b3058u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2b305c: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2b305cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2b3060: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2b3060u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2b3064: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2b3064u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2b3068: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x2b3068u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x2b306c: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x2b306cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x2b3070: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x2b3070u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2b3074: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2b3074u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2b3078: 0xac237508  sw          $v1, 0x7508($at)
    ctx->pc = 0x2b3078u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2b307c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2b307cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2b3080: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x2b3080u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x2b3084: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2b3084u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2b3088: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b3088u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b308c: 0xa064011a  sb          $a0, 0x11A($v1)
    ctx->pc = 0x2b308cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 282), (uint8_t)GPR_U32(ctx, 4));
    // 0x2b3090: 0x3c033d4c  lui         $v1, 0x3D4C
    ctx->pc = 0x2b3090u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15692 << 16));
    // 0x2b3094: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x2b3094u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x2b3098: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b3098u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b309c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b309cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b30a0: 0xe46000f4  swc1        $f0, 0xF4($v1)
    ctx->pc = 0x2b30a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 244), bits); }
    // 0x2b30a4: 0x3c033c23  lui         $v1, 0x3C23
    ctx->pc = 0x2b30a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15395 << 16));
    // 0x2b30a8: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x2b30a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x2b30ac: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b30acu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b30b0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b30b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b30b4: 0xe46000f8  swc1        $f0, 0xF8($v1)
    ctx->pc = 0x2b30b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 248), bits); }
    // 0x2b30b8: 0x3c03be19  lui         $v1, 0xBE19
    ctx->pc = 0x2b30b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48665 << 16));
    // 0x2b30bc: 0x3463999a  ori         $v1, $v1, 0x999A
    ctx->pc = 0x2b30bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39322);
    // 0x2b30c0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b30c0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b30c4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b30c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b30c8: 0xe4600084  swc1        $f0, 0x84($v1)
    ctx->pc = 0x2b30c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 132), bits); }
    // 0x2b30cc: 0x3c034270  lui         $v1, 0x4270
    ctx->pc = 0x2b30ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17008 << 16));
    // 0x2b30d0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b30d0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b30d4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b30d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b30d8: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x2b30d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x2b30dc: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2b30dcu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b30e0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2b30e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2b30e4: 0x3e00008  jr          $ra
    ctx->pc = 0x2B30E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B30E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B30ECu;
}
