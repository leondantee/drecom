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

// Function: ectrl08_move10
// Address: 0x2f5f50 - 0x2f6460
void ectrl08_move10_0x2f5f50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ectrl08_move10_0x2f5f50");
#endif

    switch (ctx->pc) {
        case 0x2f60a0u: goto label_2f60a0;
        case 0x2f60ccu: goto label_2f60cc;
        case 0x2f60f0u: goto label_2f60f0;
        case 0x2f612cu: goto label_2f612c;
        case 0x2f6168u: goto label_2f6168;
        case 0x2f61acu: goto label_2f61ac;
        case 0x2f61ecu: goto label_2f61ec;
        case 0x2f6220u: goto label_2f6220;
        case 0x2f6244u: goto label_2f6244;
        case 0x2f6280u: goto label_2f6280;
        case 0x2f62bcu: goto label_2f62bc;
        case 0x2f6300u: goto label_2f6300;
        case 0x2f6370u: goto label_2f6370;
        case 0x2f63a4u: goto label_2f63a4;
        case 0x2f63f4u: goto label_2f63f4;
        case 0x2f6428u: goto label_2f6428;
        default: break;
    }

    ctx->pc = 0x2f5f50u;

    // 0x2f5f50: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2f5f50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2f5f54: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2f5f54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2f5f58: 0xafa40058  sw          $a0, 0x58($sp)
    ctx->pc = 0x2f5f58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
    // 0x2f5f5c: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x2f5f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x2f5f60: 0x24428f60  addiu       $v0, $v0, -0x70A0
    ctx->pc = 0x2f5f60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938464));
    // 0x2f5f64: 0x27a30010  addiu       $v1, $sp, 0x10
    ctx->pc = 0x2f5f64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2f5f68: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x2f5f68u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x398F60u));
    // 0x2f5f6c: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x2f5f6cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x2f5f70: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x2f5f70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x2f5f74: 0x24428f70  addiu       $v0, $v0, -0x7090
    ctx->pc = 0x2f5f74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938480));
    // 0x2f5f78: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x2f5f78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2f5f7c: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x2f5f7cu;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x398F70u));
    // 0x2f5f80: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x2f5f80u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x2f5f84: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x2f5f84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x2f5f88: 0x24428f80  addiu       $v0, $v0, -0x7080
    ctx->pc = 0x2f5f88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938496));
    // 0x2f5f8c: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x2f5f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2f5f90: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x2f5f90u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x398F80u));
    // 0x2f5f94: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x2f5f94u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x2f5f98: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2f5f98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2f5f9c: 0x8c4200c0  lw          $v0, 0xC0($v0)
    ctx->pc = 0x2f5f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x2f5fa0: 0xc4410030  lwc1        $f1, 0x30($v0)
    ctx->pc = 0x2f5fa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f5fa4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2f5fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2f5fa8: 0xc44000a0  lwc1        $f0, 0xA0($v0)
    ctx->pc = 0x2f5fa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f5fac: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2f5facu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2f5fb0: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x2f5fb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2f5fb4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2f5fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2f5fb8: 0x8c4200c0  lw          $v0, 0xC0($v0)
    ctx->pc = 0x2f5fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x2f5fbc: 0xc4410034  lwc1        $f1, 0x34($v0)
    ctx->pc = 0x2f5fbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f5fc0: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2f5fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2f5fc4: 0xc44000a4  lwc1        $f0, 0xA4($v0)
    ctx->pc = 0x2f5fc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f5fc8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2f5fc8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2f5fcc: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x2f5fccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x2f5fd0: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2f5fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2f5fd4: 0x8c4200c0  lw          $v0, 0xC0($v0)
    ctx->pc = 0x2f5fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x2f5fd8: 0xc4410038  lwc1        $f1, 0x38($v0)
    ctx->pc = 0x2f5fd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f5fdc: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2f5fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2f5fe0: 0xc44000a8  lwc1        $f0, 0xA8($v0)
    ctx->pc = 0x2f5fe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f5fe4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2f5fe4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2f5fe8: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x2f5fe8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2f5fec: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2f5fecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2f5ff0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f5ff0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f5ff4: 0x0  nop
    ctx->pc = 0x2f5ff4u;
    // NOP
    // 0x2f5ff8: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x2f5ff8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x2f5ffc: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2f5ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2f6000: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x2f6000u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2f6004: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F6004u;
    {
        const bool branch_taken_0x2f6004 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f6004) {
            ctx->pc = 0x2F601Cu;
            goto label_2f601c;
        }
    }
    ctx->pc = 0x2F600Cu;
    // 0x2f600c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2f600cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2f6010: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f6010u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f6014: 0x0  nop
    ctx->pc = 0x2f6014u;
    // NOP
    // 0x2f6018: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x2f6018u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
