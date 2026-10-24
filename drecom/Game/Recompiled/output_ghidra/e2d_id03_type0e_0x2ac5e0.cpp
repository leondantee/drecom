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

// Function: e2d_id03_type0e
// Address: 0x2ac5e0 - 0x2ac804
void e2d_id03_type0e_0x2ac5e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id03_type0e_0x2ac5e0");
#endif

    switch (ctx->pc) {
        case 0x2ac680u: goto label_2ac680;
        default: break;
    }

    ctx->pc = 0x2ac5e0u;

    // 0x2ac5e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2ac5e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2ac5e4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2ac5e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2ac5e8: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2ac5e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2ac5ec: 0x3c0242b0  lui         $v0, 0x42B0
    ctx->pc = 0x2ac5ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17072 << 16));
    // 0x2ac5f0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ac5f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ac5f4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2ac5f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ac5f8: 0xe4400090  swc1        $f0, 0x90($v0)
    ctx->pc = 0x2ac5f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 144), bits); }
    // 0x2ac5fc: 0x3c0242b0  lui         $v0, 0x42B0
    ctx->pc = 0x2ac5fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17072 << 16));
    // 0x2ac600: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ac600u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ac604: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2ac604u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ac608: 0xe4400094  swc1        $f0, 0x94($v0)
    ctx->pc = 0x2ac608u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 148), bits); }
    // 0x2ac60c: 0x3c0242d8  lui         $v0, 0x42D8
    ctx->pc = 0x2ac60cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17112 << 16));
    // 0x2ac610: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ac610u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ac614: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2ac614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ac618: 0xe4400098  swc1        $f0, 0x98($v0)
    ctx->pc = 0x2ac618u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 152), bits); }
    // 0x2ac61c: 0x3c024288  lui         $v0, 0x4288
    ctx->pc = 0x2ac61cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17032 << 16));
    // 0x2ac620: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ac620u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ac624: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2ac624u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ac628: 0xe440009c  swc1        $f0, 0x9C($v0)
    ctx->pc = 0x2ac628u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 156), bits); }
    // 0x2ac62c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2ac62cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2ac630: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ac630u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ac634: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2ac634u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ac638: 0xe44000a0  swc1        $f0, 0xA0($v0)
    ctx->pc = 0x2ac638u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 160), bits); }
    // 0x2ac63c: 0x3c023f73  lui         $v0, 0x3F73
    ctx->pc = 0x2ac63cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16243 << 16));
    // 0x2ac640: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x2ac640u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
    // 0x2ac644: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ac644u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ac648: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2ac648u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ac64c: 0xe44000a4  swc1        $f0, 0xA4($v0)
    ctx->pc = 0x2ac64cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 164), bits); }
    // 0x2ac650: 0x3c023f73  lui         $v0, 0x3F73
    ctx->pc = 0x2ac650u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16243 << 16));
    // 0x2ac654: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x2ac654u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
    // 0x2ac658: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ac658u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ac65c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2ac65cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ac660: 0xe44000a8  swc1        $f0, 0xA8($v0)
    ctx->pc = 0x2ac660u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 168), bits); }
    // 0x2ac664: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x2ac664u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
    // 0x2ac668: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x2ac668u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x2ac66c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ac66cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ac670: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2ac670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ac674: 0xe44000ac  swc1        $f0, 0xAC($v0)
    ctx->pc = 0x2ac674u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 172), bits); }
    // 0x2ac678: 0xc067648  jal         func_19D920
    ctx->pc = 0x2AC678u;
    SET_GPR_U32(ctx, 31, 0x2AC680u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2AC678u, 0x2AC680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AC680u;
label_2ac680:
    // 0x2ac680: 0x3c0341c8  lui         $v1, 0x41C8
    ctx->pc = 0x2ac680u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16840 << 16));
    // 0x2ac684: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2ac684u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ac688: 0x0  nop
    ctx->pc = 0x2ac688u;
    // NOP
    // 0x2ac68c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2ac68cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ac690: 0x3c03437a  lui         $v1, 0x437A
    ctx->pc = 0x2ac690u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17274 << 16));
    // 0x2ac694: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ac694u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ac698: 0x0  nop
    ctx->pc = 0x2ac698u;
    // NOP
    // 0x2ac69c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2ac69cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2ac6a0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2ac6a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ac6a4: 0xe4600104  swc1        $f0, 0x104($v1)
    ctx->pc = 0x2ac6a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 260), bits); }
    // 0x2ac6a8: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x2ac6a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2ac6ac: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2ac6acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ac6b0: 0xac640100  sw          $a0, 0x100($v1)
    ctx->pc = 0x2ac6b0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 256), GPR_U32(ctx, 4));
    // 0x2ac6b4: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2ac6b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2ac6b8: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2ac6b8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2ac6bc: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2ac6bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2ac6c0: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2ac6c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2ac6c4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2ac6c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2ac6c8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2ac6c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2ac6cc: 0x32a00  sll         $a1, $v1, 8
    ctx->pc = 0x2ac6ccu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x2ac6d0: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2ac6d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2ac6d4: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2ac6d4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2ac6d8: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2ac6d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2ac6dc: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2ac6dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2ac6e0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2ac6e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2ac6e4: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x2ac6e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x2ac6e8: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x2ac6e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x2ac6ec: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x2ac6ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2ac6f0: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2ac6f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2ac6f4: 0xac237508  sw          $v1, 0x7508($at)
    ctx->pc = 0x2ac6f4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2ac6f8: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2ac6f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2ac6fc: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x2ac6fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2ac700: 0x83001b  divu        $zero, $a0, $v1
    ctx->pc = 0x2ac700u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
    // 0x2ac704: 0x0  nop
    ctx->pc = 0x2ac704u;
    // NOP
    // 0x2ac708: 0x0  nop
    ctx->pc = 0x2ac708u;
    // NOP
    // 0x2ac70c: 0x1810  mfhi        $v1
    ctx->pc = 0x2ac70cu;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x2ac710: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2ac710u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2ac714: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2ac714u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ac718: 0xa0640138  sb          $a0, 0x138($v1)
    ctx->pc = 0x2ac718u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 312), (uint8_t)GPR_U32(ctx, 4));
    // 0x2ac71c: 0x3c03bd75  lui         $v1, 0xBD75
    ctx->pc = 0x2ac71cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48501 << 16));
    // 0x2ac720: 0x3463c28f  ori         $v1, $v1, 0xC28F
    ctx->pc = 0x2ac720u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)49807);
    // 0x2ac724: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ac724u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ac728: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2ac728u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ac72c: 0xe46000f4  swc1        $f0, 0xF4($v1)
    ctx->pc = 0x2ac72cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 244), bits); }
    // 0x2ac730: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2ac730u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2ac734: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2ac734u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2ac738: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2ac738u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2ac73c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2ac73cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2ac740: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2ac740u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2ac744: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2ac744u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2ac748: 0x32a00  sll         $a1, $v1, 8
    ctx->pc = 0x2ac748u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x2ac74c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2ac74cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2ac750: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2ac750u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2ac754: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2ac754u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2ac758: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2ac758u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2ac75c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2ac75cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2ac760: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x2ac760u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x2ac764: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x2ac764u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x2ac768: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x2ac768u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2ac76c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2ac76cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2ac770: 0xac237508  sw          $v1, 0x7508($at)
    ctx->pc = 0x2ac770u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2ac774: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2ac774u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2ac778: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2ac778u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2ac77c: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x2ac77cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2ac780: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2ac780u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ac784: 0x9083011a  lbu         $v1, 0x11A($a0)
    ctx->pc = 0x2ac784u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 282)));
    // 0x2ac788: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x2ac788u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x2ac78c: 0xa083011a  sb          $v1, 0x11A($a0)
    ctx->pc = 0x2ac78cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 282), (uint8_t)GPR_U32(ctx, 3));
    // 0x2ac790: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2ac790u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2ac794: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2ac794u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2ac798: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2ac798u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2ac79c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2ac79cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2ac7a0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2ac7a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2ac7a4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2ac7a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2ac7a8: 0x32a00  sll         $a1, $v1, 8
    ctx->pc = 0x2ac7a8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x2ac7ac: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2ac7acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2ac7b0: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2ac7b0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2ac7b4: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2ac7b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2ac7b8: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2ac7b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2ac7bc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2ac7bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2ac7c0: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x2ac7c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x2ac7c4: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x2ac7c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x2ac7c8: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x2ac7c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2ac7cc: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2ac7ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2ac7d0: 0xac237508  sw          $v1, 0x7508($at)
    ctx->pc = 0x2ac7d0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2ac7d4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2ac7d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2ac7d8: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2ac7d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2ac7dc: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x2ac7dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2ac7e0: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x2ac7e0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2ac7e4: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2ac7e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ac7e8: 0x9083011a  lbu         $v1, 0x11A($a0)
    ctx->pc = 0x2ac7e8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 282)));
    // 0x2ac7ec: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x2ac7ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x2ac7f0: 0xa083011a  sb          $v1, 0x11A($a0)
    ctx->pc = 0x2ac7f0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 282), (uint8_t)GPR_U32(ctx, 3));
    // 0x2ac7f4: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2ac7f4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ac7f8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2ac7f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2ac7fc: 0x3e00008  jr          $ra
    ctx->pc = 0x2AC7FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AC7FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AC804u;
}
