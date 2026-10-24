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

// Function: entry_001f81f4
// Address: 0x1f81f4 - 0x1f82c0
void entry_001f81f4_0x1f81f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f81f4_0x1f81f4");
#endif

    switch (ctx->pc) {
        case 0x1f8214u: goto label_1f8214;
        default: break;
    }

    ctx->pc = 0x1f81f4u;

    // 0x1f81f4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1f81f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f81f8: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1f81f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f81fc: 0xc441003c  lwc1        $f1, 0x3C($v0)
    ctx->pc = 0x1f81fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f8200: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1f8200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f8204: 0xc44000d4  lwc1        $f0, 0xD4($v0)
    ctx->pc = 0x1f8204u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f8208: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x1f8208u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1f820c: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x1F820Cu;
    SET_GPR_U32(ctx, 31, 0x1F8214u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x1F820Cu, 0x1F8214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8214u;
label_1f8214:
    // 0x1f8214: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1f8214u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f8218: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x1f8218u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x1f821c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1f821cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f8220: 0xc46101a4  lwc1        $f1, 0x1A4($v1)
    ctx->pc = 0x1f8220u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f8224: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x1f8224u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
    // 0x1f8228: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1f8228u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x1f822c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f822cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f8230: 0x0  nop
    ctx->pc = 0x1f8230u;
    // NOP
    // 0x1f8234: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1f8234u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1f8238: 0xe46001a4  swc1        $f0, 0x1A4($v1)
    ctx->pc = 0x1f8238u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 420), bits); }
    // 0x1f823c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1f823cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f8240: 0xc46101a0  lwc1        $f1, 0x1A0($v1)
    ctx->pc = 0x1f8240u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f8244: 0x3c023b75  lui         $v0, 0x3B75
    ctx->pc = 0x1f8244u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15221 << 16));
    // 0x1f8248: 0x3442c290  ori         $v0, $v0, 0xC290
    ctx->pc = 0x1f8248u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49808);
    // 0x1f824c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f824cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f8250: 0x0  nop
    ctx->pc = 0x1f8250u;
    // NOP
    // 0x1f8254: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1f8254u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1f8258: 0xe46001a0  swc1        $f0, 0x1A0($v1)
    ctx->pc = 0x1f8258u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 416), bits); }
    // 0x1f825c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1f825cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f8260: 0xc46101a8  lwc1        $f1, 0x1A8($v1)
    ctx->pc = 0x1f8260u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f8264: 0x3c023b75  lui         $v0, 0x3B75
    ctx->pc = 0x1f8264u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15221 << 16));
    // 0x1f8268: 0x3442c290  ori         $v0, $v0, 0xC290
    ctx->pc = 0x1f8268u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49808);
    // 0x1f826c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f826cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f8270: 0x0  nop
    ctx->pc = 0x1f8270u;
    // NOP
    // 0x1f8274: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1f8274u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1f8278: 0xe46001a8  swc1        $f0, 0x1A8($v1)
    ctx->pc = 0x1f8278u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 424), bits); }
    // 0x1f827c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x1f827cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f8280: 0x84831278  lh          $v1, 0x1278($a0)
    ctx->pc = 0x1f8280u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4728)));
    // 0x1f8284: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x1f8284u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1f8288: 0xa4821278  sh          $v0, 0x1278($a0)
    ctx->pc = 0x1f8288u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4728), (uint16_t)GPR_U32(ctx, 2));
    // 0x1f828c: 0x1460000c  bnez        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x1F828Cu;
    {
        const bool branch_taken_0x1f828c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f828c) {
            ctx->pc = 0x1F82C0u;
            return;
        }
    }
    ctx->pc = 0x1F8294u;
    // 0x1f8294: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1f8294u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1f8298: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1f8298u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f829c: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x1f829cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x1f82a0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1f82a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f82a4: 0xa4401278  sh          $zero, 0x1278($v0)
    ctx->pc = 0x1f82a4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 0));
    // 0x1f82a8: 0x3c023d81  lui         $v0, 0x3D81
    ctx->pc = 0x1f82a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15745 << 16));
    // 0x1f82ac: 0x3442fabc  ori         $v0, $v0, 0xFABC
    ctx->pc = 0x1f82acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64188);
    // 0x1f82b0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f82b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f82b4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1f82b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f82b8: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1f82b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f82bc: 0xe4400028  swc1        $f0, 0x28($v0)
    ctx->pc = 0x1f82bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 40), bits); }
    ctx->pc = 0x1f82c0u;
}