label_2f601c:
    // 0x2f601c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2f601cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2f6020: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x2f6020u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2f6024: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f6024u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f6028: 0x1462000e  bne         $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2F6028u;
    {
        const bool branch_taken_0x2f6028 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2f6028) {
            ctx->pc = 0x2F6064u;
            goto label_2f6064;
        }
    }
    ctx->pc = 0x2F6030u;
    // 0x2f6030: 0x3c023f19  lui         $v0, 0x3F19
    ctx->pc = 0x2f6030u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16153 << 16));
    // 0x2f6034: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x2f6034u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x2f6038: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f6038u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f603c: 0x0  nop
    ctx->pc = 0x2f603cu;
    // NOP
    // 0x2f6040: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x2f6040u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x2f6044: 0x3c0240e0  lui         $v0, 0x40E0
    ctx->pc = 0x2f6044u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16608 << 16));
    // 0x2f6048: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f6048u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f604c: 0x0  nop
    ctx->pc = 0x2f604cu;
    // NOP
    // 0x2f6050: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x2f6050u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x2f6054: 0x3c0241c0  lui         $v0, 0x41C0
    ctx->pc = 0x2f6054u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16832 << 16));
    // 0x2f6058: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f6058u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f605c: 0x0  nop
    ctx->pc = 0x2f605cu;
    // NOP
    // 0x2f6060: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x2f6060u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_2f6064:
    // 0x2f6064: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2f6064u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2f6068: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x2f6068u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2f606c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2f606cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2f6070: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F6070u;
    {
        const bool branch_taken_0x2f6070 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2f6070) {
            ctx->pc = 0x2F6088u;
            goto label_2f6088;
        }
    }
    ctx->pc = 0x2F6078u;
    // 0x2f6078: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2f6078u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2f607c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f607cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f6080: 0x0  nop
    ctx->pc = 0x2f6080u;
    // NOP
    // 0x2f6084: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x2f6084u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
label_2f6088:
    // 0x2f6088: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2f6088u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2f608c: 0x244400b0  addiu       $a0, $v0, 0xB0
    ctx->pc = 0x2f608cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 176));
    // 0x2f6090: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x2f6090u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2f6094: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x2f6094u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2f6098: 0xc0c9694  jal         func_325A50
    ctx->pc = 0x2F6098u;
    SET_GPR_U32(ctx, 31, 0x2F60A0u);
    ctx->pc = 0x325A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x325A50u, 0x2F6098u, 0x2F60A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F60A0u;
label_2f60a0:
    // 0x2f60a0: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2f60a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2f60a4: 0x8c6400d4  lw          $a0, 0xD4($v1)
    ctx->pc = 0x2f60a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 212)));
    // 0x2f60a8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2f60a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f60ac: 0x1483003f  bne         $a0, $v1, . + 4 + (0x3F << 2)
    ctx->pc = 0x2F60ACu;
    {
        const bool branch_taken_0x2f60ac = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2f60ac) {
            ctx->pc = 0x2F61ACu;
            goto label_2f61ac;
        }
    }
    ctx->pc = 0x2F60B4u;
    // 0x2f60b4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2f60b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2f60b8: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x2f60b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2f60bc: 0x244500b0  addiu       $a1, $v0, 0xB0
    ctx->pc = 0x2f60bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 176));
    // 0x2f60c0: 0xc7ac004c  lwc1        $f12, 0x4C($sp)
    ctx->pc = 0x2f60c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2f60c4: 0xc0bd69c  jal         func_2F5A70
    ctx->pc = 0x2F60C4u;
    SET_GPR_U32(ctx, 31, 0x2F60CCu);
    ctx->pc = 0x2F5A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F5A70u, 0x2F60C4u, 0x2F60CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F60CCu;
