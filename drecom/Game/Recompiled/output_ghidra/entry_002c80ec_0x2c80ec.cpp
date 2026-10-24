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

// Function: entry_002c80ec
// Address: 0x2c80ec - 0x2c8204
void entry_002c80ec_0x2c80ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002c80ec_0x2c80ec");
#endif

    switch (ctx->pc) {
        case 0x2c80fcu: goto label_2c80fc;
        case 0x2c8108u: goto label_2c8108;
        case 0x2c8114u: goto label_2c8114;
        case 0x2c81a4u: goto label_2c81a4;
        default: break;
    }

    ctx->pc = 0x2c80ecu;

    // 0x2c80ec: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x2c80ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c80f0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2c80f0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2c80f4: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x2C80F4u;
    SET_GPR_U32(ctx, 31, 0x2C80FCu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2C80F4u, 0x2C80FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C80FCu;
label_2c80fc:
    // 0x2c80fc: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x2c80fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c8100: 0xc05cd10  jal         func_173440
    ctx->pc = 0x2C8100u;
    SET_GPR_U32(ctx, 31, 0x2C8108u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x2C8100u, 0x2C8108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8108u;
label_2c8108:
    // 0x2c8108: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x2c8108u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c810c: 0xc0b3764  jal         func_2CDD90
    ctx->pc = 0x2C810Cu;
    SET_GPR_U32(ctx, 31, 0x2C8114u);
    ctx->pc = 0x2CDD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CDD90u, 0x2C810Cu, 0x2C8114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8114u;
label_2c8114:
    // 0x2c8114: 0x8e120130  lw          $s2, 0x130($s0)
    ctx->pc = 0x2c8114u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
    // 0x2c8118: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2c8118u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c811c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c811cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c8120: 0xc4410020  lwc1        $f1, 0x20($v0)
    ctx->pc = 0x2c8120u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c8124: 0xc6000120  lwc1        $f0, 0x120($s0)
    ctx->pc = 0x2c8124u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c8128: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2c8128u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2c812c: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2c812cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c8130: 0xe4400120  swc1        $f0, 0x120($v0)
    ctx->pc = 0x2c8130u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 288), bits); }
    // 0x2c8134: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2c8134u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c8138: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c8138u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c813c: 0xc4410024  lwc1        $f1, 0x24($v0)
    ctx->pc = 0x2c813cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c8140: 0xc6400034  lwc1        $f0, 0x34($s2)
    ctx->pc = 0x2c8140u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c8144: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2c8144u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2c8148: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2c8148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c814c: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x2c814cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x2c8150: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2c8150u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c8154: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c8154u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c8158: 0xc4410028  lwc1        $f1, 0x28($v0)
    ctx->pc = 0x2c8158u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c815c: 0xc6000128  lwc1        $f0, 0x128($s0)
    ctx->pc = 0x2c815cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c8160: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2c8160u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2c8164: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2c8164u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c8168: 0xe4400128  swc1        $f0, 0x128($v0)
    ctx->pc = 0x2c8168u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 296), bits); }
    // 0x2c816c: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2c816cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c8170: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c8170u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c8174: 0xc4410028  lwc1        $f1, 0x28($v0)
    ctx->pc = 0x2c8174u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c8178: 0xc6000128  lwc1        $f0, 0x128($s0)
    ctx->pc = 0x2c8178u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c817c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2c817cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2c8180: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2c8180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c8184: 0xe4400128  swc1        $f0, 0x128($v0)
    ctx->pc = 0x2c8184u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 296), bits); }
    // 0x2c8188: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2c8188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c818c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c818cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c8190: 0xc441002c  lwc1        $f1, 0x2C($v0)
    ctx->pc = 0x2c8190u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c8194: 0xc60000d4  lwc1        $f0, 0xD4($s0)
    ctx->pc = 0x2c8194u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c8198: 0x46010301  sub.s       $f12, $f0, $f1
    ctx->pc = 0x2c8198u;
    ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2c819c: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x2C819Cu;
    SET_GPR_U32(ctx, 31, 0x2C81A4u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2C819Cu, 0x2C81A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C81A4u;
label_2c81a4:
    // 0x2c81a4: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2c81a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c81a8: 0xe46000d4  swc1        $f0, 0xD4($v1)
    ctx->pc = 0x2c81a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 212), bits); }
    // 0x2c81ac: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2c81acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c81b0: 0x906309db  lbu         $v1, 0x9DB($v1)
    ctx->pc = 0x2c81b0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2523)));
    // 0x2c81b4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2c81b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2c81b8: 0x30630080  andi        $v1, $v1, 0x80
    ctx->pc = 0x2c81b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x2c81bc: 0x10600022  beqz        $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x2C81BCu;
    {
        const bool branch_taken_0x2c81bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c81bc) {
            ctx->pc = 0x2C8248u;
            return;
        }
    }
    ctx->pc = 0x2C81C4u;
    // 0x2c81c4: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2c81c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c81c8: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2c81c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2c81cc: 0x80630039  lb          $v1, 0x39($v1)
    ctx->pc = 0x2c81ccu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 57)));
    // 0x2c81d0: 0x31e3c  dsll32      $v1, $v1, 24
    ctx->pc = 0x2c81d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 24));
    // 0x2c81d4: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x2c81d4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x2c81d8: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x2C81D8u;
    {
        const bool branch_taken_0x2c81d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c81d8) {
            ctx->pc = 0x2C8204u;
            return;
        }
    }
    ctx->pc = 0x2C81E0u;
    // 0x2c81e0: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2c81e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c81e4: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x2c81e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2c81e8: 0x80830039  lb          $v1, 0x39($a0)
    ctx->pc = 0x2c81e8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 57)));
    // 0x2c81ec: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x2c81ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x2c81f0: 0xa0830039  sb          $v1, 0x39($a0)
    ctx->pc = 0x2c81f0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 57), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c81f4: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x2c81f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c81f8: 0x84831278  lh          $v1, 0x1278($a0)
    ctx->pc = 0x2c81f8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4728)));
    // 0x2c81fc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2c81fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2c8200: 0xa4831278  sh          $v1, 0x1278($a0)
    ctx->pc = 0x2c8200u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4728), (uint16_t)GPR_U32(ctx, 3));
    ctx->pc = 0x2c8204u;
}
