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

// Function: e2d_id67_type01
// Address: 0x2ba5f0 - 0x2ba718
void e2d_id67_type01_0x2ba5f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id67_type01_0x2ba5f0");
#endif

    switch (ctx->pc) {
        case 0x2ba644u: goto label_2ba644;
        default: break;
    }

    ctx->pc = 0x2ba5f0u;

    // 0x2ba5f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2ba5f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2ba5f4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2ba5f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2ba5f8: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2ba5f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2ba5fc: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2ba5fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2ba600: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ba600u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ba604: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2ba604u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ba608: 0xe4400090  swc1        $f0, 0x90($v0)
    ctx->pc = 0x2ba608u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 144), bits); }
    // 0x2ba60c: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2ba60cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2ba610: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ba610u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ba614: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2ba614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ba618: 0xe4400094  swc1        $f0, 0x94($v0)
    ctx->pc = 0x2ba618u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 148), bits); }
    // 0x2ba61c: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2ba61cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2ba620: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ba620u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ba624: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2ba624u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ba628: 0xe4400098  swc1        $f0, 0x98($v0)
    ctx->pc = 0x2ba628u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 152), bits); }
    // 0x2ba62c: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2ba62cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2ba630: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ba630u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ba634: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2ba634u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ba638: 0xe440009c  swc1        $f0, 0x9C($v0)
    ctx->pc = 0x2ba638u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 156), bits); }
    // 0x2ba63c: 0xc067648  jal         func_19D920
    ctx->pc = 0x2BA63Cu;
    SET_GPR_U32(ctx, 31, 0x2BA644u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2BA63Cu, 0x2BA644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA644u;
label_2ba644:
    // 0x2ba644: 0x3c0341a0  lui         $v1, 0x41A0
    ctx->pc = 0x2ba644u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16800 << 16));
    // 0x2ba648: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2ba648u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ba64c: 0x0  nop
    ctx->pc = 0x2ba64cu;
    // NOP
    // 0x2ba650: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2ba650u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ba654: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x2ba654u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
    // 0x2ba658: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ba658u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ba65c: 0x0  nop
    ctx->pc = 0x2ba65cu;
    // NOP
    // 0x2ba660: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2ba660u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2ba664: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2ba664u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ba668: 0xe4600104  swc1        $f0, 0x104($v1)
    ctx->pc = 0x2ba668u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 260), bits); }
    // 0x2ba66c: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x2ba66cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2ba670: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2ba670u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ba674: 0xac640100  sw          $a0, 0x100($v1)
    ctx->pc = 0x2ba674u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 256), GPR_U32(ctx, 4));
    // 0x2ba678: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x2ba678u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x2ba67c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ba67cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ba680: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2ba680u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ba684: 0xe46000f4  swc1        $f0, 0xF4($v1)
    ctx->pc = 0x2ba684u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 244), bits); }
    // 0x2ba688: 0x3c033f73  lui         $v1, 0x3F73
    ctx->pc = 0x2ba688u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16243 << 16));
    // 0x2ba68c: 0x34633333  ori         $v1, $v1, 0x3333
    ctx->pc = 0x2ba68cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)13107);
    // 0x2ba690: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ba690u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ba694: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2ba694u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ba698: 0xe46000fc  swc1        $f0, 0xFC($v1)
    ctx->pc = 0x2ba698u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 252), bits); }
    // 0x2ba69c: 0x3c033f4c  lui         $v1, 0x3F4C
    ctx->pc = 0x2ba69cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16204 << 16));
    // 0x2ba6a0: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x2ba6a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x2ba6a4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ba6a4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ba6a8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2ba6a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ba6ac: 0xe46000ac  swc1        $f0, 0xAC($v1)
    ctx->pc = 0x2ba6acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 172), bits); }
    // 0x2ba6b0: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2ba6b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2ba6b4: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2ba6b4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2ba6b8: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2ba6b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2ba6bc: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2ba6bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2ba6c0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2ba6c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2ba6c4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2ba6c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2ba6c8: 0x32a00  sll         $a1, $v1, 8
    ctx->pc = 0x2ba6c8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x2ba6cc: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2ba6ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2ba6d0: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2ba6d0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2ba6d4: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2ba6d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2ba6d8: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2ba6d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2ba6dc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2ba6dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2ba6e0: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x2ba6e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x2ba6e4: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x2ba6e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x2ba6e8: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x2ba6e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2ba6ec: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2ba6ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2ba6f0: 0xac237508  sw          $v1, 0x7508($at)
    ctx->pc = 0x2ba6f0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2ba6f4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2ba6f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2ba6f8: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x2ba6f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x2ba6fc: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2ba6fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2ba700: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2ba700u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ba704: 0xa064011a  sb          $a0, 0x11A($v1)
    ctx->pc = 0x2ba704u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 282), (uint8_t)GPR_U32(ctx, 4));
    // 0x2ba708: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2ba708u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ba70c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2ba70cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2ba710: 0x3e00008  jr          $ra
    ctx->pc = 0x2BA710u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BA710u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BA718u;
}
