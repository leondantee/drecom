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

// Function: ectrl1d_move20
// Address: 0x253f00 - 0x254130
void ectrl1d_move20_0x253f00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ectrl1d_move20_0x253f00");
#endif

    switch (ctx->pc) {
        case 0x253f80u: goto label_253f80;
        case 0x253fa4u: goto label_253fa4;
        case 0x253fc8u: goto label_253fc8;
        case 0x25404cu: goto label_25404c;
        case 0x254058u: goto label_254058;
        default: break;
    }

    ctx->pc = 0x253f00u;

    // 0x253f00: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x253f00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x253f04: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x253f04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x253f08: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x253f08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x253f0c: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x253f0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
    // 0x253f10: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x253f10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x253f14: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x253f14u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x253f18: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x253f18u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x253f1c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x253f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x253f20: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x253f20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x253f24: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x253f24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x253f28: 0x32a00  sll         $a1, $v1, 8
    ctx->pc = 0x253f28u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x253f2c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x253f2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x253f30: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x253f30u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x253f34: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x253f34u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x253f38: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x253f38u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x253f3c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x253f3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x253f40: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x253f40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x253f44: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x253f44u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x253f48: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x253f48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x253f4c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x253f4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x253f50: 0xac237508  sw          $v1, 0x7508($at)
    ctx->pc = 0x253f50u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x253f54: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x253f54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x253f58: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x253f58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x253f5c: 0x14600059  bnez        $v1, . + 4 + (0x59 << 2)
    ctx->pc = 0x253F5Cu;
    {
        const bool branch_taken_0x253f5c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x253f5c) {
            ctx->pc = 0x2540C4u;
            goto label_2540c4;
        }
    }
    ctx->pc = 0x253F64u;
    // 0x253f64: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x253f64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x253f68: 0x244200a0  addiu       $v0, $v0, 0xA0
    ctx->pc = 0x253f68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    // 0x253f6c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x253f6cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x253f70: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x253f70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x253f74: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x253f74u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x253f78: 0xc06765c  jal         func_19D970
    ctx->pc = 0x253F78u;
    SET_GPR_U32(ctx, 31, 0x253F80u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x253F78u, 0x253F80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253F80u;
label_253f80:
    // 0x253f80: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x253f80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x253f84: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x253f84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x253f88: 0x0  nop
    ctx->pc = 0x253f88u;
    // NOP
    // 0x253f8c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x253f8cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x253f90: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x253f90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x253f94: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x253f94u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x253f98: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x253f98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x253f9c: 0xc06765c  jal         func_19D970
    ctx->pc = 0x253F9Cu;
    SET_GPR_U32(ctx, 31, 0x253FA4u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x253F9Cu, 0x253FA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253FA4u;
label_253fa4:
    // 0x253fa4: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x253fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x253fa8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x253fa8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x253fac: 0x0  nop
    ctx->pc = 0x253facu;
    // NOP
    // 0x253fb0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x253fb0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x253fb4: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x253fb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x253fb8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x253fb8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x253fbc: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x253fbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x253fc0: 0xc06765c  jal         func_19D970
    ctx->pc = 0x253FC0u;
    SET_GPR_U32(ctx, 31, 0x253FC8u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x253FC0u, 0x253FC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253FC8u;
label_253fc8:
    // 0x253fc8: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x253fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x253fcc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x253fccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x253fd0: 0x0  nop
    ctx->pc = 0x253fd0u;
    // NOP
    // 0x253fd4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x253fd4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x253fd8: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x253fd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x253fdc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x253fdcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x253fe0: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x253fe0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x253fe4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x253fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x253fe8: 0xc44000dc  lwc1        $f0, 0xDC($v0)
    ctx->pc = 0x253fe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x253fec: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x253fecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x253ff0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x253ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x253ff4: 0x8c4200c4  lw          $v0, 0xC4($v0)
    ctx->pc = 0x253ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
    // 0x253ff8: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x253ff8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x253ffc: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x253ffcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x254000: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x254000u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x254004: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x254004u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x254008: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x254008u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x25400c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x25400cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x254010: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x254010u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x254014: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x254014u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x254018: 0x8c4200c0  lw          $v0, 0xC0($v0)
    ctx->pc = 0x254018u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x25401c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x25401cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x254020: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x254020u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x254024: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x254024u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x254028: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x254028u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x25402c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x25402cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x254030: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x254030u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x254034: 0x823825  or          $a3, $a0, $v0
    ctx->pc = 0x254034u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x254038: 0x24042f03  addiu       $a0, $zero, 0x2F03
    ctx->pc = 0x254038u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12035));
    // 0x25403c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x25403cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x254040: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x254040u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x254044: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x254044u;
    SET_GPR_U32(ctx, 31, 0x25404Cu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x254044u, 0x25404Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25404Cu;
label_25404c:
    // 0x25404c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x25404cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x254050: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x254050u;
    SET_GPR_U32(ctx, 31, 0x254058u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x254050u, 0x254058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254058u;
label_254058:
    // 0x254058: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x254058u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25405c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x25405cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x254060: 0xac64000c  sw          $a0, 0xC($v1)
    ctx->pc = 0x254060u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
    // 0x254064: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x254064u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x254068: 0xac600104  sw          $zero, 0x104($v1)
    ctx->pc = 0x254068u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 260), GPR_U32(ctx, 0));
    // 0x25406c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x25406cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x254070: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x254070u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x254074: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x254074u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x254078: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x254078u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x25407c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x25407cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x254080: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x254080u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x254084: 0x32a00  sll         $a1, $v1, 8
    ctx->pc = 0x254084u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x254088: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x254088u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x25408c: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x25408cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x254090: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x254090u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x254094: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x254094u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x254098: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x254098u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x25409c: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x25409cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x2540a0: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x2540a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x2540a4: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x2540a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2540a8: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2540a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2540ac: 0xac237508  sw          $v1, 0x7508($at)
    ctx->pc = 0x2540acu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2540b0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2540b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2540b4: 0x3063003f  andi        $v1, $v1, 0x3F
    ctx->pc = 0x2540b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
    // 0x2540b8: 0x24640014  addiu       $a0, $v1, 0x14
    ctx->pc = 0x2540b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x2540bc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2540bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2540c0: 0xac640100  sw          $a0, 0x100($v1)
    ctx->pc = 0x2540c0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 256), GPR_U32(ctx, 4));