label_2f60cc:
    // 0x2f60cc: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2f60ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2f60d0: 0xac620104  sw          $v0, 0x104($v1)
    ctx->pc = 0x2f60d0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 260), GPR_U32(ctx, 2));
    // 0x2f60d4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2f60d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2f60d8: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x2f60d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2f60dc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f60dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f60e0: 0x1062002e  beq         $v1, $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x2F60E0u;
    {
        const bool branch_taken_0x2f60e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2f60e0) {
            ctx->pc = 0x2F619Cu;
            goto label_2f619c;
        }
    }
    ctx->pc = 0x2F60E8u;
    // 0x2f60e8: 0xc067648  jal         func_19D920
    ctx->pc = 0x2F60E8u;
    SET_GPR_U32(ctx, 31, 0x2F60F0u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2F60E8u, 0x2F60F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F60F0u;
label_2f60f0:
    // 0x2f60f0: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x2f60f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x2f60f4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2f60f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f60f8: 0x0  nop
    ctx->pc = 0x2f60f8u;
    // NOP
    // 0x2f60fc: 0x460008c2  mul.s       $f3, $f1, $f0
    ctx->pc = 0x2f60fcu;
    ctx->f[3] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f6100: 0xc7a20020  lwc1        $f2, 0x20($sp)
    ctx->pc = 0x2f6100u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2f6104: 0x3c023fe6  lui         $v0, 0x3FE6
    ctx->pc = 0x2f6104u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16358 << 16));
    // 0x2f6108: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x2f6108u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x2f610c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2f610cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f6110: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x2f6110u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f6114: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2f6114u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f6118: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x2f6118u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x2f611c: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x2f611cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x2f6120: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x2f6120u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2f6124: 0xc067648  jal         func_19D920
    ctx->pc = 0x2F6124u;
    SET_GPR_U32(ctx, 31, 0x2F612Cu);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2F6124u, 0x2F612Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F612Cu;
label_2f612c:
    // 0x2f612c: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x2f612cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x2f6130: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2f6130u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f6134: 0x0  nop
    ctx->pc = 0x2f6134u;
    // NOP
    // 0x2f6138: 0x460008c2  mul.s       $f3, $f1, $f0
    ctx->pc = 0x2f6138u;
    ctx->f[3] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f613c: 0xc7a20024  lwc1        $f2, 0x24($sp)
    ctx->pc = 0x2f613cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2f6140: 0x3c023fe6  lui         $v0, 0x3FE6
    ctx->pc = 0x2f6140u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16358 << 16));
    // 0x2f6144: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x2f6144u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x2f6148: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2f6148u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f614c: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x2f614cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f6150: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2f6150u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f6154: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x2f6154u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x2f6158: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x2f6158u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x2f615c: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x2f615cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2f6160: 0xc067648  jal         func_19D920
    ctx->pc = 0x2F6160u;
    SET_GPR_U32(ctx, 31, 0x2F6168u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2F6160u, 0x2F6168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6168u;
label_2f6168:
    // 0x2f6168: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x2f6168u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x2f616c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2f616cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f6170: 0x0  nop
    ctx->pc = 0x2f6170u;
    // NOP
    // 0x2f6174: 0x460008c2  mul.s       $f3, $f1, $f0
    ctx->pc = 0x2f6174u;
    ctx->f[3] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f6178: 0xc7a20028  lwc1        $f2, 0x28($sp)
    ctx->pc = 0x2f6178u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2f617c: 0x3c023fe6  lui         $v0, 0x3FE6
    ctx->pc = 0x2f617cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16358 << 16));
    // 0x2f6180: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x2f6180u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x2f6184: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2f6184u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f6188: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x2f6188u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f618c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2f618cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f6190: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x2f6190u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x2f6194: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x2f6194u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x2f6198: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x2f6198u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_2f619c:
    // 0x2f619c: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x2f619cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2f61a0: 0x240500c8  addiu       $a1, $zero, 0xC8
    ctx->pc = 0x2f61a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    // 0x2f61a4: 0xc0c4908  jal         func_312420
    ctx->pc = 0x2F61A4u;
    SET_GPR_U32(ctx, 31, 0x2F61ACu);
    ctx->pc = 0x312420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312420u, 0x2F61A4u, 0x2F61ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F61ACu;
