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

// Function: entry_002c6164
// Address: 0x2c6164 - 0x2c6284
void entry_002c6164_0x2c6164(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002c6164_0x2c6164");
#endif

    switch (ctx->pc) {
        case 0x2c616cu: goto label_2c616c;
        case 0x2c61c8u: goto label_2c61c8;
        default: break;
    }

    ctx->pc = 0x2c6164u;

    // 0x2c6164: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2C6164u;
    SET_GPR_U32(ctx, 31, 0x2C616Cu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2C6164u, 0x2C616Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C616Cu;
label_2c616c:
    // 0x2c616c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2c616cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2c6170: 0x3042003f  andi        $v0, $v0, 0x3F
    ctx->pc = 0x2c6170u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x2c6174: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x2c6174u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
    // 0x2c6178: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x2c6178u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2c617c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2c617cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x2c6180: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2c6180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2c6184: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c6184u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c6188: 0xa443000c  sh          $v1, 0xC($v0)
    ctx->pc = 0x2c6188u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x2c618c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2c618cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2c6190: 0x24441330  addiu       $a0, $v0, 0x1330
    ctx->pc = 0x2c6190u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c6194: 0x8c83001c  lw          $v1, 0x1C($a0)
    ctx->pc = 0x2c6194u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x2c6198: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x2c6198u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x2c619c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2c619cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2c61a0: 0xac82001c  sw          $v0, 0x1C($a0)
    ctx->pc = 0x2c61a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 2));
    // 0x2c61a4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2c61a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2c61a8: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x2c61a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c61ac: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x2c61acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x2c61b0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x2c61b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x2c61b4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c61b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c61b8: 0x0  nop
    ctx->pc = 0x2c61b8u;
    // NOP
    // 0x2c61bc: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x2c61bcu;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2c61c0: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x2C61C0u;
    SET_GPR_U32(ctx, 31, 0x2C61C8u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2C61C0u, 0x2C61C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C61C8u;
label_2c61c8:
    // 0x2c61c8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2c61c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2c61cc: 0xe46000d4  swc1        $f0, 0xD4($v1)
    ctx->pc = 0x2c61ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 212), bits); }
    // 0x2c61d0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2c61d0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c61d4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2c61d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2c61d8: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2c61d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2c61dc: 0xe4600030  swc1        $f0, 0x30($v1)
    ctx->pc = 0x2c61dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 48), bits); }
    // 0x2c61e0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2c61e0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c61e4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2c61e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2c61e8: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2c61e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2c61ec: 0xe4600034  swc1        $f0, 0x34($v1)
    ctx->pc = 0x2c61ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 52), bits); }
    // 0x2c61f0: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x2c61f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2c61f4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2c61f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2c61f8: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2c61f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2c61fc: 0xa0640038  sb          $a0, 0x38($v1)
    ctx->pc = 0x2c61fcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 56), (uint8_t)GPR_U32(ctx, 4));
    // 0x2c6200: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2c6200u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2c6204: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2c6204u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2c6208: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x2c6208u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2c620c: 0x3c034396  lui         $v1, 0x4396
    ctx->pc = 0x2c620cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17302 << 16));
    // 0x2c6210: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2c6210u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c6214: 0xc4800020  lwc1        $f0, 0x20($a0)
    ctx->pc = 0x2c6214u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c6218: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2c6218u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2c621c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2c621cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2c6220: 0xc4600120  lwc1        $f0, 0x120($v1)
    ctx->pc = 0x2c6220u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c6224: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2c6224u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2c6228: 0xe4600120  swc1        $f0, 0x120($v1)
    ctx->pc = 0x2c6228u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 288), bits); }
    // 0x2c622c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2c622cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2c6230: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2c6230u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2c6234: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x2c6234u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2c6238: 0x3c034396  lui         $v1, 0x4396
    ctx->pc = 0x2c6238u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17302 << 16));
    // 0x2c623c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2c623cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c6240: 0xc4800024  lwc1        $f0, 0x24($a0)
    ctx->pc = 0x2c6240u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c6244: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2c6244u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2c6248: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2c6248u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2c624c: 0xc4600124  lwc1        $f0, 0x124($v1)
    ctx->pc = 0x2c624cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c6250: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2c6250u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2c6254: 0xe4600124  swc1        $f0, 0x124($v1)
    ctx->pc = 0x2c6254u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 292), bits); }
    // 0x2c6258: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2c6258u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2c625c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2c625cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2c6260: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x2c6260u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2c6264: 0x3c034396  lui         $v1, 0x4396
    ctx->pc = 0x2c6264u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17302 << 16));
    // 0x2c6268: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2c6268u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c626c: 0xc4800028  lwc1        $f0, 0x28($a0)
    ctx->pc = 0x2c626cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c6270: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2c6270u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2c6274: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2c6274u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2c6278: 0xc4600128  lwc1        $f0, 0x128($v1)
    ctx->pc = 0x2c6278u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c627c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2c627cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2c6280: 0xe4600128  swc1        $f0, 0x128($v1)
    ctx->pc = 0x2c6280u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 296), bits); }
    ctx->pc = 0x2c6284u;
}