label_2540c4:
    // 0x2540c4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2540c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2540c8: 0x8c700108  lw          $s0, 0x108($v1)
    ctx->pc = 0x2540c8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 264)));
    // 0x2540cc: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x2540ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x2540d0: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x2540d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x2540d4: 0x12030011  beq         $s0, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x2540D4u;
    {
        const bool branch_taken_0x2540d4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x2540d4) {
            ctx->pc = 0x25411Cu;
            goto label_25411c;
        }
    }
    ctx->pc = 0x2540DCu;
    // 0x2540dc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2540dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2540e0: 0x8c6300c0  lw          $v1, 0xC0($v1)
    ctx->pc = 0x2540e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 192)));
    // 0x2540e4: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2540E4u;
    {
        const bool branch_taken_0x2540e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2540e4) {
            ctx->pc = 0x254108u;
            goto label_254108;
        }
    }
    ctx->pc = 0x2540ECu;
    // 0x2540ec: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2540ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2540f0: 0x246300a0  addiu       $v1, $v1, 0xA0
    ctx->pc = 0x2540f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 160));
    // 0x2540f4: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x2540f4u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2540f8: 0x260300d0  addiu       $v1, $s0, 0xD0
    ctx->pc = 0x2540f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 208));
    // 0x2540fc: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x2540fcu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x254100: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x254100u;
    {
        const bool branch_taken_0x254100 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x254100) {
            ctx->pc = 0x25411Cu;
            goto label_25411c;
        }
    }
    ctx->pc = 0x254108u;
label_254108:
    // 0x254108: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x254108u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x25410c: 0x246300a0  addiu       $v1, $v1, 0xA0
    ctx->pc = 0x25410cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 160));
    // 0x254110: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x254110u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x254114: 0x260300b0  addiu       $v1, $s0, 0xB0
    ctx->pc = 0x254114u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
    // 0x254118: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x254118u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
label_25411c:
    // 0x25411c: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x25411cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x254120: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x254120u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x254124: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x254124u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x254128: 0x3e00008  jr          $ra
    ctx->pc = 0x254128u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x254128u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x254130u;
}