label_2f61ac:
    // 0x2f61ac: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2f61acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2f61b0: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x2f61b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2f61b4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2f61b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2f61b8: 0x1083007c  beq         $a0, $v1, . + 4 + (0x7C << 2)
    ctx->pc = 0x2F61B8u;
    {
        const bool branch_taken_0x2f61b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2f61b8) {
            ctx->pc = 0x2F63ACu;
            goto label_2f63ac;
        }
    }
    ctx->pc = 0x2F61C0u;
    // 0x2f61c0: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2f61c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2f61c4: 0x8c6400d4  lw          $a0, 0xD4($v1)
    ctx->pc = 0x2f61c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 212)));
    // 0x2f61c8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2f61c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2f61cc: 0x14830009  bne         $a0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2F61CCu;
    {
        const bool branch_taken_0x2f61cc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2f61cc) {
            ctx->pc = 0x2F61F4u;
            goto label_2f61f4;
        }
    }
    ctx->pc = 0x2F61D4u;
    // 0x2f61d4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2f61d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2f61d8: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x2f61d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2f61dc: 0x244500b0  addiu       $a1, $v0, 0xB0
    ctx->pc = 0x2f61dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 176));
    // 0x2f61e0: 0xc7ac004c  lwc1        $f12, 0x4C($sp)
    ctx->pc = 0x2f61e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2f61e4: 0xc0bd69c  jal         func_2F5A70
    ctx->pc = 0x2F61E4u;
    SET_GPR_U32(ctx, 31, 0x2F61ECu);
    ctx->pc = 0x2F5A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F5A70u, 0x2F61E4u, 0x2F61ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F61ECu;
label_2f61ec:
    // 0x2f61ec: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2f61ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2f61f0: 0xac620104  sw          $v0, 0x104($v1)
    ctx->pc = 0x2f61f0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 260), GPR_U32(ctx, 2));
label_2f61f4:
    // 0x2f61f4: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2f61f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2f61f8: 0x8c6400d4  lw          $a0, 0xD4($v1)
    ctx->pc = 0x2f61f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 212)));
    // 0x2f61fc: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x2f61fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2f6200: 0x1483003f  bne         $a0, $v1, . + 4 + (0x3F << 2)
    ctx->pc = 0x2F6200u;
    {
        const bool branch_taken_0x2f6200 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2f6200) {
            ctx->pc = 0x2F6300u;
            goto label_2f6300;
        }
    }
    ctx->pc = 0x2F6208u;
    // 0x2f6208: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2f6208u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2f620c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x2f620cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2f6210: 0x244500b0  addiu       $a1, $v0, 0xB0
    ctx->pc = 0x2f6210u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 176));
    // 0x2f6214: 0xc7ac004c  lwc1        $f12, 0x4C($sp)
    ctx->pc = 0x2f6214u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2f6218: 0xc0bd69c  jal         func_2F5A70
    ctx->pc = 0x2F6218u;
    SET_GPR_U32(ctx, 31, 0x2F6220u);
    ctx->pc = 0x2F5A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F5A70u, 0x2F6218u, 0x2F6220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6220u;
