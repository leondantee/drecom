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

// Function: e2d_id1d_type03
// Address: 0x2b30f0 - 0x2b324c
void e2d_id1d_type03_0x2b30f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id1d_type03_0x2b30f0");
#endif

    switch (ctx->pc) {
        case 0x2b3104u: goto label_2b3104;
        default: break;
    }

    ctx->pc = 0x2b30f0u;

    // 0x2b30f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2b30f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2b30f4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2b30f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2b30f8: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2b30f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2b30fc: 0xc06765c  jal         func_19D970
    ctx->pc = 0x2B30FCu;
    SET_GPR_U32(ctx, 31, 0x2B3104u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x2B30FCu, 0x2B3104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3104u;
label_2b3104:
    // 0x2b3104: 0x3c034248  lui         $v1, 0x4248
    ctx->pc = 0x2b3104u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16968 << 16));
    // 0x2b3108: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2b3108u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b310c: 0x0  nop
    ctx->pc = 0x2b310cu;
    // NOP
    // 0x2b3110: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2b3110u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2b3114: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x2b3114u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
    // 0x2b3118: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b3118u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b311c: 0x0  nop
    ctx->pc = 0x2b311cu;
    // NOP
    // 0x2b3120: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2b3120u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2b3124: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b3124u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b3128: 0xe4600104  swc1        $f0, 0x104($v1)
    ctx->pc = 0x2b3128u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 260), bits); }
    // 0x2b312c: 0x3c0342ac  lui         $v1, 0x42AC
    ctx->pc = 0x2b312cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17068 << 16));
    // 0x2b3130: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b3130u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b3134: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b3134u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b3138: 0xe460009c  swc1        $f0, 0x9C($v1)
    ctx->pc = 0x2b3138u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 156), bits); }
    // 0x2b313c: 0x3c033f78  lui         $v1, 0x3F78
    ctx->pc = 0x2b313cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16248 << 16));
    // 0x2b3140: 0x34639375  ori         $v1, $v1, 0x9375
    ctx->pc = 0x2b3140u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)37749);
    // 0x2b3144: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b3144u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b3148: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b3148u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b314c: 0xe46000ac  swc1        $f0, 0xAC($v1)
    ctx->pc = 0x2b314cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 172), bits); }
    // 0x2b3150: 0x2404006e  addiu       $a0, $zero, 0x6E
    ctx->pc = 0x2b3150u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
    // 0x2b3154: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b3154u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b3158: 0xac640100  sw          $a0, 0x100($v1)
    ctx->pc = 0x2b3158u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 256), GPR_U32(ctx, 4));
    // 0x2b315c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2b315cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2b3160: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2b3160u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2b3164: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2b3164u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2b3168: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2b3168u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2b316c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2b316cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2b3170: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2b3170u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2b3174: 0x32a00  sll         $a1, $v1, 8
    ctx->pc = 0x2b3174u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x2b3178: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2b3178u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2b317c: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2b317cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2b3180: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2b3180u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2b3184: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2b3184u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2b3188: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2b3188u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2b318c: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x2b318cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x2b3190: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x2b3190u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x2b3194: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x2b3194u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2b3198: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2b3198u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2b319c: 0xac237508  sw          $v1, 0x7508($at)
    ctx->pc = 0x2b319cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2b31a0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2b31a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2b31a4: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x2b31a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x2b31a8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2b31a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2b31ac: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2b31acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2b31b0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b31b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b31b4: 0xa064013a  sb          $a0, 0x13A($v1)
    ctx->pc = 0x2b31b4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 314), (uint8_t)GPR_U32(ctx, 4));
    // 0x2b31b8: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2b31b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2b31bc: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2b31bcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2b31c0: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2b31c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2b31c4: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2b31c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2b31c8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2b31c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2b31cc: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2b31ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2b31d0: 0x32a00  sll         $a1, $v1, 8
    ctx->pc = 0x2b31d0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x2b31d4: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2b31d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2b31d8: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2b31d8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2b31dc: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2b31dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2b31e0: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2b31e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2b31e4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2b31e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2b31e8: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x2b31e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x2b31ec: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x2b31ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x2b31f0: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x2b31f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2b31f4: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2b31f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2b31f8: 0xac237508  sw          $v1, 0x7508($at)
    ctx->pc = 0x2b31f8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2b31fc: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2b31fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2b3200: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x2b3200u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x2b3204: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2b3204u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2b3208: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b3208u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b320c: 0xa064011a  sb          $a0, 0x11A($v1)
    ctx->pc = 0x2b320cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 282), (uint8_t)GPR_U32(ctx, 4));
    // 0x2b3210: 0x3c0341a0  lui         $v1, 0x41A0
    ctx->pc = 0x2b3210u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16800 << 16));
    // 0x2b3214: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b3214u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b3218: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b3218u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b321c: 0xe4600058  swc1        $f0, 0x58($v1)
    ctx->pc = 0x2b321cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 88), bits); }
    // 0x2b3220: 0x3c03437a  lui         $v1, 0x437A
    ctx->pc = 0x2b3220u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17274 << 16));
    // 0x2b3224: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b3224u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b3228: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b3228u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b322c: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x2b322cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x2b3230: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2b3230u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b3234: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b3234u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b3238: 0xac64012c  sw          $a0, 0x12C($v1)
    ctx->pc = 0x2b3238u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 300), GPR_U32(ctx, 4));
    // 0x2b323c: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2b323cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b3240: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2b3240u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2b3244: 0x3e00008  jr          $ra
    ctx->pc = 0x2B3244u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B3244u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B324Cu;
}