label_2f6220:
    // 0x2f6220: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2f6220u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2f6224: 0xac620104  sw          $v0, 0x104($v1)
    ctx->pc = 0x2f6224u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 260), GPR_U32(ctx, 2));
    // 0x2f6228: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2f6228u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2f622c: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x2f622cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2f6230: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2f6230u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f6234: 0x10830032  beq         $a0, $v1, . + 4 + (0x32 << 2)
    ctx->pc = 0x2F6234u;
    {
        const bool branch_taken_0x2f6234 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2f6234) {
            ctx->pc = 0x2F6300u;
            goto label_2f6300;
        }
    }
    ctx->pc = 0x2F623Cu;
    // 0x2f623c: 0xc067648  jal         func_19D920
    ctx->pc = 0x2F623Cu;
    SET_GPR_U32(ctx, 31, 0x2F6244u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2F623Cu, 0x2F6244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6244u;
label_2f6244:
    // 0x2f6244: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x2f6244u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x2f6248: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2f6248u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f624c: 0x0  nop
    ctx->pc = 0x2f624cu;
    // NOP
    // 0x2f6250: 0x460008c2  mul.s       $f3, $f1, $f0
    ctx->pc = 0x2f6250u;
    ctx->f[3] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f6254: 0xc7a20020  lwc1        $f2, 0x20($sp)
    ctx->pc = 0x2f6254u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2f6258: 0x3c023fd9  lui         $v0, 0x3FD9
    ctx->pc = 0x2f6258u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16345 << 16));
    // 0x2f625c: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x2f625cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x2f6260: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2f6260u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f6264: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x2f6264u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f6268: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2f6268u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f626c: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x2f626cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x2f6270: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x2f6270u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x2f6274: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x2f6274u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2f6278: 0xc067648  jal         func_19D920
    ctx->pc = 0x2F6278u;
    SET_GPR_U32(ctx, 31, 0x2F6280u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2F6278u, 0x2F6280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6280u;
label_2f6280:
    // 0x2f6280: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x2f6280u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x2f6284: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2f6284u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f6288: 0x0  nop
    ctx->pc = 0x2f6288u;
    // NOP
    // 0x2f628c: 0x460008c2  mul.s       $f3, $f1, $f0
    ctx->pc = 0x2f628cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f6290: 0xc7a20024  lwc1        $f2, 0x24($sp)
    ctx->pc = 0x2f6290u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2f6294: 0x3c023fd9  lui         $v0, 0x3FD9
    ctx->pc = 0x2f6294u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16345 << 16));
    // 0x2f6298: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x2f6298u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x2f629c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2f629cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f62a0: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x2f62a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f62a4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2f62a4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f62a8: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x2f62a8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x2f62ac: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x2f62acu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x2f62b0: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x2f62b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2f62b4: 0xc067648  jal         func_19D920
    ctx->pc = 0x2F62B4u;
    SET_GPR_U32(ctx, 31, 0x2F62BCu);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2F62B4u, 0x2F62BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F62BCu;
label_2f62bc:
    // 0x2f62bc: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x2f62bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x2f62c0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2f62c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f62c4: 0x0  nop
    ctx->pc = 0x2f62c4u;
    // NOP
    // 0x2f62c8: 0x460008c2  mul.s       $f3, $f1, $f0
    ctx->pc = 0x2f62c8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f62cc: 0xc7a20028  lwc1        $f2, 0x28($sp)
    ctx->pc = 0x2f62ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2f62d0: 0x3c023fd9  lui         $v0, 0x3FD9
    ctx->pc = 0x2f62d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16345 << 16));
    // 0x2f62d4: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x2f62d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x2f62d8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2f62d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f62dc: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x2f62dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f62e0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2f62e0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f62e4: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x2f62e4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x2f62e8: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x2f62e8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x2f62ec: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x2f62ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2f62f0: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x2f62f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2f62f4: 0x240500c8  addiu       $a1, $zero, 0xC8
    ctx->pc = 0x2f62f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    // 0x2f62f8: 0xc0c4908  jal         func_312420
    ctx->pc = 0x2F62F8u;
    SET_GPR_U32(ctx, 31, 0x2F6300u);
    ctx->pc = 0x312420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312420u, 0x2F62F8u, 0x2F6300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6300u;
label_2f6300:
    // 0x2f6300: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2f6300u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2f6304: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x2f6304u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2f6308: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2f6308u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f630c: 0x10830046  beq         $a0, $v1, . + 4 + (0x46 << 2)
    ctx->pc = 0x2F630Cu;
    {
        const bool branch_taken_0x2f630c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2f630c) {
            ctx->pc = 0x2F6428u;
            goto label_2f6428;
        }
    }
    ctx->pc = 0x2F6314u;
    // 0x2f6314: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2f6314u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2f6318: 0x8c6300d4  lw          $v1, 0xD4($v1)
    ctx->pc = 0x2f6318u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 212)));
    // 0x2f631c: 0x28610004  slti        $at, $v1, 0x4
    ctx->pc = 0x2f631cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x2f6320: 0x14200041  bnez        $at, . + 4 + (0x41 << 2)
    ctx->pc = 0x2F6320u;
    {
        const bool branch_taken_0x2f6320 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f6320) {
            ctx->pc = 0x2F6428u;
            goto label_2f6428;
        }
    }
    ctx->pc = 0x2F6328u;
    // 0x2f6328: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2f6328u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2f632c: 0x8c6300d4  lw          $v1, 0xD4($v1)
    ctx->pc = 0x2f632cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 212)));
    // 0x2f6330: 0x28610008  slti        $at, $v1, 0x8
    ctx->pc = 0x2f6330u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x2f6334: 0x1020003c  beqz        $at, . + 4 + (0x3C << 2)
    ctx->pc = 0x2F6334u;
    {
        const bool branch_taken_0x2f6334 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f6334) {
            ctx->pc = 0x2F6428u;
            goto label_2f6428;
        }
    }
    ctx->pc = 0x2F633Cu;
    // 0x2f633c: 0x3c024150  lui         $v0, 0x4150
    ctx->pc = 0x2f633cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16720 << 16));
    // 0x2f6340: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2f6340u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2f6344: 0x3c02c000  lui         $v0, 0xC000
    ctx->pc = 0x2f6344u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49152 << 16));
    // 0x2f6348: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2f6348u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2f634c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2f634cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2f6350: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x2f6350u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2f6354: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2f6354u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2f6358: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x2f6358u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2f635c: 0x27a70020  addiu       $a3, $sp, 0x20
    ctx->pc = 0x2f635cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2f6360: 0x27a80030  addiu       $t0, $sp, 0x30
    ctx->pc = 0x2f6360u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2f6364: 0x2409001e  addiu       $t1, $zero, 0x1E
    ctx->pc = 0x2f6364u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x2f6368: 0xc0c49f0  jal         func_3127C0
    ctx->pc = 0x2F6368u;
    SET_GPR_U32(ctx, 31, 0x2F6370u);
    ctx->pc = 0x3127C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3127C0u, 0x2F6368u, 0x2F6370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6370u;
label_2f6370:
    // 0x2f6370: 0x3c024150  lui         $v0, 0x4150
    ctx->pc = 0x2f6370u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16720 << 16));
    // 0x2f6374: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2f6374u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2f6378: 0x3c02c000  lui         $v0, 0xC000
    ctx->pc = 0x2f6378u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49152 << 16));
    // 0x2f637c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2f637cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2f6380: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2f6380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2f6384: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x2f6384u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2f6388: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2f6388u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2f638c: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x2f638cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2f6390: 0x27a70020  addiu       $a3, $sp, 0x20
    ctx->pc = 0x2f6390u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2f6394: 0x27a80030  addiu       $t0, $sp, 0x30
    ctx->pc = 0x2f6394u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2f6398: 0x2409001e  addiu       $t1, $zero, 0x1E
    ctx->pc = 0x2f6398u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x2f639c: 0xc0c49f0  jal         func_3127C0
    ctx->pc = 0x2F639Cu;
    SET_GPR_U32(ctx, 31, 0x2F63A4u);
    ctx->pc = 0x3127C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3127C0u, 0x2F639Cu, 0x2F63A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F63A4u;
label_2f63a4:
    // 0x2f63a4: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x2F63A4u;
    {
        const bool branch_taken_0x2f63a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f63a4) {
            ctx->pc = 0x2F6428u;
            goto label_2f6428;
        }
    }
    ctx->pc = 0x2F63ACu;
label_2f63ac:
    // 0x2f63ac: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2f63acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2f63b0: 0x8c6400d4  lw          $a0, 0xD4($v1)
    ctx->pc = 0x2f63b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 212)));
    // 0x2f63b4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x2f63b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2f63b8: 0x1483001b  bne         $a0, $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x2F63B8u;
    {
        const bool branch_taken_0x2f63b8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2f63b8) {
            ctx->pc = 0x2F6428u;
            goto label_2f6428;
        }
    }
    ctx->pc = 0x2F63C0u;
    // 0x2f63c0: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2f63c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2f63c4: 0x3c024150  lui         $v0, 0x4150
    ctx->pc = 0x2f63c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16720 << 16));
    // 0x2f63c8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2f63c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2f63cc: 0x3c02c000  lui         $v0, 0xC000
    ctx->pc = 0x2f63ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49152 << 16));
    // 0x2f63d0: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2f63d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2f63d4: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x2f63d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2f63d8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2f63d8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2f63dc: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x2f63dcu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2f63e0: 0x27a70020  addiu       $a3, $sp, 0x20
    ctx->pc = 0x2f63e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2f63e4: 0x27a80030  addiu       $t0, $sp, 0x30
    ctx->pc = 0x2f63e4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2f63e8: 0x2409001e  addiu       $t1, $zero, 0x1E
    ctx->pc = 0x2f63e8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x2f63ec: 0xc0c49f0  jal         func_3127C0
    ctx->pc = 0x2F63ECu;
    SET_GPR_U32(ctx, 31, 0x2F63F4u);
    ctx->pc = 0x3127C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3127C0u, 0x2F63ECu, 0x2F63F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F63F4u;
label_2f63f4:
    // 0x2f63f4: 0x3c02c000  lui         $v0, 0xC000
    ctx->pc = 0x2f63f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49152 << 16));
    // 0x2f63f8: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2f63f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2f63fc: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2f63fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2f6400: 0x3c024150  lui         $v0, 0x4150
    ctx->pc = 0x2f6400u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16720 << 16));
    // 0x2f6404: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2f6404u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2f6408: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x2f6408u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2f640c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2f640cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2f6410: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x2f6410u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2f6414: 0x27a70020  addiu       $a3, $sp, 0x20
    ctx->pc = 0x2f6414u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2f6418: 0x27a80030  addiu       $t0, $sp, 0x30
    ctx->pc = 0x2f6418u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2f641c: 0x2409001e  addiu       $t1, $zero, 0x1E
    ctx->pc = 0x2f641cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x2f6420: 0xc0c49f0  jal         func_3127C0
    ctx->pc = 0x2F6420u;
    SET_GPR_U32(ctx, 31, 0x2F6428u);
    ctx->pc = 0x3127C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3127C0u, 0x2F6420u, 0x2F6428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6428u;
label_2f6428:
    // 0x2f6428: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2f6428u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2f642c: 0x8c6300d4  lw          $v1, 0xD4($v1)
    ctx->pc = 0x2f642cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 212)));
    // 0x2f6430: 0x2863000a  slti        $v1, $v1, 0xA
    ctx->pc = 0x2f6430u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x2f6434: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F6434u;
    {
        const bool branch_taken_0x2f6434 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f6434) {
            ctx->pc = 0x2F6450u;
            goto label_2f6450;
        }
    }
    ctx->pc = 0x2F643Cu;
    // 0x2f643c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2f643cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2f6440: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2f6440u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2f6444: 0x38640010  xori        $a0, $v1, 0x10
    ctx->pc = 0x2f6444u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)16);
    // 0x2f6448: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2f6448u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2f644c: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x2f644cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
label_2f6450:
    // 0x2f6450: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2f6450u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f6454: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x2f6454u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2f6458: 0x3e00008  jr          $ra
    ctx->pc = 0x2F6458u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F6458u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F6460u;
}
